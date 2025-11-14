// 函数: sub_6374f0
// 地址: 0x6374f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT lprc
int32_t eax_1 = data_78c474 ^ &lprc
HBRUSH eax_2 = CreateSolidBrush(0xc8c8c8)
HGDIOBJ h = SelectObject(*(arg1 + 0xc), eax_2)
lprc.left = 0
lprc.top = 0
lprc.right = *(arg1 + 4)
lprc.bottom = *(arg1 + 8)
FillRect(*(arg1 + 0xc), &lprc, eax_2)
SelectObject(*(arg1 + 0xc), h)
BOOL result = DeleteObject(eax_2)
sub_6b4885(eax_1 ^ &lprc)
return result
