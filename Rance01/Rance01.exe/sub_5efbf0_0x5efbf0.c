// 函数: sub_5efbf0
// 地址: 0x5efbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg4 != arg1)
    void* esi_1 = arg1 + 8
    
    do
        int32_t eax = *(esi_1 - 0x74)
        esi_1 -= 0x6c
        result -= 0x6c
        *result = eax
        result[1] = *(esi_1 - 4)
        result[2] = *esi_1
        result[3] = *(esi_1 + 4)
        sub_401180(&result[4], 0xffffffff, esi_1 + 8, 0)
        sub_401180(&result[0xb], 0xffffffff, esi_1 + 0x24, 0)
        result[0x12].b = *(esi_1 + 0x40)
        sub_5ec870(&result[0x13], esi_1 + 0x44)
        sub_4b55f0(&result[0x17], esi_1 + 0x54)
    while (esi_1 - 8 != arg4)

return result
