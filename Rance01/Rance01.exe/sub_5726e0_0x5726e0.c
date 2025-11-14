// 函数: sub_5726e0
// 地址: 0x5726e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

if (edi == arg4)
    return 

void* ebx_2 = edi - esi

do
    *esi = *edi
    sub_4adaf0(&esi[1], ebx_2 + esi + 4)
    edi = &edi[5]
    esi = &esi[5]
while (edi != arg4)
