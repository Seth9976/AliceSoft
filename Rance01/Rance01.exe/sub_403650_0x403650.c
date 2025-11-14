// 函数: sub_403650
// 地址: 0x403650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_48, eax_5 - &eax_5[1], arg2)
int32_t var_4 = 0
int32_t var_2c
sub_4042e0(&var_48, &var_2c)
var_4.b = 2

if (var_34 u>= 0x10)
    int32_t var_68_1 = var_48.d
    sub_6b4d5b()

int32_t var_38_1 = 0
var_48 = 0
int32_t ebx = *(arg1 + 0x78)
int32_t var_34_1 = 0xf
void** eax_9 = sub_4055d0(arg1 + 0x74, &var_2c)
void** var_4c = eax_9
char eax_11

if (eax_9 != *(arg1 + 0x78))
    eax_11 = sub_405dd0(&eax_9[3], &var_2c)

void*** result

if (eax_9 == *(arg1 + 0x78) || eax_11 != 0)
    var_50 = *(arg1 + 0x78)
    result = &var_50
else
    result = &var_4c

ebx.b = *result != ebx
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_68_3 = var_2c
    sub_6b4d5b()

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
