// 函数: sub_5636d0
// 地址: 0x5636d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LOGFONTA lplf
int32_t var_4 = data_78c474 ^ &lplf
long double x87_r7 = fconvert.t(*(arg2 + 0x3c))
long double x87_r6 = float.t(1)
x87_r6 - x87_r7
int32_t eax_1
eax_1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}
int32_t eax_2

if (not(p))
    eax_2 = arg3
else
    eax_2 = sub_70c710(float.t(arg3) * fconvert.t(*(arg2 + 0x3c)))

lplf.lfHeight = neg.d(eax_2)
lplf.lfWidth = 0
lplf.lfEscapement = 0
lplf.lfOrientation = 0
lplf.lfWeight = arg4
lplf.lfItalic = 0
lplf.lfUnderline = 0
lplf.lfStrikeOut = 0
lplf.lfCharSet = 0x80
lplf.lfOutPrecision = 0
lplf.lfClipPrecision = 0
lplf.lfQuality = 0
lplf.lfPitchAndFamily = 1
var_24
sub_6b5353(&var_24, 0x20, arg1)
HIMC eax_5 = ImmGetContext(*(arg2 + 0x78))
ImmSetCompositionFontA(eax_5, &lplf)
ImmReleaseContext(*(arg2 + 0x78), eax_5)
int128_t* eax_6 = arg1
*(arg2 + 0x48) = arg3
void* esi_1 = eax_6 + 1
char i

do
    i = *eax_6
    eax_6 += 1
while (i != 0)
sub_401270(arg2 + 0x4c, eax_6 - esi_1, arg1)
*(arg2 + 0x68) = arg4
*(arg2 + 0x44) = 1
sub_6b4885(var_4 ^ &lplf)
return arg4
