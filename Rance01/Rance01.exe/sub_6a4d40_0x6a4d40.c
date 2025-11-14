// 函数: sub_6a4d40
// 地址: 0x6a4d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpsound::CDPSoundSystem::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 1
HWND result = sub_6a4f50(arg1)

if (arg1[0x12] u>= 0x10)
    int32_t var_1c_1 = arg1[0xd]
    result = sub_6b4d5b()

arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0

if (arg1[0xb] u>= 0x10)
    int32_t var_1c_2 = arg1[6]
    result = sub_6b4d5b()

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
