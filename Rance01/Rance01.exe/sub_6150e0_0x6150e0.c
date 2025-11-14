// 函数: sub_6150e0
// 地址: 0x6150e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PAINTSTRUCT paint
int32_t eax_1 = data_78c474 ^ &paint
BeginPaint(arg2, &paint)
int32_t eax_2 = *(arg1 + 0xc4)

if (eax_2 != 0)
    int32_t cx = (*(*(arg1 + 0x9c) + 0x10))((*(*(arg1 + 0x9c) + 0x14))(eax_2, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, 0, cx)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &paint)
return 0
