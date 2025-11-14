// 函数: sub_501d40
// 地址: 0x501d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714a4a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x7d) != 0 && *(arg2 + 0x7d) != 0 && *(arg1 + 0x1c) == *(arg2 + 0x1c)
        && *(arg1 + 0x20) == *(arg2 + 0x20) && *(arg1 + 0x24) == *(arg2 + 0x24))
    eax_3.b = *(arg1 + 0x25)
    
    if (eax_3.b == *(arg2 + 0x25))
        int32_t ecx_1
        ecx_1.b = *(arg1 + 0x26)
        
        if (ecx_1.b == *(arg2 + 0x26) && *(arg1 + 0x27) == *(arg2 + 0x27))
            void var_1c
            float* ecx_2 = sub_4167e0(&var_1c)
            int32_t var_4 = 0
            int32_t* var_24
            int32_t*** eax_4
            
            for (int32_t* i = *(arg1 + 0x38); i != *(arg1 + 0x3c); i = &i[1])
                eax_4, ecx_2 = sub_416880(&var_1c, i, &var_24)
            
            for (int32_t* i_1 = *(arg2 + 0x38); i_1 != *(arg2 + 0x3c); i_1 = &i_1[1])
                eax_4, ecx_2 = sub_416880(&var_1c, i_1, &var_24)
            
            int32_t var_14
            
            if (var_14 s<= arg3)
                ecx_2.b = *(arg1 + 0x48)
                
                if (ecx_2.b != *(arg2 + 0x48))
                label_501e46:
                    int32_t var_4_2 = 0xffffffff
                label_501e53:
                    sub_533680(ecx_2, &var_1c)
                    int32_t eax_7
                    eax_7.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_7
                
                eax_4.b = *(arg1 + 0x49)
                
                if (eax_4.b != *(arg2 + 0x49))
                label_501e7b:
                    int32_t var_4_3 = 0xffffffff
                    sub_533680(&var_1c, &var_1c)
                    int32_t eax_8
                    eax_8.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_8
                
                long double x87_r7_1 = fconvert.t(*(arg1 + 0x4c))
                long double x87_r6_1 = fconvert.t(*(arg2 + 0x4c))
                x87_r6_1 - x87_r7_1
                eax_4.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_501e46
                
                long double x87_r7_2 = fconvert.t(*(arg1 + 0x50))
                long double x87_r6_2 = fconvert.t(*(arg2 + 0x50))
                x87_r6_2 - x87_r7_2
                eax_4.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    long double x87_r7_3 = fconvert.t(*(arg1 + 0x54))
                    long double x87_r6_3 = fconvert.t(*(arg2 + 0x54))
                    x87_r6_3 - x87_r7_3
                    eax_4.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (p_3)
                        goto label_501e7b
                    
                    long double x87_r7_4 = fconvert.t(*(arg1 + 0x58))
                    long double x87_r6_4 = fconvert.t(*(arg2 + 0x58))
                    x87_r6_4 - x87_r7_4
                    eax_4.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        goto label_501e46
                    
                    ecx_2 = arg2 + 0x5c
                    
                    if (sub_51e320(ecx_2, arg1 + 0x5c) == 0)
                        fconvert.t(*(arg2 + 0x6c)) - fconvert.t(*(arg1 + 0x6c))
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (p_5)
                            goto label_501e7b
                        
                        void* edx_2
                        edx_2.b = *(arg1 + 0x70)
                        
                        if (edx_2.b == *(arg2 + 0x70))
                            ecx_2.b = *(arg1 + 0x71)
                            
                            if (ecx_2.b != *(arg2 + 0x71))
                                goto label_501e46
                            
                            if (*(arg1 + 0x74) != *(arg2 + 0x74))
                                goto label_501e7b
                            
                            edx_2.b = *(arg1 + 0x78)
                            
                            if (edx_2.b == *(arg2 + 0x78))
                                ecx_2.b = *(arg1 + 0x79)
                                
                                if (ecx_2.b != *(arg2 + 0x79))
                                    goto label_501e46
                                
                                int32_t eax_10
                                eax_10.b = *(arg1 + 0x7a)
                                
                                if (eax_10.b != *(arg2 + 0x7a))
                                    goto label_501e7b
                                
                                edx_2.b = *(arg1 + 0x7b)
                                
                                if (edx_2.b == *(arg2 + 0x7b))
                                    ecx_2.b = *(arg1 + 0x7c)
                                    int32_t var_4_4 = 0xffffffff
                                    
                                    if (ecx_2.b != *(arg2 + 0x7c))
                                        goto label_501e53
                                    
                                    sub_533680(ecx_2, &var_1c)
                                    int32_t eax_11
                                    eax_11.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_11
            
            int32_t var_4_1 = 0xffffffff
            sub_533680(ecx_2, &var_1c)

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
