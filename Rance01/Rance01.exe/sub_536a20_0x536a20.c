// 函数: sub_536a20
// 地址: 0x536a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71a9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x5555555)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t result_1 = sub_5c9110(arg2)
    int32_t var_8_1 = 0
    int32_t edx_4 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_536f20(result_1, edx_4, *arg1, edx_4, result_1)
    void* ebx_1 = *arg1
    int32_t eax_6
    int32_t edx_5
    edx_5:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - ebx_1)
    int32_t edx_6 = edx_5 s>> 3
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = arg2
        int32_t var_30_2 = arg1[1]
        sub_536c80(ebx_1, edx_6)
        int32_t var_34_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = arg2 * 0x30 + result
    arg1[1] = ((edx_6 u>> 0x1f) + edx_6) * 0x30 + result
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
