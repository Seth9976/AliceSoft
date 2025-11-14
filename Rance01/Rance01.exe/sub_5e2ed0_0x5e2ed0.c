// 函数: sub_5e2ed0
// 地址: 0x5e2ed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721d0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_dc
int32_t eax_2 = data_78c474 ^ &var_dc
int32_t __saved_edi
int32_t var_e8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e6030(arg1 + 0x28, &var_dc, *(arg1 + 0x28), *(arg1 + 0x2c))
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
    int32_t ecx_3 = *(arg1 + 0x28)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - ecx_3)
    int32_t edx_2 = edx_1 s>> 6
    *(((edx_2 u>> 0x1f) + edx_2) * 0xc4 + ecx_3 - 0xc0) = 2
    sub_401180(((edx_2 u>> 0x1f) + edx_2) * 0xc4 + ecx_3 - 0x20, 0xffffffff, arg2, 0)
    result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_dc)
return result
