// 函数: sub_66d6b0
// 地址: 0x66d6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0 && arg5 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_401270(&var_2c, nullptr, 0x72d4cf)
    int32_t var_4 = 0
    result = sub_66a840(arg3, arg1 + 8, arg2, arg4, &var_2c)
    bool cond:1_1
    
    if (result != 0)
        char* eax_5 = var_2c.d
        
        if (var_18_1 u< 0x10)
            eax_5 = &var_2c
        
        result = (*(*arg5 + 4))(eax_5)
        cond:1_1 = var_18_1 u< 0x10
    else
        cond:1_1 = var_18_1 u< 0x10
    
    if (not(cond:1_1))
        int32_t var_44_3 = var_2c.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
