//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.08.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "ScalarPrimer.Generated.h"


#include "ScalarPrimer_Unknown.Generated.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace org.example {
// companion
// constants
// initializer
void ScalarPrimer::initialize()
{
}
// primary ctor
ScalarPrimer::ScalarPrimer(int32_t x_) :
rd::IPolymorphicSerializable()
,x_(std::move(x_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
rd::Wrapper<ScalarPrimer> ScalarPrimer::readUnknownInstance(rd::SerializationCtx& ctx, rd::Buffer & buffer, rd::RdId const& unknownId, int32_t size)
{
    int32_t objectStartPosition = buffer.get_position();
    auto x_ = buffer.read_integral<int32_t>();
    auto unknownBytes = rd::Buffer::ByteArray(objectStartPosition + size - buffer.get_position());
    buffer.read_byte_array_raw(unknownBytes);
    ScalarPrimer_Unknown res{std::move(x_), unknownId, unknownBytes};
    return rd::Wrapper<ScalarPrimer_Unknown>(std::move(res));
}
// writer
// virtual init
// identify
// getters
int32_t const & ScalarPrimer::get_x() const
{
    return x_;
}
// intern
// equals trait
// equality operators
bool operator==(const ScalarPrimer &lhs, const ScalarPrimer &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const ScalarPrimer &lhs, const ScalarPrimer &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t ScalarPrimer::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<int32_t>()(get_x()));
    return __r;
}
// type name trait
std::string ScalarPrimer::type_name() const
{
    return "ScalarPrimer";
}
// static type name trait
std::string ScalarPrimer::static_type_name()
{
    return "ScalarPrimer";
}
// polymorphic to string
std::string ScalarPrimer::toString() const
{
    std::string res = "ScalarPrimer\n";
    res += "\tx = ";
    res += rd::to_string(x_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const ScalarPrimer & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

