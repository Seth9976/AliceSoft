// 函数: sub_6bf2dd
// 地址: 0x6bf2dd
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x771288
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax = data_78c474
int32_t var_8_3 = 0x771288 ^ eax
int32_t __saved_ebp
int32_t var_2c = eax ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6bf2e9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_798208 != 0)
    if ((arg1 & 0x40) == 0 || data_78cff8 == 0)
        arg1.d &= 0xffffffbf
    else
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bf34e
return 0
