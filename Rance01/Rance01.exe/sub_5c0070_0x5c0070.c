// 函数: sub_5c0070
// 地址: 0x5c0070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1
int32_t eax_1 = data_78c474 ^ &i_1
int32_t* ecx = *arg5
int32_t eax_3 = ecx[3]
int32_t ebx = *arg5[4]
int32_t esi = ecx[2]
int32_t var_438 = ebx
int32_t esi_1 = divs.dp.d(sx.q(ecx[1] - *ecx), esi)
int32_t var_42c = esi_1
int128_t var_204[0x20]
sub_6bc670(&var_204, 0, 0x200)
int32_t var_404[0x80]
int32_t (* var_460)[0x80] = &var_404
sub_6bc670(var_460, 0, 0x200)
bool cond:0 = arg5[2] s<= 0
i_1 = 0

if (not(cond:0))
    int32_t i
    
    do
        int32_t edi_1 = 0
        
        if (esi_1 s> 0)
            do
                if (i_1 == 0)
                    int32_t eax_8 = 0
                    int32_t var_434_1 = 0
                    
                    if (arg6 s> 0)
                        do
                            int32_t eax_9 = arg2[eax_8]
                            int32_t esi_2 = *(eax_9 + (edi_1 << 2))
                            int32_t eax_10 = 1
                            
                            if (ebx s> 1)
                                int32_t ecx_2 = eax_9 + (edi_1 << 2) + 4
                                
                                do
                                    esi_2 *= eax_3
                                    
                                    if (eax_10 + edi_1 s< var_42c)
                                        esi_2 += *ecx_2
                                    
                                    eax_10 += 1
                                    ecx_2 += 4
                                while (eax_10 s< ebx)
                            
                            void* ebx_1 = arg5[4]
                            
                            if (esi_2 s< *(ebx_1 + 4))
                                void* eax_11
                                
                                if (esi_2 s>= 0)
                                    eax_11 = *(ebx_1 + 0xc)
                                
                                int32_t esi_3
                                
                                if (esi_2 s< 0 || esi_2 s>= *(eax_11 + 4))
                                    esi_3 = 0
                                else
                                    sub_5b4af0(arg4, *(*(ebx_1 + 0x14) + (esi_2 << 2)), 
                                        *(*(eax_11 + 8) + (esi_2 << 2)))
                                    esi_3 = *(*(*(ebx_1 + 0xc) + 8) + (esi_2 << 2))
                                
                                arg5[9] += esi_3
                            
                            ebx = var_438
                            eax_8 = var_434_1 + 1
                            var_434_1 = eax_8
                        while (eax_8 s< arg6)
                
                int32_t var_420_1 = 0
                
                if (ebx s> 0)
                    int32_t eax_17 = edi_1 * esi
                    int32_t var_418_1 = eax_17
                    int32_t ecx_17
                    
                    do
                        esi_1 = var_42c
                        
                        if (edi_1 s>= esi_1)
                            goto label_5c02dc
                        
                        int32_t ebx_3 = *ecx + eax_17
                        int32_t edx_7 = rol.d(1, i_1.b)
                        int32_t var_410_1 = edx_7
                        
                        if (arg6 s> 0)
                            int32_t* esi_4 = arg2
                            int32_t* eax_19 = arg3 - esi_4
                            int32_t j_1 = arg6
                            int32_t j
                            
                            do
                                if (i_1 == 0)
                                    int32_t eax_21 = *(*esi_4 + (edi_1 << 2))
                                    var_404[eax_21] += esi
                                
                                int32_t eax_24 = *(*esi_4 + (edi_1 << 2))
                                
                                if ((ecx[eax_24 + 6] & edx_7) != 0)
                                    int32_t* eax_26 = *(*(arg5[5] + (eax_24 << 2)) + (i_1 << 2))
                                    
                                    if (eax_26 != 0)
                                        int32_t var_450_2 = 0
                                        int32_t* edx_9 = *(eax_19 + esi_4) + (ebx_3 << 2)
                                        var_460 = arg4
                                        int32_t eax_29 = sub_5bffe0(var_460, edx_9, esi, eax_26)
                                        arg5[8] += eax_29
                                        edx_7 = var_410_1
                                        void* ecx_15 = &(&var_460)[*(*esi_4 + (edi_1 << 2)) + 0x97]
                                        *ecx_15 += eax_29
                                
                                esi_4 = &esi_4[1]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            eax_17 = var_418_1
                        
                        eax_17 += esi
                        ebx = var_438
                        ecx_17 = var_420_1 + 1
                        edi_1 += 1
                        var_420_1 = ecx_17
                        var_418_1 = eax_17
                    while (ecx_17 s< ebx)
                
                esi_1 = var_42c
            while (edi_1 s< esi_1)
        
    label_5c02dc:
        i = i_1 + 1
        i_1 = i
    while (i s< arg5[2])

sub_6b4885(eax_1 ^ &i_1)
return 0
