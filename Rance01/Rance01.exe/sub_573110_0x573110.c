// 函数: sub_573110
// 地址: 0x573110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716b8e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 5
int32_t ecx = sub_573200(arg1)

if (arg1[0x52] u>= 0x10)
    int32_t var_20_1 = arg1[0x4d]
    ecx = sub_6b4d5b()

arg1[0x52] = 0xf
arg1[0x51] = 0
arg1[0x4d].b = 0
var_4.b = 3
sub_571a90(ecx, &arg1[0x45])
HGDIOBJ ho = arg1[0x38]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x38] = 0

if (arg1[0x3f] u>= 0x10)
    int32_t var_20_4 = arg1[0x3a]
    sub_6b4d5b()

arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0
sub_572a60(&arg1[0x25])
sub_572a60(&arg1[0x12])
arg1[2] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_6b2880(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
