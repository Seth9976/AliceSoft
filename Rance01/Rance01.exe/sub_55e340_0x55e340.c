// 函数: sub_55e340
// 地址: 0x55e340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0)
    void* eax = **(arg1 + 4)
    
    if (arg2 s< (*(eax + 0xc) - *(eax + 8)) s>> 2 && arg2 s< (*(eax + 0xc) - *(eax + 8)) s>> 2
            && *(*(eax + 8) + (arg2 << 2)) != 0 && arg2 u< (*(eax + 0xc) - *(eax + 8)) s>> 2)
        void* ecx_1 = *(*(eax + 8) + (arg2 << 2))
        
        if (ecx_1 != 0)
            return *(ecx_1 + 0xc)

return 0xffffffff
