// 函数: sub_5855f0
// 地址: 0x5855f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_710e60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x2108421)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x7c

if (result u< arg2)
    int32_t eax_6 = sub_5856e0(arg2)
    int32_t var_8_1 = 0
    int32_t ecx_3 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_3
    sub_585740(eax_6, *arg1, ecx_3)
    int32_t ebx_1 = *arg1
    int32_t ecx_5 = arg1[1] - ebx_1
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = ebx_1
        sub_6b4d5b()
    
    result = arg2 * 0x7c + eax_6
    arg1[2] = result
    arg1[1] = ecx_5 s/ 0x7c * 0x7c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
