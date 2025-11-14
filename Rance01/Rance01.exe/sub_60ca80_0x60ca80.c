// 函数: sub_60ca80
// 地址: 0x60ca80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = esi_1[-2]
        result[1] = esi_1[-1]
        result[2] = *esi_1
        int32_t eax
        eax.b = esi_1[1].b
        result[3].b = eax.b
        sub_401180(&result[4], 0xffffffff, &esi_1[2], 0)
        esi_1 = &esi_1[0xb]
        result = &result[0xb]
    while (&esi_1[-2] != arg4)

return result
