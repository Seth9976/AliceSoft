// 函数: sub_6732f0
// 地址: 0x6732f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718876
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &mainex::CMainEXFile::`vftable'{for `IEXFile'}
arg1[1] = 0x3b9aca00
arg1[2] = 1
arg1[3] = 0
arg1[4] = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
sub_401270(&arg1[5], nullptr, 0x72d337)
int32_t var_4 = 0
arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
sub_401270(&arg1[0xc], nullptr, 0x72d349)
var_4.b = 1
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
sub_401270(&arg1[0x13], nullptr, 0x72d34a)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
