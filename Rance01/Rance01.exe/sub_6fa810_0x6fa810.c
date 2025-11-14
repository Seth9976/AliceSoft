// 函数: sub_6fa810
// 地址: 0x6fa810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_14
uint32_t eax_2

if (sub_6ca7d0(*(arg1 + 0x3c), arg1 + 0x40, 0x1000, &var_14) == 0)
    eax_2 = var_14
else
    eax_2 = var_14
    
    if (eax_2 == 0)
        return 0xffffffe9

*(arg1 + 0x24) = eax_2
*(arg1 + 0x10) = arg1 + 0x40
*(arg1 + 0x18) = eax_2 + arg1 + 0x40
return 0
