// 函数: sub_614380
// 地址: 0x614380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7124b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t edi_1 = arg2[1] - *arg2
*arg1 = 0
int32_t edi_2 = edi_1 s>> 3
arg1[1] = 0
arg1[2] = 0

if (edi_2 != 0)
    if (edi_2 u> 0x1fffffff)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_3 = sub_58bfc0(edi_2)
    int32_t var_8_1 = 0
    *arg1 = eax_3
    arg1[1] = eax_3
    arg1[2] = &eax_3[edi_2 * 2]
    int32_t ecx_3 = arg2[1]
    int32_t* var_28_1 = arg1
    int32_t var_2c_1 = ecx_3
    int32_t var_30_1 = *arg2
    arg1[1] = sub_614440(eax_3, arg1, ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
