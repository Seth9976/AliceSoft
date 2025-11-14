// 函数: sub_4f6660
// 地址: 0x4f6660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_712d0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_44
int32_t i = arg3
float* esi = arg4
int32_t var_8_1 = 0
long double result = float.t(0)
float* var_18 = esi

while (i u> 0)
    float var_34_1 = fconvert.s(result)
    int32_t var_28 = 0
    float var_30_1 = fconvert.s(result)
    int32_t var_24_1 = 0
    float var_2c_1 = fconvert.s(result)
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = var_34_1
        esi[1] = var_30_1
        esi[2] = var_2c_1
        sub_4f7750(&esi[3], &var_28)
        result = float.t(0)
    
    i -= 1
    esi = &esi[7]
    var_8_1.b = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
