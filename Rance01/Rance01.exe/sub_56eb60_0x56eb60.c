// 函数: sub_56eb60
// 地址: 0x56eb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = arg2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
sub_401180(&var_48, 0xffffffff, &data_79341c, 0)
var_4.b = 1
int32_t var_64
sub_401ef0(arg1 + 4, sub_401800(sub_587150(&var_48), &var_48, &var_64))
var_4.b = 0
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_80_1 = var_64
    sub_6b4d5b()

sub_401180(arg1 + 0x20, 0xffffffff, arg1 + 4, 0)
sub_56ecf0(arg1, var_68)
int32_t var_2c
int32_t* eax_8
int32_t ecx_5
eax_8, ecx_5 = sub_405c90(&var_2c, arg1 + 0x3c, "Screenshot")
var_4.b = 2
var_4.b = 3
sub_401ef0(arg1 + 0x58, sub_401800(ecx_5, eax_8, &var_64))

if (var_50 u>= 0x10)
    int32_t var_80_3 = var_64
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_80_4 = var_2c
    sub_6b4d5b()

if (var_34 u>= 0x10)
    int32_t var_80_5 = var_48.d
    sub_6b4d5b()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
