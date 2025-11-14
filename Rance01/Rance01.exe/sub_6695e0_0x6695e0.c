// 函数: sub_6695e0
// 地址: 0x6695e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 4
    
    do
        arg1.b = esi_1[-1].b
        *result = arg1.b
        arg3.b = *(esi_1 - 3)
        result[1] = arg3.b
        sub_6691e0(&result[4], esi_1)
        *(result + 0x14) = esi_1[4]
        sub_401180(&result[0x18], 0xffffffff, &esi_1[5], 0)
        *(result + 0x34) = esi_1[0xc]
        *(result + 0x38) = fconvert.s(fconvert.t(esi_1[0xd]))
        sub_401180(&result[0x3c], 0xffffffff, &esi_1[0xe], 0)
        esi_1 = &esi_1[0x16]
        result = &result[0x58]
    while (&esi_1[-1] != arg4)

return result
