// 函数: sub_4bf2b0
// 地址: 0x4bf2b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7152fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6].b = arg2[6].b
arg1[7] = fconvert.s(fconvert.t(arg2[7]))
arg1[8] = fconvert.s(fconvert.t(arg2[8]))
arg1[9] = fconvert.s(fconvert.t(arg2[9]))
arg1[0xa] = fconvert.s(fconvert.t(arg2[0xa]))
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd].b = arg2[0xd].b
sub_6b05e0(&arg1[0xe], &arg2[0xe])
int32_t var_4 = 0
sub_4bf370(&arg1[0x12], &arg2[0x12])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
