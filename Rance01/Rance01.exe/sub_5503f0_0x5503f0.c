// 函数: sub_5503f0
// 地址: 0x5503f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
void* edi = ebp[5]
void* ecx = *(edi + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(ecx + 0x11c) - *(ecx + 0x118))
int32_t edx_3 = edx_2 s>> 3
int32_t ebx = 0

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    arg1 = nullptr
    
    while (true)
        int32_t eax_4
        int32_t edx_6
        edx_6:eax_4 = muls.dp.d(0x2e8ba2e9, *(ecx + 0x11c) - *(ecx + 0x118))
        int32_t edx_7 = edx_6 s>> 3
        int32_t eax_7
        
        if (ebx u< (edx_7 u>> 0x1f) + edx_7)
            void* esi_1 = *(ecx + 0x118)
            int32_t* esi_2 = esi_1 + arg1
            
            if (esi_1 != neg.d(arg1))
                eax_7 = esi_2[1] - 0xa
                
                if (eax_7 u<= 0x3a)
                    uint32_t ecx_1 = zx.d(lookup_table_55061c[eax_7])
                    int32_t var_4
                    
                    switch (ecx_1)
                        case 0
                            eax_7 = ebp[1]
                            int32_t ecx_2 = esi_2[2]
                            int32_t esi_3 = *esi_2
                            
                            if (esi_3 u< eax_7 u>> 2)
                                if (eax_7 != 0)
                                    *(*ebp + (esi_3 << 2)) = ecx_2
                                else
                                    *(eax_7 + (esi_3 << 2)) = ecx_2
                                
                                goto label_5505b8
                        case 1
                            uint32_t var_1c_1 = ecx_1
                            eax_7 = sub_54f950(ebp, *esi_2, 
                                fconvert.s(fconvert.t(fconvert.s(fconvert.t(esi_2[3])))))
                        label_5505b4:
                            
                            if (eax_7.b != 0)
                                goto label_5505b8
                        case 2
                            if (sub_54f990(ebp, *esi_2, &var_4).b != 0)
                                eax_7 = var_4
                                
                                if (eax_7 u< (*(edi + 0xc) - *(edi + 8)) s>> 2)
                                    eax_7 = *(*(edi + 8) + (eax_7 << 2))
                                    
                                    if (eax_7 != 0)
                                        eax_7 = sub_550660(eax_7, &esi_2[4])
                                        goto label_5505b4
                        case 3
                            int32_t ecx_8 = ebp[1]
                            eax_7 = *esi_2
                            
                            if (eax_7 u< ecx_8 u>> 2)
                                if (ecx_8 != 0)
                                    ecx_8 = *ebp
                                
                                *(ecx_8 + (eax_7 << 2)) = 0
                                
                                if (sub_54f950(ebp, *esi_2 + 1, esi_2[2]).b != 0)
                                    eax_7 = ebp[5]
                                    
                                    if (((*(eax_7 + 0xc) - *(eax_7 + 8)) & 0xfffffffc) s> 0)
                                        eax_7 = *(eax_7 + 8)
                                        
                                        if (*eax_7 != 0)
                                            void* eax_11 = *eax_7
                                            *(eax_11 + 0x10) += 1
                                        label_5505b8:
                                            edi = ebp[5]
                                            ecx = *(edi + 4)
                                            arg1 = &arg1[0xb]
                                            int32_t eax_14
                                            int32_t edx_20
                                            edx_20:eax_14 = muls.dp.d(0x2e8ba2e9, 
                                                *(ecx + 0x11c) - *(ecx + 0x118))
                                            int32_t edx_21 = edx_20 s>> 3
                                            ebx += 1
                                            
                                            if (ebx s>= (edx_21 u>> 0x1f) + edx_21)
                                                break
                                            
                                            continue
                        case 4
                            int32_t edi_1 = ebp[1]
                            int32_t ecx_12 = esi_2[2]
                            eax_7 = edi_1 u>> 2
                            
                            if (ecx_12 u< eax_7)
                                int32_t edx_17
                                
                                if (edi_1 != 0)
                                    edx_17 = *ebp
                                else
                                    edx_17 = 0
                                
                                int32_t esi_5 = *esi_2
                                int32_t ecx_13 = *(edx_17 + (ecx_12 << 2))
                                
                                if (esi_5 u< eax_7)
                                    int32_t eax_13
                                    
                                    if (edi_1 != 0)
                                        eax_13 = *ebp
                                    else
                                        eax_13 = 0
                                    
                                    *(eax_13 + (esi_5 << 2)) = ecx_13
                                    
                                    if (ecx_13 == 0xffffffff)
                                        goto label_5505b8
                                    
                                    if (ecx_13 s>= 0)
                                        eax_7 = sub_554140(ebp[5], edx_17, ecx_13)
                                        goto label_5505b4
        
        eax_7.b = 0
        return eax_7

int32_t eax_3
eax_3.b = 1
return eax_3
