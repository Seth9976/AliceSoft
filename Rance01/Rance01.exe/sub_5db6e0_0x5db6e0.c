// 函数: sub_5db6e0
// 地址: 0x5db6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
RECT rect
int32_t esi

if (GetClientRect(arg2, &rect) != 0)
    *(arg1 + 0xe0)
    esi = divs.dp.d(sx.q(rect.bottom - rect.top), *(arg1 + 0xe0)) + 1
else
    esi = 0

int32_t eax_7 = GetScrollPos(arg2, SB_VERT)
int32_t eax_8 = GetScrollPos(arg2, SB_HORZ)
sub_5dcab0(*(arg1 + 0x10c), arg1 + 0xa8, eax_8, eax_7, esi)
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
var_58

if (*(arg1 + 0x10c) == 0 || *(arg1 + 0xc8) == 0)
    HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
    FillRect(paint.hdc, &var_58, hbr)
else
    __builtin_memset(&rect, 0, 0x10)
    GetClientRect(arg2, &rect)
    int32_t eax_9 = var_58:4.d
    int32_t ecx_2 = var_58.d
    BitBlt(paint.hdc, ecx_2, eax_9, var_58:8.d - ecx_2, var_58:0xc.d - eax_9, *(arg1 + 0xc8), 
        ecx_2, eax_9, SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_68)
return 0
