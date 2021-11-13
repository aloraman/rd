//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.08.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef ENUMSETTEST_GENERATED_H
#define ENUMSETTEST_GENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "instantiations_ExampleRootNova.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

/// <summary>
/// <p>Generated from: Example.kt:26</p>
/// </summary>
namespace org.example {

enum class EnumSetTest {
    a = 1 << 0,
    b = 1 << 1,
    c = 1 << 2
};
RD_DEFINE_ENUM_FLAG_OPERATORS(EnumSetTest)
std::string to_string(const EnumSetTest & value);
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif



#endif // ENUMSETTEST_GENERATED_H
