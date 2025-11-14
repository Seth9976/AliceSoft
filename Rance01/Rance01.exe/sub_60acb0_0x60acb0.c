// 函数: sub_60acb0
// 地址: 0x60acb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71d9f0
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
int32_t ecx_2 = arg2[1] - *arg2
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x84210843, ecx_2)
int32_t edx_2 = (edx + ecx_2) s>> 6
int32_t edi_2 = ecx_2 s/ 0x7c
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edx_2 u>> 0x1f != neg.d(edx_2))
    if (edi_2 u> 0x2108421)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_4 = sub_5856e0(edi_2)
    int32_t var_8_1 = 0
    int32_t* var_28_1 = arg1
    *arg1 = eax_4
    arg1[1] = eax_4
    arg1[2] = edi_2 * 0x7c + eax_4
    arg1[1] = sub_60b490(*arg2, arg2[1], eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
