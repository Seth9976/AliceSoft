// 函数: sub_4c8a70
// 地址: 0x4c8a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    return 

void* edx = arg1 + 0x14
int32_t* ecx = arg3 + 0x14

do
    *(edx - 0xc) = ecx[-3]
    *(edx - 8) = ecx[-2]
    *(edx - 4) = ecx[-1]
    *edx = *ecx
    *(edx + 8) = ecx[2]
    *(edx + 0xc) = ecx[3]
    *(edx + 0x10) = ecx[4]
    int32_t edi_8 = ecx[5]
    ecx = &ecx[0xb]
    *(edx + 0x14) = edi_8
    arg1 += 0x2c
    edx += 0x2c
while (&ecx[-5] != arg4)
