//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "Struct.Generated.h"



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
void Struct::initialize()
{
}
// primary ctor
// secondary constructor
// default ctors and dtors
Struct::Struct()
{
    initialize();
}
// reader
Struct Struct::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    Struct res{};
    return res;
}
// writer
void Struct::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
}
// virtual init
// identify
// getters
// intern
// equals trait
bool Struct::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<Struct const&>(object);
    if (this == &other) return true;
    
    return true;
}
// equality operators
bool operator==(const Struct &lhs, const Struct &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const Struct &lhs, const Struct &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t Struct::hashCode() const noexcept
{
    size_t __r = 0;
    return __r;
}
// type name trait
std::string Struct::type_name() const
{
    return "Struct";
}
// static type name trait
std::string Struct::static_type_name()
{
    return "Struct";
}
// polymorphic to string
std::string Struct::toString() const
{
    std::string res = "Struct\n";
    return res;
}
// external to string
std::string to_string(const Struct & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

