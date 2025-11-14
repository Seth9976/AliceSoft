// 函数: sub_6a7360
// 地址: 0x6a7360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_60
int32_t eax_1 = data_78c474 ^ &var_60
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 0x34), &rect)
HDC hdcSrc = *(arg1 + 0xc8)

if (hdcSrc != 0)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, rect.bottom - top, hdcSrc, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_60)
return 0
