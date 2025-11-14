// 函数: sub_4e2370
// 地址: 0x4e2370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"[]=,=,=,=,=,=,=,=,=,=================")[0x10])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

bool result

if (sub_51bc80(ecx, arg1) != 0)
    result = true
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_68_1 = eax_6
    sub_4e4340(0x75561c)
    result = false

int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_68_2 = var_2c.d
    sub_6b4d5b()

if (result != 0)
    if (sub_51bd60(*(arg2 + 0x1dc)) == 0)
        result = false
    else
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_401270(&var_48, 1, &(*U"[]=,=,=,=,=,=,=,=,=,=================")[0x11])
        int32_t var_4_2 = 1
        int32_t* ecx_3 = var_48.d
        
        if (var_34_1 u< 0x10)
            ecx_3 = &var_48
        
        if (sub_51bc80(ecx_3, arg1) != 0)
            result = true
        else
            char* eax_7 = var_48.d
            
            if (var_34_1 u< 0x10)
                eax_7 = &var_48
            
            char* var_68_3 = eax_7
            sub_4e4340(0x75561c)
            result = false
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_34_1 u>= 0x10)
            int32_t var_68_4 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (result == 0)
            result = false
        else
            result = sub_51bd60(*(arg2 + 0x1dc) + 4) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
