// 函数: sub_4f69c0
// 地址: 0x4f69c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg2)
    void* edi_1 = result + 0x38
    int32_t* esi_1 = arg1 + 0x38
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-0xe], 0)
        *(edi_1 - 0x1c) = esi_1[-7]
        *(edi_1 - 0x18) = esi_1[-6]
        *(edi_1 - 0x10) = esi_1[-4]
        *(edi_1 - 0xc) = esi_1[-3]
        *(edi_1 - 8) = esi_1[-2]
        *(edi_1 - 4) = esi_1[-1]
        *edi_1 = *esi_1
        *(edi_1 + 4) = esi_1[1]
        int32_t eax_3 = esi_1[2]
        esi_1 = &esi_1[0x11]
        *(edi_1 + 8) = eax_3
        result += 0x44
        edi_1 += 0x44
    while (&esi_1[-0xe] != arg2)

return result
