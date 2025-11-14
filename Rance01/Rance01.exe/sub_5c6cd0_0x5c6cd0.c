// 函数: sub_5c6cd0
// 地址: 0x5c6cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0x16] s>= 2)
    int32_t var_14
    int32_t eax_2
    int32_t esi_2
    
    while (true)
        if (arg1[0x16] == 4)
            eax_2 = sub_5b6060(&arg1[0x78], &var_14)
            esi_2 = eax_2
            
            if (esi_2 != 0)
                break
        
        int32_t eax_4 = sub_5c5530(arg1)
        
        if (eax_4 == 0xfffffffe)
            return 0
        
        if (eax_4 s<= 0)
            return eax_4
    
    if (esi_2 s<= 0)
        return eax_2
    
    void* eax_7
    
    if (arg1[1] == 0 || arg1[0x16] s< 3)
        eax_7 = arg1[0x12]
    else
        eax_7 = (arg1[0x18] << 5) + arg1[0x12]
    
    int32_t ecx_2 = *(eax_7 + 4)
    int32_t edi_1 = ecx_2 * 2
    int32_t temp0_1 = divs.dp.d(sx.q(arg3), edi_1)
    int32_t var_10_1 = ecx_2
    
    if (esi_2 s> temp0_1)
        esi_2 = temp0_1
    
    if (esi_2 s> 0)
        int32_t ebp = 0
        
        if (ecx_2 s> 0)
            int16_t* edx_3 = arg2
            int16_t* var_1c_1 = edx_3
            
            do
                int32_t edi_2 = *(var_14 + (ebp << 2))
                int32_t eax_12 = 0
                
                if (esi_2 s> 0)
                    do
                        int32_t* ecx_3 = int.d(fconvert.t(fconvert.d(
                            fconvert.t(*(edi_2 + (eax_12 << 2))) * fconvert.t(32768.0))))
                        
                        if (ecx_3 s> 0x7fff)
                            ecx_3 = 0x7fff
                        else if (ecx_3 s< 0xffff8000)
                            ecx_3 = 0xffff8000
                        
                        *edx_3 = ecx_3.w
                        edx_3 = &edx_3[ecx_2]
                        eax_12 += 1
                    while (eax_12 s< esi_2)
                    
                    ecx_2 = var_10_1
                
                ebp += 1
                edx_3 = &var_1c_1[1]
                var_1c_1 = edx_3
            while (ebp s< ecx_2)
        
        int32_t eax_14 = arg1[0x7e] + esi_2
        
        if (eax_14 s<= arg1[0x7d])
            arg1[0x7e] = eax_14
        
        int32_t eax_17
        int32_t edx_6
        edx_6:eax_17 = sx.q(esi_2 << (*(*(arg1[0x12] + 0x1c) + 0xe48)).b)
        int32_t temp3 = arg1[0x14]
        arg1[0x14] += eax_17
        arg1[0x15] = adc.d(arg1[0x15], edx_6, temp3 + eax_17 u< temp3)
        
        if (arg4 != 0)
            *arg4 = arg1[0x18]
        
        return edi_1 * esi_2

return 0xffffff7d
