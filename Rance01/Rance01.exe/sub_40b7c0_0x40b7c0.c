// 函数: sub_40b7c0
// 地址: 0x40b7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg1 != 0 && arg3 s>= 1)
    char* eax_5 = arg1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    sub_401270(&var_2c, eax_5 - &eax_5[1], arg1)
    int32_t var_4 = 0
    int32_t var_30 = arg3
    sub_42e070(arg2 + 0x294, &var_38, &var_30)
    int32_t* eax_8 = var_38
    void* eax_9
    
    if (eax_8 != *(arg2 + 0x298))
        eax_9 = eax_8[4]
    
    int32_t eax_10
    
    if (eax_8 != *(arg2 + 0x298) && eax_9 != 0)
        eax_10 = *(eax_9 + 0xcc)
    else
        eax_10 = 0
    
    int32_t ebx
    ebx.b = sub_40b770(arg4, eax_10, &var_2c).b == 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_50_4 = var_2c.d
        sub_6b4d5b()
    
    result.b = ebx.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
