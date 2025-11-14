// 函数: sub_4e2cf0
// 地址: 0x4e2cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"[]=,=,=,=,=,=,=,=,=,=================")[0x19])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

bool result

if (sub_51bc80(ecx, arg1) != 0)
    result = true
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_4c_1 = eax_6
    sub_4e4340(0x75561c)
    result = false

bool var_31 = result == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_31 == 0)
    result = sub_51bd60(arg2 + 0x144) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
