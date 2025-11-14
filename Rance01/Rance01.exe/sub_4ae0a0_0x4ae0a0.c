// 函数: sub_4ae0a0
// 地址: 0x4ae0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x14
    
    do
        sub_4adaf0(result, &esi_1[-5])
        *(result + 0x10) = esi_1[-1]
        *(result + 0x14) = *esi_1
        *(result + 0x18) = esi_1[1]
        *(result + 0x1c) = esi_1[2]
        *(result + 0x20) = esi_1[3]
        *(result + 0x24) = esi_1[4]
        sub_4adaf0(result + 0x28, &esi_1[5])
        *(result + 0x38) = esi_1[9]
        *(result + 0x3c) = esi_1[0xa]
        *(result + 0x40) = esi_1[0xb]
        int32_t edx_3 = esi_1[0xc]
        esi_1 = &esi_1[0x12]
        *(result + 0x44) = edx_3
        result += 0x48
    while (&esi_1[-5] != arg4)

return result
