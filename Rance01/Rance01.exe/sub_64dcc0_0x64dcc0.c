// 函数: sub_64dcc0
// 地址: 0x64dcc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c733
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[4] = 0xffffff
arg1[5] = 0xffffff
__builtin_memset(&arg1[6], 0, 0x28)
var_4.b = 1
sub_64d620(&arg1[0x10])
arg1[0x1f] = 0
sub_64d730(&arg1[0x10])
arg1[5] = 0xffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
