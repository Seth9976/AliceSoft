// 函数: sub_61fdb0
// 地址: 0x61fdb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d35e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_62a700(arg1)
int32_t var_4 = 0
*arg1 = &dpvariable::CTabWindow::`vftable'{for `dpvariable::CWindow'}
arg1[0x2c] = &dpvariable::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x2d].b = 0
__builtin_memset(&arg1[0x2e], 0, 0x30)
arg1[0x3a] = &dpvariable::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x3b].b = 0
__builtin_memset(&arg1[0x3c], 0, 0x30)
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e] = 0
var_4.b = 3
arg1[0x52] = 0
arg1[0x53] = 0x10
arg1[0x59] = 0xf
arg1[0x58] = 0
arg1[0x54].b = 0
sub_401270(&arg1[0x54], 0xd, 0x734274)
arg1[0x5b] = 0x190
arg1[0x5c].w = 0
var_4.b = 4
arg1[0x5d] = 0
arg1[0x5e] = 0x10
arg1[0x64] = 0xf
arg1[0x63] = 0
arg1[0x5f].b = 0
sub_401270(&arg1[0x5f], 0xd, 0x734274)
arg1[0x66] = 0x190
arg1[0x67].w = 0
arg1[0x48] = 2
arg1[0x4b] = 2
arg1[0x68] = 8
arg1[0x49] = 1
arg1[0x4a] = 0x14
arg1[0x50] = 0xffffffff
arg1[0x51] = 0xffffffff
uint32_t eax_3 = GetSysColor(COLOR_BTNSHADOW)
arg1[0x69] = zx.d(eax_3.b)
arg1[0x6a] = zx.d((eax_3 u>> 8).b)
arg1[0x6b] = zx.d((eax_3 u>> 0x10).b)
uint32_t eax_5 = GetSysColor(COLOR_BTNFACE)
arg1[0x6c] = zx.d(eax_5.b)
arg1[0x6d] = zx.d((eax_5 u>> 8).b)
arg1[0x6e] = zx.d((eax_5 u>> 0x10).b)
uint32_t eax_7 = GetSysColor(COLOR_3DLIGHT)
arg1[0x6f] = zx.d(eax_7.b)
arg1[0x70] = zx.d((eax_7 u>> 8).b)
arg1[0x71] = zx.d((eax_7 u>> 0x10).b)
uint32_t eax_9 = GetSysColor(COLOR_BTNHIGHLIGHT)
arg1[0x72] = zx.d(eax_9.b)
arg1[0x73] = zx.d((eax_9 u>> 8).b)
arg1[0x74] = zx.d((eax_9 u>> 0x10).b)
arg1[0x75] = 0
arg1[0x77] = 0
arg1[0x78] = 0x14
arg1[0x79] = 0xc8
arg1[0x76] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
