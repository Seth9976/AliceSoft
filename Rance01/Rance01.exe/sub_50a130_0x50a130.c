// 函数: sub_50a130
// 地址: 0x50a130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71176e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(&arg1[3], 0, 0x40)
__builtin_memset(&arg1[0x15], 0, 0x40)
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = 0
int32_t var_4 = 0
long double x87_r7 = float.t(0)
*arg1 = fconvert.s(x87_r7)
arg1[0x33] = 0
arg1[1] = fconvert.s(x87_r7)
arg1[2] = fconvert.s(x87_r7)
arg1[0x13] = fconvert.s(x87_r7)
arg1[0x14] = fconvert.s(x87_r7)
__builtin_memcpy(&arg1[3], 0x758a88, 0x40)
sub_50a360(__builtin_memcpy(&arg1[0x15], 0x758a88, 0x40), &arg1[0x26])
arg1[0x25] = 1
arg1[0x2c] = 1
arg1[0x2d] = 1
arg1[0x2e] = 1
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x36] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
