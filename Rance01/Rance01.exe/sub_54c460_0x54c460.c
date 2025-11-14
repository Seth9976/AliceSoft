// 函数: sub_54c460
// 地址: 0x54c460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72798f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_170
int32_t eax_2 = data_78c474 ^ &var_170
int32_t edi
int32_t var_180 = edi
int32_t eax_4 = data_78c474 ^ &var_180
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_114 = 0xf
int32_t var_118 = 0
char var_128 = 0
int32_t var_4 = 0
int32_t var_14c = 0xf
int32_t var_150 = 0
char var_160 = 0
int32_t var_130 = 0xf
int32_t var_134 = 0
char var_144 = 0
var_4.b = 2
*(arg1 + 0x2b0) -= 4
int32_t eax_6 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx = **(arg1 + 0x2b0)
char result

if (sub_54d120(0xf, arg1, edi, arg1, &var_144, "system.GroupSave") != 0)
    if (sub_54d120(0xf, arg1, edi, arg1, &var_160, "system.GroupLoad") != 0)
        if (sub_54d120(0xf, arg1, edi, arg1, &var_128, "system.GroupLoad") != 0)
            void var_f0
            sub_402be0(&var_f0, (*(**(arg1 + 0x34) + 8))(eax_4))
            var_4.b = 3
            int128_t* edi_1 = (*(**(arg1 + 0x38) + 0x24))()
            char* ecx_6 = edi_1
            int128_t* eax_15
            
            do
                eax_15.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (eax_15.b != 0)
            var_4.b = 4
            char var_10c
            void var_d4
            sub_4c1d70(&var_160, &var_d4, 
                sub_401800(sub_402cb0(&var_f0, edi_1, ecx_6 - &ecx_6[1]), &var_f0, &var_10c), 
                &var_d4)
            int32_t var_f8
            
            if (var_f8 u>= 0x10)
                int32_t var_188_12 = var_10c.d
                sub_6b4d5b()
            
            int32_t var_f8_1 = 0xf
            int32_t var_fc_1 = 0
            var_10c = 0
            char var_16d_1 = 1
            int32_t var_16c = 0
            void var_b8
            sub_532f70(&var_b8, arg1 + 0x40)
            var_4.b = 7
            void var_58
            sub_401180(&var_58, 0xffffffff, &var_144, 0)
            void* var_188_14 = arg1 + 0x1dc
            void* var_18c_5 = arg1 + 0x4c
            char var_3c_1 = 1
            
            if (sub_52ff90(&var_b8, &var_128, &var_d4, &var_16c) == 0)
                var_16d_1 = 0
            
            if (sub_554320(ecx, eax_6, arg1 + 0x1dc, var_16c) != 0)
                int32_t ecx_19
                ecx_19.b = var_16d_1 != 0
                **(arg1 + 0x2b0) = ecx_19
                *(arg1 + 0x2b0) += 4
                var_4.b = 6
                sub_52fd50(&var_b8)
                sub_401110(&var_d4)
                sub_401110(&var_f0)
                sub_401110(&var_144)
                sub_401110(&var_160)
                sub_401110(&var_128)
                result = 1
            else
                char result_1 = sub_53d0e0(arg1, "Page = %d, Index = %d", ecx, eax_6)
                var_4.b = 6
                sub_52fd50(&var_b8)
                sub_401110(&var_d4)
                sub_401110(&var_f0)
                sub_401110(&var_144)
                sub_401110(&var_160)
                sub_401110(&var_128)
                result = result_1
        else
            if (var_130 u>= 0x10)
                int32_t var_188_7 = var_144.d
                sub_6b4d5b()
            
            int32_t var_130_3 = 0xf
            int32_t var_134_3 = 0
            var_144 = 0
            
            if (var_14c u>= 0x10)
                int32_t var_188_8 = var_160.d
                sub_6b4d5b()
            
            int32_t var_14c_3 = 0xf
            int32_t var_150_3 = 0
            var_160 = 0
            
            if (var_114 u< 0x10)
                result = 0
            else
                int32_t var_188_9 = var_128.d
                sub_6b4d5b()
                result = 0
    else
        if (var_130 u>= 0x10)
            int32_t var_188_4 = var_144.d
            sub_6b4d5b()
        
        int32_t var_130_2 = 0xf
        int32_t var_134_2 = 0
        var_144 = 0
        
        if (var_14c u>= 0x10)
            int32_t var_188_5 = var_160.d
            sub_6b4d5b()
        
        int32_t var_14c_2 = 0xf
        int32_t var_150_2 = 0
        var_160 = 0
        
        if (var_114 u< 0x10)
            result = 0
        else
            int32_t var_188_6 = var_128.d
            sub_6b4d5b()
            result = 0
else
    if (var_130 u>= 0x10)
        int32_t var_188_1 = var_144.d
        sub_6b4d5b()
    
    int32_t var_130_1 = 0xf
    int32_t var_134_1 = 0
    var_144 = 0
    
    if (var_14c u>= 0x10)
        int32_t var_188_2 = var_160.d
        sub_6b4d5b()
    
    int32_t var_14c_1 = 0xf
    int32_t var_150_1 = 0
    var_160 = 0
    
    if (var_114 u>= 0x10)
        int32_t var_188_3 = var_128.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_170)
return result
