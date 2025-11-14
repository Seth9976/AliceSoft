// 函数: sub_531a20
// 地址: 0x531a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
    int32_t* ecx = *(*(arg4 + 8) + (arg1 << 2))
    
    if (ecx != 0)
        eax = ecx[7]
        void* ecx_2 = *(ecx[5] + 4)
        
        if (eax u< (*(ecx_2 + 0x12c) - *(ecx_2 + 0x128)) s>> 4)
            int32_t eax_1 = eax << 4
            
            if (eax_1 != neg.d(*(ecx_2 + 0x128)))
                eax = *(eax_1 + *(ecx_2 + 0x128) + 4)
                
                if (eax != 0)
                    if (arg3 s>= 0)
                        int32_t* esi_1 = arg2
                        int32_t edi_1 = *esi_1
                        int32_t eax_3
                        int32_t edx_6
                        edx_6:eax_3 = muls.dp.d(0x66666667, esi_1[1] - edi_1)
                        int32_t edx_7 = edx_6 s>> 3
                        
                        if (arg3 s< (edx_7 u>> 0x1f) + edx_7)
                            int32_t* edi_2 = edi_1 + arg3 * 0x14
                            int32_t ecx_6 = *edi_2
                            int32_t* var_4_1 = edi_2
                            
                            if (ecx_6 s>= 0)
                                void* ebx_1 = esi_1[0x14]
                                int32_t eax_6
                                int32_t edx_10
                                edx_10:eax_6 = muls.dp.d(0x2e8ba2e9, esi_1[0x15] - ebx_1)
                                int32_t edx_11 = edx_10 s>> 3
                                
                                if (ecx_6 s< (edx_11 u>> 0x1f) + edx_11)
                                    int32_t eax_9 = edi_2[2]
                                    void* edx_12 = ebx_1 + ecx_6 * 0x2c
                                    int32_t* ebp = edi_2[1]
                                    void* var_10 = edx_12
                                    
                                    if ((((*(edx_12 + 0x20) - *(edx_12 + 0x1c)) s>> 3
                                            ^ (eax_9 - ebp)) & 0xfffffffc) == 0)
                                        if (ebp == eax_9)
                                            eax_9.b = 1
                                            return eax_9
                                        
                                        while (true)
                                            eax_9 = *ebp
                                            
                                            if (eax_9 s< 0)
                                                break
                                            
                                            int32_t ecx_12 = esi_1[0x10]
                                            
                                            if (eax_9 s>= (esi_1[0x11] - ecx_12) s>> 2)
                                                break
                                            
                                            void* eax_10 = *(ecx_12 + (eax_9 << 2))
                                            int32_t* esi_9 =
                                                ((ebp - edi_2[1]) s>> 2 << 5) + *(edx_12 + 0x1c)
                                            int32_t ebx_4 = sub_55cb30(eax + 0x34, &esi_9[1])
                                            
                                            if (ebx_4 != 0xffffffff)
                                                void* edi_5 = ebx_4 * 0x2c + *(eax + 0x34)
                                                
                                                if (*(edi_5 + 0x1c) == *esi_9)
                                                    int32_t var_14
                                                    
                                                    if (sub_54f990(ecx, ebx_4, &var_14).b == 0)
                                                        break
                                                    
                                                    void* var_28_3 = arg4
                                                    
                                                    if (sub_5313f0(arg2, *(edi_5 + 0x1c), &var_14, 
                                                            eax_10, 0xffffffff).b == 0)
                                                        break
                                                    
                                                    if (sub_54f950(ecx, ebx_4, var_14).b == 0)
                                                        break
                                                
                                                edi_2 = var_4_1
                                            
                                            ebp = &ebp[1]
                                            
                                            if (ebp == edi_2[2])
                                                eax_9.b = 1
                                                return eax_9
                                            
                                            esi_1 = arg2
                                            edx_12 = var_10
                                    
                                    eax_9.b = 0
                                    return eax_9
                    
                    void* eax_2
                    eax_2.b = 0
                    return eax_2

eax.b = 0
return eax
