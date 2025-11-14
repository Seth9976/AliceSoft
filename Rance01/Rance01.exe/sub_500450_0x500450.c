// 函数: sub_500450
// 地址: 0x500450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = arg3
void* var_48
char* result
int32_t ecx
result, ecx = sub_500960(arg2, &var_48, 7)
int32_t var_4 = 0
int32_t var_38
int32_t var_34

if (var_38 != 0)
    var_4.b = 1
    char var_64
    char var_2c
    sub_4c1d70(&var_48, &var_64, sub_401800(ecx, arg1, &var_2c), &var_64)
    var_4.b = 3
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_80_3 = var_2c.d
        sub_6b4d5b()
    
    void* ecx_3 = var_68
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    result = sub_4c0fd0(ecx_3, &var_64, 1)
    *(arg2 + 0x40) = result
    int32_t var_50
    
    if (result != 0)
        if (var_50 u>= 0x10)
            int32_t var_80_6 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (var_34 u< 0x10)
            result.b = 1
        else
            void* var_80_7 = var_48
            sub_6b4d5b()
            result.b = 1
    else
        if (var_50 u>= 0x10)
            int32_t var_80_4 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        
        if (var_34 u>= 0x10)
            void* var_80_5 = var_48
            sub_6b4d5b()
        
        result.b = 0
else if (var_34 u< 0x10)
    result.b = 1
else
    void* var_80_1 = var_48
    sub_6b4d5b()
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
