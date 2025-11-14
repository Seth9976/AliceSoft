// 函数: sub_66fbe0
// 地址: 0x66fbe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg3
void* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    sub_401180(esi, 0xffffffff, edi, 0)
    *(esi + 0x1c) = *(ebx_2 + esi + 0x1c)
    *(esi + 0x20) = *(edi + 0x20)
    edi += 0x24
    esi += 0x24
while (edi != arg4)
