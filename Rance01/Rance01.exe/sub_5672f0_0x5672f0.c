// 函数: sub_5672f0
// 地址: 0x5672f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723876
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &IShutdown::`vftable'
*arg1 = &sys40::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &sys40::CMainWindow::`vftable'{for `IShutdown'}
sub_6b3760(&arg1[2])
int32_t var_4 = 0
arg1[0x26] = 0
arg1[0x27] = &sys40::CMainWindowProxy::`vftable'{for `IMainWindow3'}
arg1[0x28] = 0
arg1[0x29].b = 0
arg1[0x2a] = 0
arg1[0x2b].b = 1
arg1[0x2c] = 0
arg1[0x2d] = &sys40::CWinMsg::`vftable'{for `IWinMsg2'}
arg1[0x2e] = 0
arg1[0x2f].b = 1
arg1[0x30] = &sys40::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0x31].b = 0
arg1[0x32] = &sys40::CRect::`vftable'{for `IRect'}
__builtin_memset(&arg1[0x33], 0, 0x18)
var_4.b = 4
arg1[0x39].b = 1
arg1[0x3a] = 0
arg1[0x3b] = 0x1010000
arg1[0x3c].w = 1
arg1[0x3d] = 0xffffffff
arg1[0x3e] = 0xffffffff
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x46] = 0xf
arg1[0x45] = 0
arg1[0x41].b = 0
sub_401270(&arg1[0x41], 0x11, "WindowSetting.sav")
arg1[0x48] = &sys40::CWindowSettingProxy::`vftable'{for `IWindowSetting'}
arg1[0x49] = 0
sub_56e260(&arg1[0x4a])
arg1[0x78] = &sys40::CInputDevice::`vftable'{for `IInputDevice'}
arg1[0x79].b = 0
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7c] = &sys40::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x7d] = 0
arg1[0x7e] = 0
long double x87_r7 = float.t(1)
arg1[0x7f] = &sys40::CInputString::`vftable'
arg1[0x84] = 0
arg1[0x85] = 0xf
arg1[0x80].b = 0
arg1[0x87] = 0
arg1[0x88] = 0
arg1[0x89] = 0
arg1[0x8e] = fconvert.s(x87_r7)
arg1[0x8f] = fconvert.s(x87_r7)
arg1[0x8b].w = 0
arg1[0x8c] = 0
arg1[0x8d] = 0
arg1[0x90].b = 0
arg1[0x91] = 0
arg1[0x97] = 0xf
arg1[0x96] = 0
arg1[0x92].b = 0
arg1[0x99] = 0
arg1[0x9a].b = 0
arg1[0x9b] = 0
arg1[0x9c] = 0
arg1[0x9d] = 0
arg1[0x9e] = &sys40::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
arg1[0x9f].b = 0
uint32_t eax_4 = timeGetTime()
uint32_t ecx = data_797e3c

if (eax_4 u< ecx)
    eax_4 = ecx

data_797e3c = eax_4
arg1[0xa0] = eax_4
var_4.b = 0xb
struct IJoystick::ibis::CJoystick::VTable** eax_5 = operator new(0x28)

if (eax_5 == 0)
    eax_5 = nullptr
else
    *eax_5 = &ibis::CJoystick::`vftable'{for `IJoystick'}
    eax_5[1] = 1
    eax_5[2] = 0
    eax_5[3].b = 1
    eax_5[4] = 0
    eax_5[5] = 0
    eax_5[6] = 0
    eax_5[8] = 0
    eax_5[9] = 0

arg1[0xa1] = eax_5
arg1[0xa2] = &sys40::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0xa3] = 0
arg1[0xa4] = &sys40::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0xa5] = 0
arg1[0xa6] = 0
arg1[0xa7] = 0
arg1[0xa8].w = 0
sub_562e10(&arg1[0xa9])
arg1[0xd7].b = 0
arg1[0xd8] = 0
arg1[0xd9].b = 0
__builtin_memset(&arg1[0xda], 0, 0x14)
arg1[0xe0].w = 0x100
arg1[0xe1].b = 0
arg1[0xe2] = 0
__builtin_memset(&arg1[0xe4], 0, 0x14)
arg1[0xe9] = 0x64
arg1[0xea] = &sys40::CReset::`vftable'{for `IReset2'}
arg1[0xec] = 0
arg1[0xed].b = 0
arg1[0xee] = 0
arg1[0xf4] = 0xf
arg1[0xf3] = 0
arg1[0xef].b = 0
void* eax_6 = arg1[0xa1]
arg1[0x28] = arg1
arg1[0x49] = arg1
arg1[0x2e] = arg1
arg1[0x7a] = arg1
arg1[0xeb] = arg1
*(eax_6 + 0x20) = &arg1[0x9e]
arg1[0xe3] = 0x12c
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
