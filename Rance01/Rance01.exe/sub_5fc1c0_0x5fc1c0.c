// 函数: sub_5fc1c0
// 地址: 0x5fc1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0xaaaaaaa)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 2
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_4ecfc0(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg2
    int32_t var_30_1 = *arg1
    sub_4ff190(result_1, arg1[1], arg2)
    int32_t i = *arg1
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = muls.dp.d(0x2aaaaaab, arg1[1] - i)
    int32_t edx_4 = edx_3 s>> 2
    
    if (i != 0)
        for (; i != arg1[1]; i += 0x18)
        
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x18
    arg1[1] = result + ((edx_4 u>> 0x1f) + edx_4) * 0x18
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
