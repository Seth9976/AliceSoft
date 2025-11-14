// 函数: sub_56ee30
// 地址: 0x56ee30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e8c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
sub_586e90(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 9, "AliceSoft")
var_4.b = 1
sub_5870d0(&var_48)
sub_402000(&var_48, &var_2c, 0, 0xffffffff)
var_4.b = 0

if (var_18 u>= 0x10)
    int32_t var_64_1 = var_2c.d
    sub_6b4d5b()

sub_5870d0(&var_48)
sub_402000(&var_48, var_4c, 0, 0xffffffff)
var_4.b = 2
int32_t* result = sub_401ef0(arg1 + 0x3c, sub_401800(sub_604500(&var_48), &var_48, &var_2c))

if (var_18 u>= 0x10)
    int32_t var_64_3 = var_2c.d
    result = sub_6b4d5b()

if (var_34 u>= 0x10)
    int32_t var_64_4 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
