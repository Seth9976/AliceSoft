// 函数: sub_697dd0
// 地址: 0x697dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7281b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_7c
int32_t var_1c = data_78c474 ^ &var_7c
char* result_2
char* result_1 = result_2
int32_t esi
int32_t var_84 = esi
int32_t edi
int32_t var_88 = edi
int32_t eax_4 = data_78c474 ^ &var_88
fsbase->NtTib.ExceptionList = &ExceptionList
var_7c = arg1
int32_t* var_78 = nullptr
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
sub_401270(&var_54, nullptr, 0x72cd12)
int32_t var_c_1 = 0
struct IString::common::CStringWrapper::VTable* const var_74 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
sub_401180(&var_70, 0xffffffff, &var_54, 0)
var_c_1.b = 2

if (var_40 u>= 0x10)
    int32_t var_90_1 = var_54.d
    sub_6b4d5b()

int32_t var_40_1 = 0xf
int32_t var_44_1 = 0
var_54 = 0
void var_38
int32_t* eax_7 = sub_5f5f40(&var_38, arg3)
var_c_1.b = 3

if (eax_7[5] u>= 0x10)
    eax_7 = *eax_7

var_74->vFunc_1(eax_7, eax_4)
var_10.b = 2
int32_t var_28

if (var_28 u>= 0x10)
    int32_t var_3c
    int32_t var_94_1 = var_3c
    sub_6b4d5b()

int128_t* eax_10 = (*var_78)()
char* result = result_1
char* ecx_2 = eax_10
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int128_t* edi_3 = eax_10

do
    eax_10.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_10.b != 0)

sub_401270(result, ecx_2 - &ecx_2[1], edi_3)
struct IString::common::CStringWrapper::VTable* const var_78_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_60 u>= 0x10)
    struct IString::common::CStringWrapper::VTable* const var_94_3 = var_74
    sub_6b4d5b()

int32_t var_18
fsbase->NtTib.ExceptionList = var_18
int32_t var_20
sub_6b4885(var_20 ^ &result_1)
return result
