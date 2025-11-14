// 函数: sub_635140
// 地址: 0x635140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg2 + 0x10)
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
char result

if (sub_634ee0(arg2) != 0)
    if (sub_402680(arg1, &var_2c) != 0)
        if (var_18 u>= 0x10)
            int32_t var_3c_3 = var_2c.d
            sub_6b4d5b()
        
        result = 1
    else
        *(arg2 + 0x10) = ebx
        
        if (var_18 u< 0x10)
            result = 0
        else
            int32_t var_3c_2 = var_2c.d
            sub_6b4d5b()
            result = 0
else
    if (var_18 u>= 0x10)
        int32_t var_3c_1 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
