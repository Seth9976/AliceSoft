// 函数: sub_5e3420
// 地址: 0x5e3420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71977b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionSpriteData::VTable* var_d4
int32_t eax_2 = data_78c474 ^ &var_d4
int32_t __saved_edi
int32_t var_dc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e6570(&var_d4)
int32_t var_4 = 0
sub_5e5f90(&var_d4, arg1 + 0x28)
sub_5e6630(&var_d4)
int32_t ecx_2 = *(arg1 + 0x28)
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - ecx_2)
int32_t edx_1 = edx s>> 6
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xa8) = arg2
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xa4) = arg3
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x98) = arg4
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x94) = arg5
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x90) = arg6
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x8c) = arg7
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x88) = arg8
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x80) = arg9
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xc0) = 9
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x7c) = arg10
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x78) = arg11
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d4)
return result
