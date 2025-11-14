// 函数: sub_4e9930
// 地址: 0x4e9930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7118c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x9249249)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_1 = arg1[2] - *arg1
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x92492493, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 4
int32_t result = ecx_1 s/ 0x1c

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        int32_t result_2
        result_2, edx_2 = sub_4f64b0(arg2)
        result_1 = result_2
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    sub_4eb050(*arg1, edx_2, result_1, arg1[1])
    int32_t ecx_4 = arg1[1]
    void* ebx_1 = *arg1
    void* edi_3 = ecx_4 - ebx_1
    int32_t eax_8
    void* edx_3
    edx_3:eax_8 = muls.dp.d(0x92492493, edi_3)
    
    if (ebx_1 != 0)
        sub_4bd770(ebx_1, (edx_3 + edi_3) s>> 4, ecx_4)
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x1c
    arg1[1] = result + edi_3 s/ 0x1c * 0x1c
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
