// 函数: sub_60b810
// 地址: 0x60b810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1

if (*esi == 0)
    return 

POINT point
GetCursorPos(&point)
ScreenToClient(esi[1], &point)
int32_t* nHeight
sub_401180(&esi[0x13], 0xffffffff, nHeight, 0)
sub_60b8a0()
int32_t nWidth
sub_60ba90(esi, &nWidth, &nHeight)
MoveWindow(*esi, esi[0x24] + point.x, esi[0x25] + point.y, nWidth, nHeight, 1)
InvalidateRect(*esi, nullptr, 0)
