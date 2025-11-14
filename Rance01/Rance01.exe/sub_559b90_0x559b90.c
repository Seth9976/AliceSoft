// 函数: sub_559b90
// 地址: 0x559b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a5e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_88 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_2c
char eax_9
int32_t ecx_1
eax_9, ecx_1 = sub_405d70(arg2, sub_401ec0(arg3, &var_2c, 0, arg2[4]))
int32_t var_4_1 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_8c_1 = var_2c
    ecx_1 = sub_6b4d5b()

void** result

if (eax_9 == 0)
    char var_48
    int32_t* eax_17
    int32_t edx_4
    eax_17, edx_4 = sub_401800(ecx_1, arg1, &var_48)
    int32_t var_4_2 = 1
    int32_t var_64
    sub_4c1d70(arg3, edx_4, eax_17, &var_64)
    var_4_2.b = 3
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_8c_5 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_50
    
    if (arg5 == 0)
        if (sub_556710(&var_64, arg4).b != 0)
            goto label_559d2c
        
        if (var_50 u< 0x10)
            result.b = 0
        else
            int32_t var_8c_10 = var_64
            sub_6b4d5b()
            result.b = 0
    else if (sub_54f500(arg4, arg2[0xb], &var_64).b == 0)
        if (var_50 u>= 0x10)
            int32_t var_8c_7 = var_64
            sub_6b4d5b()
        
        result.b = 0
    else if (arg4[1] s<= 0)
        sub_401110(&var_64)
        result.b = 0
    else
        arg4[3] = 0
    label_559d2c:
        
        if (var_50 u< 0x10)
            result.b = 1
        else
            int32_t var_8c_8 = var_64
            sub_6b4d5b()
            result.b = 1
else
    void** eax_11 = sub_4d3aa0(&arg2[7], arg3)
    void** var_68 = eax_11
    void*** eax_14
    void** var_6c
    
    if (eax_11 == arg2[8])
        var_6c = arg2[8]
        eax_14 = &var_6c
    else if (sub_405dd0(&eax_11[3], arg3) != 0)
        var_6c = arg2[8]
        eax_14 = &var_6c
    else
        eax_14 = &var_68
    result = *eax_14
    
    if (result == arg2[8])
        result.b = 0
    else
        int128_t* ecx_3 = result[0xa]
        int32_t eax_15 = result[0xb]
        
        if (ecx_3 == eax_15)
            result = arg4
            result[1] = 0
            result[3] = 0
        else
            sub_556880(arg4, eax_15 - ecx_3, ecx_3)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
