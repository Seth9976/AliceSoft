// 函数: sub_549ec0
// 地址: 0x549ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
int32_t* result
int32_t ebp
int32_t edi

if (sub_54d120(ebp, arg1, edi, arg1, &var_2c, "system.OpenWeb").b != 0)
    result = (***(arg1 + 0x24))(0x74cb0c)
    
    if (result != 0)
        char* ecx_2 = var_2c.d
        
        if (var_18 u< 0x10)
            ecx_2 = &var_2c
        
        (**result)(ecx_2)
    
    if (var_18 u>= 0x10)
        int32_t var_38_3 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (var_18 u>= 0x10)
        int32_t var_38_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
