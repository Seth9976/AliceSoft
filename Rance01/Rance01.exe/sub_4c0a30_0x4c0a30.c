// 函数: sub_4c0a30
// 地址: 0x4c0a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7192a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = 0

if (arg1[4] != 0)
    int32_t var_4 = 0
    char var_64
    int32_t var_48
    int32_t edx
    sub_401940(&var_64, sub_401650(&var_48, edx, arg1, &var_48), arg1)
    int32_t var_84_1 = edx
    var_4.b = 1
    var_4.b = 2
    sub_402000(&var_64, sub_4104a0("[%d]"), 0, 0xffffffff)
    var_4.b = 1
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_80_2 = var_2c
        sub_6b4d5b()
    
    sub_402cb0(&var_64, 0x756350, 1)
    sub_402000(&var_64, &var_48, 0, 0xffffffff)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401ef0(arg2, &var_64)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_80_3 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_80_4 = var_48
        sub_6b4d5b()
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return arg2
