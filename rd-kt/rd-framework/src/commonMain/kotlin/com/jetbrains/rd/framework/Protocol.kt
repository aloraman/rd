package com.jetbrains.rd.framework

import com.jetbrains.rd.framework.base.RdExtBase
import com.jetbrains.rd.framework.impl.InternRoot
import com.jetbrains.rd.framework.impl.RdSet
import com.jetbrains.rd.util.getLogger
import com.jetbrains.rd.util.lifetime.Lifetime
import com.jetbrains.rd.util.reactive.IScheduler
import com.jetbrains.rd.util.reactive.ViewableSet
import com.jetbrains.rd.util.string.RName


class Protocol(
        override val name: String,
        override val serializers: ISerializers,
        override val identity: IIdentities,
        override val scheduler: IScheduler,
        override val wire: IWire, //to initialize field with circular dependencies
        val lifetime: Lifetime,
        serializationCtx: SerializationCtx? = null,
        parentClientIdSet : RdSet<ClientId>? = null
) : IRdDynamic, IProtocol {

    @Deprecated("Backward compatible implementation for AWS plugin compile against Rider SDK 2019.2")
    constructor(serializers: ISerializers,
                identity: IIdentities,
                scheduler: IScheduler,
                wire: IWire,
                lifetime: Lifetime) : this("Noname-Please-Specify-Name", serializers, identity, scheduler, wire, lifetime)

    override val location: RName = RName(name)
    override val outOfSyncModels: ViewableSet<RdExtBase> = ViewableSet()

    override val isMaster: Boolean = identity.dynamicKind == IdKind.Client

    companion object {
        val logCategory = "protocol"
        fun sublogger(subcategory: String) = getLogger("$logCategory.$subcategory")
        val initializationLogger = sublogger("INIT")
    }

    override val protocol: IProtocol get() = this
    override val serializationContext: SerializationCtx = serializationCtx ?: SerializationCtx(serializers, mapOf("Protocol" to InternRoot().also {
        it.rdid = RdId.Null.mix("ProtocolInternRoot")
        scheduler.invokeOrQueue {
            it.bind(lifetime, this, "ProtocolInternRoot")
        }
    }))

    override val clientIdSet: RdSet<ClientId> = parentClientIdSet ?: RdSet(ClientId).also {
        it.rdid = RdId.Null.mix("ProtocolClientIdSet")
        it.add(ClientId.localId)
        scheduler.invokeOrQueue {
            it.bind(lifetime, this, "ProtocolClientIdSet")
        }
    }
}
