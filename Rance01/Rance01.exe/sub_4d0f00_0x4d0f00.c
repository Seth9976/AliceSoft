// 函数: sub_4d0f00
// 地址: 0x4d0f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722818
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = sub_4d1010(arg1, arg1)
float var_28 = fconvert.s(fconvert.t(0.0253999997f))
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_24 = 0xffffffff
int32_t var_20 = 0
int32_t var_4 = 0
int32_t* result

if (sub_4cf6d0(arg2, edx, arg3, &var_28).b != 0)
    int80_t st0_1
    st0_1, result = sub_4d1180(arg1, &var_28)
    
    if (result.b == 0)
        goto label_4d0f6f
    
    sub_4d1ab0(arg1)
    
    if (arg4 != 0 && arg5 s> 0)
        sub_4d1bd0(arg1, arg5)
    
    int32_t var_4_2 = 0xffffffff
    
    if (var_1c != 0)
        int32_t var_40_5 = arg4
        sub_4d0240(var_1c, var_18)
        int32_t* var_40_6 = var_1c
        sub_6b4d5b()
    
    result.b = 1
else
label_4d0f6f:
    int32_t var_4_1 = 0xffffffff
    
    if (var_1c != 0)
        int32_t var_40_1 = arg4
        sub_4d0240(var_1c, var_18)
        int32_t* var_40_2 = var_1c
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
