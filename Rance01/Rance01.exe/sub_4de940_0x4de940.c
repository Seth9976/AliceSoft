// 函数: sub_4de940
// 地址: 0x4de940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720340
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, 0x75528c)
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

enum MESSAGEBOX_RESULT result

if (sub_51bc80(ecx, arg1).b != 0)
    result.b = 1
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_70_1 = eax_6
    sub_4e4340(0x75561c)
    result.b = 0

bool var_51 = result.b == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_70_2 = var_2c.d
    sub_6b4d5b()

if (var_51 != 0)
    result.b = 0
else
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t var_4_2 = 1
    void var_4c
    
    if (sub_51b970(&var_48, &var_4c).b != 0)
        if (sub_402680(0x755290, &var_48).b == 0)
            if (sub_402680(0x755298, &var_48) != 0)
                *(arg2 + 0x24) = 1
                goto label_4dea8f
            
            char* eax_8 = var_48.d
            
            if (var_34_1 u< 0x10)
                eax_8 = &var_48
            
            char* var_70_6 = eax_8
            sub_4e4340(0x7552a0)
            sub_401110(&var_48)
            result.b = 0
        else
            *(arg2 + 0x24) = 0
        label_4dea8f:
            
            if (var_34_1 u>= 0x10)
                int32_t var_70_5 = var_48.d
                sub_6b4d5b()
            
            result.b = 1
    else
        if (var_34_1 u>= 0x10)
            int32_t var_70_4 = var_48.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
