// 函数: sub_4fe8e0
// 地址: 0x4fe8e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714af8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_58
int32_t i = arg3
float* esi = arg4
int32_t var_8_1 = 0
long double result = float.t(0)
float* var_18 = esi

while (i u> 0)
    float var_48_1 = fconvert.s(result)
    int32_t var_3c = 0
    float var_44_1 = fconvert.s(result)
    int32_t var_38_1 = 0
    float var_40_1 = fconvert.s(result)
    int32_t var_34_1 = 0
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    float* var_1c_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = var_48_1
        esi[1] = var_44_1
        esi[2] = var_40_1
        sub_6b05e0(&esi[3], &var_3c)
        var_8_1.b = 3
        sub_4bf370(&esi[7], &var_2c)
        result = float.t(0)
    
    i -= 1
    esi = &esi[0xb]
    var_8_1.b = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
