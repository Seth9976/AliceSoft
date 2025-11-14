// 函数: sub_4d6ec0
// 地址: 0x4d6ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    void* edx = &result[3]
    int32_t* ecx_1 = arg1 + 0xc
    
    do
        *result = ecx_1[-3]
        *(edx - 8) = ecx_1[-2]
        *edx = *ecx_1
        *(edx + 4) = ecx_1[1]
        *(edx + 8) = ecx_1[2]
        *(edx + 0xc) = ecx_1[3]
        int32_t eax_5
        eax_5.b = ecx_1[4].b
        ecx_1 = &ecx_1[8]
        *(edx + 0x10) = eax_5.b
        result = &result[8]
        edx += 0x20
    while (&ecx_1[-3] != arg4)

return result
