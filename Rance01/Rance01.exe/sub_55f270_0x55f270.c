// 函数: sub_55f270
// 地址: 0x55f270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719af0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = **arg1
var_54 = arg3
int128_t* result = eax_6(eax_4)
void* eax_8

if (result != 0)
    char* result_1 = result
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char i
    
    do
        i = *result_1
        result_1 = &result_1[1]
    while (i != 0)
    sub_401270(&var_48, result_1 - &result_1[1], result)
    int32_t var_4 = 0
    void** ecx_3 = arg1[1]
    char* var_6c_2 = &var_48
    eax_8 = sub_537e90(ecx_3, *(ecx_3[5] + 4) + 0x4c)
    int32_t var_4_1 = 0xffffffff
    
    if (var_34_1 u>= 0x10)
        int32_t var_6c_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

if (result == 0 || eax_8 == 0)
    result.b = 0
else
    int32_t var_18_1 = 0xf
    char* eax_10 = arg2
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *eax_10
        eax_10 = &eax_10[1]
    while (i_1 != 0)
    sub_401270(&var_2c, eax_10 - &eax_10[1], arg2)
    int32_t var_4_2 = 1
    int32_t eax_12 = sub_55b020(eax_8, &var_2c)
    int32_t var_4_3 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_6c_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t eax_13 = var_54
    int32_t edx_3 = *(*arg1 + 0x10)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    result = edx_3(eax_12, eax_13)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
