// 函数: sub_617670
// 地址: 0x617670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = &arg1[2]
    
    do
        arg1.b = esi_1[-2].b
        *result = arg1.b
        *(result + 4) = esi_1[-1]
        *(result + 8) = *esi_1
        sub_401180(&result[0xc], 0xffffffff, &esi_1[1], 0)
        char ecx_2 = esi_1[8].b
        esi_1 = &esi_1[0xb]
        result[0x28] = ecx_2
        result = &result[0x2c]
    while (&esi_1[-2] != arg4)

return result
