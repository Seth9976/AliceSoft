// 函数: sub_60a660
// 地址: 0x60a660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg2)
    void* edi_1 = result + 0x48
    int32_t* esi_1 = arg1 + 0x48
    
    do
        *(edi_1 - 0x44) = esi_1[-0x11]
        *(edi_1 - 0x40) = esi_1[-0x10]
        *(edi_1 - 0x3c) = esi_1[-0xf]
        sub_4b55f0(edi_1 - 0x38, &esi_1[-0xe])
        *(edi_1 - 0x28) = esi_1[-0xa]
        sub_401180(edi_1 - 0x24, 0xffffffff, &esi_1[-9], 0)
        *(edi_1 - 4) = esi_1[-1]
        *edi_1 = *esi_1
        int32_t edx_3 = esi_1[1]
        esi_1 = &esi_1[0x14]
        *(edi_1 + 4) = edx_3
        result += 0x50
        edi_1 += 0x50
    while (&esi_1[-0x12] != arg2)

return result
