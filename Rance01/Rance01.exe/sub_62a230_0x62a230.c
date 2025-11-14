// 函数: sub_62a230
// 地址: 0x62a230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715f39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
arg1 = nullptr
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
int32_t var_4 = 0
void* i = *(ebp + 0xec)
arg1 = 1

for (; i != *(ebp + 0xf0); i += 0x28)
    sub_402000(arg2, i + 0xc, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
