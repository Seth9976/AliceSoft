// 函数: sub_65b250
// 地址: 0x65b250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_60
int32_t eax_1 = data_78c474 ^ &var_60
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 0x34), &rect)
int32_t eax_2 = *(arg1 + 0x5c)
HDC hdcSrc = *(arg1 + 0xac)
rect.bottom = eax_2

if (hdcSrc != 0)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, eax_2 - top, hdcSrc, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_60)
return 0
