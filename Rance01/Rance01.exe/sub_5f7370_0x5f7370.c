// 函数: sub_5f7370
// 地址: 0x5f7370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_esi
int32_t var_44 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = arg2
int32_t result

if (arg2 s> 0)
    int32_t* var_30
    sub_42e070(arg1 + 0x14, &var_30, &var_34)
    int32_t* eax_8 = var_30
    
    if (eax_8 != *(arg1 + 0x18))
        result = eax_8[4]
    else
        int32_t result_1 = sub_5f7120(arg1, arg2)
        *sub_4ccf80(arg1 + 0x14, &var_34) = result_1
        result = result_1
else
    int32_t var_48 = arg2
    char* eax_5
    void* ecx
    eax_5, ecx = sub_4104a0(0x7355d0)
    char* var_48_1 = eax_5
    int32_t var_4 = 0
    sub_5f7bb0(ecx)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_48_2 = var_2c
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
