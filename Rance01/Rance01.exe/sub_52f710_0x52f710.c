// 函数: sub_52f710
// 地址: 0x52f710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg2)
    int32_t* edi_1 = arg1 + 0x20
    
    do
        *result = edi_1[-8]
        sub_401180(&result[1], 0xffffffff, &edi_1[-7], 0)
        result[8] = *edi_1
        result[9] = edi_1[1]
        result[0xa] = edi_1[2]
        result[0xb] = edi_1[3]
        result[0xc] = edi_1[4]
        result[0xd] = edi_1[5]
        result[0xe] = edi_1[6]
        sub_52f820(&result[0xf], &edi_1[7])
        edi_1 = &edi_1[0x13]
        result = &result[0x13]
    while (&edi_1[-8] != arg2)

return result
