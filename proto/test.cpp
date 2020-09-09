// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065) // C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4100) // C4100: 'identifier' : unreferenced formal parameter
#pragma warning(disable:4702) // C4702: unreachable code
#endif

#include "test.h"

namespace test {

StructSimple::StructSimple()
    : id((int32_t)0ll)
    , f1(false)
    , f2(true)
    , f3((uint8_t)0u)
    , f4((uint8_t)255u)
    , f5('\0')
    , f6((char)'!')
    , f7(L'\0')
    , f8((wchar_t)0x0444)
    , f9((int8_t)0)
    , f10((int8_t)127)
    , f11((uint8_t)0u)
    , f12((uint8_t)255u)
    , f13((int16_t)0)
    , f14((int16_t)32767)
    , f15((uint16_t)0u)
    , f16((uint16_t)65535u)
    , f17((int32_t)0ll)
    , f18((int32_t)2147483647ll)
    , f19((uint32_t)0ull)
    , f20((uint32_t)4294967295ull)
    , f21((int64_t)0ll)
    , f22((int64_t)9223372036854775807ll)
    , f23((uint64_t)0ull)
    , f24((uint64_t)18446744073709551615ull)
    , f25(0.0f)
    , f26((float)123.456f)
    , f27(0.0)
    , f28((double)-123.456e+123)
    , f29()
    , f30(FBE::decimal_t(123456.123456))
    , f31()
    , f32("Initial string!")
    , f33((uint64_t)0ull)
    , f34(FBE::epoch())
    , f35(FBE::utc())
    , f36()
    , f37(FBE::uuid_t::sequential())
    , f38(FBE::uuid_t("123e4567-e89b-12d3-a456-426655440000"))
    , f39()
    , f40()
    , f41()
    , f42()
    , f43()
    , f44()
{}

StructSimple::StructSimple(int32_t arg_id, bool arg_f1, bool arg_f2, uint8_t arg_f3, uint8_t arg_f4, char arg_f5, char arg_f6, wchar_t arg_f7, wchar_t arg_f8, int8_t arg_f9, int8_t arg_f10, uint8_t arg_f11, uint8_t arg_f12, int16_t arg_f13, int16_t arg_f14, uint16_t arg_f15, uint16_t arg_f16, int32_t arg_f17, int32_t arg_f18, uint32_t arg_f19, uint32_t arg_f20, int64_t arg_f21, int64_t arg_f22, uint64_t arg_f23, uint64_t arg_f24, float arg_f25, float arg_f26, double arg_f27, double arg_f28, const FBE::decimal_t& arg_f29, const FBE::decimal_t& arg_f30, const std::string& arg_f31, const std::string& arg_f32, uint64_t arg_f33, uint64_t arg_f34, uint64_t arg_f35, const FBE::uuid_t& arg_f36, const FBE::uuid_t& arg_f37, const FBE::uuid_t& arg_f38, const ::proto::OrderSide& arg_f39, const ::proto::OrderType& arg_f40, const ::proto::Order& arg_f41, const ::proto::Balance& arg_f42, const ::proto::State& arg_f43, const ::proto::Account& arg_f44)
    : id(arg_id)
    , f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
    , f11(arg_f11)
    , f12(arg_f12)
    , f13(arg_f13)
    , f14(arg_f14)
    , f15(arg_f15)
    , f16(arg_f16)
    , f17(arg_f17)
    , f18(arg_f18)
    , f19(arg_f19)
    , f20(arg_f20)
    , f21(arg_f21)
    , f22(arg_f22)
    , f23(arg_f23)
    , f24(arg_f24)
    , f25(arg_f25)
    , f26(arg_f26)
    , f27(arg_f27)
    , f28(arg_f28)
    , f29(arg_f29)
    , f30(arg_f30)
    , f31(arg_f31)
    , f32(arg_f32)
    , f33(arg_f33)
    , f34(arg_f34)
    , f35(arg_f35)
    , f36(arg_f36)
    , f37(arg_f37)
    , f38(arg_f38)
    , f39(arg_f39)
    , f40(arg_f40)
    , f41(arg_f41)
    , f42(arg_f42)
    , f43(arg_f43)
    , f44(arg_f44)
{}

bool StructSimple::operator==(const StructSimple& other) const noexcept
{
    return (
        (id == other.id)
        );
}

bool StructSimple::operator<(const StructSimple& other) const noexcept
{
    if (id < other.id)
        return true;
    if (other.id < id)
        return false;
    return false;
}

void StructSimple::swap(StructSimple& other) noexcept
{
    using std::swap;
    swap(id, other.id);
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
    swap(f11, other.f11);
    swap(f12, other.f12);
    swap(f13, other.f13);
    swap(f14, other.f14);
    swap(f15, other.f15);
    swap(f16, other.f16);
    swap(f17, other.f17);
    swap(f18, other.f18);
    swap(f19, other.f19);
    swap(f20, other.f20);
    swap(f21, other.f21);
    swap(f22, other.f22);
    swap(f23, other.f23);
    swap(f24, other.f24);
    swap(f25, other.f25);
    swap(f26, other.f26);
    swap(f27, other.f27);
    swap(f28, other.f28);
    swap(f29, other.f29);
    swap(f30, other.f30);
    swap(f31, other.f31);
    swap(f32, other.f32);
    swap(f33, other.f33);
    swap(f34, other.f34);
    swap(f35, other.f35);
    swap(f36, other.f36);
    swap(f37, other.f37);
    swap(f38, other.f38);
    swap(f39, other.f39);
    swap(f40, other.f40);
    swap(f41, other.f41);
    swap(f42, other.f42);
    swap(f43, other.f43);
    swap(f44, other.f44);
}

StructOptional::StructOptional()
    : ::test::StructSimple()
    , f100()
    , f101(true)
    , f102(std::nullopt)
    , f103()
    , f104((uint8_t)255u)
    , f105(std::nullopt)
    , f106()
    , f107((char)'!')
    , f108(std::nullopt)
    , f109()
    , f110((wchar_t)0x0444)
    , f111(std::nullopt)
    , f112()
    , f113((int8_t)127)
    , f114(std::nullopt)
    , f115()
    , f116((uint8_t)255u)
    , f117(std::nullopt)
    , f118()
    , f119((int16_t)32767)
    , f120(std::nullopt)
    , f121()
    , f122((uint16_t)65535u)
    , f123(std::nullopt)
    , f124()
    , f125((int32_t)2147483647ll)
    , f126(std::nullopt)
    , f127()
    , f128((uint32_t)4294967295ull)
    , f129(std::nullopt)
    , f130()
    , f131((int64_t)9223372036854775807ll)
    , f132(std::nullopt)
    , f133()
    , f134((uint64_t)18446744073709551615ull)
    , f135(std::nullopt)
    , f136()
    , f137((float)123.456f)
    , f138(std::nullopt)
    , f139()
    , f140((double)-123.456e+123)
    , f141(std::nullopt)
    , f142()
    , f143(FBE::decimal_t(123456.123456))
    , f144(std::nullopt)
    , f145()
    , f146("Initial string!")
    , f147(std::nullopt)
    , f148()
    , f149(FBE::utc())
    , f150(std::nullopt)
    , f151()
    , f152(FBE::uuid_t("123e4567-e89b-12d3-a456-426655440000"))
    , f153(std::nullopt)
    , f154()
    , f155(std::nullopt)
    , f156()
    , f157(std::nullopt)
    , f158()
    , f159(std::nullopt)
    , f160()
    , f161(std::nullopt)
    , f162()
    , f163(std::nullopt)
    , f164()
    , f165(std::nullopt)
{}

StructOptional::StructOptional(const ::test::StructSimple& base, const std::optional<bool>& arg_f100, const std::optional<bool>& arg_f101, const std::optional<bool>& arg_f102, const std::optional<uint8_t>& arg_f103, const std::optional<uint8_t>& arg_f104, const std::optional<uint8_t>& arg_f105, const std::optional<char>& arg_f106, const std::optional<char>& arg_f107, const std::optional<char>& arg_f108, const std::optional<wchar_t>& arg_f109, const std::optional<wchar_t>& arg_f110, const std::optional<wchar_t>& arg_f111, const std::optional<int8_t>& arg_f112, const std::optional<int8_t>& arg_f113, const std::optional<int8_t>& arg_f114, const std::optional<uint8_t>& arg_f115, const std::optional<uint8_t>& arg_f116, const std::optional<uint8_t>& arg_f117, const std::optional<int16_t>& arg_f118, const std::optional<int16_t>& arg_f119, const std::optional<int16_t>& arg_f120, const std::optional<uint16_t>& arg_f121, const std::optional<uint16_t>& arg_f122, const std::optional<uint16_t>& arg_f123, const std::optional<int32_t>& arg_f124, const std::optional<int32_t>& arg_f125, const std::optional<int32_t>& arg_f126, const std::optional<uint32_t>& arg_f127, const std::optional<uint32_t>& arg_f128, const std::optional<uint32_t>& arg_f129, const std::optional<int64_t>& arg_f130, const std::optional<int64_t>& arg_f131, const std::optional<int64_t>& arg_f132, const std::optional<uint64_t>& arg_f133, const std::optional<uint64_t>& arg_f134, const std::optional<uint64_t>& arg_f135, const std::optional<float>& arg_f136, const std::optional<float>& arg_f137, const std::optional<float>& arg_f138, const std::optional<double>& arg_f139, const std::optional<double>& arg_f140, const std::optional<double>& arg_f141, const std::optional<FBE::decimal_t>& arg_f142, const std::optional<FBE::decimal_t>& arg_f143, const std::optional<FBE::decimal_t>& arg_f144, const std::optional<std::string>& arg_f145, const std::optional<std::string>& arg_f146, const std::optional<std::string>& arg_f147, const std::optional<uint64_t>& arg_f148, const std::optional<uint64_t>& arg_f149, const std::optional<uint64_t>& arg_f150, const std::optional<FBE::uuid_t>& arg_f151, const std::optional<FBE::uuid_t>& arg_f152, const std::optional<FBE::uuid_t>& arg_f153, const std::optional<::proto::OrderSide>& arg_f154, const std::optional<::proto::OrderSide>& arg_f155, const std::optional<::proto::OrderType>& arg_f156, const std::optional<::proto::OrderType>& arg_f157, const std::optional<::proto::Order>& arg_f158, const std::optional<::proto::Order>& arg_f159, const std::optional<::proto::Balance>& arg_f160, const std::optional<::proto::Balance>& arg_f161, const std::optional<::proto::State>& arg_f162, const std::optional<::proto::State>& arg_f163, const std::optional<::proto::Account>& arg_f164, const std::optional<::proto::Account>& arg_f165)
    : ::test::StructSimple(base)
    , f100(arg_f100)
    , f101(arg_f101)
    , f102(arg_f102)
    , f103(arg_f103)
    , f104(arg_f104)
    , f105(arg_f105)
    , f106(arg_f106)
    , f107(arg_f107)
    , f108(arg_f108)
    , f109(arg_f109)
    , f110(arg_f110)
    , f111(arg_f111)
    , f112(arg_f112)
    , f113(arg_f113)
    , f114(arg_f114)
    , f115(arg_f115)
    , f116(arg_f116)
    , f117(arg_f117)
    , f118(arg_f118)
    , f119(arg_f119)
    , f120(arg_f120)
    , f121(arg_f121)
    , f122(arg_f122)
    , f123(arg_f123)
    , f124(arg_f124)
    , f125(arg_f125)
    , f126(arg_f126)
    , f127(arg_f127)
    , f128(arg_f128)
    , f129(arg_f129)
    , f130(arg_f130)
    , f131(arg_f131)
    , f132(arg_f132)
    , f133(arg_f133)
    , f134(arg_f134)
    , f135(arg_f135)
    , f136(arg_f136)
    , f137(arg_f137)
    , f138(arg_f138)
    , f139(arg_f139)
    , f140(arg_f140)
    , f141(arg_f141)
    , f142(arg_f142)
    , f143(arg_f143)
    , f144(arg_f144)
    , f145(arg_f145)
    , f146(arg_f146)
    , f147(arg_f147)
    , f148(arg_f148)
    , f149(arg_f149)
    , f150(arg_f150)
    , f151(arg_f151)
    , f152(arg_f152)
    , f153(arg_f153)
    , f154(arg_f154)
    , f155(arg_f155)
    , f156(arg_f156)
    , f157(arg_f157)
    , f158(arg_f158)
    , f159(arg_f159)
    , f160(arg_f160)
    , f161(arg_f161)
    , f162(arg_f162)
    , f163(arg_f163)
    , f164(arg_f164)
    , f165(arg_f165)
{}

bool StructOptional::operator==(const StructOptional& other) const noexcept
{
    return (
        ::test::StructSimple::operator==(other)
        && true
        );
}

bool StructOptional::operator<(const StructOptional& other) const noexcept
{
    if (::test::StructSimple::operator<(other))
        return true;
    if (other.::test::StructSimple::operator<(*this))
        return false;
    return false;
}

void StructOptional::swap(StructOptional& other) noexcept
{
    using std::swap;
    ::test::StructSimple::swap(other);
    swap(f100, other.f100);
    swap(f101, other.f101);
    swap(f102, other.f102);
    swap(f103, other.f103);
    swap(f104, other.f104);
    swap(f105, other.f105);
    swap(f106, other.f106);
    swap(f107, other.f107);
    swap(f108, other.f108);
    swap(f109, other.f109);
    swap(f110, other.f110);
    swap(f111, other.f111);
    swap(f112, other.f112);
    swap(f113, other.f113);
    swap(f114, other.f114);
    swap(f115, other.f115);
    swap(f116, other.f116);
    swap(f117, other.f117);
    swap(f118, other.f118);
    swap(f119, other.f119);
    swap(f120, other.f120);
    swap(f121, other.f121);
    swap(f122, other.f122);
    swap(f123, other.f123);
    swap(f124, other.f124);
    swap(f125, other.f125);
    swap(f126, other.f126);
    swap(f127, other.f127);
    swap(f128, other.f128);
    swap(f129, other.f129);
    swap(f130, other.f130);
    swap(f131, other.f131);
    swap(f132, other.f132);
    swap(f133, other.f133);
    swap(f134, other.f134);
    swap(f135, other.f135);
    swap(f136, other.f136);
    swap(f137, other.f137);
    swap(f138, other.f138);
    swap(f139, other.f139);
    swap(f140, other.f140);
    swap(f141, other.f141);
    swap(f142, other.f142);
    swap(f143, other.f143);
    swap(f144, other.f144);
    swap(f145, other.f145);
    swap(f146, other.f146);
    swap(f147, other.f147);
    swap(f148, other.f148);
    swap(f149, other.f149);
    swap(f150, other.f150);
    swap(f151, other.f151);
    swap(f152, other.f152);
    swap(f153, other.f153);
    swap(f154, other.f154);
    swap(f155, other.f155);
    swap(f156, other.f156);
    swap(f157, other.f157);
    swap(f158, other.f158);
    swap(f159, other.f159);
    swap(f160, other.f160);
    swap(f161, other.f161);
    swap(f162, other.f162);
    swap(f163, other.f163);
    swap(f164, other.f164);
    swap(f165, other.f165);
}

StructNested::StructNested()
    : ::test::StructOptional()
    , f1000()
    , f1001()
    , f1002(EnumTyped::ENUM_VALUE_2)
    , f1003(std::nullopt)
    , f1004()
    , f1005()
    , f1006(FlagsTyped::FLAG_VALUE_2  |  FlagsTyped::FLAG_VALUE_4  |  FlagsTyped::FLAG_VALUE_6)
    , f1007(std::nullopt)
    , f1008()
    , f1009()
    , f1010()
    , f1011(std::nullopt)
{}

StructNested::StructNested(const ::test::StructOptional& base, const ::test::EnumSimple& arg_f1000, const std::optional<::test::EnumSimple>& arg_f1001, const ::test::EnumTyped& arg_f1002, const std::optional<::test::EnumTyped>& arg_f1003, const ::test::FlagsSimple& arg_f1004, const std::optional<::test::FlagsSimple>& arg_f1005, const ::test::FlagsTyped& arg_f1006, const std::optional<::test::FlagsTyped>& arg_f1007, const ::test::StructSimple& arg_f1008, const std::optional<::test::StructSimple>& arg_f1009, const ::test::StructOptional& arg_f1010, const std::optional<::test::StructOptional>& arg_f1011)
    : ::test::StructOptional(base)
    , f1000(arg_f1000)
    , f1001(arg_f1001)
    , f1002(arg_f1002)
    , f1003(arg_f1003)
    , f1004(arg_f1004)
    , f1005(arg_f1005)
    , f1006(arg_f1006)
    , f1007(arg_f1007)
    , f1008(arg_f1008)
    , f1009(arg_f1009)
    , f1010(arg_f1010)
    , f1011(arg_f1011)
{}

bool StructNested::operator==(const StructNested& other) const noexcept
{
    return (
        ::test::StructOptional::operator==(other)
        && true
        );
}

bool StructNested::operator<(const StructNested& other) const noexcept
{
    if (::test::StructOptional::operator<(other))
        return true;
    if (other.::test::StructOptional::operator<(*this))
        return false;
    return false;
}

void StructNested::swap(StructNested& other) noexcept
{
    using std::swap;
    ::test::StructOptional::swap(other);
    swap(f1000, other.f1000);
    swap(f1001, other.f1001);
    swap(f1002, other.f1002);
    swap(f1003, other.f1003);
    swap(f1004, other.f1004);
    swap(f1005, other.f1005);
    swap(f1006, other.f1006);
    swap(f1007, other.f1007);
    swap(f1008, other.f1008);
    swap(f1009, other.f1009);
    swap(f1010, other.f1010);
    swap(f1011, other.f1011);
}

StructBytes::StructBytes()
    : f1()
    , f2()
    , f3(std::nullopt)
{}

StructBytes::StructBytes(const FBE::buffer_t& arg_f1, const std::optional<FBE::buffer_t>& arg_f2, const std::optional<FBE::buffer_t>& arg_f3)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
{}

bool StructBytes::operator==(const StructBytes& other) const noexcept
{
    return (
        true
        );
}

bool StructBytes::operator<(const StructBytes& other) const noexcept
{
    return false;
}

void StructBytes::swap(StructBytes& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
}

StructArray::StructArray()
    : f1()
    , f2()
    , f3()
    , f4()
    , f5()
    , f6()
    , f7()
    , f8()
    , f9()
    , f10()
{}

StructArray::StructArray(const std::array<uint8_t, 2>& arg_f1, const std::array<std::optional<uint8_t>, 2>& arg_f2, const std::array<FBE::buffer_t, 2>& arg_f3, const std::array<std::optional<FBE::buffer_t>, 2>& arg_f4, const std::array<::test::EnumSimple, 2>& arg_f5, const std::array<std::optional<::test::EnumSimple>, 2>& arg_f6, const std::array<::test::FlagsSimple, 2>& arg_f7, const std::array<std::optional<::test::FlagsSimple>, 2>& arg_f8, const std::array<::test::StructSimple, 2>& arg_f9, const std::array<std::optional<::test::StructSimple>, 2>& arg_f10)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
{}

bool StructArray::operator==(const StructArray& other) const noexcept
{
    return (
        true
        );
}

bool StructArray::operator<(const StructArray& other) const noexcept
{
    return false;
}

void StructArray::swap(StructArray& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
}

StructVector::StructVector()
    : f1()
    , f2()
    , f3()
    , f4()
    , f5()
    , f6()
    , f7()
    , f8()
    , f9()
    , f10()
{}

StructVector::StructVector(const std::vector<uint8_t>& arg_f1, const std::vector<std::optional<uint8_t>>& arg_f2, const std::vector<FBE::buffer_t>& arg_f3, const std::vector<std::optional<FBE::buffer_t>>& arg_f4, const std::vector<::test::EnumSimple>& arg_f5, const std::vector<std::optional<::test::EnumSimple>>& arg_f6, const std::vector<::test::FlagsSimple>& arg_f7, const std::vector<std::optional<::test::FlagsSimple>>& arg_f8, const std::vector<::test::StructSimple>& arg_f9, const std::vector<std::optional<::test::StructSimple>>& arg_f10)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
{}

bool StructVector::operator==(const StructVector& other) const noexcept
{
    return (
        true
        );
}

bool StructVector::operator<(const StructVector& other) const noexcept
{
    return false;
}

void StructVector::swap(StructVector& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
}

StructList::StructList()
    : f1()
    , f2()
    , f3()
    , f4()
    , f5()
    , f6()
    , f7()
    , f8()
    , f9()
    , f10()
{}

StructList::StructList(const std::list<uint8_t>& arg_f1, const std::list<std::optional<uint8_t>>& arg_f2, const std::list<FBE::buffer_t>& arg_f3, const std::list<std::optional<FBE::buffer_t>>& arg_f4, const std::list<::test::EnumSimple>& arg_f5, const std::list<std::optional<::test::EnumSimple>>& arg_f6, const std::list<::test::FlagsSimple>& arg_f7, const std::list<std::optional<::test::FlagsSimple>>& arg_f8, const std::list<::test::StructSimple>& arg_f9, const std::list<std::optional<::test::StructSimple>>& arg_f10)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
{}

bool StructList::operator==(const StructList& other) const noexcept
{
    return (
        true
        );
}

bool StructList::operator<(const StructList& other) const noexcept
{
    return false;
}

void StructList::swap(StructList& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
}

StructSet::StructSet()
    : f1()
    , f2()
    , f3()
    , f4()
{}

StructSet::StructSet(const std::set<uint8_t>& arg_f1, const std::set<::test::EnumSimple>& arg_f2, const std::set<::test::FlagsSimple>& arg_f3, const std::set<::test::StructSimple>& arg_f4)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
{}

bool StructSet::operator==(const StructSet& other) const noexcept
{
    return (
        true
        );
}

bool StructSet::operator<(const StructSet& other) const noexcept
{
    return false;
}

void StructSet::swap(StructSet& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
}

StructMap::StructMap()
    : f1()
    , f2()
    , f3()
    , f4()
    , f5()
    , f6()
    , f7()
    , f8()
    , f9()
    , f10()
{}

StructMap::StructMap(const std::map<int32_t, uint8_t>& arg_f1, const std::map<int32_t, std::optional<uint8_t>>& arg_f2, const std::map<int32_t, FBE::buffer_t>& arg_f3, const std::map<int32_t, std::optional<FBE::buffer_t>>& arg_f4, const std::map<int32_t, ::test::EnumSimple>& arg_f5, const std::map<int32_t, std::optional<::test::EnumSimple>>& arg_f6, const std::map<int32_t, ::test::FlagsSimple>& arg_f7, const std::map<int32_t, std::optional<::test::FlagsSimple>>& arg_f8, const std::map<int32_t, ::test::StructSimple>& arg_f9, const std::map<int32_t, std::optional<::test::StructSimple>>& arg_f10)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
{}

bool StructMap::operator==(const StructMap& other) const noexcept
{
    return (
        true
        );
}

bool StructMap::operator<(const StructMap& other) const noexcept
{
    return false;
}

void StructMap::swap(StructMap& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
}

StructHash::StructHash()
    : f1()
    , f2()
    , f3()
    , f4()
    , f5()
    , f6()
    , f7()
    , f8()
    , f9()
    , f10()
{}

StructHash::StructHash(const std::unordered_map<std::string, uint8_t>& arg_f1, const std::unordered_map<std::string, std::optional<uint8_t>>& arg_f2, const std::unordered_map<std::string, FBE::buffer_t>& arg_f3, const std::unordered_map<std::string, std::optional<FBE::buffer_t>>& arg_f4, const std::unordered_map<std::string, ::test::EnumSimple>& arg_f5, const std::unordered_map<std::string, std::optional<::test::EnumSimple>>& arg_f6, const std::unordered_map<std::string, ::test::FlagsSimple>& arg_f7, const std::unordered_map<std::string, std::optional<::test::FlagsSimple>>& arg_f8, const std::unordered_map<std::string, ::test::StructSimple>& arg_f9, const std::unordered_map<std::string, std::optional<::test::StructSimple>>& arg_f10)
    : f1(arg_f1)
    , f2(arg_f2)
    , f3(arg_f3)
    , f4(arg_f4)
    , f5(arg_f5)
    , f6(arg_f6)
    , f7(arg_f7)
    , f8(arg_f8)
    , f9(arg_f9)
    , f10(arg_f10)
{}

bool StructHash::operator==(const StructHash& other) const noexcept
{
    return (
        true
        );
}

bool StructHash::operator<(const StructHash& other) const noexcept
{
    return false;
}

void StructHash::swap(StructHash& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
    swap(f3, other.f3);
    swap(f4, other.f4);
    swap(f5, other.f5);
    swap(f6, other.f6);
    swap(f7, other.f7);
    swap(f8, other.f8);
    swap(f9, other.f9);
    swap(f10, other.f10);
}

StructHashEx::StructHashEx()
    : f1()
    , f2()
{}

StructHashEx::StructHashEx(const std::unordered_map<::test::StructSimple, ::test::StructNested>& arg_f1, const std::unordered_map<::test::StructSimple, std::optional<::test::StructNested>>& arg_f2)
    : f1(arg_f1)
    , f2(arg_f2)
{}

bool StructHashEx::operator==(const StructHashEx& other) const noexcept
{
    return (
        true
        );
}

bool StructHashEx::operator<(const StructHashEx& other) const noexcept
{
    return false;
}

void StructHashEx::swap(StructHashEx& other) noexcept
{
    using std::swap;
    swap(f1, other.f1);
    swap(f2, other.f2);
}

StructEmpty::StructEmpty()
{}

bool StructEmpty::operator==(const StructEmpty& other) const noexcept
{
    return (
        true
        );
}

bool StructEmpty::operator<(const StructEmpty& other) const noexcept
{
    return false;
}

void StructEmpty::swap(StructEmpty& other) noexcept
{
    using std::swap;
}

} // namespace test

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
