// 函数: sub_4d3780
// 地址: 0x4d3780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717a20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x1a41a41)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x9c

if (result u< arg2)
    char* eax_6 = sub_4d3e70(arg2)
    int32_t var_8_1 = 0
    int32_t edx_3 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4d7dd0(eax_6, edx_3, *arg1, edx_3, eax_6)
    int32_t var_8_2 = 0xffffffff
    int32_t* ebx_1 = *arg1
    void* ecx_3 = arg1[1] - ebx_1
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = arg2
        sub_4d6e00(ebx_1, arg1[1])
        int32_t var_38_1 = *arg1
        sub_6b4d5b()
    
    result = &eax_6[arg2 * 0x9c]
    arg1[2] = result
    arg1[1] = ecx_3 s/ 0x9c * 0x9c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
