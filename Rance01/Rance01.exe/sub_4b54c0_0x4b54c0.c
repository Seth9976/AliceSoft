// 函数: sub_4b54c0
// 地址: 0x4b54c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg2)
    void* edi_1 = result + 0xc
    int32_t* esi_1 = arg1 + 0xc
    
    do
        *(edi_1 - 4) = esi_1[-1]
        *edi_1 = *esi_1
        *(edi_1 + 4) = esi_1[1]
        *(edi_1 + 8) = esi_1[2]
        *(edi_1 + 0xc) = esi_1[3]
        *(edi_1 + 0x10) = esi_1[4]
        *(edi_1 + 0x14) = esi_1[5]
        *(edi_1 + 0x18) = fconvert.s(fconvert.t(esi_1[6]))
        *(edi_1 + 0x1c) = esi_1[7]
        sub_4b55f0(edi_1 + 0x20, &esi_1[8])
        esi_1 = &esi_1[0xf]
        result += 0x3c
        edi_1 += 0x3c
    while (&esi_1[-3] != arg2)

return result
