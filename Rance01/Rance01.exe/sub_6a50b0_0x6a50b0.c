// 函数: sub_6a50b0
// 地址: 0x6a50b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bd93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[4] = 0
arg1[5] = 0xffffff
__builtin_memset(&arg1[6], 0, 0x38)
var_4.b = 1
arg1[0x14] = 0x10
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
sub_401270(&arg1[0x15], 0xd, 0x72d2b8)
arg1[0x1c] = 0x190
arg1[0x1d].w = 0
arg1[0x1e] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
