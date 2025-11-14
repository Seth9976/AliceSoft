// 函数: sub_524640
// 地址: 0x524640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x10)
            
            if (arg2 s< (*(eax_3 + 0x14) - ecx) s>> 2)
                void* eax_7 = *(ecx + (arg2 << 2))
                
                if (eax_7 != 0 && arg3 s>= 0 && arg3 s< (*(eax_7 + 0x1c0) - *(eax_7 + 0x1bc)) s>> 2)
                    return *(*(eax_7 + 0x1bc) + (arg3 << 2))

return 0xffffffff
