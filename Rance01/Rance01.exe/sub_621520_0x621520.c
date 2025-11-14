// 函数: sub_621520
// 地址: 0x621520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x20
    
    do
        *result = esi_1[-8]
        sub_401180(&result[1], 0xffffffff, &esi_1[-7], 0)
        result[8] = *esi_1
        char eax_1 = esi_1[1].b
        esi_1 = &esi_1[0xa]
        result[9].b = eax_1
        result = &result[0xa]
    while (&esi_1[-8] != arg4)

return result
