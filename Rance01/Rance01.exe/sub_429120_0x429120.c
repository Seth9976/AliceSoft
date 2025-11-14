// 函数: sub_429120
// 地址: 0x429120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_esi
int32_t var_44 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_6 = sub_429a30(arg2, &var_2c)
int32_t var_4 = 0
int32_t ebp = *(arg1 + 0x2c)
void** eax_8 = sub_429b30(arg1 + 0x28, eax_6)
void** var_30 = eax_8
char eax_10

if (eax_8 != *(arg1 + 0x2c))
    eax_10 = sub_405dd0(&eax_8[3], eax_6)

int32_t* result

if (eax_8 == *(arg1 + 0x2c) || eax_10 != 0)
    var_34 = *(arg1 + 0x2c)
    result = &var_34
else
    result = &var_30

int32_t* ebx
ebx.b = *result != ebp
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_48_1 = var_2c
    sub_6b4d5b()

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
