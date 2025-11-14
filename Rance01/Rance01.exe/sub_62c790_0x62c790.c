// 函数: sub_62c790
// 地址: 0x62c790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SetFocus(arg2)
SetCapture(arg2)
uint32_t ecx = zx.d(arg3.w)
uint32_t eax_1 = arg3 u>> 0x10
*(arg1 + 0x1bc) = eax_1
*(arg1 + 0x1c4) = eax_1
*(arg1 + 0x1c8) = 1
*(arg1 + 0x1b8) = ecx
*(arg1 + 0x1c0) = ecx
return 0
