// 函数: sub_4f25e0
// 地址: 0x4f25e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x2762762)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x4ec4ec4f, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t* eax_6 = sub_5994f0(arg2)
    int32_t var_8_1 = 0
    int32_t edx_4 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4f29d0(eax_6, edx_4, *arg1, edx_4, eax_6)
    void* ebx_1 = *arg1
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x4ec4ec4f, arg1[1] - ebx_1)
    int32_t edx_6 = edx_5 s>> 5
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = arg2
        int32_t var_30_2 = arg1[1]
        sub_4f28b0(ebx_1, edx_6)
        int32_t var_34_2 = *arg1
        sub_6b4d5b()
    
    result = &eax_6[arg2 * 0x1a]
    arg1[2] = result
    arg1[1] = ((edx_6 u>> 0x1f) + edx_6) * 0x68 + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
