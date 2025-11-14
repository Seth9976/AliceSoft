// 函数: sub_4b0040
// 地址: 0x4b0040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_7 = data_797d4c

if (arg1 s>= 0 && arg1 s< (*(eax_7 + 0x44) - *(eax_7 + 0x40)) s>> 2)
    void* eax_1 = *(*(eax_7 + 0x40) + (arg1 << 2))
    
    if (eax_1 != 0 && arg2 s>= 0)
        int32_t ecx = *(eax_1 + 0x10)
        
        if (arg2 s< (*(eax_1 + 0x14) - ecx) s>> 2)
            return *(ecx + (arg2 << 2))

return 0
