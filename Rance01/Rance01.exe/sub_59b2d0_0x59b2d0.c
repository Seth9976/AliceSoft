// 函数: sub_59b2d0
// 地址: 0x59b2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = esi_1[-2]
        result[1] = esi_1[-1]
        result[2] = *esi_1
        sub_401180(&result[3], 0xffffffff, &esi_1[1], 0)
        result[0xa] = esi_1[8]
        result[0xb] = esi_1[9]
        result[0xc] = esi_1[0xa]
        result[0xd] = esi_1[0xb]
        result[0xe] = esi_1[0xc]
        result[0xf] = esi_1[0xd]
        result[0x10] = esi_1[0xe]
        result[0x11] = esi_1[0xf]
        result[0x12] = esi_1[0x10]
        result[0x13] = esi_1[0x11]
        result[0x14] = esi_1[0x12]
        result[0x15] = esi_1[0x13]
        result[0x16] = esi_1[0x14]
        result[0x17] = esi_1[0x15]
        result[0x18] = esi_1[0x16]
        int32_t ecx_7 = esi_1[0x17]
        esi_1 = &esi_1[0x1a]
        result[0x19] = ecx_7
        result = &result[0x1a]
    while (&esi_1[-2] != arg4)

return result
