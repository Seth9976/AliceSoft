// 函数: sub_4e9840
// 地址: 0x4e9840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7118e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0xccccccc)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t* result_1 = sub_4d50d0(arg2)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    sub_4eb430(result_1, arg2, *arg1, arg1[1])
    int32_t ecx_2 = arg1[1]
    void* ebx_1 = *arg1
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 = muls.dp.d(0x66666667, ecx_2 - ebx_1)
    
    if (ebx_1 != 0)
        sub_4bd520(ebx_1, edx_7 s>> 3, ecx_2)
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x14
    arg1[1] = result + (ecx_2 - ebx_1) s/ 0x14 * 0x14
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
