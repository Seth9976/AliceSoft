// 函数: sub_64d800
// 地址: 0x64d800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
int32_t eax_3 = GetScrollPos(*(arg1 + 4), *(arg1 + 0xc))
uint32_t edx = zx.d(*(arg1 + 0x18))
int32_t ecx_1 = *(arg1 + 0x14)
int32_t edx_1 = neg.d(edx)
lpsi.fMask = (sbb.d(edx_1, edx_1, edx != 0) & 8) | 7
lpsi.cbSize = 0x1c
lpsi.nMin = 0

if (ecx_1 s<= 0)
    lpsi.nMax = 0
else
    lpsi.nMax = ecx_1 - 1

lpsi.nPos = eax_3
lpsi.nPage = *(arg1 + 0x10)
int32_t result = SetScrollInfo(*(arg1 + 4), *(arg1 + 0xc), &lpsi, 1)
sub_6b4885(eax_1 ^ &lpsi)
return result
