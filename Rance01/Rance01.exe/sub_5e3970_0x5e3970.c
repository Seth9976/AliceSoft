// 函数: sub_5e3970
// 地址: 0x5e3970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721ccb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_dc
int32_t eax_2 = data_78c474 ^ &var_dc
int32_t __saved_edi
int32_t var_ec = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 8) != 0)
    result = sub_5fa1a0(arg2)

if (*(arg1 + 8) != 0 && result != 0)
    struct partsengine::CConstructionSpriteData::VTable* var_d8
    sub_5e6570(&var_d8)
    int32_t var_4 = 0
    sub_5e5f90(&var_d8, arg1 + 0x28)
    int32_t var_4_1 = 0xffffffff
    sub_5e6630(&var_d8)
    int32_t ecx_2 = *(arg1 + 0x28)
    int32_t eax_11
    int32_t edx_5
    edx_5:eax_11 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - ecx_2)
    int32_t edx_6 = edx_5 s>> 6
    sub_5e6850(arg2, ((edx_6 u>> 0x1f) + edx_6) * 0xc4 + ecx_2 - 0xc4, arg3, arg4, arg5, arg6, 
        arg7, arg8, arg9, arg10, arg11)
    result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_dc)
return result
