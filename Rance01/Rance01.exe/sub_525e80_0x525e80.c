// 函数: sub_525e80
// 地址: 0x525e80
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
                    void* eax_9 = *(eax_7 + 0x1d0)
                    
                    if (eax_9 != 0 && arg3 s>= 0
                            && arg3 s< (*(eax_9 + 0x54) - *(eax_9 + 0x50)) s>> 2)
                        void* eax_11 = *(*(eax_9 + 0x50) + (arg3 << 2))
                        
                        if (eax_11 != 0)
                            return *(eax_11 + 0x20)

return 0xffffffff
