// 函数: sub_4e0c40
// 地址: 0x4e0c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719ab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x27])
int32_t var_4 = 0
char* ecx = var_48.d

if (var_34 u< 0x10)
    ecx = &var_48

char result

if (sub_51bc80(ecx, arg3) != 0)
    result = 1
else
    char* eax_6 = var_48.d
    
    if (var_34 u< 0x10)
        eax_6 = &var_48
    
    char* var_70_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

bool var_55 = result == 0
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_70_2 = var_48.d
    sub_6b4d5b()

if (var_55 != 0)
label_4e0da2:
    result = 0
else
    int32_t edi_1 = 0
    
    while (true)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4_2 = 1
        void var_4c
        int32_t ecx_2
        result, ecx_2 = sub_51b970(&var_2c, &var_4c)
        
        if (result == 0)
            if (var_18_1 u>= 0x10)
                int32_t var_70_6 = var_2c.d
                sub_6b4d5b()
            
            goto label_4e0da2
        
        if (edi_1 == 0)
            sub_4ba450(ecx_2, &var_2c, arg1, arg2 + 0x1c)
        
        if (sub_51bc80(&(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x28], arg3) == 0)
            if (var_18_1 u>= 0x10)
                int32_t var_70_7 = var_2c.d
                sub_6b4d5b()
            
            result = 1
            break
        
        edi_1 += 1
        
        if (var_18_1 u>= 0x10)
            int32_t var_70_5 = var_2c.d
            sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
