// 函数: sub_4b0f30
// 地址: 0x4b0f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717d60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x4444444)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0x3c

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_4b5460(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t eax_8 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4b1230(eax_8, result_1, *arg1, eax_8, result_1)
    int32_t edi_1 = *arg1
    int32_t ecx_4 = arg1[1] - edi_1
    
    if (edi_1 != 0)
        sub_4b1040(*arg1, arg1[1])
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x3c
    arg1[1] = result + ecx_4 s/ 0x3c * 0x3c
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
