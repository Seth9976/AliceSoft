// 函数: sub_6306f0
// 地址: 0x6306f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::CTextChildWnd::`vftable'{for `win32only::CWindowCallback'}
sub_6b3760(&arg1[1])
int32_t var_4 = 0
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0xe
arg1[0x28] = 4
arg1[0x29] = 2
arg1[0x2a] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x2b].b = 0
__builtin_memset(&arg1[0x2c], 0, 0x2c)
var_4.b = 1
sub_62b0d0(&arg1[0x37])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
