// 函数: sub_4b5330
// 地址: 0x4b5330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c

if (arg2 u> 0x4444444)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x3c

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_4b5460(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t eax_8 = arg1[1]
    int32_t var_30_1 = arg2
    sub_4b5710(eax_8, result_1, *arg1, eax_8, result_1)
    int32_t var_8_2 = 0xffffffff
    int32_t ecx_3 = arg1[1]
    int32_t* i = *arg1
    void* ecx_4 = ecx_3 - i
    
    if (i != 0)
        for (; i != ecx_3; i = &i[0xf])
            (**i)(0)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x3c
    arg1[1] = result + ecx_4 s/ 0x3c * 0x3c
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
