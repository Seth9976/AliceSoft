// 函数: sub_614930
// 地址: 0x614930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d7ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_618120(arg1)
int32_t var_4 = 0
*arg1 = &dpanalysis::CTabWindow::`vftable'{for `dpanalysis::CWindow'}
arg1[0x27] = &dpanalysis::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x28].b = 0
__builtin_memset(&arg1[0x29], 0, 0x30)
arg1[0x35] = &dpanalysis::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x36].b = 0
__builtin_memset(&arg1[0x37], 0, 0x30)
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49] = 0
var_4.b = 3
arg1[0x4d] = 0
arg1[0x4e] = 0x10
arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0
sub_401270(&arg1[0x4f], 0xd, 0x7351a0)
arg1[0x56] = 0x190
arg1[0x57].w = 0
var_4.b = 4
arg1[0x58] = 0
arg1[0x59] = 0x10
arg1[0x5f] = 0xf
arg1[0x5e] = 0
arg1[0x5a].b = 0
sub_401270(&arg1[0x5a], 0xd, 0x7351a0)
arg1[0x61] = 0x190
arg1[0x62].w = 0
arg1[0x43] = 2
arg1[0x46] = 2
arg1[0x63] = 8
arg1[0x44] = 1
arg1[0x45] = 0x14
arg1[0x4b] = 0xffffffff
arg1[0x4c] = 0xffffffff
uint32_t eax_3 = GetSysColor(COLOR_BTNSHADOW)
arg1[0x64] = zx.d(eax_3.b)
arg1[0x65] = zx.d((eax_3 u>> 8).b)
arg1[0x66] = zx.d((eax_3 u>> 0x10).b)
uint32_t eax_5 = GetSysColor(COLOR_BTNFACE)
arg1[0x67] = zx.d(eax_5.b)
arg1[0x68] = zx.d((eax_5 u>> 8).b)
arg1[0x69] = zx.d((eax_5 u>> 0x10).b)
uint32_t eax_7 = GetSysColor(COLOR_3DLIGHT)
arg1[0x6a] = zx.d(eax_7.b)
arg1[0x6b] = zx.d((eax_7 u>> 8).b)
arg1[0x6c] = zx.d((eax_7 u>> 0x10).b)
uint32_t eax_9 = GetSysColor(COLOR_BTNHIGHLIGHT)
arg1[0x6d] = zx.d(eax_9.b)
arg1[0x6e] = zx.d((eax_9 u>> 8).b)
arg1[0x6f] = zx.d((eax_9 u>> 0x10).b)
arg1[0x70] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
