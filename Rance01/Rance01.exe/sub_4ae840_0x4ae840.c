// 函数: sub_4ae840
// 地址: 0x4ae840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717e60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg2
EnterCriticalSection(*arg2)
var_38 = 1
int32_t var_4 = 0
int32_t var_2c
int32_t* eax_6 = sub_401c00(&var_2c, arg1)
var_4.b = 1
int32_t ebx = arg2[0xa]
void** eax_8 = sub_4af030(&arg2[9], eax_6)
void** var_30 = eax_8
char eax_10

if (eax_8 != arg2[0xa])
    eax_10 = sub_405dd0(&eax_8[3], eax_6)

void*** eax_11

if (eax_8 == arg2[0xa] || eax_10 != 0)
    var_38.d = arg2[0xa]
    eax_11 = &var_38
else
    eax_11 = &var_30

ebx.b = *eax_11 != ebx
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_4c_3 = var_2c
    sub_6b4d5b()

LeaveCriticalSection(*arg2)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
