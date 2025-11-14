// 函数: sub_631070
// 地址: 0x631070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
int32_t nTrackPos = GetScrollPos(arg2, SB_HORZ)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg2, SB_HORZ, &lpsi)

switch (zx.d(arg3))
    case 0
        nTrackPos -= 1
    case 1
        nTrackPos += 1
    case 2
        nTrackPos -= lpsi.nPage
    case 3
        nTrackPos += lpsi.nPage
    case 5
        nTrackPos = lpsi.nTrackPos

int32_t nMin = lpsi.nMin

if (nTrackPos s< nMin)
    nTrackPos = nMin

int32_t nMax = lpsi.nMax

if (nTrackPos s>= nMax)
    nTrackPos = nMax - 1

SetScrollPos(arg2, SB_HORZ, nTrackPos, 1)
(*(*arg1 + 0x3c))()
sub_6b4885(eax_1 ^ &lpsi)
return 0
