// 函数: sub_4e1200
// 地址: 0x4e1200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719af0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 1, 0x755478)
int32_t var_4 = 0
char* ecx = var_48.d

if (var_34 u< 0x10)
    ecx = &var_48

char result

if (sub_51bc80(ecx, arg1) != 0)
    result = 1
else
    char* eax_6 = var_48.d
    
    if (var_34 u< 0x10)
        eax_6 = &var_48
    
    char* var_6c_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

bool var_51 = result == 0
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_6c_2 = var_48.d
    sub_6b4d5b()

if (var_51 != 0)
    result = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4_2 = 1
    void var_4c
    
    if (sub_51b970(&var_2c, &var_4c) != 0)
        sub_401180(arg2 + 0xa4, 0xffffffff, &var_2c, 0)
        
        if (var_18_1 u>= 0x10)
            int32_t var_6c_5 = var_2c.d
            sub_6b4d5b()
        
        result = 1
    else
        if (var_18_1 u>= 0x10)
            int32_t var_6c_4 = var_2c.d
            sub_6b4d5b()
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
