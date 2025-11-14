// 函数: sub_4ed8b0
// 地址: 0x4ed8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72252b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
sub_4b9c10(&arg1[1])
int32_t var_4 = 0
long double x87_r6 = float.t(0)
arg1[0x83].b = 0
arg1[0x84] = fconvert.s(x87_r6)
arg1[0x85] = fconvert.s(x87_r6)
arg1[0x86] = fconvert.s(x87_r6)
arg1[0x87] = fconvert.s(x87_r6)
arg1[0x88] = fconvert.s(x87_r6)
arg1[0x89] = fconvert.s(x87_r6)
arg1[0x8a] = fconvert.s(x87_r6)
arg1[0x8b] = fconvert.s(x87_r6)
arg1[0x8c] = fconvert.s(x87_r6)
arg1[0x8d] = fconvert.s(x87_r6)
arg1[0x8e] = fconvert.s(x87_r6)
arg1[0x8f] = fconvert.s(x87_r6)
arg1[0x90] = fconvert.s(x87_r6)
int80_t result = sub_4dafb0(&arg1[0x91], &arg1[0x91])
arg1[0xa6] = 0
arg1[0xa7] = 0
arg1[0xa8] = 0
arg1[0xa9] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
