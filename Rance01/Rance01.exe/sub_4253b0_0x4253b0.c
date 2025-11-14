// 函数: sub_4253b0
// 地址: 0x4253b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2)
    eax = *(*(arg1 + 0x10) + (arg2 << 2))
    
    if (arg3 s>= 0 && arg3 s< (*(eax + 8) - *(eax + 4)) s>> 2)
        int32_t eax_1
        eax_1.b = *(*(eax + 4) + (arg3 << 2)) != 0
        return eax_1

eax.b = 0
return eax
