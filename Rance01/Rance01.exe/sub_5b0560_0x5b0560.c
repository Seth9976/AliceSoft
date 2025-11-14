// 函数: sub_5b0560
// 地址: 0x5b0560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    void* ebx_1 = arg2
    
    if (ebx_1 != 0)
        int32_t eax = *(ebx_1 + 0x30)
        int32_t edi = *(ebx_1 + 0x34)
        
        if (eax + 1 s<= edi)
            goto label_5b063d
        
        int128_t* ebp_1 = *(ebx_1 + 0x38)
        
        if (ebp_1 == 0)
            *(ebx_1 + 0x34) = 9
            int32_t ecx_12 = *(ebx_1 + 0x34) * 0xe
            *(ebx_1 + 0x30) = 0
            int32_t eax_6 = sub_5a6370(ecx_12 * 2, arg1)
            *(ebx_1 + 0x38) = eax_6
            
            if (eax_6 != 0)
                *(ebx_1 + 0xb8) |= 0x4000
                goto label_5b063d
            
            *(ebx_1 + 0x34) = edi
            *(ebx_1 + 0x30) = eax
            return 1
        
        *(ebx_1 + 0x34) = eax + 9
        int128_t* eax_3 = sub_5a6370((eax + 9) * 0x1c, arg1)
        *(ebx_1 + 0x38) = eax_3
        
        if (eax_3 != 0)
            sub_6c02a0(eax_3, ebp_1, edi * 0x1c)
            sub_5a6340(arg1, ebp_1)
        label_5b063d:
            int32_t var_4_1 = 0
            int32_t* ebp_3 = arg3 + 0x14
            
            while (true)
                PSTR lpString = ebp_3[-4]
                int32_t* edi_1 = *(ebx_1 + 0x38) + *(ebx_1 + 0x30) * 0x1c
                
                if (lpString != 0)
                    int32_t ecx_16 = ebp_3[-5]
                    
                    if (ecx_16 s< 0xffffffff || ecx_16 s>= 3)
                        sub_5a5de0("text compression mode is out of range", arg1)
                    else
                        int32_t eax_9 = lstrlenA(lpString)
                        void* ebx_2 = nullptr
                        char* var_10_1
                        
                        if (ebp_3[-5] s> 0)
                            PSTR lpString_1 = *ebp_3
                            
                            if (lpString_1 == 0)
                                var_10_1 = nullptr
                            else
                                var_10_1 = lstrlenA(lpString_1)
                            
                            PSTR lpString_2 = ebp_3[1]
                            
                            if (lpString_2 == 0)
                                ebx_2 = nullptr
                            else
                                ebx_2 = lstrlenA(lpString_2)
                        else
                            var_10_1 = nullptr
                        
                        char* lpString_3 = ebp_3[-3]
                        int32_t var_c_1
                        
                        if (lpString_3 == 0 || *lpString_3 == 0)
                            var_c_1 = 0
                            int32_t ecx_17
                            ecx_17.b = ebp_3[-5] s> 0
                            *edi_1 = ecx_17 * 2 - 1
                        else
                            var_c_1 = lstrlenA(lpString_3)
                            *edi_1 = ebp_3[-5]
                        
                        int128_t* eax_15 = sub_5a6370(var_c_1 + ebx_2 + var_10_1 + eax_9 + 4, arg1)
                        edi_1[1] = eax_15
                        
                        if (eax_15 == 0)
                            break
                        
                        sub_6c02a0(eax_15, ebp_3[-4], eax_9)
                        *(eax_9 + edi_1[1]) = 0
                        void* ecx_23
                        
                        if (ebp_3[-5] s<= 0)
                            int32_t edx_10 = edi_1[1]
                            edi_1[5] = 0
                            edi_1[6] = 0
                            ecx_23 = edx_10 + eax_9 + 1
                        else
                            int128_t* eax_17 = edi_1[1] + eax_9 + 1
                            edi_1[5] = eax_17
                            sub_6c02a0(eax_17, *ebp_3, var_10_1)
                            var_10_1[edi_1[5]] = 0
                            void* eax_19 = &var_10_1[edi_1[5] + 1]
                            edi_1[6] = eax_19
                            sub_6c02a0(eax_19, ebp_3[1], ebx_2)
                            *(ebx_2 + edi_1[6]) = 0
                            ecx_23 = ebx_2 + edi_1[6] + 1
                        
                        edi_1[2] = ecx_23
                        
                        if (var_c_1 != 0)
                            sub_6c02a0(ecx_23, ebp_3[-3], var_c_1)
                        
                        *(var_c_1 + edi_1[2]) = 0
                        
                        if (*edi_1 s<= 0)
                            edi_1[4] = 0
                            edi_1[3] = var_c_1
                            *(arg2 + 0x30) += 1
                            ebx_1 = arg2
                        else
                            edi_1[3] = 0
                            edi_1[4] = var_c_1
                            *(arg2 + 0x30) += 1
                            ebx_1 = arg2
                
                int32_t eax_25 = var_4_1 + 1
                ebp_3 = &ebp_3[7]
                var_4_1 = eax_25
                
                if (eax_25 s>= 1)
                    return 0
        else
            *(ebx_1 + 0x34) = edi
            *(ebx_1 + 0x38) = ebp_1
        
        return 1

return 0
