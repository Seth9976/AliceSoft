// 函数: sub_5040f0
// 地址: 0x5040f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714a20
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
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x78787879, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 5
uint32_t edi_1 = edx_1 u>> 0x1f
int32_t edi_2 = edi_1 + edx_1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edi_1 != neg.d(edx_1))
    if (edi_2 u> 0x3c3c3c3)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_4
    
    if (edi_2 u> 0)
        eax_4 = sub_5044a0(edi_2)
    else
        eax_4 = nullptr
    
    arg1[2] = &eax_4[edi_2 * 0x11]
    int32_t var_8_1 = 0
    int32_t* var_28_1 = arg1
    *arg1 = eax_4
    arg1[1] = eax_4
    arg1[1] = sub_504620(*arg2, arg2[1], eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
