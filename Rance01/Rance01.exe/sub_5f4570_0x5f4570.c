// 函数: sub_5f4570
// 地址: 0x5f4570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dcee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_b8
int32_t eax_2 = data_78c474 ^ &var_b8
int32_t __saved_edi
int32_t var_cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_b8 = arg1
int32_t var_84 = 0xf
int32_t var_88 = 0
char var_98 = 0
sub_401270(&var_98, nullptr, 0x72d8b1)
int32_t var_4 = 0
int32_t var_a0 = 0xf
int32_t var_a4 = 0
char var_b4 = 0
sub_401270(&var_b4, nullptr, 0x72d8b2)
var_4.b = 1
var_4.b = 2
void var_7c
sub_5ee3e0(sub_5edc70(1, arg2, &var_7c, &var_b4, 0, arg2, &var_98), var_b8 + 0x54)
sub_4329b0(&var_7c)

if (var_a0 u>= 0x10)
    int32_t var_d0_1 = var_b4.d
    sub_6b4d5b()

int32_t var_a0_1 = 0xf
int32_t var_a4_1 = 0
var_b4 = 0

if (var_84 u>= 0x10)
    int32_t var_d0_2 = var_98.d
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b8)
return result
