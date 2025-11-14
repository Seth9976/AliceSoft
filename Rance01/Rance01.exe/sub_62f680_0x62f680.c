// 函数: sub_62f680
// 地址: 0x62f680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_5c
int32_t eax_1 = data_78c474 ^ &var_5c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)

if (*(arg1 + 0x10c) == *(arg1 + 0x110))
    RECT lprc
    lprc.left = 0
    lprc.top = (*(*(arg1 + 0x94) + 0x14))()
    lprc.right = paint.rcPaint.right
    lprc.bottom = paint.rcPaint.bottom
    HBRUSH eax_9 = CreateSolidBrush((zx.d(*(arg1 + 0x194)) << 8 | zx.d(*(arg1 + 0x190))) << 8
        | zx.d(*(arg1 + 0x18c)))
    FillRect(paint.hdc, &lprc, eax_9)
    DeleteObject(eax_9)

int32_t eax_10 = *(arg1 + 0xb8)

if (eax_10 != 0)
    int32_t cx = (*(*(arg1 + 0x94) + 0x10))((*(*(arg1 + 0x94) + 0x14))(eax_10, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, 0, cx)

EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_5c)
return 0
