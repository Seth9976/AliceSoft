// 函数: sub_5e2de0
// 地址: 0x5e2de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7197fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_d8
int32_t eax_2 = data_78c474 ^ &var_d8
int32_t __saved_edi
int32_t var_e0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e6030(arg1 + 0x28, &var_d8, *(arg1 + 0x28), *(arg1 + 0x2c))
struct partsengine::CConstructionSpriteData::VTable* var_d4
sub_5e6570(&var_d4)
int32_t var_4 = 0
sub_5e5f90(&var_d4, arg1 + 0x28)
sub_5e6630(&var_d4)
int32_t ecx_3 = *(arg1 + 0x28)
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - ecx_3)
int32_t edx_1 = edx s>> 6
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_3 - 0xc0) = 1
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_3 - 0x98) = arg2
*(((edx_1 u>> 0x1f) + edx_1) * 0xc4 + ecx_3 - 0x94) = arg3
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d8)
return result
