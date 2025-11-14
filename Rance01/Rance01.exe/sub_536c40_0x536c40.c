// 函数: sub_536c40
// 地址: 0x536c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg3
void* edi = arg1

while (esi != arg4)
    sub_401180(edi, 0xffffffff, esi, 0)
    sub_536d40(edi + 0x1c, esi + 0x1c)
    *(edi + 0x2c) = *(esi + 0x2c)
    esi += 0x30
    edi += 0x30
