// 函数: sub_5dcf80
// 地址: 0x5dcf80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)
int32_t nMax = lpsi.nMax

if (nMax s> 0)
    nMax = SetScrollPos(arg1, SB_VERT, nMax, 1)

sub_6b4885(eax_1 ^ &lpsi)
return nMax
