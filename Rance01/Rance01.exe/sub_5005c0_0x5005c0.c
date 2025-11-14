// 函数: sub_5005c0
// 地址: 0x5005c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723fee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t var_d4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_c0 = arg3
void* var_48
char* result
int32_t ecx
result, ecx = sub_500960(arg2, &var_48, 8)
int32_t var_4 = 0
int32_t var_38
int32_t var_34
bool cond:0_1

if (var_38 != 0)
    var_4.b = 1
    char var_80
    char var_64
    sub_4c1d70(&var_48, &var_80, sub_401800(ecx, arg1, &var_64), &var_80)
    var_4.b = 3
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_d8_2 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    char var_9c
    int32_t ecx_2 = sub_500960(arg2, &var_9c, 0xb)
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    char var_b8 = 0
    var_4.b = 5
    int32_t var_8c
    
    if (var_8c == 0)
        result = sub_4c14d0(var_c0, &var_80)
    else
        var_4.b = 6
        var_4.b = 7
        int32_t var_2c
        sub_401ef0(&var_b8, sub_4c1d70(&var_9c, &var_64, sub_401800(ecx_2, arg1, &var_2c), &var_64))
        
        if (var_50_1 u>= 0x10)
            int32_t var_d8_4 = var_64.d
            sub_6b4d5b()
        
        var_4.b = 5
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_d8_5 = var_2c
            sub_6b4d5b()
        
        if (var_a8_1 == 0)
            result = sub_4c14d0(var_c0, &var_80)
        else
            result = sub_4c1720(var_c0, &var_80, &var_b8)
    
    *(arg2 + 0x44) = result
    int32_t var_88
    int32_t var_6c
    
    if (result != 0)
        if (var_a4_1 u>= 0x10)
            int32_t var_d8_11 = var_b8.d
            sub_6b4d5b()
        
        int32_t var_a4_3 = 0xf
        int32_t var_a8_3 = 0
        var_b8 = 0
        
        if (var_88 u>= 0x10)
            int32_t var_d8_12 = var_9c.d
            sub_6b4d5b()
        
        int32_t var_88_2 = 0xf
        int32_t var_8c_2 = 0
        var_9c = 0
        
        if (var_6c u>= 0x10)
            int32_t var_d8_13 = var_80.d
            sub_6b4d5b()
        
        cond:0_1 = var_34 u< 0x10
        int32_t var_6c_2 = 0xf
        int32_t var_70_2 = 0
        var_80 = 0
        goto label_500875
    
    if (var_a4_1 u>= 0x10)
        int32_t var_d8_7 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_a4_2 = 0xf
    int32_t var_a8_2 = 0
    var_b8 = 0
    
    if (var_88 u>= 0x10)
        int32_t var_d8_8 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    var_9c = 0
    
    if (var_6c u>= 0x10)
        int32_t var_d8_9 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    
    if (var_34 u>= 0x10)
        void* var_d8_10 = var_48
        sub_6b4d5b()
    
    result.b = 0
else
    cond:0_1 = var_34 u< 0x10
label_500875:
    
    if (not(cond:0_1))
        void* var_d8_14 = var_48
        sub_6b4d5b()
    
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return result
