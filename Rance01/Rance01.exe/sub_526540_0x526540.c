// 函数: sub_526540
// 地址: 0x526540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_15 = arg1
int32_t eax

if (ecx_15 s>= 0)
    eax = data_797d4c
    
    if (ecx_15 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (ecx_15 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                void* ebx_1 = *(ecx + (arg2 << 2))
                
                if (ebx_1 != 0)
                    int32_t ecx_1 = *(ebx_1 + 0x250)
                    int32_t eax_4 = *(ebx_1 + 0x254)
                    
                    if (ecx_1 == eax_4)
                        (*(*arg3 + 0x20))()
                        (*(*arg4 + 0x20))()
                        (*(*arg5 + 0x20))()
                        int32_t eax_8
                        eax_8.b = 1
                        return eax_8
                    
                    int32_t edx_11 = *(*arg3 + 0x18)
                    arg1 = (eax_4 - ecx_1) s/ 0xc
                    
                    if (edx_11(&arg1, 1) != 0 && (*(*arg4 + 0x18))(&arg1, 1) != 0
                            && (*(*arg5 + 0x18))(&arg1, 1) != 0)
                        int32_t esi = 0
                        
                        if (arg1 s> 0)
                            int32_t edi_1 = 0
                            
                            do
                                if ((*(*arg3 + 0x14))(esi, *(ebx_1 + 0x250) + edi_1) == 0)
                                    return 0
                                
                                if ((*(*arg4 + 0x14))(esi, *(ebx_1 + 0x250) + edi_1 + 4) == 0)
                                    return 0
                                
                                if ((*(*arg5 + 0x14))(esi, *(ebx_1 + 0x250) + edi_1 + 8) == 0)
                                    return 0
                                
                                esi += 1
                                edi_1 += 0xc
                            while (esi s< arg1)
                        
                        return 1
                    
                    return 0

eax.b = 0
return eax
