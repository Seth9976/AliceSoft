// 函数: sub_5c0920
// 地址: 0x5c0920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = 0
int32_t eax = 0

if (arg5 s> 0)
    do
        if (*(arg4 + (eax << 2)) != 0)
            edx += 1
        
        eax += 1
    while (eax s< arg5)
    
    if (edx != 0)
        int32_t* ecx = *arg2
        int32_t edx_1 = ecx[3]
        int32_t esi_2 = ecx[2]
        int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), esi_2)
        int32_t edi = *(arg1 + 0x48)
        
        if (edi + 8 s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_7 = sub_6b5c43(8)
                int32_t ecx_1 = *(arg1 + 0x54)
                *(arg1 + 0x50) += edi
                eax_7[1] = ecx_1
                *eax_7 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_7
            
            *(arg1 + 0x4c) = 8
            *(arg1 + 0x44) = sub_6b5c43(8)
            *(arg1 + 0x48) = 0
        
        int32_t eax_9 = *(arg1 + 0x48)
        void* ecx_2 = *(arg1 + 0x44)
        int32_t ebp_2 = temp0 * 4
        uint32_t edi_2 = (ebp_2 + 7) & 0xfffffff8
        int128_t** result = ecx_2 + eax_9
        *(arg1 + 0x48) = eax_9 + 8
        
        if (eax_9 + 8 + edi_2 s> *(arg1 + 0x4c))
            if (ecx_2 != 0)
                int32_t* eax_11 = sub_6b5c43(8)
                int32_t ecx_3 = *(arg1 + 0x54)
                *(arg1 + 0x50) += eax_9 + 8
                eax_11[1] = ecx_3
                *eax_11 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_11
            
            *(arg1 + 0x4c) = edi_2
            *(arg1 + 0x44) = sub_6b5c43(edi_2)
            *(arg1 + 0x48) = 0
        
        int32_t ecx_4 = *(arg1 + 0x48)
        int128_t* eax_14 = *(arg1 + 0x44) + ecx_4
        *(arg1 + 0x48) = ecx_4 + edi_2
        *result = eax_14
        sub_6bc670(eax_14, 0, ebp_2)
        int32_t ebx_1 = arg5
        int32_t var_8 = 0
        int32_t esi_4 = divs.dp.d(sx.q(*ecx), ebx_1)
        
        if (temp0 s> 0)
            int32_t ecx_13
            
            do
                int32_t edx_13 = 0
                int32_t edi_3 = 0
                int32_t ebp_3 = 0
                arg5 = 0
                
                if (esi_2 s> 0)
                    do
                        int32_t eax_22
                        int32_t edx_10
                        edx_10:eax_22 = sx.q(*(*arg3 + (esi_4 << 2)))
                        int32_t eax_24 = (eax_22 ^ edx_10) - edx_10
                        
                        if (eax_24 s> arg5)
                            arg5 = eax_24
                        
                        int32_t ecx_8 = 1
                        
                        if (ebx_1 s> 1)
                            do
                                int32_t eax_27
                                int32_t edx_12
                                edx_12:eax_27 = sx.q(*(arg3[ecx_8] + (esi_4 << 2)))
                                int32_t eax_29 = (eax_27 ^ edx_12) - edx_12
                                
                                if (eax_29 s> edi_3)
                                    edi_3 = eax_29
                                
                                ecx_8 += 1
                            while (ecx_8 s< ebx_1)
                        
                        ebp_3 += ebx_1
                        esi_4 += 1
                    while (ebp_3 s< esi_2)
                    
                    edx_13 = arg5
                
                int32_t eax_30 = 0
                
                if (edx_1 - 1 s> 0)
                    void* ecx_10 = &ecx[0x286]
                    
                    while (edx_13 s> *(ecx_10 - 0x100) || edi_3 s> *ecx_10)
                        eax_30 += 1
                        ecx_10 += 4
                        
                        if (eax_30 s>= edx_1 - 1)
                            break
                
                *(*result + (var_8 << 2)) = eax_30
                ecx_13 = var_8 + 1
                var_8 = ecx_13
            while (ecx_13 s< temp0)
        
        arg2[0xa] += 1
        return result

return 0
