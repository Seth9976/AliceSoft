// 函数: sub_62f030
// 地址: 0x62f030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cf01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::CTabWindow::`vftable'{for `win32only::CWindowCallback'}
sub_6b3760(&arg1[1])
int32_t var_4 = 0
arg1[0x25] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x26].b = 0
__builtin_memset(&arg1[0x27], 0, 0x2c)
arg1[0x32] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x33].b = 0
__builtin_memset(&arg1[0x34], 0, 0x2c)
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x45] = 0
var_4.b = 3
arg1[0x49] = 0
arg1[0x4a] = 0x10
arg1[0x50] = 0xf
arg1[0x4f] = 0
arg1[0x4b].b = 0
sub_401270(&arg1[0x4b], 0xd, 0x733ccc)
arg1[0x52] = 0x190
arg1[0x53].w = 0
var_4.b = 4
arg1[0x54] = 0
arg1[0x55] = 0x10
arg1[0x5b] = 0xf
arg1[0x5a] = 0
arg1[0x56].b = 0
sub_401270(&arg1[0x56], 0xd, 0x733ccc)
arg1[0x5d] = 0x190
arg1[0x5e].w = 0
arg1[0x3f] = 2
arg1[0x42] = 2
arg1[0x5f] = 8
arg1[0x40] = 1
arg1[0x41] = 0x14
arg1[0x47] = 0xffffffff
arg1[0x48] = 0xffffffff
uint32_t eax_3 = GetSysColor(COLOR_BTNSHADOW)
arg1[0x60] = zx.d(eax_3.b)
arg1[0x61] = zx.d((eax_3 u>> 8).b)
arg1[0x62] = zx.d((eax_3 u>> 0x10).b)
uint32_t eax_5 = GetSysColor(COLOR_BTNFACE)
arg1[0x63] = zx.d(eax_5.b)
arg1[0x64] = zx.d((eax_5 u>> 8).b)
arg1[0x65] = zx.d((eax_5 u>> 0x10).b)
uint32_t eax_7 = GetSysColor(COLOR_3DLIGHT)
arg1[0x66] = zx.d(eax_7.b)
arg1[0x67] = zx.d((eax_7 u>> 8).b)
arg1[0x68] = zx.d((eax_7 u>> 0x10).b)
uint32_t eax_9 = GetSysColor(COLOR_BTNHIGHLIGHT)
arg1[0x69] = zx.d(eax_9.b)
arg1[0x6a] = zx.d((eax_9 u>> 8).b)
arg1[0x6b] = zx.d((eax_9 u>> 0x10).b)
arg1[0x6c] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
