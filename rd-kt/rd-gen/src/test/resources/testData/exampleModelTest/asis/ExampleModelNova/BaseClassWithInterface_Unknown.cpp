//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "BaseClassWithInterface_Unknown.Generated.h"



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
void BaseClassWithInterface_Unknown::initialize()
{
}
// primary ctor
BaseClassWithInterface_Unknown::BaseClassWithInterface_Unknown(rd::RdId unknownId_, rd::Buffer::ByteArray unknownBytes_) :
BaseClassWithInterface(), rd::IUnknownInstance(std::move(unknownId_))

{
    initialize();
}
// secondary constructor
// default ctors and dtors
BaseClassWithInterface_Unknown::BaseClassWithInterface_Unknown()
{
    initialize();
}
// reader
BaseClassWithInterface_Unknown BaseClassWithInterface_Unknown::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    throw std::logic_error("Unknown instances should not be read via serializer");
}
// writer
void BaseClassWithInterface_Unknown::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    this->rdid.write(buffer);
    buffer.write_byte_array_raw(unknownBytes_);
}
// virtual init
void BaseClassWithInterface_Unknown::init(rd::Lifetime lifetime) const
{
    rd::RdBindableBase::init(lifetime);
}
// identify
void BaseClassWithInterface_Unknown::identify(const rd::Identities &identities, rd::RdId const &id) const
{
    rd::RdBindableBase::identify(identities, id);
}
// getters
// intern
// equals trait
bool BaseClassWithInterface_Unknown::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<BaseClassWithInterface_Unknown const&>(object);
    return this == &other;
}
// equality operators
bool operator==(const BaseClassWithInterface_Unknown &lhs, const BaseClassWithInterface_Unknown &rhs) {
    return &lhs == &rhs;
}
bool operator!=(const BaseClassWithInterface_Unknown &lhs, const BaseClassWithInterface_Unknown &rhs){
    return !(lhs == rhs);
}
// hash code trait
// type name trait
std::string BaseClassWithInterface_Unknown::type_name() const
{
    return "BaseClassWithInterface_Unknown";
}
// static type name trait
std::string BaseClassWithInterface_Unknown::static_type_name()
{
    return "BaseClassWithInterface_Unknown";
}
// polymorphic to string
std::string BaseClassWithInterface_Unknown::toString() const
{
    std::string res = "BaseClassWithInterface_Unknown\n";
    return res;
}
// external to string
std::string to_string(const BaseClassWithInterface_Unknown & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

