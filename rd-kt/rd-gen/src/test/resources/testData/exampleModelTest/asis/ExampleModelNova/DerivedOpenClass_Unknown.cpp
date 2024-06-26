//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "DerivedOpenClass_Unknown.Generated.h"



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
void DerivedOpenClass_Unknown::initialize()
{
}
// primary ctor
DerivedOpenClass_Unknown::DerivedOpenClass_Unknown(bool derivedField_, int32_t baseField_, rd::RdId unknownId_, rd::Buffer::ByteArray unknownBytes_) :
DerivedOpenClass(std::move(derivedField_),std::move(baseField_)), rd::IUnknownInstance(std::move(unknownId_))

{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
DerivedOpenClass_Unknown DerivedOpenClass_Unknown::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    throw std::logic_error("Unknown instances should not be read via serializer");
}
// writer
void DerivedOpenClass_Unknown::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    this->rdid.write(buffer);
    buffer.write_bool(derivedField_);
    buffer.write_integral(baseField_);
    buffer.write_byte_array_raw(unknownBytes_);
}
// virtual init
void DerivedOpenClass_Unknown::init(rd::Lifetime lifetime) const
{
    rd::RdBindableBase::init(lifetime);
}
// identify
void DerivedOpenClass_Unknown::identify(const rd::Identities &identities, rd::RdId const &id) const
{
    rd::RdBindableBase::identify(identities, id);
}
// getters
// intern
// equals trait
bool DerivedOpenClass_Unknown::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<DerivedOpenClass_Unknown const&>(object);
    return this == &other;
}
// equality operators
bool operator==(const DerivedOpenClass_Unknown &lhs, const DerivedOpenClass_Unknown &rhs) {
    return &lhs == &rhs;
}
bool operator!=(const DerivedOpenClass_Unknown &lhs, const DerivedOpenClass_Unknown &rhs){
    return !(lhs == rhs);
}
// hash code trait
// type name trait
std::string DerivedOpenClass_Unknown::type_name() const
{
    return "DerivedOpenClass_Unknown";
}
// static type name trait
std::string DerivedOpenClass_Unknown::static_type_name()
{
    return "DerivedOpenClass_Unknown";
}
// polymorphic to string
std::string DerivedOpenClass_Unknown::toString() const
{
    std::string res = "DerivedOpenClass_Unknown\n";
    res += "\tderivedField = ";
    res += rd::to_string(derivedField_);
    res += '\n';
    res += "\tbaseField = ";
    res += rd::to_string(baseField_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const DerivedOpenClass_Unknown & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

