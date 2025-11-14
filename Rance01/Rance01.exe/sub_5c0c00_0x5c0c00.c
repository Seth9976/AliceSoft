// 函数: sub_5c0c00
// 地址: 0x5c0c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = *arg2
int32_t ebx = ebp[2]
int32_t esi = *arg2[4]
int32_t ecx_1 = ebp[1]
int32_t eax_4 = (*(arg1 + 0x24) * arg5) s>> 1

if (ecx_1 s< eax_4)
    eax_4 = ecx_1

int32_t eax_5 = eax_4 - *ebp

if (eax_5 s> 0)
    int32_t ebx_1 = divs.dp.d(sx.q(eax_5), ebx)
    int32_t var_10_1 = ebx_1
    int32_t* eax_13 = sub_5b4eb0(divs.dp.d(sx.q(ebx_1 + esi - 1), esi) * 4, arg1)
    int32_t eax_14 = 0
    
    if (arg5 s> 0)
        while (*(arg4 + (eax_14 << 2)) == 0)
            eax_14 += 1
            
            if (eax_14 s>= arg5)
                break
    
    if (eax_14 != arg5)
        int32_t* esi_2 = arg2
        int32_t i_1 = 0
        
        if (esi_2[2] s> 0)
            int32_t i
            
            do
                int32_t var_1c_1 = 0
                
                if (ebx_1 s> 0)
                    int32_t* var_14_1 = eax_13
                    
                    do
                        if (i_1 == 0)
                            void* edi_1 = esi_2[4]
                            
                            if (*(edi_1 + 8) s<= 0)
                                return 0
                            
                            int32_t eax_17 = sub_5b6470(edi_1, arg1 + 4)
                            
                            if (eax_17 s< 0)
                                return 0
                            
                            int32_t eax_18 = *(*(edi_1 + 0x18) + (eax_17 << 2))
                            
                            if (eax_18 == 0xffffffff)
                                return 0
                            
                            if (eax_18 s>= ebp[4])
                                return 0
                            
                            int32_t eax_19 = *(esi_2[7] + (eax_18 << 2))
                            *var_14_1 = eax_19
                            
                            if (eax_19 == 0)
                                return 0
                        
                        int32_t ebx_2 = 0
                        
                        if (esi s> 0)
                            int32_t edi_3 = var_1c_1 * ebx
                            
                            while (var_1c_1 s< var_10_1)
                                int32_t eax_21 = *(*var_14_1 + (ebx_2 << 2))
                                
                                if ((ebp[eax_21 + 6] & 1 << i_1.b) != 0)
                                    int32_t* eax_23 = *(*(arg2[5] + (eax_21 << 2)) + (i_1 << 2))
                                    
                                    if (eax_23 != 0 && sub_5b6c60(eax_23, arg3, *ebp + edi_3, 
                                            eax_23, arg3, arg5, arg1 + 4, ebx) == 0xffffffff)
                                        return 0
                                
                                var_1c_1 += 1
                                ebx_2 += 1
                                edi_3 += ebx
                                
                                if (ebx_2 s>= esi)
                                    break
                        
                        var_14_1 = &var_14_1[1]
                        esi_2 = arg2
                    while (var_1c_1 s< var_10_1)
                    
                    ebx_1 = var_10_1
                
                i = i_1 + 1
                i_1 = i
            while (i s< esi_2[2])

return 0
