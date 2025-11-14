// 函数: sub_6a7910
// 地址: 0x6a7910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t eax_1 = data_78c474 ^ &lpsi
int32_t nTrackPos = GetScrollPos(*(arg1 + 4), *(arg1 + 0x10))
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(*(arg1 + 4), *(arg1 + 0x10), &lpsi)

switch (arg2)
    case 0, 6
        nTrackPos -= 1
    case 1, 7
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

int32_t result = SetScrollPos(*(arg1 + 4), *(arg1 + 0x10), nTrackPos, 1)
sub_6b4885(eax_1 ^ &lpsi)
return result
