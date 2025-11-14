// 函数: sub_4f2ac0
// 地址: 0x4f2ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728117
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDrawD3DPlugin::sealengine::CPlugin::VTable** result = arg1
*result = &sealengine::CPlugin::`vftable'{for `IDrawD3DPlugin'}
int32_t var_4 = 0
sub_504cd0(&result[4])
arg1 = &result[4]
int32_t var_4_1 = 1
sub_504cd0(&result[4])
int32_t var_4_2 = 0xffffffff
sub_505710(&result[4])
struct IDrawD3DPlugin::sealengine::CPlugin::VTable** result_1 = result
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
