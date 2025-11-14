// 函数: sub_620570
// 地址: 0x620570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg2, &paint)
int32_t eax_2 = *(arg1 + 0xd4)

if (eax_2 != 0)
    int32_t cx = (*(*(arg1 + 0xb0) + 0x10))((*(*(arg1 + 0xb0) + 0x14))(eax_2, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, 0, cx)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
