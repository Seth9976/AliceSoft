// 函数: sub_558750
// 地址: 0x558750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0xfffffe24)
    int32_t eax
    eax.b = 0
    return eax

int32_t i = 0
int32_t eax_2

if (((*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) & 0xfffffffc) s> 0)
    do
        int32_t ecx_1 = *(arg1 + 0x1e4)
        int32_t* edx_1 = *(ecx_1 + (i << 2))
        
        if (edx_1 != 0)
            eax_2 = edx_1[3]
            
            if (eax_2 == 0)
                eax_2 = *(arg1 + 0x1b4)
                
                if (eax_2 u< (*(arg1 + 0x12c) - *(arg1 + 0x128)) s>> 4)
                    int32_t eax_3 = eax_2 << 4
                    
                    if (eax_3 != neg.d(*(arg1 + 0x128)))
                        eax_2 = *(eax_3 + *(arg1 + 0x128) + 0xc)
                        
                        if (eax_2 != 0)
                            sub_558890(arg1, edx_1, arg2, eax_2)
            else if (eax_2 == 1)
                eax_2 = edx_1[7]
                
                if (eax_2 s>= 0 && eax_2 u< (*(arg1 + 0x12c) - *(arg1 + 0x128)) s>> 4)
                    int32_t eax_4 = eax_2 << 4
                    
                    if (eax_4 != neg.d(*(arg1 + 0x128)))
                        eax_2 = *(eax_4 + *(arg1 + 0x128) + 8)
                        
                        if (eax_2 != 0)
                            sub_558890(arg1, edx_1, arg2, eax_2 + 0x3c)
            else if (eax_2 == 4)
                eax_2 = edx_1[7]
                
                if (eax_2 s>= 0 && eax_2 u< (*(arg1 + 0x12c) - *(arg1 + 0x128)) s>> 4)
                    int32_t eax_6 = eax_2 << 4
                    
                    if (eax_6 != neg.d(*(arg1 + 0x128)))
                        eax_2 = *(eax_6 + *(arg1 + 0x128) + 4)
                        
                        if (eax_2 != 0)
                            sub_558890(arg1, edx_1, arg2, eax_2 + 0x34)
            else if (eax_2 != 3)
                if (eax_2 == 5)
                    sub_558a80(edx_1, arg2, arg1)
            else if (edx_1[0xd] == 0x1e)
                sub_558be0(ecx_1, arg2, arg1, edx_1)
        
        i += 1
    while (i s< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)

eax_2.b = 1
return eax_2
