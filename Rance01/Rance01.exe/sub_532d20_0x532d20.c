// 函数: sub_532d20
// 地址: 0x532d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    *esi = *edi
    esi[1] = *(ebx_2 + esi + 4)
    sub_4b55f0(&esi[2], &edi[2])
    edi = &edi[6]
    esi = &esi[6]
while (edi != arg4)
