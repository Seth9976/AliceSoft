// 函数: sub_6d34f0
// 地址: 0x6d34f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int32_t var_54
int32_t* eax = &var_54
int32_t var_14 = 8

while (true)
    int32_t ebp_1 = sx.d(*(edx + 0x10))
    int32_t ecx_1
    int32_t ebx_1
    int32_t edi_1
    
    if (ebp_1 != 0)
        ecx_1 = sx.d(*(edx + 0x70))
        edi_1 = sx.d(*(edx + 0x50))
        ebx_1 = sx.d(*(edx + 0x30))
    label_6d357f:
        int32_t esi_2 = sx.d(*edx) << 0xf
        int32_t ecx_7 = ebp_1 * 0x73fc + ebx_1 * 0xffffd746 + edi_1 * 0x1b37 + ecx_1 * 0xffffe8ee
        *eax = (esi_2 + ecx_7 + 0x1000) s>> 0xd
        eax[8] = (esi_2 - ecx_7 + 0x1000) s>> 0xd
        edx += 2
        eax = &eax[1]
    else
        ebx_1 = sx.d(*(edx + 0x30))
        
        if (ebx_1 != 0)
            ecx_1 = sx.d(*(edx + 0x70))
            edi_1 = sx.d(*(edx + 0x50))
            goto label_6d357f
        
        edi_1 = sx.d(*(edx + 0x50))
        
        if (edi_1 != 0)
            ecx_1 = sx.d(*(edx + 0x70))
            goto label_6d357f
        
        ecx_1 = sx.d(*(edx + 0x70))
        
        if (ecx_1 != 0)
            goto label_6d357f
        
        int32_t ecx_4 = sx.d(*edx) * 4
        *eax = ecx_4
        edx += 2
        eax[8] = ecx_4
        eax = &eax[1]
    int32_t ecx_8 = var_14
    
    while (true)
        ecx_8 -= 1
        
        if (ecx_8 s<= 0)
            int32_t var_50
            void* edi_5
            int32_t var_48
            int32_t var_40
            int32_t var_38
            int32_t eax_1
            int32_t edx_1
            int32_t edi_4
            
            if (var_50 != 0)
                edi_4 = var_38
                eax_1 = var_40
                edx_1 = var_48
            label_6d366b:
                int32_t esi_7 = var_54 << 0xf
                int32_t edi_9 =
                    edi_4 * 0xffffe8ee + eax_1 * 0x1b37 + edx_1 * 0xffffd746 + var_50 * 0x73fc
                int32_t eax_10 = ((esi_7 + edi_9 + 0x80000) s>> 0x14) + 0x80
                
                if (eax_10 s< 0)
                    eax_10 = 0
                else if (eax_10 s> 0xff)
                    eax_10 = 0xff
                
                *arg1 = eax_10.w
                int32_t esi_11 = ((esi_7 - edi_9 + 0x80000) s>> 0x14) + 0x80
                
                if (esi_11 s< 0)
                    esi_11 = 0
                else if (esi_11 s> 0xff)
                    esi_11 = 0xff
                
                *(arg1 + 2) = esi_11.w
                edi_5 = arg1 + 0x10
            else
                edx_1 = var_48
                
                if (edx_1 != 0)
                    edi_4 = var_38
                    eax_1 = var_40
                    goto label_6d366b
                
                eax_1 = var_40
                
                if (eax_1 != 0)
                    edi_4 = var_38
                    goto label_6d366b
                
                edi_4 = var_38
                
                if (edi_4 != 0)
                    goto label_6d366b
                
                int32_t eax_5 = ((var_54 + 0x10) s>> 5) + 0x80
                
                if (eax_5 s< 0)
                    eax_5 = 0
                else if (eax_5 s> 0xff)
                    eax_5 = 0xff
                
                int16_t eax_6 = eax_5.w
                edi_5 = arg1 + 0x10
                *arg1 = eax_6
                *(arg1 + 2) = eax_6
            int32_t var_34
            int32_t var_30
            int32_t ecx_10
            int32_t edx_3
            int32_t ebp_6
            int32_t var_28
            int32_t var_20
            int32_t var_18
            
            if (var_30 != 0)
                edx_3 = var_18
                ecx_10 = var_20
                ebp_6 = var_28
            else
                ebp_6 = var_28
                
                if (ebp_6 != 0)
                    edx_3 = var_18
                    ecx_10 = var_20
                else
                    ecx_10 = var_20
                    
                    if (ecx_10 != 0)
                        edx_3 = var_18
                    else
                        edx_3 = var_18
                        
                        if (edx_3 == 0)
                            int32_t eax_14 = ((var_34 + 0x10) s>> 5) + 0x80
                            
                            if (eax_14 s< 0)
                                eax_14 = 0
                            else if (eax_14 s> 0xff)
                                eax_14 = 0xff
                            
                            int16_t eax_15 = eax_14.w
                            *edi_5 = eax_15
                            *(edi_5 + 2) = eax_15
                            return eax_15
            int32_t eax_17 = var_34 << 0xf
            int32_t edx_7 =
                edx_3 * 0xffffe8ee + ecx_10 * 0x1b37 + ebp_6 * 0xffffd746 + var_30 * 0x73fc
            int32_t ecx_14 = ((eax_17 + edx_7 + 0x80000) s>> 0x14) + 0x80
            
            if (ecx_14 s< 0)
                ecx_14 = 0
            else if (ecx_14 s> 0xff)
                ecx_14 = 0xff
            
            *edi_5 = ecx_14.w
            int32_t eax_21 = ((eax_17 - edx_7 + 0x80000) s>> 0x14) + 0x80
            
            if (eax_21 s< 0)
                eax_21 = 0
            else if (eax_21 s> 0xff)
                eax_21 = 0xff
            
            *(edi_5 + 2) = eax_21.w
            return eax_21
        
        if (ecx_8 != 6 && ecx_8 != 4 && ecx_8 != 2)
            var_14 = ecx_8
            break
        
        edx += 2
        eax = &eax[1]
