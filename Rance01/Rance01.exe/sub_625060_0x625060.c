// 函数: sub_625060
// 地址: 0x625060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718fa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_4 = 0
int32_t arg_8
int32_t* result = (*(**(arg1 + 8) + 0x1c))(arg_8)
bool cond:0_1

if (result == 0)
    cond:0_1 = var_34 u< 0x10
label_62518d:
    
    if (not(cond:0_1))
        int32_t var_60_6 = var_48.d
        result = sub_6b4d5b()
else
    int32_t* result_1 = result
    void* esi_1 = result_1 + 1
    char i
    
    do
        i = *result_1
        result_1 += 1
    while (i != 0)
    sub_401270(&var_48, result_1 - esi_1, result)
    char* edx_1 = var_48.d
    
    if (var_34 u< 0x10)
        edx_1 = &var_48
    
    char* eax_7 = edx_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *eax_7
        eax_7 = &eax_7[1]
    while (i_1 != 0)
    sub_401270(&var_2c, eax_7 - &eax_7[1], edx_1)
    result = sub_61e750(arg1 + 0x44, &var_2c)
    int32_t* result_2 = result
    
    if (var_18_1 u>= 0x10)
        int32_t var_60_4 = var_2c.d
        result = sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (result_2 == 0xffffffff || result_2 s>= (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 2)
        cond:0_1 = var_34 u< 0x10
        goto label_62518d
    
    if (*(*(arg1 + 0x64) + (result_2 << 2)) != 0)
        result = sub_416780(&arg_8, arg1 + 0x34)
    
    if (var_34 u>= 0x10)
        int32_t var_60_5 = var_48.d
        result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
