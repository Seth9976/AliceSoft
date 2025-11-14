// 函数: sub_53e650
// 地址: 0x53e650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)

if (esi != 0xffffffff && sub_554370(esi, ebx, arg1 + 0x1dc, ecx_1, eax_1) == 0)
    return sub_53d0e0(arg1, 0x74d414, esi, ebx, ebx + 1, arg3, arg2)

**(arg1 + 0x2b0) = esi
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = ebx
*(arg1 + 0x2b0) += 4
int32_t eax_5
eax_5.b = 1
return 1
