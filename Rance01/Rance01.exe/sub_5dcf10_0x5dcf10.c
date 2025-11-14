// 函数: sub_5dcf10
// 地址: 0x5dcf10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
int32_t eax_2 = GetScrollPos(arg1, SB_VERT)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)
int32_t nPos = eax_2 + arg2
int32_t nMin = lpsi.nMin

if (nPos s< nMin)
    nPos = nMin

int32_t nMax = lpsi.nMax

if (nPos s>= nMax)
    nPos = nMax - 1

int32_t result = SetScrollPos(arg1, SB_VERT, nPos, 1)
sub_6b4885(eax_1 ^ &lpsi)
return result
