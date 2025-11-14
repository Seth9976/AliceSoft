// 函数: sub_4f75f0
// 地址: 0x4f75f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717705
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct sealengine::CPOLTexture::VTable** result = arg5
void* i = arg3
struct sealengine::CPOLTexture::VTable** result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x2c)
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sealengine::CPOLTexture::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401180(&result[1], 0xffffffff, i + 4, 0)
        result[8] = *(i + 0x20)
        result[9] = *(i + 0x24)
        result[0xa] = *(i + 0x28)
    
    result = &result[0xb]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
