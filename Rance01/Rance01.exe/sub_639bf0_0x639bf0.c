// 函数: sub_639bf0
// 地址: 0x639bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

**(arg1 + 0x344) = arg1
*(arg1 + 0x34d) = *(arg1 + 0x34c)
*(arg1 + 0x34c) = 1
int32_t eax_2 = sub_64e4b0(arg1 + 0x3dc, GetScrollPos(*(arg1 + 0x384), *(arg1 + 0x38c)), 
    *(arg1 + 0x350), *(arg1 + 0x354))

if (eax_2 != 0xffffffff)
    int32_t eax_3 = *(arg1 + 0x4e0)
    int32_t edx_1 = 1 << eax_2.b
    
    if (edx_1 == (eax_3 & 0x7fffffff))
        edx_1 |= (eax_3 & 0x80000000) + 0x80000000
    
    *(arg1 + 0x4e0) = edx_1

*(arg1 + 0x4c4) = *(arg1 + 0x354) - *(arg1 + 0x5c)
return 0
