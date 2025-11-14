// 函数: sub_6b2490
// 地址: 0x6b2490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720a4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CAliceRunPatch::VTable** var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &win32only::CAliceRunPatch::`vftable'
arg1[6] = 0xf
arg1[5] = 0
var_4c = arg1
arg1[1].b = 0
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_4.b = 1
sub_401180(&var_48, 0xffffffff, &data_79341c, 0)
sub_587150(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x11, "AliceRunPatch.dll")
var_4.b = 2
sub_5870d0(&var_48)
sub_402000(&var_48, &var_2c, 0, 0xffffffff)
var_4.b = 1

if (var_18 u>= 0x10)
    int32_t var_64_1 = var_2c.d
    sub_6b4d5b()

sub_401180(&arg1[1], 0xffffffff, &var_48, 0)

if (var_34 u>= 0x10)
    int32_t var_64_2 = var_48.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return arg1
