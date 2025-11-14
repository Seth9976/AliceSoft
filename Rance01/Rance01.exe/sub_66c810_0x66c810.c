// 函数: sub_66c810
// 地址: 0x66c810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    int32_t eax_1 = *(arg1 + 8)
    
    if ((*(arg1 + 0xc) - eax_1) s>> 2 s>= arg2)
        void* eax_2 = *(eax_1 + (arg2 << 2) - 4)
        
        if (eax_2 != 0 && *(eax_2 + 8) == 5 && arg3 s>= 0)
            int32_t ecx_3 = *(eax_2 + 0x6c)
            
            if ((*(eax_2 + 0x70) - ecx_3) s>> 2 s> arg3)
                return *(*(ecx_3 + (arg3 << 2)) + 4)

return 0
