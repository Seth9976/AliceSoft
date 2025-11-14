// 函数: sub_55ade0
// 地址: 0x55ade0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg3, 0)
*(arg2 + 0x1c) = 0
*(arg2 + 0x20) = 0
*(arg2 + 0x24) = 0

if (&arg2[0x1c] != arg1)
    *(arg2 + 0x1c) = 0
    *(arg2 + 0x20) = 0
    *(arg2 + 0x24) = 0
    *(arg2 + 0x1c) = *arg1
    *(arg2 + 0x20) = arg1[1]
    *(arg2 + 0x24) = arg1[2]
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
