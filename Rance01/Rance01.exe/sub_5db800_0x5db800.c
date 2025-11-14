// 函数: sub_5db800
// 地址: 0x5db800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_28
int32_t eax_1 = data_78c474 ^ &var_28
uint32_t esi = zx.d(arg3.w)
uint32_t eax_3 = arg3 u>> 0x10
var_28 = eax_3
sub_5da790(arg1 + 0xa8, arg2, esi, eax_3)
int32_t edi_1 = *(arg1 + 0xe0)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(edi_1)
*(arg1 + 0x98) = divs.dp.d(sx.q(esi), (eax_5 - edx) s>> 1)
*(arg1 + 0xa0) = divs.dp.d(sx.q(var_28), edi_1)
sub_5dccb0(arg1 + 0x98, arg2)
int32_t eax_14 = GetScrollPos(arg2, SB_VERT)
int32_t ecx = *(arg1 + 0xa4)
SCROLLINFO lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0

if (ecx s<= 0)
    lpsi.nMax = 0
else
    lpsi.nMax = ecx - 1

lpsi.nPage = *(arg1 + 0xa0)
lpsi.nPos = eax_14
SetScrollInfo(arg2, SB_VERT, &lpsi, 1)
sub_6b4885(eax_1 ^ &var_28)
return 0
