// 函数: sub_4fd1f0
// 地址: 0x4fd1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7175e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t edi = arg2

if (edi u> 0x3ffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s>> 6

if (result u< edi)
    int32_t result_1 = sub_4fd760(edi)
    int32_t var_8_1 = 0
    int32_t edx_1 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4fefe0(result_1, edx_1, *arg1, edx_1, result_1)
    int32_t ecx_2 = arg1[1]
    void* eax_5 = *arg1
    
    if (eax_5 != 0)
        int32_t var_2c_2 = arg2
        sub_4fec30(eax_5, ecx_2)
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
        edi = arg2
    
    result = result_1
    arg1[2] = (edi << 6) + result
    arg1[1] = ((ecx_2 - eax_5) & 0xffffffc0) + result
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
