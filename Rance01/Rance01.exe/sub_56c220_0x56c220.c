// 函数: sub_56c220
// 地址: 0x56c220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a101
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sys40::CSoundVolumeManager::`vftable'{for `IVolumeValancer'}
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
var_4.b = 1
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_401270(&arg1[0xa], 0xa, "Volume.sav")
var_4.b = 2
sub_56cde0(&arg1[1])
arg1[5] = 0
arg1[0x11] = 0
arg1[0x12] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
