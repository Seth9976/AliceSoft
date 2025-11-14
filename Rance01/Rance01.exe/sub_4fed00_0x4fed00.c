// 函数: sub_4fed00
// 地址: 0x4fed00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg3 + 0xc
int32_t* ecx = arg1 + 4
int32_t i_1 = 3
int32_t i

do
    *ecx = *(arg3 - arg1 + ecx)
    ecx[1] = *(edx - 4)
    ecx[2] = *edx
    ecx[3] = *(edx + 4)
    ecx[4] = *(edx + 8)
    ecx[5] = *(edx + 0xc)
    ecx[6] = *(edx + 0x10)
    ecx[7] = *(edx + 0x14)
    ecx[8] = *(edx + 0x18)
    ecx[9] = *(edx + 0x1c)
    ecx[0xa] = *(edx + 0x20)
    ecx[0xb] = *(edx + 0x24)
    ecx[0xc] = *(edx + 0x28)
    ecx[0xd] = *(edx + 0x2c)
    edx += 0x3c
    ecx = &ecx[0xf]
    i = i_1
    i_1 -= 1
while (i != 1)
