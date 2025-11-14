// 函数: sub_40b530
// 地址: 0x40b530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t ExceptionRecord = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 == 0)
    result.b = 0
else
    char* eax_4 = arg1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    sub_401270(&var_2c, eax_4 - &eax_4[1], arg1)
    int32_t var_4 = 0
    char* eax_6 = var_2c.d
    
    if (var_18_1 u< 0x10)
        eax_6 = &var_2c
    
    int32_t* ecx_1
    result, ecx_1 = (*(*data_797dd0 + 0x10))(eax_6)
    int32_t var_4_1 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_3 = var_2c.d
        result, ecx_1 = sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (result_1 == 0)
        result.b = 0
    else
        int32_t var_44_4 = arg3
        void* eax_9 = sub_40c350(arg2 + 0x274, arg3, ecx_1)
        char eax_10
        
        if (eax_9 != 0)
            eax_10 = sub_40c700(eax_9, result_1)
        
        if (eax_9 != 0 && eax_10 != 0)
            (*result_1)->Handler(ExceptionRecord)
            result.b = 1
        else
            (*result_1)->Handler(ExceptionRecord)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
