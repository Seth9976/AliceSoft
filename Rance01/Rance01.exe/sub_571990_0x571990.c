// 函数: sub_571990
// 地址: 0x571990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711540
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x15555555)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 1
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t* result_1 = sub_64dc30(arg2)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = *arg1
    int32_t var_2c_1 = arg2
    int32_t* var_30_1 = ecx_1
    sub_64dc90(result_1, arg1[1], ecx_1)
    int32_t i = *arg1
    int32_t eax_6
    int32_t edx_5
    edx_5:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - i)
    int32_t edx_6 = edx_5 s>> 1
    
    if (i != 0)
        for (; i != arg1[1]; i += 0xc)
        
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0xc
    arg1[1] = result + ((edx_6 u>> 0x1f) + edx_6) * 0xc
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
