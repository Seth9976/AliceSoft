// 函数: sub_4eb170
// 地址: 0x4eb170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    float* edx = &result[4]
    void* ecx_1 = arg1 + 0x10
    
    do
        *result = *(ecx_1 - 0x10)
        edx[-3] = *(ecx_1 - 0xc)
        edx[-1] = fconvert.s(fconvert.t(*(ecx_1 - 4)))
        ecx_1 += 0x1c
        result = &result[7]
        *edx = fconvert.s(fconvert.t(*(ecx_1 - 0x1c)))
        edx = &edx[7]
        edx[-6] = fconvert.s(fconvert.t(*(ecx_1 - 0x18)))
        int32_t eax_1
        eax_1.b = *(ecx_1 - 0x14)
        edx[-5].b = eax_1.b
    while (ecx_1 - 0x10 != arg4)

return result
