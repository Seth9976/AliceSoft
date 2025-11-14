// 函数: sub_588f50
// 地址: 0x588f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IViewport::graphengine::CViewport::VTable** result_1 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IViewport::graphengine::CViewport::VTable** result = operator new(0x10)
result_1 = result
int32_t var_4 = 0

if (result == 0)
    result = nullptr
else
    *result = &graphengine::CViewport::`vftable'{for `IViewport'}
    result[1] = 1
    result[2] = arg1
    int32_t* eax_4 = operator new(0x38)
    
    if (eax_4 == 0)
        result[3] = 0
    else
        *eax_4 = arg1
        eax_4[0xd].b = 0
        result[3] = eax_4

int32_t var_4_1 = 0xffffffff
int32_t (__fastcall* const vFunc_0)(void* arg1) = (*result)->vFunc_0
result_1 = result
vFunc_0(eax_2)
sub_61b5a0(&result_1, &arg1[0x2d])
fsbase->NtTib.ExceptionList = ExceptionList
return result
