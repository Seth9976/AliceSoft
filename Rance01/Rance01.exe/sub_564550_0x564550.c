// 函数: sub_564550
// 地址: 0x564550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7280a7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &IInitMainSystem::`vftable'
*arg1 = &sys40::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &sys40::CMainSystem::`vftable'{for `IInitMainSystem'}
arg1[2] = 0
int32_t var_4 = 0
arg1[3].b = 0
arg1[4] = 0
sub_633b70(&arg1[5])
var_4.b = 1
sub_5672f0(&arg1[0x44])
var_4.b = 2
arg1[0x13a].b = 0
arg1[0x13b] = &sys40::LTimer::`vftable'{for `ITimer'}
void* const eax_4 = operator new(9)

if (eax_4 == 0)
    eax_4 = nullptr
else
    *(eax_4 + 8) = 0

arg1[0x13c] = eax_4
arg1[0x13d] = 0
arg1[0x13e] = &sys40::LOpenWeb::`vftable'{for `IOpenWeb'}
arg1[0x13f] = &sys40::CSys4xPath::`vftable'{for `ISys4xPath'}
arg1[0x144] = 0
arg1[0x145] = 0xf
arg1[0x140].b = 0
arg1[0x14c] = 0xf
arg1[0x14b] = 0
arg1[0x147].b = 0
arg1[0x153] = 0xf
arg1[0x152] = 0
arg1[0x14e].b = 0
arg1[0x15a] = 0xf
arg1[0x159] = 0
arg1[0x155].b = 0
arg1[0x15c] = &sys40::CIDEWnd::`vftable'{for `IIDEWnd'}
arg1[0x15d] = 0
arg1[0x15e] = &sys40::CFullScreen::`vftable'{for `IFullScreen'}
arg1[0x15f] = 0
arg1[0x160] = &sys40::CMouseCursorPos::`vftable'{for `IMouseCursorPos'}
arg1[0x161] = 0
var_4.b = 8
sub_56c220(&arg1[0x162])
arg1[0x175] = 0
arg1[0x176] = 0
arg1[0x177] = 0
arg1[0x17e] = 0xf
arg1[0x17d] = 0
arg1[0x179].b = 0
arg1[0x185] = 0xf
arg1[0x184] = 0
arg1[0x180].b = 0
arg1[0x188] = &sys40::CComponentManager::`vftable'
arg1[0x189] = 0
arg1[0x18a] = 0
arg1[0x18b] = 0
arg1[0x18c] = &sys40::CSetCallback::`vftable'{for `ISetCallback'}
arg1[0x18d] = 0
arg1[0x18e] = 0
arg1[0x18f] = 0
arg1[0x191] = &sys40::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x192] = 0x64
arg1[0x198] = 0xf
arg1[0x197] = 0
arg1[0x193].b = 0
arg1[0x19a] = &sys40::CJaffaDebug::`vftable'{for `IJaffaDebug'}
__builtin_memset(&arg1[0x19b], 0, 0x14)
arg1[0x1a1] = 0
arg1[0x1a2] = 0
arg1[0x1a3] = &sys40::CDebugMode::`vftable'{for `IDebugMode'}
arg1[0x1a4] = &arg1[0x18a]
arg1[0x1a5].b = 0
data_797d54 = &arg1[0x44]
arg1[0x15f] = &arg1[0x44]
arg1[0x161] = &arg1[0x44]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
