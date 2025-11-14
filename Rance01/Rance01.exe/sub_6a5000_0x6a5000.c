// 函数: sub_6a5000
// 地址: 0x6a5000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LOGFONTA lplf
int32_t eax_1 = data_78c474 ^ &lplf
HGDIOBJ ho = *arg1

if (ho != 0)
    DeleteObject(ho)
    *arg1 = 0

int32_t ecx = arg1[0xc]
bool cond:0 = arg1[0xd].b != 0
lplf.lfHeight = neg.d(arg1[4])
bool cond:1 = *(arg1 + 0x35) != 0
arg1[1] = 0
int32_t eax_3
eax_3.b = cond:1
lplf.lfStrikeOut = eax_3.b
void* eax_4 = &arg1[5]
arg1[2] = 0
lplf.lfWidth = 0
lplf.lfEscapement = 0
lplf.lfOrientation = 0
lplf.lfWeight = ecx
lplf.lfItalic = 0
lplf.lfUnderline = cond:0
lplf.lfCharSet = 0x80
lplf.lfOutPrecision = 0
lplf.lfClipPrecision = 0
lplf.lfQuality = 0
lplf.lfPitchAndFamily = 1

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

var_24
sub_6b5353(&var_24, 0x20, eax_4)
HFONT result = CreateFontIndirectA(&lplf)
*arg1 = result
result.b = result != 0
sub_6b4885(eax_1 ^ &lplf)
return result
