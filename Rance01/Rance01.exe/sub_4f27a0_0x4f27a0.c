// 函数: sub_4f27a0
// 地址: 0x4f27a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x14
    
    do
        *result = esi_1[-5]
        sub_4adaf0(&result[1], &esi_1[-4])
        result[5] = *esi_1
        result[6] = esi_1[1]
        result[7] = esi_1[2]
        result[8] = esi_1[3]
        result[9] = esi_1[4]
        result[0xa] = esi_1[5]
        sub_4adaf0(&result[0xb], &esi_1[6])
        result[0xf] = esi_1[0xa]
        result[0x10] = esi_1[0xb]
        result[0x11] = esi_1[0xc]
        result[0x12] = esi_1[0xd]
        result[0x13] = esi_1[0xe]
        result[0x14] = esi_1[0xf]
        result[0x15] = esi_1[0x10]
        result[0x16] = esi_1[0x11]
        result[0x17] = fconvert.s(fconvert.t(esi_1[0x12]))
        esi_1 = &esi_1[0x1a]
        result[0x18] = fconvert.s(fconvert.t(esi_1[-7]))
        int32_t edx_4
        edx_4.b = esi_1[-6].b
        result[0x19].b = edx_4.b
        result = &result[0x1a]
    while (&esi_1[-5] != arg4)

return result
