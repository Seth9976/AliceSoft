// 函数: sub_60f390
// 地址: 0x60f390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
void* edi = arg1

while (esi != arg4)
    sub_401180(edi, 0xffffffff, esi, 0)
    sub_401180(edi + 0x1c, 0xffffffff, &esi[7], 0)
    esi = &esi[0xe]
    edi += 0x38
