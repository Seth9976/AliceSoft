// 函数: sub_60b2d0
// 地址: 0x60b2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg2)
    void* ebx_1 = &result[0xb]
    int32_t* edi_1 = arg1 + 0x2c
    
    do
        *result = edi_1[-0xb]
        sub_401180(ebx_1 - 0x28, 0xffffffff, &edi_1[-0xa], 0)
        *(ebx_1 - 0xc) = edi_1[-3]
        *(ebx_1 - 8) = edi_1[-2]
        *(ebx_1 - 4) = edi_1[-1]
        sub_401180(ebx_1, 0xffffffff, edi_1, 0)
        *(ebx_1 + 0x1c) = edi_1[7]
        sub_60ab30(ebx_1 + 0x20, &edi_1[8])
        sub_401180(ebx_1 + 0x30, 0xffffffff, &edi_1[0xc], 0)
        int32_t edx_3 = edi_1[0x13]
        edi_1 = &edi_1[0x1f]
        *(ebx_1 + 0x4c) = edx_3
        result = &result[0x1f]
        ebx_1 += 0x7c
    while (&edi_1[-0xb] != arg2)

return result
