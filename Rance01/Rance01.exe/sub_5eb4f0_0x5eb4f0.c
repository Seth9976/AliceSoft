// 函数: sub_5eb4f0
// 地址: 0x5eb4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71968b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = fconvert.s(fconvert.t(arg3))
arg2[2] = arg5
arg2[1] = fconvert.s(fconvert.t(arg4))
arg2[3] = arg1
arg2[9] = 0xf
arg2[8] = 0
arg2[4].b = 0
sub_401270(&arg2[4], nullptr, 0x72d8e2)
int32_t var_4 = 0
arg2[0x10] = 0xf
arg2[0xf] = 0
arg2[0xb].b = 0
sub_401180(&arg2[0xb], 0xffffffff, arg6, 0)
arg2[0x12].b = 0
arg2[0x13] = 0
arg2[0x14] = 0
arg2[0x15] = 0
arg2[0x17] = 0
arg2[0x18] = 0
arg2[0x19] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
