// 函数: sub_531e20
// 地址: 0x531e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71731a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

int32_t* result
int32_t* var_1c_1
int32_t ecx_4

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_5320d0(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
    
    if (result != 0)
        *result = *arg1
        ecx_4 = arg1[1]
        int32_t var_18_2 = 0
        var_1c_1 = &arg1[2]
    label_531ebd:
        result[1] = ecx_4
        result[7] = 0xf
        result[6] = 0
        result[2].b = 0
        result = sub_401180(&result[2], 0xffffffff, var_1c_1, 0)
else
    if (ecx == arg2[2])
        sub_5320d0(arg2)
    
    int32_t* edx_3 = *arg2 + (arg1 - eax_3) s/ 0x24 * 0x24
    result = arg2[1]
    int32_t var_4 = 0
    
    if (result != 0)
        *result = *edx_3
        ecx_4 = edx_3[1]
        int32_t var_18_1 = 0
        var_1c_1 = &edx_3[2]
        goto label_531ebd
arg2[1] += 0x24
fsbase->NtTib.ExceptionList = ExceptionList
return result
