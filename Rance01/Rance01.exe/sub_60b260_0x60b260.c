// 函数: sub_60b260
// 地址: 0x60b260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg2)
    void* edi_1 = &result[3]
    int32_t* esi_1 = arg1 + 0xc
    
    do
        *result = esi_1[-3]
        *(edi_1 - 8) = esi_1[-2]
        *(edi_1 - 4) = esi_1[-1]
        sub_401180(edi_1, 0xffffffff, esi_1, 0)
        sub_401180(edi_1 + 0x1c, 0xffffffff, &esi_1[7], 0)
        *(edi_1 + 0x38) = esi_1[0xe]
        int32_t edx_2 = esi_1[0xf]
        esi_1 = &esi_1[0x13]
        *(edi_1 + 0x3c) = edx_2
        result = &result[0x13]
        edi_1 += 0x4c
    while (&esi_1[-3] != arg2)

return result
