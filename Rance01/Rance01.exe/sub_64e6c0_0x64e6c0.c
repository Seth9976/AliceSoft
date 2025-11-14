// 函数: sub_64e6c0
// 地址: 0x64e6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c6f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(arg1, 0, 0x20)
int32_t var_4 = 0
sub_64d620(arg1 + 0x20)
__builtin_memset(arg1 + 0x5c, 0, 0x1c)
*(arg1 + 0x7c) = 0xc8c8ff
*(arg1 + 0x80) = 0xe6e6ff
sub_64d730(arg1 + 0x20)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
