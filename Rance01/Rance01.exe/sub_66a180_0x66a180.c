// 函数: sub_66a180
// 地址: 0x66a180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t var_30 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
sub_66a040(&var_2c, arg3)
int32_t var_4 = 0
void* result = sub_669840(arg1, &var_2c)
int32_t var_18

if (result s<= 0)
label_66a1f0:
    
    if (var_18 u>= 0x10)
        int32_t var_34_2 = var_2c
        sub_6b4d5b()
    
    result.b = 0
else
    int32_t ecx_1 = *arg1
    
    if ((arg1[1] - ecx_1) s>> 2 s< result)
        goto label_66a1f0
    
    result = *(ecx_1 + (result << 2) - 4)
    
    if (result == 0)
        goto label_66a1f0
    
    *arg2 = *(result + 4)
    
    if (var_18 u>= 0x10)
        int32_t var_34_3 = var_2c
        sub_6b4d5b()
    
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
