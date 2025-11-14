// 函数: sub_6be662
// 地址: 0x6be662
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x771268
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_5 = data_78c474
int32_t var_8_3 = 0x771268 ^ eax_5
int32_t __saved_ebp
int32_t var_30 = eax_5 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_6be66e
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* eax = __getptd()
void* result

if ((eax[0x1c] & data_78cbc0) == 0 || eax[0x1b] == 0)
    sub_6bf5de(0xc)
    int32_t var_8_1 = 0
    result = &eax[0x1b]
    void* var_20_1 = sub_6be615(result, data_78ce08)
    int32_t var_8_2 = 0xfffffffe
    sub_6be6cf(&__saved_ebp)
else
    result = __getptd()[0x1b]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6be6a0
return result
