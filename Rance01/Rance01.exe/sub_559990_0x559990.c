// 函数: sub_559990
// 地址: 0x559990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_2c
char eax_9
int32_t ecx_1
eax_9, ecx_1 = sub_405d70(arg2, sub_401ec0(arg3, &var_2c, 0, arg2[4]))
int32_t var_4_1 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_88_1 = var_2c
    ecx_1 = sub_6b4d5b()

void* result

if (eax_9 == 0)
    char var_48
    int32_t* eax_15
    int32_t edx_4
    eax_15, edx_4 = sub_401800(ecx_1, arg1, &var_48)
    int32_t var_4_2 = 1
    int32_t var_64
    sub_4c1d70(arg3, edx_4, eax_15, &var_64)
    var_4_2.b = 3
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_88_7 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_50
    
    if (arg5 == 0)
        if (sub_560570(&var_64, arg4).b != 0)
        label_559b53:
            
            if (var_50 u< 0x10)
                result.b = 1
            else
                int32_t var_88_12 = var_64
                sub_6b4d5b()
                result.b = 1
        else if (var_50 u< 0x10)
            result.b = 0
        else
            int32_t var_88_11 = var_64
            sub_6b4d5b()
            result.b = 0
    else
        int32_t eax_18
        
        if (arg4[1] != 0)
            eax_18 = *arg4
        else
            eax_18 = 0
        
        if (sub_54f630(arg2[0xb], &var_64, eax_18, arg4[3]).b != 0)
            goto label_559b53
        
        if (var_50 u>= 0x10)
            int32_t var_88_9 = var_64
            sub_6b4d5b()
        
        result.b = 0
else
    sub_404f60(arg4[3], sub_55a340(&arg2[7], arg3))
    result = sub_55a340(&arg2[7], arg3)
    
    if (*result != *(result + 4))
        int128_t* esi_2
        
        if (arg4[1] != 0)
            esi_2 = *arg4
        else
            esi_2 = nullptr
        
        sub_6c02a0(*sub_55a340(&arg2[7], arg3), esi_2, arg4[3], eax_4)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
