// 函数: sub_61dd10
// 地址: 0x61dd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0

if (((*(arg1 + 0xb8) - *(arg1 + 0xb4)) & 0xfffffffc) s> 0)
    do
        DestroyWindow(*(*(arg1 + 0xb4) + (i << 2)))
        i += 1
    while (i s< (*(arg1 + 0xb8) - *(arg1 + 0xb4)) s>> 2)

DestroyWindow(*(arg1 + 0x88))
return 0
