// 函数: sub_532500
// 地址: 0x532500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    *esi = *edi
    esi[1] = *(ebx_2 + esi + 4)
    sub_401180(&esi[2], 0xffffffff, &edi[2], 0)
    edi = &edi[9]
    esi = &esi[9]
while (edi != arg4)
