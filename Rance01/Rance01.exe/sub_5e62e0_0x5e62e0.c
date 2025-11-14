// 函数: sub_5e62e0
// 地址: 0x5e62e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg2)
    int32_t* ebx_1 = arg1 + 8
    
    do
        *(result + 4) = ebx_1[-1]
        *(result + 8) = *ebx_1
        *(result + 0xc) = ebx_1[1]
        *(result + 0x10) = ebx_1[2]
        *(result + 0x14) = ebx_1[3]
        *(result + 0x18) = ebx_1[4]
        *(result + 0x1c) = ebx_1[5]
        *(result + 0x20) = ebx_1[6]
        *(result + 0x24) = ebx_1[7]
        *(result + 0x28) = ebx_1[8]
        *(result + 0x2c) = ebx_1[9]
        *(result + 0x30) = ebx_1[0xa]
        *(result + 0x34) = ebx_1[0xb]
        *(result + 0x38) = ebx_1[0xc]
        *(result + 0x3c) = ebx_1[0xd]
        *(result + 0x40) = ebx_1[0xe]
        *(result + 0x44) = ebx_1[0xf]
        *(result + 0x48) = ebx_1[0x10]
        *(result + 0x4c) = ebx_1[0x11]
        *(result + 0x50) = ebx_1[0x12]
        *(result + 0x54) = ebx_1[0x13]
        __builtin_memcpy(result + 0x58, &ebx_1[0x14], 0x30)
        sub_401180(result + 0x88, 0xffffffff, &ebx_1[0x20], 0)
        sub_401180(result + 0xa4, 0xffffffff, &ebx_1[0x27], 0)
        char edx_8 = ebx_1[0x2e].b
        ebx_1 = &ebx_1[0x31]
        *(result + 0xc0) = edx_8
        result += 0xc4
    while (&ebx_1[-2] != arg2)

return result
