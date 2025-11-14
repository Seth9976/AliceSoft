// 函数: sub_6581e0
// 地址: 0x6581e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x3fffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s>> 2

if (result u< arg2)
    int32_t* eax_5 = sub_65a1c0(arg2)
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg2
    int32_t var_30_1 = *arg1
    int32_t* var_18_1 = eax_5
    sub_6582d0(eax_5, arg1[1], arg2)
    int32_t eax_8 = *arg1
    int32_t edi_3 = (arg1[1] - eax_8) s>> 2
    
    if (eax_8 != 0)
        int32_t var_2c_2 = eax_8
        sub_6b4d5b()
    
    result = &eax_5[arg2]
    arg1[2] = result
    arg1[1] = &eax_5[edi_3]
    *arg1 = eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return result
