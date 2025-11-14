// 函数: sub_4fd0e0
// 地址: 0x4fd0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717600
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t ebx = arg2

if (ebx u> 0x5d1745d)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2e8ba2e9, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 3
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< ebx)
    int32_t result_1 = sub_5324a0(ebx)
    int32_t var_8_1 = 0
    int32_t edx_2 = arg1[1]
    int32_t var_30_1 = arg2
    sub_4fef20(result_1, edx_2, *arg1, edx_2, result_1)
    int32_t var_8_2 = 0xffffffff
    int32_t edx_3 = arg1[1]
    int32_t* i_1 = *arg1
    
    if (i_1 != 0)
        for (int32_t* i = i_1; i != edx_3; i = &i[0xb])
            (**i)(0)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
        ebx = arg2
    
    result = result_1
    arg1[2] = ebx * 0x2c + result
    arg1[1] = (edx_3 - i_1) s/ 0x2c * 0x2c + result
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
