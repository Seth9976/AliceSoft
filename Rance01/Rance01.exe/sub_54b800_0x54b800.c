// 函数: sub_54b800
// 地址: 0x54b800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72631f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_154
int32_t eax_2 = data_78c474 ^ &var_154
int32_t esi
int32_t var_160 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_fc = 0xf
int32_t var_100 = 0
char var_110 = 0
int32_t var_4 = 0
int32_t var_134 = 0xf
int32_t var_138 = 0
char var_148 = 0
var_4.b = 1
char result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_148, "system.GlobalSave") != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_110, "system.GlobalSave") != 0)
        int128_t* esi_1 = (*(**(arg1 + 0x34) + 8))(eax_4)
        char* ecx_4 = esi_1
        int32_t var_118_1 = 0xf
        int32_t var_11c_1 = 0
        char var_12c = 0
        int128_t* eax_6
        
        do
            eax_6.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_6.b != 0)
        sub_401270(&var_12c, ecx_4 - &ecx_4[1], esi_1)
        var_4.b = 2
        int128_t* esi_3 = (*(**(arg1 + 0x38) + 0x24))()
        char* ecx_7 = esi_3
        int128_t* eax_8
        
        do
            eax_8.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_8.b != 0)
        sub_402cb0(&var_12c, esi_3, ecx_7 - &ecx_7[1])
        char eax_10
        int32_t ecx_9
        eax_10, ecx_9 = sub_6028a0(&var_12c)
        char var_d8
        int32_t var_c4
        
        if (eax_10 == 0)
            char* edx_6 = var_12c.d
            
            if (var_118_1 u< 0x10)
                edx_6 = &var_12c
            
            sub_402be0(&var_d8, edx_6)
            var_4.b = 3
            ecx_9 = sub_604500(&var_d8)
            var_4.b = 2
            
            if (var_c4 u>= 0x10)
                int32_t var_16c_9 = var_d8.d
                ecx_9 = sub_6b4d5b()
        
        int32_t* eax_12
        int32_t edx_9
        eax_12, edx_9 = sub_401800(ecx_9, &var_12c, &var_d8)
        var_4.b = 4
        char var_f4
        sub_4c1d70(&var_148, edx_9, eax_12, &var_f4)
        var_4.b = 6
        
        if (var_c4 u>= 0x10)
            int32_t var_16c_11 = var_d8.d
            sub_6b4d5b()
        
        int32_t var_c4_1 = 0xf
        int32_t var_c8_1 = 0
        var_d8 = 0
        int32_t var_e0
        
        if (sub_552a90(arg1 + 0x1dc, arg1 + 0x4c) != 0)
            char var_14d_2 = 1
            int32_t var_14c = 0
            void var_bc
            sub_532f70(&var_bc, arg1 + 0x40)
            var_4.b = 7
            char eax_18 =
                sub_5331f0(&var_f4, &var_bc, &var_110, &var_14c, arg1 + 0x4c, arg1 + 0x1dc)
            
            if (eax_18 != 0)
                eax_18 = var_14d_2
            
            int32_t ecx_15
            ecx_15.b = eax_18 != 0
            **(arg1 + 0x2b0) = ecx_15
            *(arg1 + 0x2b0) += 4
            var_4.b = 6
            sub_532ff0(&var_bc)
            
            if (var_e0 u>= 0x10)
                int32_t var_16c_20 = var_f4.d
                sub_6b4d5b()
            
            int32_t var_e0_2 = 0xf
            int32_t var_e4_2 = 0
            var_f4 = 0
            
            if (var_118_1 u>= 0x10)
                int32_t var_16c_21 = var_12c.d
                sub_6b4d5b()
            
            int32_t var_118_3 = 0xf
            int32_t var_11c_3 = 0
            var_12c = 0
            
            if (var_134 u>= 0x10)
                int32_t var_16c_22 = var_148.d
                sub_6b4d5b()
            
            int32_t var_134_4 = 0xf
            int32_t var_138_4 = 0
            var_148 = 0
            
            if (var_fc u>= 0x10)
                int32_t var_16c_23 = var_110.d
                sub_6b4d5b()
            
            result = 1
        else
            result = sub_53d0e0(arg1, 0x750ae4)
            
            if (var_e0 u>= 0x10)
                int32_t var_16c_13 = var_f4.d
                sub_6b4d5b()
            
            int32_t var_e0_1 = 0xf
            int32_t var_e4_1 = 0
            var_f4 = 0
            
            if (var_118_1 u>= 0x10)
                int32_t var_16c_14 = var_12c.d
                sub_6b4d5b()
            
            int32_t var_118_2 = 0xf
            int32_t var_11c_2 = 0
            var_12c = 0
            
            if (var_134 u>= 0x10)
                int32_t var_16c_15 = var_148.d
                sub_6b4d5b()
            
            int32_t var_134_3 = 0xf
            int32_t var_138_3 = 0
            var_148 = 0
            
            if (var_fc u>= 0x10)
                int32_t var_16c_16 = var_110.d
                sub_6b4d5b()
    else
        if (var_134 u>= 0x10)
            int32_t var_16c_3 = var_148.d
            sub_6b4d5b()
        
        int32_t var_134_2 = 0xf
        int32_t var_138_2 = 0
        var_148 = 0
        
        if (var_fc u< 0x10)
            result = 0
        else
            int32_t var_16c_4 = var_110.d
            sub_6b4d5b()
            result = 0
else
    if (var_134 u>= 0x10)
        int32_t var_16c_1 = var_148.d
        sub_6b4d5b()
    
    int32_t var_134_1 = 0xf
    int32_t var_138_1 = 0
    var_148 = 0
    
    if (var_fc u>= 0x10)
        int32_t var_16c_2 = var_110.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_154)
return result
