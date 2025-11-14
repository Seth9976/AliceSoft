// 函数: sub_4132b0
// 地址: 0x4132b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7208a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_5c
int32_t var_1c = data_78c474 ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t eax_4 = data_78c474 ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
var_5c = nullptr
struct IString::common::CStringWrapper::VTable* const var_58 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
int32_t var_c_1 = 0
void var_38
char* eax_5 = sub_6b26f0(&var_38)
var_c_1.b = 1

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

var_58->vFunc_1(eax_5, eax_4)
var_10.b = 0
int32_t var_28

if (var_28 u>= 0x10)
    int32_t var_3c
    int32_t var_74_1 = var_3c
    sub_6b4d5b()

int128_t* edi_1 = (*var_5c)()
char* ecx_1 = edi_1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int128_t* eax_9

do
    eax_9.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_9.b != 0)
sub_401270(arg1, ecx_1 - &ecx_1[1], edi_1)
var_5c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_44 u>= 0x10)
    struct IString::common::CStringWrapper::VTable* const var_74_3 = var_58
    sub_6b4d5b()

int32_t var_18
fsbase->NtTib.ExceptionList = var_18
int32_t var_20
sub_6b4885(var_20 ^ &var_60)
return arg1
