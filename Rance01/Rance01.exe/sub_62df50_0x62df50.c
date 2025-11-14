// 函数: sub_62df50
// 地址: 0x62df50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724398
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &IJaffaDebugPlugin::`vftable'{for `IInterface'}
*arg1 = &dplogviewer::COutputLog::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &dplogviewer::COutputLog::`vftable'{for `IJaffaDebugPlugin'}
arg1[2] = 1
sub_6b3760(&arg1[3])
int32_t var_4 = 0
arg1[0x27] = 0
sub_62f030(&arg1[0x28])
arg1[0x95] = 0
arg1[0x96] = 0
arg1[0x97] = 0
var_4.b = 2
arg1[0x99] = sub_62e630(arg1, "Asra")
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
