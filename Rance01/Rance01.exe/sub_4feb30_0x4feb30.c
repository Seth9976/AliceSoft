// 函数: sub_4feb30
// 地址: 0x4feb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg2)
    void* edi_1 = result + 0x34
    int32_t* esi_1 = arg1 + 0x34
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-0xd], 0)
        *(edi_1 - 0x18) = esi_1[-6]
        *(edi_1 - 0x10) = esi_1[-4]
        *(edi_1 - 0xc) = esi_1[-3]
        *(edi_1 - 8) = esi_1[-2]
        *(edi_1 - 4) = esi_1[-1]
        *edi_1 = *esi_1
        *(edi_1 + 4) = esi_1[1]
        int32_t edx_3 = esi_1[2]
        esi_1 = &esi_1[0x10]
        *(edi_1 + 8) = edx_3
        result += 0x40
        edi_1 += 0x40
    while (&esi_1[-0xd] != arg2)

return result
