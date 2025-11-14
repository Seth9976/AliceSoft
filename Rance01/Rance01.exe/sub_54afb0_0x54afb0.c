// 函数: sub_54afb0
// 地址: 0x54afb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727646
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c4
int32_t eax_2 = data_78c474 ^ &var_c4
int32_t esi
int32_t var_d0 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
int32_t var_4 = 0
int32_t var_a0 = 0xf
int32_t var_a4 = 0
char var_b4 = 0
var_4.b = 1
*(arg1 + 0x2b0) -= 4
int32_t eax_6 = **(arg1 + 0x2b0)
HANDLE result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_b4, "system.ResumeReadComment").b != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_60, "system.ResumeReadComment").b != 0)
        int128_t* esi_1 = (*(**(arg1 + 0x34) + 8))(eax_4)
        char* ecx_2 = esi_1
        int32_t var_84_1 = 0xf
        int32_t var_88_1 = 0
        char var_98 = 0
        int128_t* eax_10
        
        do
            eax_10.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (eax_10.b != 0)
        sub_401270(&var_98, ecx_2 - &ecx_2[1], esi_1)
        var_4.b = 2
        int128_t* esi_3 = (*(**(arg1 + 0x38) + 0x24))()
        char* ecx_5 = esi_3
        int128_t* eax_12
        
        do
            eax_12.b = *ecx_5
            ecx_5 = &ecx_5[1]
        while (eax_12.b != 0)
        sub_402cb0(&var_98, esi_3, ecx_5 - &ecx_5[1])
        result = sub_6028a0(&var_98)
        int32_t* var_7c
        
        if (result.b == 0)
            char* edx_6 = var_98.d
            
            if (var_84_1 u< 0x10)
                edx_6 = &var_98
            
            sub_402be0(&var_7c, edx_6)
            var_4.b = 3
            sub_604500(&var_7c)
            var_4.b = 2
            int32_t var_68
            
            if (var_68 u>= 0x10)
                int32_t* var_dc_9 = var_7c
                sub_6b4d5b()
        
        if (eax_6 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
            result = *(*(arg1 + 0x1e4) + (eax_6 << 2))
        
        if (eax_6 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && result != 0)
            var_7c = nullptr
            int32_t var_78_1 = 0
            int32_t var_74_1 = 0
            int32_t var_44 = 0
            int32_t var_40_1 = 0
            int32_t var_3c_1 = 0
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            char var_30_1 = 0
            int32_t var_34_1 = 0
            var_4.b = 5
            char eax_17
            int32_t edx_10
            eax_17, edx_10 = sub_558da0(arg1 + 0x25c, &var_98, &var_7c, &var_b4, &var_60)
            
            if (eax_17 != 0)
                if (var_7c == var_78_1)
                    sub_553e30(arg1 + 0x1dc, edx_10, eax_6)
                label_54b393:
                    **(arg1 + 0x2b0) = 1
                    goto label_54b399
                
                sub_553e30(arg1 + 0x1dc, edx_10, eax_6)
                int32_t var_b8 = (var_78_1 - var_7c) s/ 0x1c
                
                if (sub_553df0(eax_6, arg1 + 0x1dc, &var_b8, 1, 1) != 0)
                    int32_t esi_7 = 0
                    
                    if (sub_550c30(result) s<= 0)
                        goto label_54b393
                    
                    int32_t* edi_5 = var_7c
                    int32_t var_bc
                    
                    while (sub_54f990(result, esi_7, &var_bc) != 0)
                        int32_t* eax_30 = sub_5529f0(arg1 + 0x1dc, esi_7, var_bc)
                        
                        if (eax_30 == 0)
                            break
                        
                        sub_550660(eax_30, edi_5)
                        esi_7 += 1
                        edi_5 = &edi_5[7]
                        
                        if (esi_7 s>= sub_550c30(result))
                            goto label_54b393
                
                sub_5569f0(&var_44)
                sub_4054e0(&var_7c)
                sub_401110(&var_98)
                sub_401110(&var_b4)
                sub_401110(&var_60)
                result.b = 0
            else
                sub_553e30(arg1 + 0x1dc, edx_10, eax_6)
                **(arg1 + 0x2b0) = 0
            label_54b399:
                *(arg1 + 0x2b0) += 4
                sub_5569f0(&var_44)
                
                if (var_7c != 0)
                    int32_t* esi_9 = var_7c
                    sub_405780(esi_9, var_78_1)
                    int32_t* var_dc_16 = esi_9
                    sub_6b4d5b()
                
                if (var_84_1 u>= 0x10)
                    int32_t var_dc_17 = var_98.d
                    sub_6b4d5b()
                
                int32_t var_84_3 = 0xf
                int32_t var_88_3 = 0
                var_98 = 0
                
                if (var_a0 u>= 0x10)
                    int32_t var_dc_18 = var_b4.d
                    sub_6b4d5b()
                
                int32_t var_a0_4 = 0xf
                int32_t var_a4_4 = 0
                var_b4 = 0
                
                if (var_4c u>= 0x10)
                    int32_t var_dc_19 = var_60.d
                    sub_6b4d5b()
                
                result.b = 1
        else
            if (var_84_1 u>= 0x10)
                int32_t var_dc_10 = var_98.d
                sub_6b4d5b()
            
            int32_t var_84_2 = 0xf
            int32_t var_88_2 = 0
            var_98 = 0
            
            if (var_a0 u>= 0x10)
                int32_t var_dc_11 = var_b4.d
                sub_6b4d5b()
            
            int32_t var_a0_3 = 0xf
            int32_t var_a4_3 = 0
            var_b4 = 0
            
            if (var_4c u< 0x10)
                result.b = 0
            else
                int32_t var_dc_12 = var_60.d
                sub_6b4d5b()
                result.b = 0
    else
        if (var_a0 u>= 0x10)
            int32_t var_dc_3 = var_b4.d
            sub_6b4d5b()
        
        int32_t var_a0_2 = 0xf
        int32_t var_a4_2 = 0
        var_b4 = 0
        
        if (var_4c u< 0x10)
            result.b = 0
        else
            int32_t var_dc_4 = var_60.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_a0 u>= 0x10)
        int32_t var_dc_1 = var_b4.d
        sub_6b4d5b()
    
    int32_t var_a0_1 = 0xf
    int32_t var_a4_1 = 0
    var_b4 = 0
    
    if (var_4c u>= 0x10)
        int32_t var_dc_2 = var_60.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c4)
return result
