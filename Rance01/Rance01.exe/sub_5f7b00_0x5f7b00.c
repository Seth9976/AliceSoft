// 函数: sub_5f7b00
// 地址: 0x5f7b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t var_34 = data_78c474 ^ &result_1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t eax_5 = arg_4
int32_t* result

if (eax_5 s> 0)
    sub_42e070(arg1 + 0x14, &result_1, &arg_4)
    result = result_1
    
    if (result == *(arg1 + 0x18))
        result.b = 0
    else
        result = sub_5f58d0(result[4], arg2)
else
    int32_t var_38 = eax_5
    char* eax_6
    void* ecx
    eax_6, ecx = sub_4104a0(0x7355d0)
    char* var_38_1 = eax_6
    int32_t var_4 = 0
    sub_5f7bb0(ecx)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_38_2 = var_2c
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
