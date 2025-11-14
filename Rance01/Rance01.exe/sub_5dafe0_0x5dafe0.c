// 函数: sub_5dafe0
// 地址: 0x5dafe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71df16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = 0
int32_t var_4 = 0
sub_6b3760(&arg1[2])
var_4.b = 1
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x29] = 0
sub_5dc9a0(&arg1[0x2a])
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0
arg1[0x51] = 0xf
arg1[0x50] = 0
arg1[0x4c].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
