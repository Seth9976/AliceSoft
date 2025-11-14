// 函数: sub_5253e0
// 地址: 0x5253e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x10)
            
            if (arg2 s< (*(eax_3 + 0x14) - ecx) s>> 2)
                void* esi_1 = *(ecx + (arg2 << 2))
                
                if (esi_1 != 0)
                    if (arg3 s>= 0 && arg3 s< (*(esi_1 + 0xfc) - *(esi_1 + 0xf8)) s/ 0x3c)
                        return *(*(esi_1 + 0xf8) + arg3 * 0x3c + 8)

return 0xffffffff
