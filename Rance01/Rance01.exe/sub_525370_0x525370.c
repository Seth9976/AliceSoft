// 函数: sub_525370
// 地址: 0x525370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x10)
            
            if (arg2 s< (*(eax_3 + 0x14) - ecx) s>> 2)
                void* eax_7 = *(ecx + (arg2 << 2))
                
                if (eax_7 != 0)
                    return (*(eax_7 + 0xfc) - *(eax_7 + 0xf8)) s/ 0x3c

return 0
