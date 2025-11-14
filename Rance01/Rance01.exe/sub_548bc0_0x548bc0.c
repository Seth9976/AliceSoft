// 函数: sub_548bc0
// 地址: 0x548bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_ebx
int32_t var_34 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 0x28c)
int32_t eax_5 = *ecx
*(arg1 + 0x28c) = &ecx[1]
char result
int32_t edx_1
result, edx_1 = sub_537d30(&var_2c, arg1 + 0x4c, eax_5, &var_2c)

if (result != 0)
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_38_2 = eax_6
    int32_t ebx
    ebx.b = sub_53d1c0(eax_6, edx_1, arg1, 0x750464)
    
    if (var_18 u>= 0x10)
        int32_t var_38_3 = var_2c.d
        sub_6b4d5b()
    
    result = ebx.b
else
    if (var_18 u>= 0x10)
        int32_t var_38_1 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
