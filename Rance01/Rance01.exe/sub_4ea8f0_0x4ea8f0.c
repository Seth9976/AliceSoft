// 函数: sub_4ea8f0
// 地址: 0x4ea8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711880
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
edx:eax_3 = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 3
uint32_t edi_1 = edx_1 u>> 0x1f
int32_t edi_2 = edi_1 + edx_1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edi_1 != neg.d(edx_1))
    if (edi_2 u> 0xccccccc)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_4 = sub_4d50d0(edi_2)
    arg1[2] = &eax_4[edi_2 * 5]
    int32_t var_8_1 = 0
    *arg1 = eax_4
    arg1[1] = eax_4
    int32_t ecx_5 = arg2[1]
    int32_t* var_28_1 = arg1
    int32_t var_2c_1 = ecx_5
    int32_t var_30_1 = *arg2
    arg1[1] = sub_4eb3e0(eax_4, arg1, ecx_5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
