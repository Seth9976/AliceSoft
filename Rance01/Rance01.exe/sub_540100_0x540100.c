// 函数: sub_540100
// 地址: 0x540100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7266e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_ebx
int32_t var_54 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t result
int32_t ebp
int32_t edi

if (sub_54d120(ebp, arg1, edi, arg1, &var_2c, "STOI").b != 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char* var_58_2 = &var_48
    var_4.b = 1
    sub_540230(&var_2c)
    char* eax_5 = var_48.d
    var_4c = 0
    
    if (var_34_1 u< 0x10)
        eax_5 = &var_48
    
    int32_t* var_58_3 = &var_4c
    sub_6b51b5(eax_5, 0x757588)
    **(arg1 + 0x2b0) = var_4c
    *(arg1 + 0x2b0) += 4
    
    if (var_34_1 u>= 0x10)
        int32_t var_58_4 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_58_5 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (var_18 u>= 0x10)
        int32_t var_58_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
