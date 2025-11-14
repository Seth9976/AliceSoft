// 函数: sub_5dee00
// 地址: 0x5dee00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725ede
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_bc
int32_t eax_2 = data_78c474 ^ &var_bc
int32_t __saved_edi
int32_t var_d0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (sub_405d70(arg2, arg1 + 0x40) == 0 || *(arg1 + 0x5c) != arg3)
    int32_t* ecx_1 = data_793438
    
    if (data_79344c u< 0x10)
        ecx_1 = &data_793438
    
    int32_t esi_1 = arg2[4]
    int32_t edi_1 = data_793448
    int32_t eax_7 = esi_1
    
    if (esi_1 u>= edi_1)
        eax_7 = edi_1
    
    int32_t* edx_1
    
    if (arg2[5] u< 0x10)
        edx_1 = arg2
    else
        edx_1 = *arg2
    
    int32_t eax_8 = sub_402320(eax_7, edx_1, ecx_1, eax_7)
    bool cond:0_1 = eax_8 == 0
    
    if (eax_8 == 0)
        if (esi_1 u>= edi_1)
            eax_8.b = esi_1 != edi_1
        else
            eax_8 = 0xffffffff
        
        cond:0_1 = eax_8 == 0
    
    eax_8.b = cond:0_1
    eax_8.b = eax_8.b == 0
    
    if (eax_8.b == 0)
        int32_t edi_5 = *(arg1 + 0x64)
        
        if (edi_5 != 0xffffffff)
            sub_409390(edi_5)
            *(arg1 + 0x64) = 0xffffffff
        
        goto label_5df17c
    
    int32_t var_4 = 0
    int32_t var_64
    char eax_11 = sub_405d70(sub_401ec0(arg2, &var_64, 0, *(arg1 + 0x14)), arg1 + 4)
    int32_t var_4_1 = 0xffffffff
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_d4_3 = var_64
        sub_6b4d5b()
    
    if (eax_11 == 0)
        result = sub_5e7b80(arg1 + 0x64, arg2, arg3, 0, 0)
        
        if (result.b != 0)
        label_5df17c:
            sub_401180(arg1 + 0x40, 0xffffffff, arg2, 0)
            *(arg1 + 0x5c) = arg3
            *(arg1 + 0x90) = 1
            result.b = 1
    else
        int32_t esi_3 = *(arg1 + 0x14)
        char var_80
        sub_5fa400(&var_80)
        int32_t var_4_2 = 1
        var_4_2.b = 2
        char var_9c
        sub_401800(sub_434690(&var_64), &var_64, &var_9c)
        var_4_2.b = 4
        
        if (var_50 u>= 0x10)
            int32_t var_d4_4 = var_64
            sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64.b = 0
        char var_2c
        char* eax_16 = sub_401ec0(arg2, &var_2c, esi_3, arg2[4] - esi_3)
        var_4_2.b = 5
        char var_48
        int32_t* eax_17
        int32_t edx_5
        eax_17, edx_5 = sub_426250(&var_48, &var_80, &var_9c)
        var_4_2.b = 6
        char var_b8
        sub_4b3c20(eax_17, edx_5, eax_16, &var_b8)
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_d4_8 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        var_4_2.b = 9
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_d4_9 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_a4
        int32_t var_88
        int32_t var_6c
        
        if (sub_5e7bf0(arg1 + 0x64, &var_b8, arg3).b != 0)
            if (var_a4 u>= 0x10)
                int32_t var_d4_14 = var_b8.d
                sub_6b4d5b()
            
            int32_t var_a4_2 = 0xf
            int32_t var_a8_2 = 0
            var_b8 = 0
            
            if (var_88 u>= 0x10)
                int32_t var_d4_15 = var_9c.d
                sub_6b4d5b()
            
            int32_t var_4_3 = 0xffffffff
            int32_t var_88_2 = 0xf
            int32_t var_8c_2 = 0
            var_9c = 0
            
            if (var_6c u>= 0x10)
                int32_t var_d4_16 = var_80.d
                sub_6b4d5b()
            
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            goto label_5df17c
        
        if (var_a4 u>= 0x10)
            int32_t var_d4_11 = var_b8.d
            sub_6b4d5b()
        
        int32_t var_a4_1 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        
        if (var_88 u>= 0x10)
            int32_t var_d4_12 = var_9c.d
            sub_6b4d5b()
        
        int32_t var_88_1 = 0xf
        int32_t var_8c_1 = 0
        var_9c = 0
        
        if (var_6c u>= 0x10)
            int32_t var_d4_13 = var_80.d
            sub_6b4d5b()
        
        result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_bc)
return result
