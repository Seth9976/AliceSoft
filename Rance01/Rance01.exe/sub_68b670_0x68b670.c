// 函数: sub_68b670
// 地址: 0x68b670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71868b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = arg3
arg2[1] = arg1
arg2[2] = 0
arg2[3] = 0
arg2[4] = 0
int32_t var_4 = 0
arg2[0xb] = 0xf
arg2[0xa] = 0
arg2[6].b = 0
sub_401270(&arg2[6], nullptr, 0x72d03a)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
