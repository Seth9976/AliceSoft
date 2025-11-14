// 函数: sub_6125b0
// 地址: 0x6125b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7160a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = *arg1
arg2[6] = 0xf
arg2[5] = 0
arg2[1].b = 0
sub_401180(&arg2[1], 0xffffffff, &arg1[1], 0)
int32_t var_4 = 0
arg2[8] = arg1[8]
arg2[9] = arg1[9]
arg2[0xa] = arg1[0xa]
arg2[0xb] = arg1[0xb]
arg2[0xc] = arg1[0xc]
arg2[0xd] = arg1[0xd]
arg2[0xe] = arg1[0xe]
arg2[0x14] = 0xf
arg2[0x13] = 0
arg2[0xf].b = 0
sub_401180(&arg2[0xf], 0xffffffff, &arg1[0xf], 0)
var_4.b = 1
arg2[0x16] = arg1[0x16]
arg2[0x17] = arg1[0x17]
arg2[0x18] = arg1[0x18]
arg2[0x19] = fconvert.s(fconvert.t(arg1[0x19]))
arg2[0x1f] = 0xf
arg2[0x1e] = 0
arg2[0x1a].b = 0
sub_401180(&arg2[0x1a], 0xffffffff, &arg1[0x1a], 0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
