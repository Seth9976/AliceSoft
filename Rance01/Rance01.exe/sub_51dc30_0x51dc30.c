// 函数: sub_51dc30
// 地址: 0x51dc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg2)
    void* edi_1 = &result[2]
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = esi_1[-2]
        *(edi_1 - 4) = esi_1[-1]
        *edi_1 = *esi_1
        *(edi_1 + 4) = esi_1[1]
        *(edi_1 + 8) = esi_1[2]
        *(edi_1 + 0xc) = esi_1[3]
        *(edi_1 + 0x10) = esi_1[4].b
        *(edi_1 + 0x14) = fconvert.s(fconvert.t(esi_1[5]))
        *(edi_1 + 0x18) = fconvert.s(fconvert.t(esi_1[6]))
        *(edi_1 + 0x1c) = fconvert.s(fconvert.t(esi_1[7]))
        *(edi_1 + 0x20) = fconvert.s(fconvert.t(esi_1[8]))
        *(edi_1 + 0x24) = esi_1[9]
        *(edi_1 + 0x28) = esi_1[0xa]
        *(edi_1 + 0x2c) = esi_1[0xb].b
        sub_4b55f0(edi_1 + 0x30, &esi_1[0xc])
        sub_4b55f0(edi_1 + 0x40, &esi_1[0x10])
        esi_1 = &esi_1[0x16]
        result = &result[0x16]
        edi_1 += 0x58
    while (&esi_1[-2] != arg2)

return result
