// 函数: sub_500130
// 地址: 0x500130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724c96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t var_d4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_c0 = arg1
void* var_48
sub_500960(arg2, &var_48, 1)
int32_t var_4 = 0
char var_80
int32_t ecx = sub_500960(arg2, &var_80, 6)
int32_t var_a4 = 0xf
int32_t var_a8 = 0
char var_b8 = 0
var_4.b = 2
char var_64
int32_t var_50
int32_t var_38
int32_t var_2c
int32_t var_18

if (var_38 != 0)
    var_4.b = 3
    var_4.b = 4
    ecx = sub_401ef0(&var_b8, sub_4c1d70(&var_48, &var_64, sub_401800(ecx, arg1, &var_2c), &var_64))
    
    if (var_50 u>= 0x10)
        int32_t var_d8_2 = var_64.d
        ecx = sub_6b4d5b()
    
    var_50 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_d8_3 = var_2c
        ecx = sub_6b4d5b()

int32_t var_88 = 0xf
int32_t var_8c = 0
char var_9c = 0
var_4.b = 5
int32_t var_70

if (var_70 != 0)
    var_4.b = 6
    var_4.b = 7
    sub_401ef0(&var_9c, sub_4c1d70(&var_80, &var_64, sub_401800(ecx, var_c0, &var_2c), &var_64))
    
    if (var_50 u>= 0x10)
        int32_t var_d8_5 = var_64.d
        sub_6b4d5b()
    
    var_4.b = 5
    int32_t var_50_1 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_d8_6 = var_2c
        sub_6b4d5b()

char result
int32_t var_6c
int32_t var_34

if (sub_4c0620(arg2 + 0x30, &var_9c, &var_b8, arg3) != 0)
    if (var_88 u>= 0x10)
        int32_t var_d8_12 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_2 = 0xf
    int32_t var_8c_2 = 0
    var_9c = 0
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_13 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_a4_2 = 0xf
    int32_t var_a8_2 = 0
    var_b8 = 0
    
    if (var_6c u>= 0x10)
        int32_t var_d8_14 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    
    if (var_34 u>= 0x10)
        void* var_d8_15 = var_48
        sub_6b4d5b()
    
    result = 1
else
    if (var_88 u>= 0x10)
        int32_t var_d8_8 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    var_9c = 0
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_9 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    var_b8 = 0
    
    if (var_6c u>= 0x10)
        int32_t var_d8_10 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    
    if (var_34 u>= 0x10)
        void* var_d8_11 = var_48
        sub_6b4d5b()
    
    result = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return result
