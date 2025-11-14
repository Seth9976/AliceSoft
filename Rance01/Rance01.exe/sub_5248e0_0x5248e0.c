// 函数: sub_5248e0
// 地址: 0x5248e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                eax = *(ecx + (arg2 << 2))
                
                if (eax != 0)
                    void* ecx_1 = *(eax + 0x1d0)
                    
                    if (ecx_1 != 0 && arg3 s>= 0
                            && arg3 s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 6)
                        *arg4 = *((arg3 << 6) + *(ecx_1 + 0x40) + 0x1c)
                        int32_t* eax_5
                        eax_5.b = 1
                        return eax_5

eax.b = 0
return eax
