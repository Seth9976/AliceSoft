// 函数: sub_60bd40
// 地址: 0x60bd40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LOGFONTA lplf
int32_t eax_1 = data_78c474 ^ &lplf
lplf.lfHeight = neg.d(*(arg1 + 0x98))
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
sub_6b5353(&var_24, 0x20, 0x735330)
HFONT result = CreateFontIndirectA(&lplf)
*(arg1 + 0x78) = result
result.b = result != 0
sub_6b4885(eax_1 ^ &lplf)
return result
