// 函数: sub_4db150
// 地址: 0x4db150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72406f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_ac
int32_t eax_2 = data_78c474 ^ &var_ac
int32_t __saved_edi
int32_t var_c0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4db690(arg1)
sub_4db630(arg1)
*(arg1 + 0x44) = 0xffffffff
int32_t result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_5
    int32_t edx
    edx:eax_5 = muls.dp.d(0x7e07e07f, *(arg3 + 0x10) - *(arg3 + 0xc))
    int32_t edx_1 = edx s>> 8
    
    if (arg2 s>= (edx_1 u>> 0x1f) + edx_1)
        result.b = 0
    else
        void* ebp_1 = arg2 * 0x208 + *(arg3 + 0xc)
        void* var_90_1 = ebp_1
        
        if (ebp_1 == 0)
            result.b = 0
        else
            long double x87_r7_1 = fconvert.t(*(ebp_1 + 0x150))
            struct _EXCEPTION_REGISTRATION_RECORD** var_a8 = nullptr
            *(arg1 + 4) = fconvert.s(x87_r7_1)
            *(arg1 + 8) = *(ebp_1 + 0x90)
            int32_t var_a4_1 = 0
            int32_t var_a0_1 = 0
            int32_t var_4 = 0
            int32_t var_70_1 = 0xf
            int32_t var_74_1 = 0
            char var_84 = 0
            sub_401270(&var_84, 4, ".bmp")
            var_4.b = 1
            sub_405220(&var_84, &var_a8)
            var_4.b = 0
            
            if (var_70_1 u>= 0x10)
                int32_t var_c4_1 = var_84.d
                sub_6b4d5b()
            
            int32_t var_70_2 = 0xf
            int32_t var_74_2 = 0
            var_84 = 0
            sub_401270(&var_84, 4, ".tga")
            var_4.b = 2
            sub_405220(&var_84, &var_a8)
            var_4.b = 0
            
            if (var_70_2 u>= 0x10)
                int32_t var_c4_2 = var_84.d
                sub_6b4d5b()
            
            int32_t var_70_3 = 0xf
            int32_t var_74_3 = 0
            var_84 = 0
            sub_401270(&var_84, 4, ".png")
            var_4.b = 3
            sub_405220(&var_84, &var_a8)
            var_4.b = 0
            
            if (var_70_3 u>= 0x10)
                int32_t var_c4_3 = var_84.d
                sub_6b4d5b()
            
            result = (*(ebp_1 + 0x98) - *(ebp_1 + 0x94)) s/ 0x1c
            int32_t edi_4 = 0
            int32_t result_1 = result
            int32_t var_98_1 = 0
            
            if (result s<= 0)
            label_4db5d1:
                struct _EXCEPTION_REGISTRATION_RECORD** esi_9 = var_a8
                
                if (esi_9 != 0)
                    sub_405780(esi_9, var_a4_1)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_c4_17 = esi_9
                    sub_6b4d5b()
                
                result.b = 1
            else
                while (true)
                    int32_t ecx_8
                    result, ecx_8 = sub_4ba920(&var_84, edi_4, ebp_1)
                    var_4.b = 4
                    
                    if (var_74_3 != 0)
                        void** esi_7 = var_a8
                        void** ebp_2 = esi_7
                        
                        if (esi_7 != var_a4_1)
                            do
                                var_4.b = 5
                                char var_68
                                char var_4c
                                char* eax_15
                                int32_t edx_9
                                eax_15, edx_9 = sub_4c1d70(&var_84, &var_68, 
                                    sub_401800(ecx_8, arg3 + 0x1c, &var_4c), &var_68)
                                var_4.b = 6
                                int32_t var_30
                                sub_4c1d70(ebp_2, edx_9, eax_15, &var_30)
                                int32_t var_54
                                
                                if (var_54 u>= 0x10)
                                    int32_t var_c4_8 = var_68.d
                                    sub_6b4d5b()
                                
                                var_54 = 0xf
                                int32_t var_58_1 = 0
                                var_68 = 0
                                var_4.b = 9
                                int32_t var_38
                                
                                if (var_38 u>= 0x10)
                                    int32_t var_c4_9 = var_4c.d
                                    sub_6b4d5b()
                                
                                void* ecx_13 = *(arg1 + 0x48)
                                var_38 = 0xf
                                int32_t var_3c_1 = 0
                                var_4c = 0
                                int32_t* eax_17
                                eax_17, ecx_8 = sub_4c0fd0(ecx_13, &var_30, 1)
                                var_ac = eax_17
                                int32_t var_1c
                                
                                if (eax_17 != 0)
                                    int32_t eax_20 = *(arg1 + 0x28)
                                    int32_t ecx_17
                                    
                                    if (&var_ac u< eax_20)
                                        ecx_17 = *(arg1 + 0x24)
                                    
                                    if (&var_ac u>= eax_20 || ecx_17 u> &var_ac)
                                        if (eax_20 == *(arg1 + 0x2c))
                                            sub_4307a0(arg1 + 0x24)
                                        
                                        result = *(arg1 + 0x28)
                                        
                                        if (result != 0)
                                            *result = eax_17
                                    else
                                        if (eax_20 == *(arg1 + 0x2c))
                                            sub_4307a0(arg1 + 0x24)
                                        
                                        result = *(arg1 + 0x28)
                                        
                                        if (result != 0)
                                            *result =
                                                *(*(arg1 + 0x24) + ((&var_ac - ecx_17) s>> 2 << 2))
                                    
                                    *(arg1 + 0x28) += 4
                                    var_4.b = 4
                                    
                                    if (var_1c u>= 0x10)
                                        int32_t var_c4_15 = var_30
                                        sub_6b4d5b()
                                    
                                    if (ebp_2 == var_a4_1)
                                        goto label_4db487
                                    
                                    var_4.b = 0
                                    
                                    if (var_70_3 u>= 0x10)
                                        int32_t var_c4_16 = var_84.d
                                        sub_6b4d5b()
                                    
                                    ebp_1 = var_90_1
                                    goto label_4db5c2
                                
                                var_4.b = 4
                                
                                if (var_1c u>= 0x10)
                                    int32_t var_c4_10 = var_30
                                    ecx_8 = sub_6b4d5b()
                                
                                ebp_2 = &ebp_2[7]
                            while (ebp_2 != var_a4_1)
                            
                        label_4db487:
                            esi_7 = var_a8
                        
                        char* ecx_15 = var_84.d
                        
                        if (var_70_3 u< 0x10)
                            ecx_15 = &var_84
                        
                        void* eax_19 = arg3 + 0x1c
                        
                        if (*(eax_19 + 0x14) u>= 0x10)
                            eax_19 = *eax_19
                        
                        char* var_c4_11 = ecx_15
                        void* var_c8_2 = eax_19
                        sub_51ddc0(0x755d88)
                        
                        if (var_70_3 u>= 0x10)
                            int32_t var_c4_12 = var_84.d
                            sub_6b4d5b()
                        
                        int32_t var_70_4 = 0xf
                        int32_t var_74_4 = 0
                        var_84 = 0
                        
                        if (esi_7 != 0)
                            struct _EXCEPTION_REGISTRATION_RECORD** ebp_3 = var_a8
                            
                            if (ebp_3 != var_a4_1)
                                do
                                    if (esi_7[5] u>= 0x10)
                                        void* var_c4_13 = *esi_7
                                        sub_6b4d5b()
                                    
                                    esi_7[5] = 0xf
                                    esi_7[4] = 0
                                    *esi_7 = nullptr
                                    esi_7 = &esi_7[7]
                                while (esi_7 != var_a4_1)
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** var_c4_14 = ebp_3
                            sub_6b4d5b()
                        
                        break
                    
                    var_4.b = 0
                    
                    if (var_70_3 u>= 0x10)
                        int32_t var_c4_5 = var_84.d
                        sub_6b4d5b()
                    
                label_4db5c2:
                    edi_4 = var_98_1 + 1
                    var_98_1 = edi_4
                    
                    if (edi_4 s>= result_1)
                        goto label_4db5d1
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_ac)
return result
