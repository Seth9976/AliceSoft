// 函数: sub_60dee0
// 地址: 0x60dee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    *esi = *edi
    sub_401180(&esi[1], 0xffffffff, ebx_2 + esi + 4, 0)
    esi[8] = edi[8]
    edi = &edi[9]
    esi = &esi[9]
while (edi != arg4)
