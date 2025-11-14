// 函数: sub_5fade0
// 地址: 0x5fade0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_5e0140(arg1, &arg2[8])

if (result == 0 || arg2[7] != arg3)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401180(&var_2c, 0xffffffff, arg2, 0)
    int32_t var_4 = 0
    bool cond:0_1 = arg2[5] u< 0x10
    arg2[4] = 0
    char* eax_5
    
    if (cond:0_1)
        eax_5 = arg2
    else
        eax_5 = *arg2
    
    *eax_5 = 0
    __builtin_memcpy(&arg2[8], arg1, 0x30)
    arg2[7] = arg3
    result = sub_5fa6b0(arg2, &var_2c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_48_1 = var_2c.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
