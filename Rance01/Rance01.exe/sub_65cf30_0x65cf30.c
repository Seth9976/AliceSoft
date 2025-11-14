// 函数: sub_65cf30
// 地址: 0x65cf30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg2, &paint)
HDC hdcSrc = *(arg1 + 0xa8)

if (hdcSrc != 0)
    BitBlt(paint.hdc, 0, *(arg1 + 0x5c), *(arg1 + 0xa0), *(arg1 + 0xa4), hdcSrc, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
