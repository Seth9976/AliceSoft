// 函数: sub_65a6b0
// 地址: 0x65a6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
int32_t eax_1 = data_78c474 ^ &point

if (**(arg1 + 0x90) != 0)
    sub_6b4885(eax_1 ^ &point)
    return 1

GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)
int16_t edi_1 = (point.x).w - (rect.left).w
int16_t eax_5
eax_5.b = *(arg1 + 0x9b)
int16_t ebx = (point.y).w - (rect.top).w
int16_t ecx_3
ecx_3.b = 0

if ((eax_5.b == 0 || *(arg1 + 0x88) == 0) && *(arg1 + 0x94) != 0)
    ecx_3.b = 1

if (eax_5.b == 0 && ecx_3.b != 0)
    SetCursor(LoadCursorA(nullptr, 0x7f82))
    
    if (*(arg1 + 0x88) != 0)
        **(arg1 + 0x90) = 1
        *(arg1 + 0x9b) = 1

*(arg1 + 0x84) = sx.d(ebx)
*(arg1 + 0x80) = sx.d(edi_1)
sub_6b4885(eax_1 ^ &point)
return 0
