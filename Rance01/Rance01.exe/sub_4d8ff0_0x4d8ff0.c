// 函数: sub_4d8ff0
// 地址: 0x4d8ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg4 != arg1)
    void* edx = result + 0xc
    void* ecx_1 = arg1 + 0xc
    
    do
        int32_t eax = *(ecx_1 - 0x2c)
        ecx_1 -= 0x20
        *(result - 0x20) = eax
        *(edx - 0x28) = *(ecx_1 - 8)
        edx -= 0x20
        result -= 0x20
        *edx = *ecx_1
        *(edx + 4) = *(ecx_1 + 4)
        *(edx + 8) = *(ecx_1 + 8)
        *(edx + 0xc) = *(ecx_1 + 0xc)
        int32_t eax_5
        eax_5.b = *(ecx_1 + 0x10)
        *(edx + 0x10) = eax_5.b
    while (ecx_1 - 0xc != arg4)

return result
