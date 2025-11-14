// 函数: sub_621e60
// 地址: 0x621e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
int32_t eax_2 = GetScrollPos(arg2, SB_VERT)
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0
lpsi.nMax = (*(*arg1 + 0x88))() - 1
lpsi.nPage = arg3
lpsi.nPos = eax_2
int32_t result = SetScrollInfo(arg2, SB_VERT, &lpsi, 1)
sub_6b4885(eax_1 ^ &lpsi)
return result
