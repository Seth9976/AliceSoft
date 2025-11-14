// 函数: sub_60bba0
// 地址: 0x60bba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_6c
int32_t eax_1 = data_78c474 ^ &var_6c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
int32_t eax_2 = *(arg1 + 0x8c)

if (eax_2 s>= 0)
    int32_t ecx = *(arg1 + 0x7c)
    var_58
    
    if (eax_2 s< (*(arg1 + 0x80) - ecx) s>> 2)
        FillRect(paint.hdc, &var_58, *(ecx + (eax_2 << 2)))

SetBkMode(paint.hdc, 1)
HGDIOBJ h = SelectObject(paint.hdc, *(arg1 + 0x78))
int32_t i = 0

if ((*(arg1 + 0x6c) - *(arg1 + 0x68)) s/ 0x1c s> 0)
    int32_t ebx_1 = 0
    
    do
        void* eax_9 = *(arg1 + 0x68)
        int32_t* lpString_1 = eax_9 + ebx_1
        int32_t* lpString
        
        if (lpString_1[5] u< 0x10)
            lpString = lpString_1
        else
            lpString = *lpString_1
        
        int32_t x = *(arg1 + 0x9c)
        TextOutA(paint.hdc, x, *(arg1 + 0x98) * i + x, lpString, *(eax_9 + ebx_1 + 0x10))
        i += 1
        ebx_1 += 0x1c
    while (i s< (*(arg1 + 0x6c) - *(arg1 + 0x68)) s/ 0x1c)

SelectObject(paint.hdc, h)
RECT rect
GetClientRect(arg2, &rect)
MoveToEx(paint.hdc, rect.left, rect.top, nullptr)
LineTo(paint.hdc, rect.right - 1, rect.top)
LineTo(paint.hdc, rect.right - 1, rect.bottom - 1)
LineTo(paint.hdc, rect.left, rect.bottom - 1)
LineTo(paint.hdc, rect.left, rect.top)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_6c)
return 0
