// 函数: sub_504040
// 地址: 0x504040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
void* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    sub_401180(esi, 0xffffffff, edi, 0)
    sub_5041d0(esi + 0x1c, ebx_2 + esi + 0x1c)
    edi = &edi[0xb]
    esi += 0x2c
while (edi != arg4)
