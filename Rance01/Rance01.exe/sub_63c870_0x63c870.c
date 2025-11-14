// 函数: sub_63c870
// 地址: 0x63c870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_710de0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x1d41d41)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x8c

if (result u< arg2)
    int32_t eax_6 = sub_63c980(arg2)
    int32_t var_8_1 = 0
    int32_t ecx_1 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_1
    sub_63fc30(eax_6, *arg1, ecx_1)
    int32_t i = *arg1
    int32_t ecx_3 = arg1[1] - i
    
    if (i != 0)
        for (; i != arg1[1]; i += 0x8c)
        
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = arg2 * 0x8c + eax_6
    arg1[2] = result
    arg1[1] = ecx_3 s/ 0x8c * 0x8c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
