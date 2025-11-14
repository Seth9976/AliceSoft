// 函数: sub_702840
// 地址: 0x702840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_14
BOOL eax_4 = sub_6ca7d0(*(arg1 + 0x3c), arg1 + 0x40, 0x1000, &var_14)
*(arg1 + 0x24) = var_14

if (eax_4 != 0 && *(arg1 + 0x24) == 0)
    return 0xfffffff5

*(arg1 + 0x10) = arg1 + 0x40
return 0
