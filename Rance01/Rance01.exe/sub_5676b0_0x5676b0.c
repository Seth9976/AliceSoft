// 函数: sub_5676b0
// 地址: 0x5676b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7237a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::sys40::CMainWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::sys40::CMainWindow::VTable** var_10_1 = arg1
*arg1 = &sys40::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &sys40::CMainWindow::`vftable'{for `IShutdown'}
int32_t var_4 = 0x12
int32_t* esi = arg1[0xa1]

if (esi != 0)
    sub_425240(esi)
    int32_t* eax_3 = esi[2]
    
    if (eax_3 != 0)
        (*(*eax_3 + 8))(eax_3)
        esi[2] = 0
    
    (*(arg1[0xa1]->vFunc_0 + 4))(eax_2)
    arg1[0xa1] = 0

if (arg1[0xf4] u>= 0x10)
    int32_t var_24_3 = arg1[0xef]
    sub_6b4d5b()

arg1[0xf4] = 0xf
arg1[0xf3] = 0
arg1[0xef].b = 0
arg1[0xea] = &sys40::CReset::`vftable'{for `IReset2'}
uint32_t uIDEvent = arg1[0xe7]

if (uIDEvent != 0)
    KillTimer(arg1[0xe8], uIDEvent)
    arg1[0xe7] = 0

var_4.b = 0xe
sub_6b2e00(&arg1[0xd7])
arg1[0xa9] = &sys40::CFullScreenMenu::`vftable'{for `win32only::CWindowCallback'}
sub_6b37f0(&arg1[0xaa])
arg1[0xa4] = &sys40::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0xa2] = &sys40::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0x9e] = &sys40::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
sub_563650(&arg1[0x7f])
arg1[0x7c] = &sys40::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x78] = &sys40::CInputDevice::`vftable'{for `IInputDevice'}
var_4.b = 6
sub_56e350(&arg1[0x4a])
arg1[0x48] = &sys40::CWindowSettingProxy::`vftable'{for `IWindowSetting'}

if (arg1[0x46] u>= 0x10)
    int32_t var_24_7 = arg1[0x41]
    sub_6b4d5b()

arg1[0x46] = 0xf
arg1[0x45] = 0
arg1[0x41].b = 0
arg1[0x32] = &sys40::CRect::`vftable'{for `IRect'}
arg1[0x30] = &sys40::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0x2d] = &sys40::CWinMsg::`vftable'{for `IWinMsg2'}
arg1[0x27] = &sys40::CMainWindowProxy::`vftable'{for `IMainWindow3'}
BOOL result = sub_6b37f0(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
