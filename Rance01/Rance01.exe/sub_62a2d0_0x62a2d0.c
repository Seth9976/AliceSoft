// 函数: sub_62a2d0
// 地址: 0x62a2d0
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

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_62a3e0(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        int32_t var_18_2 = 0
        result[2] = arg1[2]
        var_1c_1 = &arg1[3]
    label_62a382:
        result[8] = 0xf
        result[7] = 0
        result[3].b = 0
        result = sub_401180(&result[3], 0xffffffff, var_1c_1, 0)
else
    if (ecx == arg2[2])
        sub_62a3e0(arg2)
    
    int32_t* edx_3 = *arg2 + (arg1 - eax_3) s/ 0x28 * 0x28
    result = arg2[1]
    int32_t var_4 = 0
    
    if (result != 0)
        *result = *edx_3
        result[1] = edx_3[1]
        int32_t var_18_1 = 0
        result[2] = edx_3[2]
        var_1c_1 = &edx_3[3]
        goto label_62a382
arg2[1] += 0x28
fsbase->NtTib.ExceptionList = ExceptionList
return result
