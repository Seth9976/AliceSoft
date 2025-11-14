// 函数: sub_645600
// 地址: 0x645600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

**(arg1 + 0x188) = arg1
*(arg1 + 0x1a5) = *(arg1 + 0x1a4)
*(arg1 + 0x1a4) = 1
int32_t eax_2 = sub_64e4b0(arg1 + 0x214, GetScrollPos(*(arg1 + 0x1dc), *(arg1 + 0x1e4)), 
    *(arg1 + 0x1a8), *(arg1 + 0x1ac))

if (eax_2 != 0xffffffff)
    int32_t eax_3 = *(arg1 + 0x318)
    int32_t edx_1 = 1 << eax_2.b
    
    if (edx_1 == (eax_3 & 0x7fffffff))
        edx_1 |= (eax_3 & 0x80000000) + 0x80000000
    
    *(arg1 + 0x318) = edx_1

*(arg1 + 0x2fc) = *(arg1 + 0x1ac) - *(arg1 + 0x5c)
return 0
