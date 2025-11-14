// 函数: sub_588d70
// 地址: 0x588d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRenderTexture::graphengine::CRenderTexture::VTable** result_1 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderTexture::graphengine::CRenderTexture::VTable** result_2 = operator new(0x44)
result_1 = result_2
struct IRenderTexture::graphengine::CRenderTexture::VTable** result = nullptr
int32_t var_4 = 0

if (result_2 != 0)
    result = sub_58e280(result_2, arg1)

int32_t var_4_1 = 0xffffffff
int32_t (__fastcall* const vFunc_0)(void* arg1) = (*result)->vFunc_0
result_1 = result
vFunc_0(eax_2)
sub_61b5a0(&result_1, &arg1[0x24])
fsbase->NtTib.ExceptionList = ExceptionList
return result
