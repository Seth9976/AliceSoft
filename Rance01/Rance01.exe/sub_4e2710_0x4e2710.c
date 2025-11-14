// 函数: sub_4e2710
// 地址: 0x4e2710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"[]=,=,=,=,=,=,=,=,=,=================")[0x14])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

enum MESSAGEBOX_RESULT result

if (sub_51bc80(ecx, arg1).b != 0)
    result.b = 1
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_50_1 = eax_6
    sub_4e4340(0x75561c)
    result.b = 0

bool var_35 = result.b == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_50_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_35 == 0)
    if (sub_51bea0().b == 0)
        result.b = 0
    else
        int32_t var_34
        *(arg2 + 0x30) = var_34
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
