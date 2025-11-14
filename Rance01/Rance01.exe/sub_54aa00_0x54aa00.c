// 函数: sub_54aa00
// 地址: 0x54aa00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72638e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_bc
int32_t eax_2 = data_78c474 ^ &var_bc
int32_t esi
int32_t var_c8 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 0xf
int32_t var_6c = 0
char var_7c = 0
int32_t var_4 = 0
int32_t var_a0 = 0xf
int32_t var_a4 = 0
char var_b4 = 0
var_4.b = 1
*(arg1 + 0x2b0) -= 4
int128_t* eax_6 = **(arg1 + 0x2b0)
int128_t* result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_b4, "system.ResumeWriteComment").b != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_7c, "system.ResumeWriteComment").b != 0)
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
        int32_t* var_60
        
        if (sub_6028a0(&var_98) == 0)
            char* edx_6 = var_98.d
            
            if (var_84_1 u< 0x10)
                edx_6 = &var_98
            
            sub_402be0(&var_60, edx_6)
            var_4.b = 3
            sub_604500(&var_60)
            var_4.b = 2
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                int32_t* var_d4_9 = var_60
                sub_6b4d5b()
        
        int32_t* esi_4
        
        if (eax_6 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
            esi_4 = *(*(arg1 + 0x1e4) + (eax_6 << 2))
        
        if (eax_6 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && esi_4 != 0)
            uint32_t var_b8_1
            
            if (esi_4[0x10].b != 0)
                var_b8_1 = esi_4[1] u>> 2
            else
                var_b8_1 = 0
            
            var_60 = nullptr
            int32_t var_5c_1 = 0
            int32_t var_58_1 = 0
            var_4.b = 4
            sub_405660(&var_60, var_b8_1)
            int32_t edi_3 = 0
            int32_t* var_44
            
            if (var_b8_1 s<= 0)
            label_54ad5c:
                var_44 = nullptr
                int32_t var_40_1 = 0
                int32_t var_3c_1 = 0
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30_1 = 0
                int32_t var_34_1 = 0
                var_4.b = 6
                
                if (sub_5590a0(&var_98, arg1 + 0x25c, &var_b4, &var_7c, &var_60).b != 0)
                    **(arg1 + 0x2b0) = 1
                else
                    **(arg1 + 0x2b0) = 0
                
                *(arg1 + 0x2b0) += 4
                
                if (var_1c_1 u>= 0x10)
                    int32_t var_d4_24 = var_30_1.d
                    sub_6b4d5b()
                
                int32_t* ebp_2 = var_44
                
                if (ebp_2 != 0)
                    sub_405780(ebp_2, var_40_1)
                    int32_t* var_d4_25 = ebp_2
                    sub_6b4d5b()
                
                int32_t* ebp_3 = var_60
                
                if (ebp_3 != 0)
                    sub_405780(ebp_3, var_5c_1)
                    int32_t* var_d4_26 = ebp_3
                    sub_6b4d5b()
                
                if (var_84_1 u>= 0x10)
                    int32_t var_d4_27 = var_98.d
                    sub_6b4d5b()
                
                int32_t var_84_5 = 0xf
                int32_t var_88_5 = 0
                var_98 = 0
                
                if (var_a0 u>= 0x10)
                    int32_t var_d4_28 = var_b4.d
                    sub_6b4d5b()
                
                int32_t var_a0_6 = 0xf
                int32_t var_a4_6 = 0
                var_b4 = 0
                
                if (var_68 u>= 0x10)
                    int32_t var_d4_29 = var_7c.d
                    sub_6b4d5b()
                
                result.b = 1
            else
                while (true)
                    result = esi_4[1]
                    
                    if (edi_3 u>= result u>> 2)
                        int32_t* ebp_1 = var_60
                        
                        if (ebp_1 != 0)
                            sub_405780(ebp_1, var_5c_1)
                            int32_t* var_d4_17 = ebp_1
                            sub_6b4d5b()
                        
                        if (var_84_1 u>= 0x10)
                            int32_t var_d4_18 = var_98.d
                            sub_6b4d5b()
                        
                        int32_t var_84_3 = 0xf
                        int32_t var_88_3 = 0
                        var_98 = 0
                        
                        if (var_a0 u>= 0x10)
                            int32_t var_d4_19 = var_b4.d
                            sub_6b4d5b()
                        
                        int32_t var_a0_4 = 0xf
                        int32_t var_a4_4 = 0
                        var_b4 = 0
                        
                        if (var_68 u< 0x10)
                            break
                        
                        int32_t var_d4_20 = var_7c.d
                        sub_6b4d5b()
                        result.b = 0
                        goto label_54af8c
                    
                    int32_t eax_21
                    
                    if (result != 0)
                        eax_21 = *esi_4
                    else
                        eax_21 = 0
                    
                    int32_t eax_22 = *(eax_21 + (edi_3 << 2))
                    
                    if (eax_22 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                        int32_t* eax_23 = *(*(arg1 + 0x1e4) + (eax_22 << 2))
                        
                        if (eax_23 != 0)
                            int128_t* eax_24
                            
                            if (eax_23[1] != 0)
                                eax_24 = *eax_23
                            else
                                eax_24 = nullptr
                            
                            sub_402be0(&var_44, eax_24)
                            var_4.b = 5
                            sub_405150(&var_44, &var_60)
                            var_4.b = 4
                            char var_30
                            
                            if (var_30.d u>= 0x10)
                                int32_t* var_d4_15 = var_44
                                sub_6b4d5b()
                            
                            edi_3 += 1
                            
                            if (edi_3 s>= var_b8_1)
                                goto label_54ad5c
                            
                            continue
                    
                    sub_4054e0(&var_60)
                    
                    if (var_84_1 u>= 0x10)
                        int32_t var_d4_21 = var_98.d
                        sub_6b4d5b()
                    
                    int32_t var_84_4 = 0xf
                    int32_t var_88_4 = 0
                    var_98 = 0
                    
                    if (var_a0 u>= 0x10)
                        int32_t var_d4_22 = var_b4.d
                        sub_6b4d5b()
                    
                    int32_t var_a0_5 = 0xf
                    int32_t var_a4_5 = 0
                    var_b4 = 0
                    
                    if (var_68 u< 0x10)
                        break
                    
                    int32_t var_d4_23 = var_7c.d
                    sub_6b4d5b()
                    result.b = 0
                    goto label_54af8c
                
                result.b = 0
        else
            if (var_84_1 u>= 0x10)
                int32_t var_d4_10 = var_98.d
                sub_6b4d5b()
            
            int32_t var_84_2 = 0xf
            int32_t var_88_2 = 0
            var_98 = 0
            
            if (var_a0 u>= 0x10)
                int32_t var_d4_11 = var_b4.d
                sub_6b4d5b()
            
            int32_t var_a0_3 = 0xf
            int32_t var_a4_3 = 0
            var_b4 = 0
            
            if (var_68 u< 0x10)
                result.b = 0
            else
                int32_t var_d4_12 = var_7c.d
                sub_6b4d5b()
                result.b = 0
    else
        if (var_a0 u>= 0x10)
            int32_t var_d4_3 = var_b4.d
            sub_6b4d5b()
        
        int32_t var_a0_2 = 0xf
        int32_t var_a4_2 = 0
        var_b4 = 0
        
        if (var_68 u< 0x10)
            result.b = 0
        else
            int32_t var_d4_4 = var_7c.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_a0 u>= 0x10)
        int32_t var_d4_1 = var_b4.d
        sub_6b4d5b()
    
    int32_t var_a0_1 = 0xf
    int32_t var_a4_1 = 0
    var_b4 = 0
    
    if (var_68 u>= 0x10)
        int32_t var_d4_2 = var_7c.d
        sub_6b4d5b()
    
    result.b = 0

label_54af8c:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_bc)
return result
