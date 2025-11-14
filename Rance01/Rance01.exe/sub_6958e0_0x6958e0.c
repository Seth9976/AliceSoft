// 函数: sub_6958e0
// 地址: 0x6958e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    void** var_6c
    
    if (arg1[0xa] != 0xffffffff)
        void** eax_5 = arg1[0x11]
        int32_t ecx = arg1[0xa]
        var_6c = eax_5
        int32_t* edx_1 = &var_6c
        
        if (eax_5 s>= ecx)
            edx_1 = &arg1[0xa]
        
        void* eax_6 = &var_6c
        
        if (ecx s>= eax_5)
            eax_6 = &arg1[0xa]
        
        int32_t var_88_1 = *eax_6
        int32_t var_8c_1 = *edx_1
        sub_695630(arg2, arg1)
        arg1[0xa] = 0xffffffff
    
    char var_48
    int32_t* eax_8 = sub_426250(&var_48, &arg1[0xd], arg3)
    int32_t var_4 = 0
    var_6c = &arg1[0x14]
    int32_t var_2c
    sub_4c1d70(&arg1[0x14], &var_2c, eax_8, &var_2c)
    var_4.b = 2
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_88_4 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t eax_11 = sub_695c40(&var_2c)
    int32_t ebx_1 = *(arg2 + 0x74)
    char var_64
    int32_t var_50
    
    if (ebx_1 s>= eax_11)
        sub_402000(&arg1[0xd], arg3, 0, 0xffffffff)
    else
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        sub_401180(&var_64, 0xffffffff, arg3, 0)
        var_4.b = 3
        sub_695af0(ebx_1 - eax_11, &var_64)
        sub_402000(&arg1[0xd], &var_64, 0, 0xffffffff)
        var_4.b = 2
        
        if (var_50 u>= 0x10)
            int32_t var_88_6 = var_64.d
            sub_6b4d5b()
    
    int32_t* eax_13 = sub_426250(&var_64, &arg1[0xd], var_6c)
    var_4.b = 4
    result = sub_405d70(eax_13, arg2 + 0x58)
    
    if (result == 0)
        sub_401180(arg2 + 0x58, 0xffffffff, eax_13, 0)
        result = sub_68d800(arg2, *(arg2 + 0x74))
        *(arg2 + 0xa0) = 1
    
    if (var_50 u>= 0x10)
        int32_t var_88_9 = var_64.d
        result = sub_6b4d5b()
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_88_10 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
