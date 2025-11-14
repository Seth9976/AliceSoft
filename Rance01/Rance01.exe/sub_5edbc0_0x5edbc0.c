// 函数: sub_5edbc0
// 地址: 0x5edbc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71968b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = arg4
arg3[1] = arg1
arg3[2] = arg2
arg3[3] = arg5
arg3[9] = 0xf
arg3[8] = 0
arg3[4].b = 0
sub_401270(&arg3[4], nullptr, 0x72d8d2)
int32_t var_4 = 0
arg3[0x10] = 0xf
arg3[0xf] = 0
arg3[0xb].b = 0
sub_401180(&arg3[0xb], 0xffffffff, arg6, 0)
arg3[0x12].b = 0
arg3[0x13] = 0
arg3[0x14] = 0
arg3[0x15] = 0
arg3[0x17] = 0
arg3[0x18] = 0
arg3[0x19] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
