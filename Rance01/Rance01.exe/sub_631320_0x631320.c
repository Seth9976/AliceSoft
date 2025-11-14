// 函数: sub_631320
// 地址: 0x631320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
RECT rect
GetClientRect(arg1[1], &rect)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg1[0x27])
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(rect.right - rect.left)
SCROLLINFO lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0
lpsi.nMax = (*(*arg1 + 8))() + 1
lpsi.nPage = divs.dp.d(edx_1:eax_7, (eax_3 - edx) s>> 1)
lpsi.nPos = 0
int32_t result = SetScrollInfo(arg1[1], SB_HORZ, &lpsi, 1)
sub_6b4885(eax_1 ^ &var_38)
return result
