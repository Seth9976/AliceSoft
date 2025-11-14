// 函数: sub_563320
// 地址: 0x563320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnableMenuItem(GetSystemMenu(arg2, 0), 0xf010, MF_GRAYED)
SetMenu(arg2, *(arg1 + 0x8c))
sub_5685d0(*(arg1 + 0x8c), *(arg1 + 0xb4))
DrawMenuBar(*(arg1 + 4))
*(arg1 + 0x94) = SetTimer(arg2, 1, 0xa, nullptr)
uint32_t eax_3 = timeGetTime()
uint32_t ecx_1 = data_797e3c

if (eax_3 u< ecx_1)
    eax_3 = ecx_1

*(arg1 + 0x98) = eax_3
data_797e3c = eax_3
return 0
