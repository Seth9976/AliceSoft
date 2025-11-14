// 函数: sub_4feba0
// 地址: 0x4feba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
int32_t* edi = arg1

while (esi != arg4)
    *edi = *esi
    edi[1] = esi[1]
    edi[2] = esi[2]
    sub_4b55f0(&edi[3], &esi[3])
    sub_4b55f0(&edi[7], &esi[7])
    esi = &esi[0xb]
    edi = &edi[0xb]
