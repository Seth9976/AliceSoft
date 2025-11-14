// 函数: sub_6145d0
// 地址: 0x6145d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg1, &paint)
HBRUSH eax_3 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
var_48
FillRect(paint.hdc, &var_48, eax_3)
DeleteObject(eax_3)
EndPaint(arg1, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
