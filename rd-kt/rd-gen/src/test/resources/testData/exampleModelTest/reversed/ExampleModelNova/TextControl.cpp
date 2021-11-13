//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.08.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "TextControl.Generated.h"



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
void TextControl::initialize()
{
    selection_.optimize_nested = true;
}
// primary ctor
TextControl::TextControl(rd::RdProperty<Selection, rd::Polymorphic<Selection>> selection_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> vsink_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> vsource_, rd::RdEndpoint<int32_t, std::wstring, rd::Polymorphic<int32_t>, rd::Polymorphic<std::wstring>> there1_) :
rd::IPolymorphicSerializable(), rd::RdBindableBase()
,selection_(std::move(selection_)), vsink_(std::move(vsink_)), vsource_(std::move(vsource_)), there1_(std::move(there1_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
TextControl::TextControl()
{
    initialize();
}
// reader
TextControl TextControl::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    auto _id = rd::RdId::read(buffer);
    auto selection_ = rd::RdProperty<Selection, rd::Polymorphic<Selection>>::read(ctx, buffer);
    auto vsink_ = rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>>::read(ctx, buffer);
    auto vsource_ = rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>>::read(ctx, buffer);
    auto there1_ = rd::RdEndpoint<int32_t, std::wstring, rd::Polymorphic<int32_t>, rd::Polymorphic<std::wstring>>::read(ctx, buffer);
    TextControl res{std::move(selection_), std::move(vsink_), std::move(vsource_), std::move(there1_)};
    withId(res, _id);
    return res;
}
// writer
void TextControl::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    this->rdid.write(buffer);
    selection_.write(ctx, buffer);
    vsink_.write(ctx, buffer);
    vsource_.write(ctx, buffer);
    there1_.write(ctx, buffer);
}
// virtual init
void TextControl::init(rd::Lifetime lifetime) const
{
    rd::RdBindableBase::init(lifetime);
    bindPolymorphic(selection_, lifetime, this, "selection");
    bindPolymorphic(vsink_, lifetime, this, "vsink");
    bindPolymorphic(vsource_, lifetime, this, "vsource");
    bindPolymorphic(there1_, lifetime, this, "there1");
}
// identify
void TextControl::identify(const rd::Identities &identities, rd::RdId const &id) const
{
    rd::RdBindableBase::identify(identities, id);
    identifyPolymorphic(selection_, identities, id.mix(".selection"));
    identifyPolymorphic(vsink_, identities, id.mix(".vsink"));
    identifyPolymorphic(vsource_, identities, id.mix(".vsource"));
    identifyPolymorphic(there1_, identities, id.mix(".there1"));
}
// getters
rd::IProperty<Selection> const & TextControl::get_selection() const
{
    return selection_;
}
rd::ISignal<rd::Void> const & TextControl::get_vsink() const
{
    return vsink_;
}
rd::ISource<rd::Void> const & TextControl::get_vsource() const
{
    return vsource_;
}
rd::RdEndpoint<int32_t, std::wstring, rd::Polymorphic<int32_t>, rd::Polymorphic<std::wstring>> const & TextControl::get_there1() const
{
    return there1_;
}
// intern
// equals trait
bool TextControl::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<TextControl const&>(object);
    return this == &other;
}
// equality operators
bool operator==(const TextControl &lhs, const TextControl &rhs) {
    return &lhs == &rhs;
}
bool operator!=(const TextControl &lhs, const TextControl &rhs){
    return !(lhs == rhs);
}
// hash code trait
// type name trait
std::string TextControl::type_name() const
{
    return "TextControl";
}
// static type name trait
std::string TextControl::static_type_name()
{
    return "TextControl";
}
// polymorphic to string
std::string TextControl::toString() const
{
    std::string res = "TextControl\n";
    res += "\tselection = ";
    res += rd::to_string(selection_);
    res += '\n';
    res += "\tvsink = ";
    res += rd::to_string(vsink_);
    res += '\n';
    res += "\tvsource = ";
    res += rd::to_string(vsource_);
    res += '\n';
    res += "\tthere1 = ";
    res += rd::to_string(there1_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const TextControl & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

