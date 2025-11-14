// 函数: sub_5494a0
// 地址: 0x5494a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7264a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t esi
int32_t var_a8 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_84 = 0xf
int32_t var_88 = 0
char var_98 = 0
int32_t var_4 = 0
int32_t var_68 = 0xf
int32_t var_6c = 0
char var_7c = 0
var_4.b = 1
char result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_98, "system.ResumeLoad") != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_7c, "system.ResumeLoad") != 0)
        int128_t* esi_1 = (*(*arg1 + 8))(eax_4)
        char* ecx_4 = esi_1
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60 = 0
        int128_t* eax_6
        
        do
            eax_6.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_6.b != 0)
        sub_401270(&var_60, ecx_4 - &ecx_4[1], esi_1)
        var_4.b = 2
        int128_t* esi_3 = (*(*arg1 + 0x24))()
        char* ecx_7 = esi_3
        int128_t* eax_8
        
        do
            eax_8.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_8.b != 0)
        sub_402cb0(&var_60, esi_3, ecx_7 - &ecx_7[1])
        int32_t var_44 = 0
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t var_34_1 = 0
        var_4.b = 3
        char eax_11
        int32_t edx_5
        eax_11, edx_5 = sub_5572c0(&var_44, &var_98, &var_7c, &arg1[0x97])
        
        if (eax_11 == 0)
            if (var_34_1 != 1)
                char* eax_12 = var_98.d
                
                if (var_84 u< 0x10)
                    eax_12 = &var_98
                
                char* var_b4_8 = eax_12
                sub_53d1c0(eax_12, edx_5, arg1, 0x750600)
                goto label_5496b3
            
            char eax_14
            int32_t edx_7
            eax_14, edx_7 = (*arg1)()
            
            if (eax_14 != 0)
                char* ecx_16 = var_30.d
                
                if (var_1c_1 u< 0x10)
                    ecx_16 = &var_30
                
                char* eax_15 = var_98.d
                
                if (var_84 u< 0x10)
                    eax_15 = &var_98
                
                char* var_b4_9 = ecx_16
                char* var_b8_4 = eax_15
                
                if (sub_53d650(eax_15, edx_7, arg1, 0x750658) != 0)
                    goto label_549759
                
                goto label_5496b3
            
            char* eax_17 = var_98.d
            
            if (var_84 u< 0x10)
                eax_17 = &var_98
            
            char* var_b4_10 = eax_17
            
            if (sub_53d650(eax_17, edx_7, arg1, 0x7506a8) != 0)
                goto label_549759
            
        label_5496b3:
            sub_5569f0(&var_44)
            sub_401110(&var_60)
            sub_401110(&var_7c)
            sub_401110(&var_98)
            result = 0
        else
            *arg1 = 0
            sub_554660(&arg1[0x78])
        label_549759:
            sub_5569f0(&var_44)
            
            if (var_4c_1 u>= 0x10)
                int32_t var_b4_11 = var_60.d
                sub_6b4d5b()
            
            int32_t var_4c_2 = 0xf
            int32_t var_50_2 = 0
            var_60 = 0
            
            if (var_68 u>= 0x10)
                int32_t var_b4_12 = var_7c.d
                sub_6b4d5b()
            
            int32_t var_68_3 = 0xf
            int32_t var_6c_3 = 0
            var_7c = 0
            
            if (var_84 u>= 0x10)
                int32_t var_b4_13 = var_98.d
                sub_6b4d5b()
            
            result = 1
    else
        if (var_68 u>= 0x10)
            int32_t var_b4_3 = var_7c.d
            sub_6b4d5b()
        
        int32_t var_68_2 = 0xf
        int32_t var_6c_2 = 0
        var_7c = 0
        
        if (var_84 u< 0x10)
            result = 0
        else
            int32_t var_b4_4 = var_98.d
            sub_6b4d5b()
            result = 0
else
    if (var_68 u>= 0x10)
        int32_t var_b4_1 = var_7c.d
        sub_6b4d5b()
    
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    var_7c = 0
    
    if (var_84 u>= 0x10)
        int32_t var_b4_2 = var_98.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
