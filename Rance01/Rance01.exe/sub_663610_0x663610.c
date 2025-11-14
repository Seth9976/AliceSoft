// 函数: sub_663610
// 地址: 0x663610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = data_78c474 ^ &var_78
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2c) = 0
int32_t ecx = *(arg1 + 0x1c)
int32_t* result = *(arg1 + 0x20)

if (ecx != result)
    int32_t edx_1
    edx_1:result = muls.dp.d(0x38e38e39, result - ecx)
    int32_t edx_2 = edx_1 s>> 3
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t* i = *(arg1 + 0x1c)
        
        if (i != 0)
            int32_t* ebx_1 = arg3
            
            do
                int32_t eax_7 = i[7]
                int32_t* var_64
                int32_t var_50
                
                if (eax_7 != 2)
                    if (eax_7 != 0x12 && eax_7 != 0x11)
                        int32_t var_50_1 = 0xf
                        int32_t var_54_1 = 0
                        var_64.b = 0
                        sub_401270(&var_64, 0x2b, 0x7306e8)
                        int32_t var_4_3 = 1
                        sub_6686d0(i, arg2, &var_64)
                        
                        if (var_50_1 u>= 0x10)
                            int32_t* var_90_14 = var_64
                            sub_6b4d5b()
                        
                        result.b = 0
                        goto label_663805
                    
                    void* var_48
                    sub_66fc20(&var_48, i)
                    int32_t var_4_1 = 2
                    char var_70 = 0x2e
                    int32_t var_34
                    
                    if (sub_405360(&var_48, &var_70, 1) != 0xffffffff)
                        int32_t var_50_2 = 0xf
                        int32_t var_54_2 = 0
                        var_64.b = 0
                        sub_401270(&var_64, 0x29, 0x730714)
                        var_4_1.b = 3
                        sub_6686d0(i, arg2, &var_64)
                        
                        if (var_50_2 u>= 0x10)
                            int32_t* var_90_16 = var_64
                            sub_6b4d5b()
                        
                        if (var_34 u< 0x10)
                            result.b = 0
                            goto label_663805
                        
                        void* var_90_17 = var_48
                        sub_6b4d5b()
                        result.b = 0
                        goto label_663805
                    
                    *(arg1 + 0x2c) += 1
                    int32_t edx_11 = *(arg1 + 0x1c)
                    int32_t eax_25 = *(arg1 + 0x20)
                    int32_t ecx_10 = *(arg1 + 0x2c)
                    
                    if (edx_11 == eax_25)
                    label_663a96:
                        int32_t var_50_3 = 0xf
                        int32_t var_54_3 = 0
                        var_64.b = 0
                        sub_401270(&var_64, 0x27, 0x730740)
                        var_4_1.b = 4
                        sub_6686d0(nullptr, arg2, &var_64)
                        
                        if (var_50_3 u>= 0x10)
                            int32_t* var_90_19 = var_64
                            sub_6b4d5b()
                        
                        if (var_34 u< 0x10)
                            result.b = 0
                            goto label_663805
                        
                        void* var_90_20 = var_48
                        sub_6b4d5b()
                        result.b = 0
                        goto label_663805
                    
                    if ((eax_25 - edx_11) s/ 0x24 s<= ecx_10)
                        goto label_663a96
                    
                    int32_t* ebp_2 = *(arg1 + 0x1c) + ecx_10 * 0x24
                    
                    if (ebp_2 == 0)
                        goto label_663a96
                    
                    int32_t eax_31 = ebp_2[7]
                    
                    if (eax_31 == 0xb)
                        char* eax_32 = sub_6697c0(ebx_1)
                        *eax_32 = 1
                        char eax_33 = sub_664430(ebx_1, arg2, arg1, eax_32)
                        int16_t top = top - 1
                        unimplemented  {call 0x664430}
                        
                        if (eax_33 == 0)
                            sub_402be0(&var_64, 0x730768)
                            var_4_1.b = 5
                            sub_6686d0(ebp_2, arg2, &var_64)
                            
                            if (var_50 u>= 0x10)
                                int32_t* var_90_22 = var_64
                                sub_6b4d5b()
                            
                            if (var_34 u< 0x10)
                                result.b = 0
                                goto label_663805
                            
                            void* var_90_23 = var_48
                            sub_6b4d5b()
                            result.b = 0
                            goto label_663805
                        
                        sub_401180(&eax_32[0xc], 0xffffffff, &var_48, 0)
                    else
                        void* var_94_14
                        int32_t** var_90_24
                        
                        if (eax_31 != 5)
                            if (eax_31 != 0xc)
                                void var_2c
                                sub_402be0(&var_2c, 0x730820)
                                var_4_1.b = 0xa
                                sub_6686d0(ebp_2, arg2, &var_2c)
                                sub_401110(&var_2c)
                                sub_401110(&var_48)
                                result.b = 0
                                goto label_663805
                            
                            char* eax_38 = sub_6697c0(ebx_1)
                            sub_401180(&eax_38[0xc], 0xffffffff, &var_48, 0)
                            *eax_38 = 1
                            
                            if (sub_667d20(ebx_1, arg2, arg1, eax_38) == 0)
                                sub_402be0(&var_64, 0x730800)
                                var_90_24 = &var_64
                                var_4_1.b = 9
                                var_94_14 = arg2
                                goto label_663b76
                        else
                            char* eax_34 = sub_6697c0(ebx_1)
                            *eax_34 = 1
                            int32_t* ecx_32
                            
                            if (sub_665400(arg1, arg2, eax_34, ebx_1) == 0)
                                sub_402be0(&var_64, 0x730784)
                                var_90_24 = &var_64
                                var_4_1.b = 6
                                var_94_14 = arg2
                            label_663b76:
                                ecx_32 = ebp_2
                            label_663b78:
                                sub_6686d0(ecx_32, var_94_14, var_90_24)
                                sub_401110(&var_64)
                                sub_401110(&var_48)
                                result.b = 0
                                goto label_663805
                            
                            if (sub_663c40(arg2, &eax_34[0x4c], &eax_34[0x5c]) != 0)
                                sub_402be0(&var_64, 0x7307a8)
                                var_90_24 = &var_64
                                ecx_32 = ebp_2
                                var_4_1.b = 7
                                var_94_14 = arg2
                                goto label_663b78
                            
                            if (sub_664270(arg2, &eax_34[0x5c], &eax_34[0x4c]) == 0)
                                sub_402be0(&var_64, 0x7307d0)
                                ecx_32 = ebp_2
                                var_90_24 = &var_64
                                var_4_1.b = 8
                                var_94_14 = arg2
                                goto label_663b78
                            
                            sub_401180(&eax_34[0xc], 0xffffffff, &var_48, 0)
                            ebx_1 = arg3
                    
                    int32_t var_4_2 = 0xffffffff
                    
                    if (var_34 u>= 0x10)
                        void* var_90_12 = var_48
                        sub_6b4d5b()
                else
                    sub_66fc20(&var_64, i)
                    int32_t var_54
                    int32_t eax_8 = var_54
                    
                    if (var_54 u>= 7)
                        eax_8 = 7
                    
                    int32_t* ebx_2 = var_64
                    int32_t* edx_3 = ebx_2
                    
                    if (var_50 u< 0x10)
                        edx_3 = &var_64
                    
                    int32_t eax_9 = sub_402320(eax_8, edx_3, "#define", eax_8)
                    bool cond:0_1 = eax_9 == 0
                    
                    if (eax_9 == 0)
                        if (var_54 u>= 7)
                            eax_9.b = var_54 != 7
                        else
                            eax_9 = 0xffffffff
                        
                        cond:0_1 = eax_9 == 0
                    
                    eax_9.b = cond:0_1
                    
                    if (eax_9.b != 0)
                        *(arg1 + 0x2c) += 3
                    
                    int32_t eax_12 = var_54
                    
                    if (var_54 u>= 8)
                        eax_12 = 8
                    
                    int32_t* edx_4 = ebx_2
                    
                    if (var_50 u< 0x10)
                        edx_4 = &var_64
                    
                    int32_t eax_13 = sub_402320(eax_12, edx_4, "#include", eax_12)
                    bool cond:1_1 = eax_13 == 0
                    
                    if (eax_13 == 0)
                        if (var_54 u>= 8)
                            eax_13.b = var_54 != 8
                        else
                            eax_13 = 0xffffffff
                        
                        cond:1_1 = eax_13 == 0
                    
                    eax_13.b = cond:1_1
                    
                    if (eax_13.b != 0)
                        *(arg1 + 0x2c) += 1
                    
                    int32_t eax_16 = var_54
                    
                    if (var_54 u>= 9)
                        eax_16 = 9
                    
                    int32_t* edx_5 = ebx_2
                    
                    if (var_50 u< 0x10)
                        edx_5 = &var_64
                    
                    int32_t eax_17 = sub_402320(eax_16, edx_5, "#gamename", eax_16)
                    bool cond:2_1 = eax_17 == 0
                    
                    if (eax_17 == 0)
                        if (var_54 u>= 9)
                            eax_17.b = var_54 != 9
                        else
                            eax_17 = 0xffffffff
                        
                        cond:2_1 = eax_17 == 0
                    
                    eax_17.b = cond:2_1
                    
                    if (eax_17.b != 0)
                        *(arg1 + 0x2c) += 1
                    
                    int32_t var_4 = 0xffffffff
                    
                    if (var_50 u>= 0x10)
                        int32_t* var_90_5 = ebx_2
                        sub_6b4d5b()
                    
                    ebx_1 = arg3
                *(arg1 + 0x2c) += 1
                int32_t edx_6 = *(arg1 + 0x1c)
                result = *(arg1 + 0x20)
                int32_t ecx_5 = *(arg1 + 0x2c)
                
                if (edx_6 == result)
                    break
                
                if ((result - edx_6) s/ 0x24 s<= ecx_5)
                    break
                
                i = *(arg1 + 0x1c) + ecx_5 * 0x24
            while (i != 0)

result.b = 1
label_663805:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_78)
return result
