// 函数: sub_5476b0
// 地址: 0x5476b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result

if (arg2[0x10].b != 0)
    result = arg2[1]
    uint32_t edi_2 = result u>> 2
    
    if (edi_2 s>= 2)
        void* esi_1
        
        if (result != 0)
            esi_1 = *arg2
        else
            esi_1 = nullptr
        
        void* var_10_1 = esi_1
        
        if (edi_2 s> 1)
            int32_t ebx_1 = 0
            result = esi_1 + 4
            int32_t var_8_1 = 0
            int32_t* result_1 = result
            
            while (true)
                int32_t edi_4 = *result
                
                if (ebx_1 s>= 0)
                    if (ebx_1 + 1 s>= 4)
                        void* esi_2 = &result[-2]
                        
                        while (true)
                            int32_t edx_1 = *(esi_2 + 4)
                            int32_t* eax_3
                            
                            if (edx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                eax_3 = *(*(arg1 + 0x1e4) + (edx_1 << 2))
                            else
                                eax_3 = nullptr
                            
                            int32_t eax_5
                            
                            if (eax_3[1] != 0)
                                eax_5 = *eax_3
                            else
                                eax_5 = 0
                            
                            int32_t* eax_9
                            
                            if (edi_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                eax_9 = *(*(arg1 + 0x1e4) + (edi_4 << 2))
                            else
                                eax_9 = nullptr
                            
                            int32_t eax_11
                            
                            if (eax_9[1] != 0)
                                eax_11 = *eax_9
                            else
                                eax_11 = 0
                            
                            long double x87_r7_2 =
                                fconvert.t(fconvert.s(fconvert.t(*(eax_5 + (arg3 << 2)))))
                            long double x87_r6_1 = fconvert.t(*(eax_11 + (arg3 << 2)))
                            x87_r6_1 - x87_r7_2
                            eax_11.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                            
                            if ((eax_11:1.b & 1) != 0)
                                *(esi_2 + 8) = edx_1
                                int32_t edx_2 = *esi_2
                                int32_t* eax_15
                                
                                if (edx_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                    eax_15 = *(*(arg1 + 0x1e4) + (edx_2 << 2))
                                else
                                    eax_15 = nullptr
                                
                                int32_t eax_17
                                
                                if (eax_15[1] != 0)
                                    eax_17 = *eax_15
                                else
                                    eax_17 = 0
                                
                                int32_t* eax_21
                                
                                if (edi_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                    eax_21 = *(*(arg1 + 0x1e4) + (edi_4 << 2))
                                else
                                    eax_21 = nullptr
                                
                                int32_t eax_23
                                
                                if (eax_21[1] != 0)
                                    eax_23 = *eax_21
                                else
                                    eax_23 = 0
                                
                                long double x87_r7_4 =
                                    fconvert.t(fconvert.s(fconvert.t(*(eax_17 + (arg3 << 2)))))
                                long double x87_r6_2 = fconvert.t(*(eax_23 + (arg3 << 2)))
                                x87_r6_2 - x87_r7_4
                                eax_23.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe
                                
                                if ((eax_23:1.b & 1) == 0)
                                    ebx_1 -= 1
                                else
                                    *(esi_2 + 4) = edx_2
                                    int32_t edx_3 = *(esi_2 - 4)
                                    int32_t* eax_27
                                    
                                    if (edx_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                        eax_27 = *(*(arg1 + 0x1e4) + (edx_3 << 2))
                                    else
                                        eax_27 = nullptr
                                    
                                    int32_t eax_29
                                    
                                    if (eax_27[1] != 0)
                                        eax_29 = *eax_27
                                    else
                                        eax_29 = 0
                                    
                                    int32_t* eax_33
                                    
                                    if (edi_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                        eax_33 = *(*(arg1 + 0x1e4) + (edi_4 << 2))
                                    else
                                        eax_33 = nullptr
                                    
                                    int32_t eax_35
                                    
                                    if (eax_33[1] != 0)
                                        eax_35 = *eax_33
                                    else
                                        eax_35 = 0
                                    
                                    long double x87_r7_6 =
                                        fconvert.t(fconvert.s(fconvert.t(*(eax_29 + (arg3 << 2)))))
                                    long double x87_r6_3 = fconvert.t(*(eax_35 + (arg3 << 2)))
                                    x87_r6_3 - x87_r7_6
                                    eax_35.w = (x87_r6_3 < x87_r7_6 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe
                                    
                                    if ((eax_35:1.b & 1) == 0)
                                        ebx_1 -= 2
                                    else
                                        *esi_2 = edx_3
                                        int32_t edx_4 = *(esi_2 - 8)
                                        int32_t* eax_39
                                        
                                        if (edx_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                            eax_39 = *(*(arg1 + 0x1e4) + (edx_4 << 2))
                                        else
                                            eax_39 = nullptr
                                        
                                        int32_t eax_41
                                        
                                        if (eax_39[1] != 0)
                                            eax_41 = *eax_39
                                        else
                                            eax_41 = 0
                                        
                                        int32_t* eax_45
                                        
                                        if (edi_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                            eax_45 = *(*(arg1 + 0x1e4) + (edi_4 << 2))
                                        else
                                            eax_45 = nullptr
                                        
                                        int32_t eax_47
                                        
                                        if (eax_45[1] != 0)
                                            eax_47 = *eax_45
                                        else
                                            eax_47 = 0
                                        
                                        long double x87_r7_8 = fconvert.t(fconvert.s(fconvert.t(
                                            *(eax_41 + (arg3 << 2)))))
                                        long double x87_r6_4 = fconvert.t(*(eax_47 + (arg3 << 2)))
                                        x87_r6_4 - x87_r7_8
                                        eax_47.w = (x87_r6_4 < x87_r7_8 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_4, x87_r7_8) ? 1 : 0) << 0xa
                                            | (x87_r6_4 == x87_r7_8 ? 1 : 0) << 0xe
                                        
                                        if ((eax_47:1.b & 1) == 0)
                                            ebx_1 -= 3
                                        else
                                            *(esi_2 - 4) = edx_4
                                            ebx_1 -= 4
                                            esi_2 -= 0x10
                                            
                                            if (ebx_1 s>= 3)
                                                continue
                                            
                                            esi_1 = var_10_1
                                            break
                            
                            esi_1 = var_10_1
                            goto label_5479ae
                    
                    if (ebx_1 s>= 0)
                        int32_t temp1_1
                        
                        do
                            int32_t edx_5 = *(esi_1 + (ebx_1 << 2))
                            int32_t* eax_51
                            
                            if (edx_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                eax_51 = *(*(arg1 + 0x1e4) + (edx_5 << 2))
                            else
                                eax_51 = nullptr
                            
                            int32_t eax_53
                            
                            if (eax_51[1] != 0)
                                eax_53 = *eax_51
                            else
                                eax_53 = 0
                            
                            int32_t* eax_57
                            
                            if (edi_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                eax_57 = *(*(arg1 + 0x1e4) + (edi_4 << 2))
                            else
                                eax_57 = nullptr
                            
                            int32_t eax_59
                            
                            if (eax_57[1] != 0)
                                eax_59 = *eax_57
                            else
                                eax_59 = 0
                            
                            long double x87_r7_10 =
                                fconvert.t(fconvert.s(fconvert.t(*(eax_53 + (arg3 << 2)))))
                            long double x87_r6_5 = fconvert.t(*(eax_59 + (arg3 << 2)))
                            x87_r6_5 - x87_r7_10
                            eax_59.w = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe
                            
                            if ((eax_59:1.b & 1) == 0)
                                break
                            
                            temp1_1 = ebx_1
                            ebx_1 -= 1
                            *(esi_1 + (ebx_1 << 2) + 8) = edx_5
                        while (temp1_1 - 1 s>= 0)
                
            label_5479ae:
                *(esi_1 + (ebx_1 << 2) + 4) = edi_4
                ebx_1 = var_8_1 + 1
                result = &result_1[1]
                result_1 = result
                var_8_1 = ebx_1
                
                if (ebx_1 + 1 s>= edi_2)
                    break

result.b = 1
return result
