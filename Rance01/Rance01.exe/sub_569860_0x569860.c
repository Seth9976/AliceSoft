// 函数: sub_569860
// 地址: 0x569860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg1, &paint)
HGDIOBJ hbr = GetStockObject(BLACK_BRUSH)
var_44
FillRect(paint.hdc, &var_44, hbr)
BOOL result = EndPaint(arg1, &paint)
sub_6b4885(eax_1 ^ &paint)
return result
