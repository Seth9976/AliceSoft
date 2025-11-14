// 函数: sub_5256f0
// 地址: 0x5256f0
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
                        *(*(esi_1 + 0xf8) + arg3 * 0x3c + 8) = arg4
                        int32_t eax_4
                        eax_4.b = 1
                        return eax_4
                    
                    eax.b = 0
                    return eax

eax.b = 0
return eax
