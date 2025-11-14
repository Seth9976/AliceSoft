// 函数: sub_6a64e0
// 地址: 0x6a64e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_54
int32_t eax_1 = data_78c474 ^ &var_54
HBRUSH eax_2 = CreateSolidBrush(0xffffff)
PAINTSTRUCT paint
BeginPaint(arg1, &paint)
var_48
FillRect(paint.hdc, &var_48, eax_2)
EndPaint(arg1, &paint)
DeleteObject(eax_2)
sub_6b4885(eax_1 ^ &var_54)
return 0
