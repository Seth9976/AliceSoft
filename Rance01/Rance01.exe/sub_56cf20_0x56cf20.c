// 函数: sub_56cf20
// 地址: 0x56cf20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716c10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x6666666)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x66666667, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_631c00(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t eax_8 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_56d170(eax_8, result_1.b, *arg1, eax_8, result_1)
    int32_t edi_1 = arg1[1]
    void* ecx_3 = *arg1
    
    if (ecx_3 != 0)
        int32_t var_2c_2 = arg2
        sub_62a5b0(ecx_3, edi_1)
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x28
    arg1[1] = result + (edi_1 - ecx_3) s/ 0x28 * 0x28
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
