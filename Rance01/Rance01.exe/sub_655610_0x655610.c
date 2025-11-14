// 函数: sub_655610
// 地址: 0x655610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c4f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401270(&var_48, 0x19, 0x7322e4)
int32_t var_4 = 0
sub_405220(&var_48, arg2)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_1 = var_48.d
    sub_6b4d5b()

int32_t var_60_2 = *(arg1 + 0x2c)
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x732300), arg2)
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_4 = var_48.d
    sub_6b4d5b()

int32_t var_60_5 = *(arg1 + 0x30)
int32_t var_4_4 = 2
int32_t* result = sub_405150(sub_4104a0(0x732310), arg2)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_60_7 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
