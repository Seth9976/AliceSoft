// 函数: sub_62a560
// 地址: 0x62a560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = esi_1[-2]
        result[1] = esi_1[-1]
        result[2] = *esi_1
        sub_401180(&result[3], 0xffffffff, &esi_1[1], 0)
        esi_1 = &esi_1[0xa]
        result = &result[0xa]
    while (&esi_1[-2] != arg4)

return result
