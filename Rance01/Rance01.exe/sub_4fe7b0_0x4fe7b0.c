// 函数: sub_4fe7b0
// 地址: 0x4fe7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714b2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_74
void* esi = arg3
int32_t var_8_1 = 0
long double result = float.t(0)
void* var_64 = esi

while (true)
    void* var_60_1 = esi
    
    if (arg4 u<= 0)
        break
    
    float var_30_1 = fconvert.s(result)
    float var_34_1 = fconvert.s(result)
    int32_t var_48_1 = 0xf
    float var_38_1 = fconvert.s(result)
    int32_t var_4c_1 = 0
    char var_5c = 0
    float var_2c_1 = fconvert.s(float.t(1))
    struct sealengine::CSQT::VTable* const var_3c_1 = &sealengine::CSQT::`vftable'
    float var_28_1 = fconvert.s(result)
    float var_24_1 = fconvert.s(result)
    float var_20_1 = fconvert.s(result)
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_5c, 0)
        result = float.t(0)
        int32_t var_40
        *(esi + 0x1c) = var_40
        *(esi + 0x24) = var_38_1
        *(esi + 0x28) = var_34_1
        *(esi + 0x2c) = var_30_1
        *(esi + 0x30) = var_2c_1
        *(esi + 0x34) = var_28_1
        *(esi + 0x38) = var_24_1
        *(esi + 0x20) = &sealengine::CSQT::`vftable'
        *(esi + 0x3c) = var_20_1
    
    var_8_1.b = 0
    
    if (var_48_1 u>= 0x10)
        int32_t var_78_1 = var_5c.d
        sub_6b4d5b()
        result = float.t(0)
    
    arg4 -= 1
    esi += 0x40

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
