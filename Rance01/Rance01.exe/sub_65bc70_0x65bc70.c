// 函数: sub_65bc70
// 地址: 0x65bc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BitBlt(BeginPaint(arg2, &paint), 0, 0, *(arg1 + 0xa0), *(arg1 + 0xa4), *(arg1 + 0xa8), 0, 0, 
    SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
