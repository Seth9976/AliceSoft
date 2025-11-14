// 函数: sub_609eb0
// 地址: 0x609eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7162a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg2 u> 0x35e50d7)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x6bca1af3, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< arg2)
    int32_t* eax_6 = sub_60a400(arg2)
    int32_t var_8_1 = 0
    int32_t edx_2 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_60b400(eax_6, edx_2, *arg1, edx_2, eax_6)
    int32_t edi_2 = arg1[1]
    void* ecx_4 = *arg1
    
    if (ecx_4 != 0)
        int32_t var_2c_2 = arg2
        sub_60a6e0(ecx_4, edi_2)
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = &eax_6[arg2 * 0x13]
    arg1[2] = result
    arg1[1] = (edi_2 - ecx_4) s/ 0x4c * 0x4c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
