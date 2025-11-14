// 函数: sub_4fcf30
// 地址: 0x4fcf30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7117c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x16c16c1)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s/ 0xb4

if (result u< arg2)
    int32_t eax_6 = sub_4fd700(arg2)
    int32_t var_8_1 = 0
    int32_t edx_3 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_4feee0(eax_6, edx_3, *arg1, edx_3)
    int32_t var_8_2 = 0xffffffff
    int32_t edi_2 = arg1[1]
    int32_t ecx_4 = *arg1
    
    if (ecx_4 != 0)
        sub_4fd6d0(ecx_4, edi_2)
        int32_t var_2c_2 = *arg1
        sub_6b4d5b()
    
    result = arg2 * 0xb4 + eax_6
    arg1[2] = result
    arg1[1] = (edi_2 - ecx_4) s/ 0xb4 * 0xb4 + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
