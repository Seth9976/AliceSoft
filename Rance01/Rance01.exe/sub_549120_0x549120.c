// 函数: sub_549120
// 地址: 0x549120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72650b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t esi
int32_t var_b0 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t eax_6 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx = **(arg1 + 0x2b0)
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
int32_t var_4 = 0
int32_t var_84 = 0xf
int32_t var_88 = 0
char var_98 = 0
var_4.b = 1
char result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_60, "system.ResumeSave") != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_98, "system.ResumeSave") != 0)
        int128_t* esi_1 = (*(**(arg1 + 0x34) + 8))(eax_4)
        char* ecx_4 = esi_1
        int32_t var_68_1 = 0xf
        int32_t var_6c_1 = 0
        char var_7c = 0
        int128_t* eax_11
        
        do
            eax_11.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_11.b != 0)
        sub_401270(&var_7c, ecx_4 - &ecx_4[1], esi_1)
        var_4.b = 2
        int128_t* esi_3 = (*(**(arg1 + 0x38) + 0x24))()
        char* ecx_7 = esi_3
        int128_t* eax_13
        
        do
            eax_13.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_13.b != 0)
        sub_402cb0(&var_7c, esi_3, ecx_7 - &ecx_7[1])
        int32_t var_44
        
        if (sub_6028a0(&var_7c) == 0)
            char* edx_4 = var_7c.d
            
            if (var_68_1 u< 0x10)
                edx_4 = &var_7c
            
            sub_402be0(&var_44, edx_4)
            var_4.b = 3
            sub_604500(&var_44)
            char var_30
            
            if (var_30.d u>= 0x10)
                int32_t var_bc_9 = var_44
                sub_6b4d5b()
        
        var_44 = 0
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30_1 = 0
        int32_t var_34_1 = 0
        var_4.b = 4
        bool cond:0_1 = sub_556a40(arg1, &var_7c, &var_44, &var_60, &var_98, arg1 + 0x25c) == 0
        var_4.b = 2
        sub_5569f0(&var_44)
        int32_t eax_19
        eax_19.b = cond:0_1 == 0
        
        if (sub_54d1d0(ecx, arg1, arg1, eax_6, 0xf, eax_19) != 0)
            **(arg1 + 0x2b0) = 1
            *(arg1 + 0x2b0) += 4
            
            if (var_68_1 u>= 0x10)
                int32_t var_bc_15 = var_7c.d
                sub_6b4d5b()
            
            int32_t var_68_3 = 0xf
            int32_t var_6c_3 = 0
            var_7c = 0
            
            if (var_84 u>= 0x10)
                int32_t var_bc_16 = var_98.d
                sub_6b4d5b()
            
            int32_t var_84_4 = 0xf
            int32_t var_88_4 = 0
            var_98 = 0
            
            if (var_4c u>= 0x10)
                int32_t var_bc_17 = var_60.d
                sub_6b4d5b()
            
            result = 1
        else
            if (var_68_1 u>= 0x10)
                int32_t var_bc_12 = var_7c.d
                sub_6b4d5b()
            
            int32_t var_68_2 = 0xf
            int32_t var_6c_2 = 0
            var_7c = 0
            
            if (var_84 u>= 0x10)
                int32_t var_bc_13 = var_98.d
                sub_6b4d5b()
            
            int32_t var_84_3 = 0xf
            int32_t var_88_3 = 0
            var_98 = 0
            
            if (var_4c u< 0x10)
                result = 0
            else
                int32_t var_bc_14 = var_60.d
                sub_6b4d5b()
                result = 0
    else
        if (var_84 u>= 0x10)
            int32_t var_bc_3 = var_98.d
            sub_6b4d5b()
        
        int32_t var_84_2 = 0xf
        int32_t var_88_2 = 0
        var_98 = 0
        
        if (var_4c u< 0x10)
            result = 0
        else
            int32_t var_bc_4 = var_60.d
            sub_6b4d5b()
            result = 0
else
    if (var_84 u>= 0x10)
        int32_t var_bc_1 = var_98.d
        sub_6b4d5b()
    
    int32_t var_84_1 = 0xf
    int32_t var_88_1 = 0
    var_98 = 0
    
    if (var_4c u>= 0x10)
        int32_t var_bc_2 = var_60.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
