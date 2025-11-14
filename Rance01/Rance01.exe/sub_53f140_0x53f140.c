// 函数: sub_53f140
// 地址: 0x53f140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* esi = *(arg1 + 0x2b0)
int32_t edi = *esi
*esi = edx_1
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = ecx_1
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = edi
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = edx_1
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = ecx_1
*(arg1 + 0x2b0) += 4
arg1.b = 1
return arg1
