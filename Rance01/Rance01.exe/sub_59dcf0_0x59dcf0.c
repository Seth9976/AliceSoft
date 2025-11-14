// 函数: sub_59dcf0
// 地址: 0x59dcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = *(arg2 + 0x10)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
void* result

if (sub_59db20(arg2, &var_48, 1).b != 0)
    char* eax_6 = arg1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *eax_6
        eax_6 = &eax_6[1]
    while (i != 0)
    sub_401270(&var_2c, eax_6 - &eax_6[1], arg1)
    int32_t* ecx_2 = var_2c.d
    
    if (var_18_1 u< 0x10)
        ecx_2 = &var_2c
    
    int32_t eax_8 = var_38
    
    if (var_38 u>= var_1c_1)
        eax_8 = var_1c_1
    
    int32_t* edx_2 = var_48.d
    
    if (var_34 u< 0x10)
        edx_2 = &var_48
    
    result = sub_402320(eax_8, edx_2, ecx_2, eax_8)
    bool cond:1_1 = result != 0
    
    if (result == 0)
        if (var_38 u>= var_1c_1)
            result.b = var_38 != var_1c_1
        else
            result = 0xffffffff
        
        cond:1_1 = result != 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_64_4 = var_2c.d
        sub_6b4d5b()
    
    if (cond:1_1 == 0)
        if (var_34 u>= 0x10)
            int32_t var_64_6 = var_48.d
            sub_6b4d5b()
        
        result.b = 1
    else
        *(arg2 + 0x10) = var_4c
        
        if (var_34 u< 0x10)
            result.b = 0
        else
            int32_t var_64_5 = var_48.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_34 u>= 0x10)
        int32_t var_64_1 = var_48.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
