// 函数: sub_65d290
// 地址: 0x65d290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t wSrc_1
int32_t eax_1 = data_78c474 ^ &wSrc_1
int32_t wSrc_4 = *(arg1 + 0xf0)
void* esi = *(data_797d2c + 0x30)
wSrc_1 = wSrc_4
int32_t* var_44
sub_42e070(esi + 0x294, &var_44, &wSrc_1)
int32_t* eax_3 = var_44
void* eax_4

if (eax_3 != *(esi + 0x298))
    eax_4 = eax_3[4]

if (eax_3 != *(esi + 0x298) && eax_4 != 0)
    var_44 = *(eax_4 + 8)
else
    var_44 = nullptr

wSrc_1 = wSrc_4
int32_t* var_40
sub_42e070(esi + 0x294, &var_40, &wSrc_1)
int32_t* eax_6 = var_40
void* eax_7

if (eax_6 != *(esi + 0x298))
    eax_7 = eax_6[4]

if (eax_6 != *(esi + 0x298) && eax_7 != 0)
    var_40 = *(eax_7 + 0xc)
else
    var_40 = nullptr

char* eax_9 = data_797d80

if (sub_5cadb0(eax_9) != 0)
    wSrc_1 = (*(**(eax_9 + 0x28) + 0x10))()
else
    wSrc_1 = 0

int32_t eax_13 = sub_70c710(float.t(wSrc_1) * fconvert.t(*(arg1 + 0x70)))
char* eax_14 = data_797d80

if (sub_5cadb0(eax_14) != 0)
    wSrc_1 = (*(**(eax_14 + 0x28) + 0x14))()
else
    wSrc_1 = 0

int32_t wSrc_2 = sub_70c710(float.t(wSrc_1) * fconvert.t(*(arg1 + 0x70)))
*(arg1 + 0x140) = eax_13
wSrc_1 = wSrc_2
*(arg1 + 0x124) = wSrc_2
sub_64d800(arg1 + 0x12c)
sub_64d800(arg1 + 0x110)

if (((zx.d(*(arg1 + 0x1c0)) << 8 | zx.d(*(arg1 + 0x1bc))) << 8 | zx.d(*(arg1 + 0x1b8)))
        != *(arg1 + 0x1d8))
    HGDIOBJ ho = *(arg1 + 0x1b4)
    
    if (ho != 0)
        DeleteObject(ho)
        *(arg1 + 0x1b4) = 0
    
    int32_t eax_19 = *(arg1 + 0x1d8)
    sub_635350(arg1 + 0x1b0, zx.d(eax_19.b), zx.d((eax_19 u>> 8).b), zx.d((eax_19 u>> 0x10).b))

RECT lprc_1
lprc_1.left = 0
lprc_1.top = *(arg1 + 0x64)
lprc_1.right = eax_13 - GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
int32_t eax_23 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
lprc_1.bottom = wSrc_1 - eax_23 + *(arg1 + 0x64)
FillRect(*(arg1 + 0xa8), &lprc_1, *(arg1 + 0x1b4))
long double x87_r7_4 = fconvert.t(*(arg1 + 0x70))
long double x87_r6 = float.t(1)
x87_r6 - x87_r7_4
int32_t eax_25
eax_25.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    HDC hdcSrc = *(arg1 + 0xc8)
    int32_t cy = *(arg1 + 0xc4)
    int32_t cx = *(arg1 + 0xc0)
    int32_t eax_36 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
    int32_t eax_38 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
    BitBlt(*(arg1 + 0xa8), var_44 - eax_38, var_40 - eax_36 + *(arg1 + 0x64), cx, cy, hdcSrc, 0, 0, 
        SRCCOPY)
else
    int32_t mode = SetStretchBltMode(*(arg1 + 0xa8), COLORONCOLOR)
    int32_t wSrc_3 = *(arg1 + 0xc0)
    HDC hdcSrc_1 = *(arg1 + 0xc8)
    int32_t hSrc = *(arg1 + 0xc4)
    enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x11c)
    wSrc_1 = wSrc_3
    int32_t eax_27 = GetScrollPos(*(arg1 + 0x114), nBar)
    int32_t eax_29 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
    int32_t wSrc = wSrc_1
    int32_t hDest = sub_70c710(float.t(hSrc) * fconvert.t(*(arg1 + 0x70)))
    int32_t wDest = sub_70c710(float.t(wSrc_3) * fconvert.t(*(arg1 + 0x70)))
    int32_t yDest =
        sub_70c710(float.t(var_40) * fconvert.t(*(arg1 + 0x70))) - eax_27 + *(arg1 + 0x64)
    int32_t eax_33 = sub_70c710(float.t(var_44) * fconvert.t(*(arg1 + 0x70)))
    StretchBlt(*(arg1 + 0xa8), eax_33 - eax_29, yDest, wDest, hDest, hdcSrc_1, 0, 0, wSrc, hSrc, 
        SRCCOPY)
    SetStretchBltMode(*(arg1 + 0xa8), mode)

int32_t eax_40 = *(arg1 + 0xa0)
int32_t right = lprc_1.right
RECT lprc

if (right s< eax_40)
    lprc.left = right
    lprc.right = eax_40
    lprc.top = lprc_1.top
    lprc.bottom = *(arg1 + 0xa4)
    FillRect(*(arg1 + 0xa8), &lprc, *(arg1 + 0x1c8))

int32_t result = *(arg1 + 0xa4)
int32_t bottom = lprc_1.bottom

if (bottom s< result)
    lprc.left = lprc_1.left
    lprc.top = bottom
    lprc.bottom = result
    lprc.right = *(arg1 + 0xa0)
    result = FillRect(*(arg1 + 0xa8), &lprc, *(arg1 + 0x1c8))

sub_6b4885(eax_1 ^ &wSrc_1)
return result
