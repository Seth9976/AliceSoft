// 函数: sub_4f6880
// 地址: 0x4f6880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714ccd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_5c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_5c
void* esi = arg3
void* var_4c = esi
int32_t var_8_1 = 0

while (true)
    void* var_48_1 = esi
    
    if (arg4 u<= 0)
        break
    
    long double x87_r7_1 = float.t(0)
    result = 0xf
    float var_20_1 = fconvert.s(x87_r7_1)
    struct sealengine::CPOLTexture::VTable* const var_44_1 = &sealengine::CPOLTexture::`vftable'
    float result_1 = fconvert.s(x87_r7_1)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    int32_t var_24_1 = 0xffffffff
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = &sealengine::CPOLTexture::`vftable'
        *(esi + 0x18) = 0xf
        *(esi + 0x14) = 0
        *(esi + 4) = 0
        sub_401180(esi + 4, 0xffffffff, &var_40, 0)
        result = result_1
        *(esi + 0x20) = var_24_1
        *(esi + 0x24) = var_20_1
        *(esi + 0x28) = result
    
    var_8_1.b = 0
    
    if (var_2c_1 u>= 0x10)
        int32_t var_60_1 = var_40.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x2c

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
