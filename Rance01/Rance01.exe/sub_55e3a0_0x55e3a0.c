// 函数: sub_55e3a0
// 地址: 0x55e3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = **(arg1 + 4)

if (arg2 u< (*(eax + 0xc) - *(eax + 8)) s>> 2)
    void* eax_2 = *(*(eax + 8) + (arg2 << 2))
    
    if (eax_2 != 0)
        int32_t result = *(eax_2 + 0x1c)
        
        if (result s>= 0)
            return result

return 0xffffffff
