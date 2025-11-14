// 函数: sub_4b11c0
// 地址: 0x4b11c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    float* esi_1 = arg1 + 0x20
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-8], 0)
        *(result + 0x1c) = esi_1[-1]
        *(result + 0x20) = fconvert.s(fconvert.t(*esi_1))
        *(result + 0x24) = esi_1[1]
        *(result + 0x28) = esi_1[2]
        *(result + 0x2c) = esi_1[3]
        *(result + 0x30) = fconvert.s(fconvert.t(esi_1[4]))
        esi_1 = &esi_1[0xf]
        *(result + 0x34) = fconvert.s(fconvert.t(esi_1[-0xa]))
        int32_t edx
        edx.b = esi_1[-9].b
        *(result + 0x38) = edx.b
        result += 0x3c
    while (&esi_1[-8] != arg4)

return result
