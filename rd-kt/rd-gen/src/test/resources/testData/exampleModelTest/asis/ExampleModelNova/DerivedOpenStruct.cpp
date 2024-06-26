//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "DerivedOpenStruct.Generated.h"


#include "DerivedOpenStruct_Unknown.Generated.h"

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
void DerivedOpenStruct::initialize()
{
}
// primary ctor
DerivedOpenStruct::DerivedOpenStruct(bool derivedField_, int32_t baseField_) :
OpenStruct(std::move(baseField_))
,derivedField_(std::move(derivedField_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
rd::Wrapper<DerivedOpenStruct> DerivedOpenStruct::readUnknownInstance(rd::SerializationCtx& ctx, rd::Buffer & buffer, rd::RdId const& unknownId, int32_t size)
{
    int32_t objectStartPosition = buffer.get_position();
    auto derivedField_ = buffer.read_bool();
    auto baseField_ = buffer.read_integral<int32_t>();
    auto unknownBytes = rd::Buffer::ByteArray(objectStartPosition + size - buffer.get_position());
    buffer.read_byte_array_raw(unknownBytes);
    DerivedOpenStruct_Unknown res{std::move(derivedField_), std::move(baseField_), unknownId, unknownBytes};
    return rd::Wrapper<DerivedOpenStruct_Unknown>(std::move(res));
}
// writer
// virtual init
// identify
// getters
bool const & DerivedOpenStruct::get_derivedField() const
{
    return derivedField_;
}
// intern
// equals trait
// equality operators
bool operator==(const DerivedOpenStruct &lhs, const DerivedOpenStruct &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const DerivedOpenStruct &lhs, const DerivedOpenStruct &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t DerivedOpenStruct::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<bool>()(get_derivedField()));
    __r = __r * 31 + (rd::hash<int32_t>()(get_baseField()));
    return __r;
}
// type name trait
std::string DerivedOpenStruct::type_name() const
{
    return "DerivedOpenStruct";
}
// static type name trait
std::string DerivedOpenStruct::static_type_name()
{
    return "DerivedOpenStruct";
}
// polymorphic to string
std::string DerivedOpenStruct::toString() const
{
    std::string res = "DerivedOpenStruct\n";
    res += "\tderivedField = ";
    res += rd::to_string(derivedField_);
    res += '\n';
    res += "\tbaseField = ";
    res += rd::to_string(baseField_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const DerivedOpenStruct & value)
{
    return value.toString();
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

