// 函数: sub_4db0a0
// 地址: 0x4db0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7179e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_4db690(arg1)
sub_4db630(arg1)
*(arg1 + 0x44) = 0xffffffff
int32_t eax_3 = *(arg1 + 0x34)

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
int32_t eax_4 = *(arg1 + 0x24)

if (eax_4 != 0)
    int32_t var_1c_2 = eax_4
    sub_6b4d5b()

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
int32_t result = *(arg1 + 0xc)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
