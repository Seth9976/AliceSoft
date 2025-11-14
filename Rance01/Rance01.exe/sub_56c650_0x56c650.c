// 函数: sub_56c650
// 地址: 0x56c650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e9d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_94
int32_t eax_2 = data_78c474 ^ &var_94
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_94 = 0
uint8_t result

if (*(arg1 + 0x44) == 0 || *(arg1 + 0x48) == 0)
    result = 0
else
    int128_t* esi_1 = (*(**(arg1 + 0x48) + 0x24))(eax_4)
    char* ecx_2 = esi_1
    int32_t var_70_1 = 0xf
    int32_t var_74_1 = 0
    char var_84 = 0
    int128_t* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    int32_t var_4 = 0
    var_4.b = 1
    char var_30
    int128_t* eax_9
    int32_t* ecx_6
    eax_9, ecx_6 = (*(**(arg1 + 0x44) + 8))(sub_401800(
        sub_401270(&var_84, ecx_2 - &ecx_2[1], esi_1), &var_84, &var_30))
    char var_4c
    sub_567130(&var_4c, eax_9, ecx_6)
    var_4.b = 2
    int32_t* var_68
    sub_4c1d70(arg1 + 0x28, &var_68, &var_4c, &var_68)
    int32_t var_38
    
    if (var_38 u>= 0x10)
        int32_t var_ac_4 = var_4c.d
        sub_6b4d5b()
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        int32_t var_ac_5 = var_30.d
        sub_6b4d5b()
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    var_4.b = 6
    
    if (var_70_1 u>= 0x10)
        int32_t var_ac_6 = var_84.d
        sub_6b4d5b()
    
    int32_t var_54
    
    if (sub_602830(&var_68) != 0)
        int32_t var_90_1 = 0xffffffff
        int32_t var_8c
        __builtin_memset(&var_8c, 0, 0x14)
        var_4.b = 8
        char* var_ac_9 = &var_84
        var_94 = 1
        BOOL eax_13
        char edx_7
        eax_13, edx_7 = sub_601f80(&var_68)
        int32_t var_80
        
        if (eax_13.b == 0 || var_84.d == var_80)
            eax_13.b = 1
        else
            eax_13.b = 0
        
        int32_t var_4_1 = 7
        int32_t var_b0_1
        
        if (eax_13.b != 0)
            int32_t* eax_14 = var_68
            
            if (var_54 u< 0x10)
                eax_14 = &var_68
            
            int32_t* var_ac_10 = eax_14
            var_b0_1 = 0x74b6a8
            goto label_56c83c
        
        if (sub_56c8c0(&var_84, edx_7, arg1) != 0)
            sub_65ab60(&var_84)
            sub_401110(&var_68)
            result = 1
        else
            int32_t** eax_17 = var_68
            
            if (var_54 u< 0x10)
                eax_17 = &var_68
            
            int32_t** var_ac_11 = eax_17
            var_b0_1 = 0x74b6d8
        label_56c83c:
            sub_604c90(var_b0_1)
            sub_65ab60(&var_84)
            sub_401110(&var_68)
            result = 0
    else
        if (var_54 u>= 0x10)
            int32_t* var_ac_8 = var_68
            sub_6b4d5b()
        
        result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_94)
return result
