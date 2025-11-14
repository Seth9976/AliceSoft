// 函数: sub_4f2ba0
// 地址: 0x4f2ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714d81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_4f2ce0(arg1)
void* eax_3 = *(arg1 + 0x28)

if (eax_3 != 0)
    void* var_20_1 = arg1
    sub_4f6a90(eax_3, *(arg1 + 0x2c))
    int32_t var_24_1 = *(arg1 + 0x28)
    sub_6b4d5b()

*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
sub_4f5be0(arg1 + 0x18)
int32_t result = *(arg1 + 8)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
