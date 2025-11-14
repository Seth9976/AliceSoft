// 函数: sub_4e08d0
// 地址: 0x4e08d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = arg3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x24])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

char result

if (sub_51bc80(ecx, arg2) != 0)
    result = 1
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_54_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

bool var_39 = result == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_54_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_39 == 0)
    float var_30
    int32_t ecx_2
    result, ecx_2 = sub_51bd60(&var_30)
    
    if (result == 0)
        result = 0
    else
        int32_t var_54_3 = ecx_2
        arg1(fconvert.s(fconvert.t(var_30)))
        result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
