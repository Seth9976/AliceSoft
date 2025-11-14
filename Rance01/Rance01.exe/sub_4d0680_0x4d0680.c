// 函数: sub_4d0680
// 地址: 0x4d0680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    return 

void* edx = arg1 + 0x14
int32_t* ecx = arg3 + 0x14

do
    *(edx - 0x10) = ecx[-4]
    *(edx - 0xc) = ecx[-3]
    *(edx - 8) = ecx[-2]
    *(edx - 4) = ecx[-1]
    *edx = *ecx
    *(edx + 4) = ecx[1]
    int32_t edi_7 = ecx[2]
    ecx = &ecx[8]
    *(edx + 8) = edi_7
    arg1 += 0x20
    edx += 0x20
while (&ecx[-5] != arg4)
