// 函数: sub_6457f0
// 地址: 0x6457f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_70
int32_t eax_1 = data_78c474 ^ &var_70
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 0x34), &rect)
HDC hdcSrc = *(arg1 + 0x238)
int32_t bottom = rect.bottom
int32_t eax_4 = *(arg1 + 0x5c)
int32_t top_1 = rect.top
int32_t left_1 = rect.left
int32_t bottom_1 = bottom
rect.top = eax_4

if (hdcSrc != 0)
    BitBlt(paint.hdc, left_1, top_1, rect.right - left_1, eax_4 - top_1, hdcSrc, 0, 0, SRCCOPY)
    bottom = rect.bottom

HDC hdcSrc_1 = *(arg1 + 0x2a0)

if (hdcSrc_1 != 0)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, bottom - top, hdcSrc_1, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_70)
return 0
