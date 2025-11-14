// 函数: sub_6cc1a0
// 地址: 0x6cc1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = &arg1[0xdfa]
void* ebp = arg1[0xdfc]
(*(ebp + 0x58))(esi, arg1[0x11], arg1[0x12])
int32_t result = sub_6fbb70(esi)

if (result == 0)
    int32_t edx_1 = *arg1
    
    if (edx_1 != 8 && edx_1 != 9 && edx_1 != 0xa && edx_1 != 0xb)
        goto label_6cc20d
    
    int32_t eax_8 = arg1[0x16]
    
    if (eax_8 == 1 || eax_8 == 5)
        result = sub_6fcda0(0, arg1)
        
        if (result == 0)
        label_6cc494:
            result = sub_6fb8d0(arg1)
            
            if (result == 0)
                result = sub_6cbfa0(arg1)
                
                if (result == 0)
                    edx_1 = *arg1
                label_6cc20d:
                    
                    if (edx_1 == 0xc || edx_1 == 0xd)
                        int32_t edi_1 = 0
                        int32_t eax_1 = arg1[0x21]
                        
                        for (int32_t i = 0; i s< eax_1; i += 1)
                            int32_t ebp_1 = i * 2
                            
                            if (arg1[i + 0xdb9] == 0 && arg1[i * 2 + 0xdc7] != 0)
                                int16_t* eax_2 = *(edi_1 + arg1 + 0x9c)
                                *(arg1 + (ebp_1 << 1) + 0x36e4) = eax_2
                                sub_6cb680(arg1[0x1c], arg1[i * 2 + 0xdc7], eax_2)
                                int32_t eax_3 = arg1[5]
                                
                                if (eax_3 != 0)
                                    if (eax_3 != 1)
                                        return 0xfffffff8
                                    
                                    sub_6cf9e0(*(arg1 + (ebp_1 << 1) + 0x36e4))
                                    eax_1 = arg1[0x21]
                                else
                                    sub_6ce5d0(*(arg1 + (ebp_1 << 1) + 0x36e4))
                                    eax_1 = arg1[0x21]
                            
                            edi_1 += 0xb4
                        
                        if (arg1[0x24] * 2 s> 0)
                            void* edi_2 = &arg1[0x749]
                            int32_t i_2 = 0
                            void* ebp_2 = &arg1[0xd9]
                            int32_t esi_1 = 0
                            int32_t i_1
                            
                            do
                                arg1[zx.d(*(esi_1 + arg1 + 0x3745)) + 0xdc1] = edi_2
                                arg1[zx.d(*(esi_1 + arg1 + 0x3751)) + 0xdbd] = ebp_2
                                result = sub_6cb740(*(esi_1 + arg1 + 0x373c), 
                                    *(esi_1 + arg1 + 0x3740), 
                                    arg1[zx.d(*(esi_1 + arg1 + 0x3745)) + 0xdc1])
                                
                                if (result != 0)
                                    return result
                                
                                result = sub_6cb740(*(esi_1 + arg1 + 0x3748), 
                                    *(esi_1 + arg1 + 0x374c), 
                                    arg1[zx.d(*(esi_1 + arg1 + 0x3751)) + 0xdbd])
                                
                                if (result != 0)
                                    return result
                                
                                esi_1 += 0x18
                                ebp_2 += 0xce0
                                edi_2 += 0xce0
                                i_1 = i_2 + 2
                                i_2 = i_1
                            while (i_1 s< arg1[0x24] * 2)
                    
                    int32_t edx_2 = arg1[5]
                    
                    if (edx_2 == 0)
                        int32_t ecx_1 = *(ebp + 0xfc)
                        *(ebp + 0x44) = *(ebp + 0x1c)
                        *(ebp + 0x104) = ecx_1
                    else if (edx_2 != 1)
                        int32_t ecx_3 = *(ebp + 0xfc)
                        *(ebp + 0x44) = *(ebp + 0x1c)
                        *(ebp + 0x104) = ecx_3
                    else
                        int32_t ecx_2 = *(ebp + 0x100)
                        *(ebp + 0x44) = *(ebp + 0x20)
                        *(ebp + 0x104) = ecx_2
                    
                    int32_t edx_6 = *arg1
                    
                    if (edx_6 == 0xb || edx_6 == 0xa)
                        result = sub_6fbbc0(esi)
                    
                    if (((edx_6 != 0xb && edx_6 != 0xa) || result == 0) && arg1[0xe09] != 0)
                        return sub_6d3c40(esi)
    else if (eax_8 == 6)
        result = sub_6fcda0(2, arg1)
        
        if (result == 0)
            goto label_6cc494
    else
        result = sub_6fb7b0(arg1)
        
        if (result == 0)
            goto label_6cc494

return result
