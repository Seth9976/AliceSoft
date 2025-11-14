// 函数: sub_405220
// 地址: 0x405220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71731a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]

if (arg1 u< ecx)
    result = *arg2

struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t* ecx_3

if (arg1 u>= ecx || result u> arg1)
    int32_t edx
    
    if (ecx == arg2[2])
        result = sub_405460(1, edx, arg2)
    ecx_3 = arg2[1]
    int32_t var_4_1 = 1
    
    if (ecx_3 != 0)
        int32_t var_18_2 = 0
        result_1 = arg1
    label_4052b9:
        ecx_3[5] = 0xf
        ecx_3[4] = 0
        *ecx_3 = 0
        result = sub_401180(ecx_3, 0xffffffff, result_1, 0)
else
    void* esi_1 = arg1 - result
    int32_t eax_3
    void* edx_1
    edx_1:eax_3 = muls.dp.d(0x92492493, esi_1)
    
    if (ecx == arg2[2])
        sub_405460(1, (edx_1 + esi_1) s>> 4, arg2)
    
    result = &(*arg2)[esi_1 s/ 0x1c * 7]
    ecx_3 = arg2[1]
    int32_t var_4 = 0
    
    if (ecx_3 != 0)
        int32_t var_18_1 = 0
        result_1 = result
        goto label_4052b9
arg2[1] = &arg2[1][7]
fsbase->NtTib.ExceptionList = ExceptionList
return result
