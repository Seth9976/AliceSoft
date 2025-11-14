// 函数: sub_6b646d
// 地址: 0x6b646d
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x770ff0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_1 = data_78c474
int32_t var_8_3 = 0x770ff0 ^ eax_1
int32_t __saved_ebp
int32_t var_30 = eax_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_6b6479
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t result

if (arg3 == 0 || arg4 == 0)
    result = 0
else if (arg5 != 0)
    sub_6b600f(arg5)
    int32_t var_8_1 = 0
    uint32_t result_1 = sub_6b62b1(arg1, arg2, arg3, arg4, arg5)
    int32_t var_8_2 = 0xfffffffe
    sub_6b64f1(&__saved_ebp)
    result = result_1
else
    if (arg2 != 0xffffffff)
        sub_6bc670(arg1, 0, arg2)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b64b9
return result
