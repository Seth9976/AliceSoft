// 函数: sub_6522b0
// 地址: 0x6522b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1bc) = arg2
*(arg1 + 0x1d8) = arg2
*(arg1 + 0x178) = *(arg1 + 0x5c)
*(arg1 + 0x150) = *(arg1 + 0x60)
sub_64d730(arg1 + 0x13c)
*(arg1 + 0xd8) = *(arg1 + 0x5c)
int32_t eax_9 = *(arg1 + 0x60)
*(arg1 + 0x198) = 0xffffff
*(arg1 + 0xd4) = eax_9
*(arg1 + 0xf0) = eax_9
sub_64d730(arg1 + 0xdc)
*(arg1 + 0xec) = 0xffffff
sub_64d730(arg1 + 0xdc)
*(arg1 + 0xac) = 0xb4b4b4
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 6, 0x731a30)
int32_t var_4 = 0
sub_64e1b0(arg1 + 0x9c, &var_48)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_1 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
sub_401270(&var_48, 8, 0x731a38)
int32_t var_4_2 = 1
sub_64e1b0(arg1 + 0x9c, &var_48)
int32_t var_4_3 = 0xffffffff

if (var_34_1 u>= 0x10)
    int32_t var_64_3 = var_48.d
    sub_6b4d5b()

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 8, 0x731a44)
int32_t var_4_4 = 2
sub_64e1b0(arg1 + 0x9c, &var_2c)

if (var_18 u>= 0x10)
    int32_t var_64_5 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return 0
