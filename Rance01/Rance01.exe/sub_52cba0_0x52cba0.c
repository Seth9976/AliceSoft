// 函数: sub_52cba0
// 地址: 0x52cba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717230
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
edx:eax_3 = muls.dp.d(0x92492493, ecx_2)
int32_t edx_2 = (edx + ecx_2) s>> 5
int32_t edi_2 = ecx_2 s/ 0x38
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edx_2 u>> 0x1f != neg.d(edx_2))
    if (edi_2 u> 0x4924924)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    char* eax_4
    
    if (edi_2 u> 0)
        eax_4 = sub_52d190(edi_2)
    else
        eax_4 = nullptr
    
    arg1[2] = &eax_4[edi_2 * 0x38]
    int32_t var_8_1 = 0
    int32_t* var_28_1 = arg1
    *arg1 = eax_4
    arg1[1] = eax_4
    arg1[1] = sub_52dd70(*arg2, arg2[1], eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
