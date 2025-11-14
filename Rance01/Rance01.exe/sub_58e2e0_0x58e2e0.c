// 函数: sub_58e2e0
// 地址: 0x58e2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710b7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderTexture::graphengine::CRenderTexture::VTable** result = arg1
struct IRenderTexture::graphengine::CRenderTexture::VTable** result_2 = result
*result = &graphengine::CRenderTexture::`vftable'{for `IRenderTexture'}
int32_t var_4 = 0
sub_58e570(arg1)
int32_t var_1c = result[3]
sub_6b4d5b()

if ((arg2 & 1) != 0)
    struct IRenderTexture::graphengine::CRenderTexture::VTable** result_1 = result
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
