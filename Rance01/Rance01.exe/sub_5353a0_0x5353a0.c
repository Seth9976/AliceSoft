// 函数: sub_5353a0
// 地址: 0x5353a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
int32_t* edi = arg1

while (esi != arg4)
    *edi = *esi
    sub_4b55f0(&edi[1], &esi[1])
    sub_535540(&edi[5], &esi[5])
    esi = &esi[9]
    edi = &edi[9]
