// 函数: sub_6a8f00
// 地址: 0x6a8f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = esi_1[-2]
        result[1] = esi_1[-1]
        result[2] = *esi_1
        result[3] = esi_1[1]
        sub_4b55f0(&result[4], &esi_1[2])
        result[8].b = esi_1[6].b
        int32_t eax_3 = esi_1[7]
        esi_1 = &esi_1[0xa]
        result[9] = eax_3
        result = &result[0xa]
    while (&esi_1[-2] != arg4)

return result
