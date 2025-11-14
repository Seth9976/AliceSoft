// 函数: sub_631160
// 地址: 0x631160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi
int32_t result = data_78c474 ^ &lpsi
int32_t result_1 = result
HWND edi = arg1[1]

if (edi != 0)
    int32_t eax_1 = GetScrollPos(edi, SB_VERT)
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg1 + 4))() - 1
    lpsi.nPage = arg2
    lpsi.nPos = eax_1
    result = SetScrollInfo(edi, SB_VERT, &lpsi, 1)

sub_6b4885(result_1 ^ &lpsi)
return result
