// 函数: sub_609fb0
// 地址: 0x609fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71da40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c

if (arg2 u> 0x2108421)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x7c

if (result u< arg2)
    int32_t* eax_6 = sub_5856e0(arg2)
    int32_t var_8_1 = 0
    int32_t edx_3 = arg1[1]
    int32_t var_30_1 = arg2
    sub_60af50(eax_6, edx_3, *arg1, edx_3, eax_6)
    int32_t ecx_2 = arg1[1]
    void* i = *arg1
    void* ecx_3 = ecx_2 - i
    
    if (i != 0)
        for (; i != ecx_2; i += 0x7c)
            sub_607f00(i)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = &eax_6[arg2 * 0x1f]
    arg1[2] = result
    arg1[1] = ecx_3 s/ 0x7c * 0x7c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
