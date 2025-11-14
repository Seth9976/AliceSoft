// 函数: sub_501340
// 地址: 0x501340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717515
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct sealengine::CPolyTexture::VTable** result = arg3
int32_t var_8_1 = 0
void* edi = arg1
struct sealengine::CPolyTexture::VTable** result_1 = result

while (edi != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sealengine::CPolyTexture::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401180(&result[1], 0xffffffff, edi + 4, 0)
        result[8] = *(edi + 0x20)
        result[9] = *(edi + 0x24)
        int32_t eax_4 = *(edi + 0x28)
        edi = arg1
        result[0xa] = eax_4
    
    result = &result[0xb]
    edi += 0x2c
    var_8_1.b = 0
    arg3 = result
    arg1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
