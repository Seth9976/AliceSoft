// 函数: sub_54bfd0
// 地址: 0x54bfd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72629a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_170
int32_t eax_2 = data_78c474 ^ &var_170
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_114 = 0xf
int32_t var_118 = 0
char var_128 = 0
int32_t var_4 = 0
int32_t var_130 = 0xf
int32_t var_134 = 0
char var_144 = 0
int32_t var_14c = 0xf
int32_t var_150 = 0
char var_160 = 0
var_4.b = 2
*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_7 = **(arg1 + 0x2b0)
char result

if (sub_54d120(ebp, arg1, 0xf, arg1, &var_160, "system.GroupSave") != 0)
    if (sub_54d120(ebp, arg1, 0xf, arg1, &var_144, "system.GroupSave") != 0)
        if (sub_54d120(ebp, arg1, 0xf, arg1, &var_128, "system.GroupSave") != 0)
            char result_1
            
            if (var_150 != 0)
                int32_t* var_10c
                sub_402be0(&var_10c, (*(**(arg1 + 0x34) + 8))(eax_4))
                var_4.b = 3
                int128_t* eax_17 = (*(**(arg1 + 0x38) + 0x24))()
                char* ecx_11 = eax_17
                int128_t* edi_3 = eax_17
                
                do
                    eax_17.b = *ecx_11
                    ecx_11 = &ecx_11[1]
                while (eax_17.b != 0)
                
                sub_402cb0(&var_10c, edi_3, ecx_11 - &ecx_11[1])
                char eax_19
                int32_t ecx_13
                eax_19, ecx_13 = sub_6028a0(&var_10c)
                void var_f0
                
                if (eax_19 == 0)
                    int32_t* edx_10 = var_10c
                    int32_t var_f8
                    
                    if (var_f8 u< 0x10)
                        edx_10 = &var_10c
                    
                    sub_402be0(&var_f0, edx_10)
                    var_4.b = 4
                    sub_604500(&var_f0)
                    var_4.b = 3
                    ecx_13 = sub_401110(&var_f0)
                
                var_4.b = 5
                void var_d4
                sub_4c1d70(&var_144, &var_d4, sub_401800(ecx_13, &var_10c, &var_f0), &var_d4)
                sub_401110(&var_f0)
                char var_169_1 = 1
                int32_t var_168 = 0
                void var_b8
                sub_532f70(&var_b8, arg1 + 0x40)
                var_4.b = 8
                void var_58
                sub_401180(&var_58, 0xffffffff, &var_160, 0)
                char var_3c_1 = 1
                
                if (sub_5331f0(&var_d4, &var_b8, &var_128, &var_168, arg1 + 0x4c, arg1 + 0x1dc)
                        == 0)
                    var_169_1 = 0
                
                if (sub_554320(eax_7, ebp, arg1 + 0x1dc, var_168) == 0)
                    result_1 = sub_53d0e0(arg1, "Page = %d, Index = %d", eax_7, ebp)
                    var_4.b = 7
                    sub_532ff0(&var_b8)
                    sub_401110(&var_d4)
                    sub_401110(&var_10c)
                    goto label_54c1fe
                
                int32_t ecx_23
                ecx_23.b = var_169_1 != 0
                **(arg1 + 0x2b0) = ecx_23
                *(arg1 + 0x2b0) += 4
                var_4.b = 7
                sub_532ff0(&var_b8)
                sub_401110(&var_d4)
                sub_401110(&var_10c)
                goto label_54c419
            
            if (sub_554320(eax_7, ebp, arg1 + 0x1dc, 0) != 0)
                **(arg1 + 0x2b0) = 0
                *(arg1 + 0x2b0) += 4
            label_54c419:
                sub_401110(&var_160)
                sub_401110(&var_144)
                sub_401110(&var_128)
                result = 1
            else
                result_1 = sub_53d0e0(arg1, "Page = %d, Index = %d", eax_7, ebp, eax_4, arg3, arg2)
            label_54c1fe:
                sub_401110(&var_160)
                sub_401110(&var_144)
                sub_401110(&var_128)
                result = result_1
        else
            if (var_14c u>= 0x10)
                int32_t var_188_7 = var_160.d
                sub_6b4d5b()
            
            int32_t var_14c_3 = 0xf
            int32_t var_150_3 = 0
            var_160 = 0
            
            if (var_130 u>= 0x10)
                int32_t var_188_8 = var_144.d
                sub_6b4d5b()
            
            int32_t var_130_3 = 0xf
            int32_t var_134_3 = 0
            var_144 = 0
            
            if (var_114 u< 0x10)
                result = 0
            else
                int32_t var_188_9 = var_128.d
                sub_6b4d5b()
                result = 0
    else
        if (var_14c u>= 0x10)
            int32_t var_188_4 = var_160.d
            sub_6b4d5b()
        
        int32_t var_14c_2 = 0xf
        int32_t var_150_2 = 0
        var_160 = 0
        
        if (var_130 u>= 0x10)
            int32_t var_188_5 = var_144.d
            sub_6b4d5b()
        
        int32_t var_130_2 = 0xf
        int32_t var_134_2 = 0
        var_144 = 0
        
        if (var_114 u< 0x10)
            result = 0
        else
            int32_t var_188_6 = var_128.d
            sub_6b4d5b()
            result = 0
else
    if (var_14c u>= 0x10)
        int32_t var_188_1 = var_160.d
        sub_6b4d5b()
    
    int32_t var_14c_1 = 0xf
    int32_t var_150_1 = 0
    var_160 = 0
    
    if (var_130 u>= 0x10)
        int32_t var_188_2 = var_144.d
        sub_6b4d5b()
    
    int32_t var_130_1 = 0xf
    int32_t var_134_1 = 0
    var_144 = 0
    
    if (var_114 u>= 0x10)
        int32_t var_188_3 = var_128.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_170)
return result
