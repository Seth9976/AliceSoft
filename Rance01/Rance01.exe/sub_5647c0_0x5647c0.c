// 函数: sub_5647c0
// 地址: 0x5647c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728015
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMainSystem::sys40::CMainSystem::VTable** var_14 = arg1
*arg1 = &sys40::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &sys40::CMainSystem::`vftable'{for `IInitMainSystem'}
int32_t var_4 = 0x14
int32_t* ecx = arg1[0x189]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x189] = 0

arg1[0x1a3] = &sys40::CDebugMode::`vftable'{for `IDebugMode'}
void* var_10 = &arg1[0x19d]
var_4.b = 0x15
sub_5623d0(&arg1[0x19d])
int32_t eax_4 = arg1[0x19d]

if (eax_4 != 0)
    int32_t var_30_1 = eax_4
    sub_6b4d5b()

arg1[0x19d] = 0
arg1[0x19e] = 0
arg1[0x19f] = 0
arg1[0x19a] = &sys40::CJaffaDebug::`vftable'{for `IJaffaDebug'}

if (arg1[0x198] u>= 0x10)
    int32_t var_30_2 = arg1[0x193]
    sub_6b4d5b()

arg1[0x197] = 0
arg1[0x198] = 0xf
arg1[0x193].b = 0
arg1[0x191] = &sys40::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x18c] = &sys40::CSetCallback::`vftable'{for `ISetCallback'}
int32_t eax_6 = arg1[0x18d]

if (eax_6 != 0)
    int32_t var_30_3 = eax_6
    sub_6b4d5b()

arg1[0x18d] = 0
arg1[0x18e] = 0
arg1[0x18f] = 0
var_4.b = 0xd
int32_t* ecx_1 = arg1[0x18a]
arg1[0x18b] = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x18a] = 0

int32_t* ecx_2 = data_797d50

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    data_797d50 = 0

var_4.b = 0xc
arg1[0x188] = &sys40::CComponentManager::`vftable'
sub_561b30()

if (arg1[0x185] u>= 0x10)
    int32_t var_30_4 = arg1[0x180]
    sub_6b4d5b()

arg1[0x185] = 0xf
arg1[0x184] = 0
arg1[0x180].b = 0

if (arg1[0x17e] u>= 0x10)
    int32_t var_30_5 = arg1[0x179]
    sub_6b4d5b()

arg1[0x17e] = 0xf
arg1[0x17d] = 0
arg1[0x179].b = 0
sub_564370(&arg1[0x175])
int32_t eax_11 = arg1[0x175]

if (eax_11 != 0)
    int32_t var_30_6 = eax_11
    sub_6b4d5b()

arg1[0x175] = 0
arg1[0x176] = 0
arg1[0x177] = 0
sub_56c2e0(&arg1[0x162])
arg1[0x160] = &sys40::CMouseCursorPos::`vftable'{for `IMouseCursorPos'}
arg1[0x15e] = &sys40::CFullScreen::`vftable'{for `IFullScreen'}
arg1[0x15c] = &sys40::CIDEWnd::`vftable'{for `IIDEWnd'}
sub_56ead0(&arg1[0x13f])
arg1[0x13e] = &sys40::LOpenWeb::`vftable'{for `IOpenWeb'}
int32_t* esi = arg1[0x13c]
arg1[0x13b] = &sys40::LTimer::`vftable'{for `ITimer'}

if (esi != 0)
    if (esi[2].b != 0)
        timeEndPeriod(*esi)
        esi[2].b = 0
    
    int32_t* var_30_8 = esi
    sub_6b4d5b()

var_4.b = 1
sub_5676b0(&arg1[0x44])
int32_t* result = sub_633cd0(&arg1[5])
HANDLE hObject = arg1[2]

if (hObject != 0)
    result = CloseHandle(hObject)

fsbase->NtTib.ExceptionList = ExceptionList
return result
