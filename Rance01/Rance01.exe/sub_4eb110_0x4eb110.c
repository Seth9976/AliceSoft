// 函数: sub_4eb110
// 地址: 0x4eb110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    void* edx = &result[6]
    float* ecx_1 = arg1 + 0x18
    
    do
        *result = ecx_1[-6]
        *(edx - 0x14) = ecx_1[-5]
        *(edx - 0xc) = ecx_1[-3]
        *(edx - 8) = ecx_1[-2]
        *(edx - 4) = ecx_1[-1]
        *edx = fconvert.s(fconvert.t(*ecx_1))
        ecx_1 = &ecx_1[9]
        result = &result[9]
        *(edx + 4) = fconvert.s(fconvert.t(ecx_1[-8]))
        int32_t eax_4
        eax_4.b = ecx_1[-7].b
        *(edx + 8) = eax_4.b
        edx += 0x24
    while (&ecx_1[-6] != arg4)

return result
