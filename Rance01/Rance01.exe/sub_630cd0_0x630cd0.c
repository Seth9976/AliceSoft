// 函数: sub_630cd0
// 地址: 0x630cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg2, &paint)
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
BitBlt(paint.hdc, left, top, paint.rcPaint.right - left, paint.rcPaint.bottom - top, 
    *(arg1 + 0xcc), left, top, SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
