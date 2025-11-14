// 函数: sub_4354b0
// 地址: 0x4354b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 != 0)
    void* ecx_1 = *(arg2 + 0xd0)
    
    if (ecx_1 != 0)
        eax = *(arg1 + 0xd0)
        
        if (eax != 0)
            eax.b = *(ecx_1 + 4) == *(eax + 4)
            
            if (eax.b != 0)
                int32_t edx_1 = *(arg2 + 0x58)
                eax.b = edx_1 == *(arg1 + 0x58)
                
                if (eax.b != 0)
                    eax.b = *(arg2 + 0xc4) == *(arg1 + 0xc4)
                    
                    if (eax.b != 0)
                        int32_t edx_2
                        eax, edx_2 = sub_435560(arg1, edx_1, arg2)
                        
                        if (eax.b != 0)
                            int32_t edx_3
                            eax, edx_3 = sub_435590(arg1, edx_2, arg2)
                            
                            if (eax.b != 0)
                                eax.b = *(arg2 + 0x20) == *(arg1 + 0x20)
                                
                                if (eax.b != 0 && sub_4355c0(arg1, edx_3, arg2).b != 0)
                                    eax.b = *(arg2 + 0x1c) == *(arg1 + 0x1c)
                                    
                                    if (eax.b != 0)
                                        int32_t eax_4
                                        eax_4.b = *(arg2 + 0xc8) == *(arg1 + 0xc8)
                                        eax_4.b = eax_4.b != 0
                                        return eax_4

eax.b = 0
return eax
