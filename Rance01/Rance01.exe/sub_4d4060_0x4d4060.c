// 函数: sub_4d4060
// 地址: 0x4d4060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_712f30
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
int32_t esi_1 = arg2[1] - *arg2
*arg1 = 0
int32_t esi_2 = esi_1 s>> 5
arg1[1] = 0
arg1[2] = 0

if (esi_2 != 0)
    if (esi_2 u> 0x7ffffff)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_3 = sub_6a5920(esi_2)
    int32_t var_8_1 = 0
    *arg1 = eax_3
    arg1[1] = eax_3
    arg1[2] = &eax_3[esi_2 * 8]
    int32_t ecx_2 = arg2[1]
    int32_t* var_28_1 = arg1
    int32_t var_2c_1 = ecx_2
    int32_t var_30_1 = *arg2
    arg1[1] = sub_4d7f20(eax_3, arg1, ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
