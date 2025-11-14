// 函数: sub_64e1b0
// 地址: 0x64e1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718c68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* result = sub_64e2a0(&var_2c, arg2)
bool var_4d = result[4] == 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_68_1 = var_2c
    result = sub_6b4d5b()

if (var_4d == 0)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_401270(&var_4c, 4, "None")
    char var_30_1 = 1
    int32_t var_4 = 0
    sub_401180(&var_4c, 0xffffffff, arg2, 0)
    result = sub_64e5f0(&var_4c, arg1)
    
    if (var_38_1 u>= 0x10)
        int32_t var_68_2 = var_4c.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
