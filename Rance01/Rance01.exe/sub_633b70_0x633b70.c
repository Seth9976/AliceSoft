// 函数: sub_633b70
// 地址: 0x633b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718df4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &startup::CIniFile::`vftable'{for `ISys40Ini2'}
arg1[1] = 1
arg1[2] = 0x320
arg1[3] = 0x258
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t var_4 = 0
arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
var_4.b = 1
arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
sub_401270(&arg1[0x12], 8, "code.jab")
var_4.b = 2
arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0
sub_401270(&arg1[0x19], 0xa, "Sys40Mutex")
var_4.b = 3
arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
sub_401270(&arg1[0x20], 7, "Sys43VM")
var_4.b = 4
arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
sub_401270(&arg1[0x27], 3, 0x733798)
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
var_4.b = 7
arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
sub_401270(&arg1[0x36], 8, "SaveData")
arg1[0x3d].b = 0
arg1[0x3e] = 0x64
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
