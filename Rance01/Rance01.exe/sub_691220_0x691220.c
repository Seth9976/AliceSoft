// 函数: sub_691220
// 地址: 0x691220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = arg3

if (arg2 != 0)
    if (*(arg1 + 0x50) != 0xffffffff)
        int32_t eax_5 = sub_695c40(arg1 + 0x60)
        int32_t ecx_1 = *(arg1 + 0x50)
        var_70 = eax_5
        int32_t* edx_1 = &var_70
        
        if (eax_5 s>= ecx_1)
            edx_1 = arg1 + 0x50
        
        void* eax_6 = &var_70
        
        if (ecx_1 s>= eax_5)
            eax_6 = arg1 + 0x50
        
        int32_t var_88_1 = *eax_6
        int32_t var_8c_1 = *edx_1
        sub_690d30(arg1, arg2)
        *(arg1 + 0x50) = 0xffffffff
    
    int32_t var_4 = 0
    char var_48
    int32_t var_2c
    sub_4c1d70(arg1 + 0x7c, &var_2c, sub_426250(&var_48, arg1 + 0x60, result), &var_2c)
    var_4.b = 2
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_88_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0xf
    var_48 = 0
    int32_t eax_11 = sub_695c40(&var_2c)
    int32_t eax_12 = arg2[0x1d]
    var_70 = eax_12
    char var_64
    int32_t var_50
    
    if (eax_12 s>= eax_11)
        sub_402000(arg1 + 0x60, result, 0, 0xffffffff)
    else
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        sub_401180(&var_64, 0xffffffff, result, 0)
        var_4.b = 3
        sub_695af0(var_70 - eax_11, &var_64)
        sub_402000(arg1 + 0x60, &var_64, 0, 0xffffffff)
        var_4.b = 2
        
        if (var_50 u>= 0x10)
            int32_t var_88_5 = var_64.d
            sub_6b4d5b()
    
    *(arg1 + 0x4e) = 1
    int32_t* eax_14 = sub_426250(&var_64, arg1 + 0x60, arg1 + 0x7c)
    var_4.b = 4
    result = sub_405d70(eax_14, &arg2[0x16])
    
    if (result.b == 0)
        sub_401180(&arg2[0x16], 0xffffffff, eax_14, 0)
        result = sub_68d800(arg2, arg2[0x1d])
        arg2[0x3d].b = 1
    
    if (var_50 u>= 0x10)
        int32_t var_88_8 = var_64.d
        result = sub_6b4d5b()
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_88_9 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
