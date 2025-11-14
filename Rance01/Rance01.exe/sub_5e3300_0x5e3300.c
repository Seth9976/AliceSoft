// 函数: sub_5e3300
// 地址: 0x5e3300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7197bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionSpriteData::VTable* var_d4
int32_t eax_2 = data_78c474 ^ &var_d4
int32_t __saved_edi
int32_t var_e8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e6570(&var_d4)
int32_t var_4 = 0
sub_5e5f90(&var_d4, arg1 + 0x28)
int32_t var_4_1 = 0xffffffff
sub_5e6630(&var_d4)
int32_t ecx_2 = *(arg1 + 0x28)
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - ecx_2)
int32_t edx_1 = edx s>> 6
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xa8) = arg2
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xc0) = 8
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0xa4) = arg3
sub_401180(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x3c, 0xffffffff, arg4, 0)
void arg_10
__builtin_memcpy(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x6c, &arg_10, 0x30)
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x74) = arg5
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_2 - 0x70) = arg6
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d4)
return result
