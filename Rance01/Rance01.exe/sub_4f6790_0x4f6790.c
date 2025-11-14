// 函数: sub_4f6790
// 地址: 0x4f6790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714d0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_74
char* esi = arg3
int32_t var_8_1 = 0
long double result = float.t(0)
char* var_64 = esi

while (true)
    char* var_60_1 = esi
    
    if (arg4 u<= 0)
        break
    
    float var_2c_1 = fconvert.s(result)
    int32_t var_48_1 = 0xf
    float var_30_1 = fconvert.s(result)
    int32_t var_4c_1 = 0
    float var_34_1 = fconvert.s(result)
    char var_5c = 0
    struct sealengine::CSQT::VTable* const var_38_1 = &sealengine::CSQT::`vftable'
    float var_28_1 = fconvert.s(float.t(1))
    float var_24_1 = fconvert.s(result)
    float var_20_1 = fconvert.s(result)
    float var_1c_1 = fconvert.s(result)
    var_8_1.b = 2
    
    if (esi != 0)
        sub_4f76b0(esi, &var_5c)
        result = float.t(0)
    
    var_8_1.b = 0
    
    if (var_48_1 u>= 0x10)
        int32_t var_78_1 = var_5c.d
        sub_6b4d5b()
        result = float.t(0)
    
    arg4 -= 1
    esi = &esi[0x44]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
