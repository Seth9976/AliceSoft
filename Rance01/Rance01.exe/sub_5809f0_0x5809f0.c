// 函数: sub_5809f0
// 地址: 0x5809f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_710ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x28f5c28)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x51eb851f, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t eax_6 = sub_580ce0(arg2)
    int32_t var_8_1 = 0
    int32_t ecx_1 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_1
    sub_580d70(eax_6, *arg1, ecx_1)
    int32_t ebx_1 = *arg1
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x51eb851f, arg1[1] - ebx_1)
    int32_t edx_6 = edx_5 s>> 5
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = ebx_1
        sub_6b4d5b()
    
    result = arg2 * 0x64 + eax_6
    arg1[2] = result
    arg1[1] = ((edx_6 u>> 0x1f) + edx_6) * 0x64 + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
