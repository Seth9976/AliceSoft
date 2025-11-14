// 函数: sub_4f6980
// 地址: 0x4f6980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
int32_t* edi = arg1

while (esi != arg4)
    *edi = *esi
    edi[1] = esi[1]
    edi[2] = esi[2]
    sub_4adaf0(&edi[3], &esi[3])
    esi = &esi[7]
    edi = &edi[7]
