// 函数: sub_55e420
// 地址: 0x55e420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = **(arg1 + 4)

if (arg2 u< (*(eax + 0xc) - *(eax + 8)) s>> 2)
    void* eax_2 = *(*(eax + 8) + (arg2 << 2))
    
    if (eax_2 != 0)
        return *(eax_2 + 0x30)

return 0xffffffff
