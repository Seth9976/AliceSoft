// 函数: sub_525520
// 地址: 0x525520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                void* esi_1 = *(ecx + (arg2 << 2))
                
                if (esi_1 != 0)
                    if (arg3 s>= 0 && arg3 s< (*(esi_1 + 0xfc) - *(esi_1 + 0xf8)) s/ 0x3c)
                        int32_t eax_4 = *(esi_1 + 0xf8)
                        int32_t edx_10 = arg3 * 0xf
                        *arg4 = fconvert.s(fconvert.t(*(eax_4 + (edx_10 << 2) + 0x18)))
                        *arg5 = fconvert.s(fconvert.t(*(eax_4 + (edx_10 << 2) + 0x1c)))
                        *arg6 = fconvert.s(fconvert.t(*(eax_4 + (edx_10 << 2) + 0x20)))
                        float* eax_6
                        eax_6.b = 1
                        return eax_6
                    
                    eax.b = 0
                    return eax

eax.b = 0
return eax
