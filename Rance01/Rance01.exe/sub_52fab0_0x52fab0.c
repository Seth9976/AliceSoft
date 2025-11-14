// 函数: sub_52fab0
// 地址: 0x52fab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7176db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
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
sub_52fb60(&arg2[0xf], &arg1[0xf])
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
