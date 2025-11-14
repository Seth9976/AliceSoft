// 函数: sub_4f5ee0
// 地址: 0x4f5ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714d40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x9249249)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x1c

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_4f64b0(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t eax_8 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4f73f0(eax_8, result_1, *arg1, eax_8, result_1)
    void* ebx_1 = *arg1
    void* ecx_4 = arg1[1] - ebx_1
    int32_t eax_9
    void* edx_5
    edx_5:eax_9 = muls.dp.d(0x92492493, ecx_4)
    
    if (ebx_1 != 0)
        int32_t var_2c_2 = arg1[1]
        sub_4f6470(ebx_1, (edx_5 + ecx_4) s>> 4)
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x1c
    arg1[1] = result + ecx_4 s/ 0x1c * 0x1c
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
