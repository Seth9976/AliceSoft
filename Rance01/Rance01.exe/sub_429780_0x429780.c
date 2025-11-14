// 函数: sub_429780
// 地址: 0x429780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_2c
int32_t* eax_6 = sub_429a30(arg2, &var_2c)
int32_t var_4 = 0
void** eax_8 = sub_429b30(arg1 + 0x58, eax_6)
void** var_30 = eax_8
void*** eax_11

if (eax_8 == *(arg1 + 0x5c))
    var_34 = *(arg1 + 0x5c)
    eax_11 = &var_34
else if (sub_405dd0(&eax_8[3], eax_6) != 0)
    var_34 = *(arg1 + 0x5c)
    eax_11 = &var_34
else
    eax_11 = &var_30

void** esi_1 = *eax_11
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_48_1 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t result

if (esi_1 != *(arg1 + 0x5c))
    result = esi_1[0xa]
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
