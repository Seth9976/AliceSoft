// 函数: sub_528860
// 地址: 0x528860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && eax_3 != 0xfffffff0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x198)
            
            if (arg2 s< (*(eax_3 + 0x19c) - ecx) s>> 2)
                return *(ecx + (arg2 << 2))

return 0
