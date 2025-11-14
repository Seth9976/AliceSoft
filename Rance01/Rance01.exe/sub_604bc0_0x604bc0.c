// 函数: sub_604bc0
// 地址: 0x604bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
sub_405c90(&var_2c, arg1 + 0xc, 0x735510)
int32_t var_4 = 0

for (void** i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[7])
    sub_402000(&var_2c, i, 0, 0xffffffff)
    sub_402cb0(&var_2c, 0x73552c, 1)

char var_2d = 0
BOOL result = sub_6b2660(&var_2c, &var_2d)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_44_1 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
