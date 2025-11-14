// 函数: sub_4b61e0
// 地址: 0x4b61e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    void* edx = result + 0x20
    int32_t* ecx = arg1 + 0x20
    
    do
        *(edx - 0x1c) = ecx[-7]
        *(edx - 0x18) = ecx[-6]
        *(edx - 0x10) = ecx[-4]
        *(edx - 0xc) = ecx[-3]
        *(edx - 8) = ecx[-2]
        *(edx - 4) = ecx[-1]
        *edx = *ecx
        *(edx + 4) = ecx[1]
        *(edx + 8) = ecx[2]
        *(edx + 0x10) = ecx[4]
        *(edx + 0x14) = ecx[5]
        *(edx + 0x18) = ecx[6]
        *(edx + 0x1c) = ecx[7]
        *(edx + 0x20) = ecx[8]
        *(edx + 0x24) = ecx[9]
        *(edx + 0x28) = ecx[0xa]
        *(edx + 0x2c) = ecx[0xb]
        *(edx + 0x30) = ecx[0xc].b
        *(edx + 0x34) = ecx[0xd]
        *(edx + 0x38) = ecx[0xe]
        *(edx + 0x3c) = ecx[0xf]
        *(edx + 0x40) = ecx[0x10]
        *(edx + 0x44) = ecx[0x11]
        *(edx + 0x48) = ecx[0x12]
        *(edx + 0x4c) = ecx[0x13]
        *(edx + 0x50) = ecx[0x14]
        *(edx + 0x54) = ecx[0x15]
        result += 0xac
        *(edx + 0x58) = fconvert.s(fconvert.t(ecx[0x16]))
        *(edx + 0x5c) = ecx[0x17]
        *(edx + 0x60) = ecx[0x18]
        *(edx + 0x64) = ecx[0x19]
        *(edx + 0x68) = fconvert.s(fconvert.t(ecx[0x1a]))
        *(edx + 0x6c) = ecx[0x1b]
        *(edx + 0x70) = ecx[0x1c]
        *(edx + 0x74) = ecx[0x1d]
        *(edx + 0x78) = ecx[0x1e].b
        *(edx + 0x7c) = fconvert.s(fconvert.t(ecx[0x1f]))
        *(edx + 0x80) = ecx[0x20]
        *(edx + 0x84) = ecx[0x21]
        *(edx + 0x88) = ecx[0x22]
        ecx = &ecx[0x2b]
        edx += 0xac
    while (&ecx[-8] != arg4)

return result
