// 函数: sub_615f60
// 地址: 0x615f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LOGFONTA lplf
int32_t eax_1 = data_78c474 ^ &lplf
HGDIOBJ h = *(arg2 + 0xa0)

if (h != 0)
    SelectObject(*(arg2 + 0xa4), h)
    DeleteObject(*(arg2 + 0xa0))
    *(arg2 + 0xa0) = 0

HGDIOBJ ho = *(arg2 + 0x9c)

if (ho != 0)
    DeleteObject(ho)
    *(arg2 + 0x9c) = 0

*(arg2 + 0xb4) = arg1
lplf.lfHeight = neg.d(arg1)
lplf.lfWidth = 0
lplf.lfEscapement = 0
lplf.lfOrientation = 0
lplf.lfWeight = 0
lplf.lfItalic = 0
lplf.lfUnderline = 0
lplf.lfStrikeOut = 0
lplf.lfCharSet = 0x80
lplf.lfOutPrecision = 0
lplf.lfClipPrecision = 0
lplf.lfQuality = 0
lplf.lfPitchAndFamily = 1
var_24
sub_6b5353(&var_24, 0x20, 0x734af4)
HFONT h_1 = CreateFontIndirectA(&lplf)
*(arg2 + 0x9c) = h_1

if (h_1 != 0)
    HDC hdc = *(arg2 + 0xa4)
    
    if (hdc != 0)
        h_1 = SelectObject(hdc, h_1)
        *(arg2 + 0xa0) = h_1

sub_6b4885(eax_1 ^ &lplf)
return h_1
