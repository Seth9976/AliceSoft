// 函数: sub_6adc50
// 地址: 0x6adc50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg4 != arg1)
    void* esi_1 = arg1 + 8
    
    do
        int32_t eax = *(esi_1 - 0x30)
        esi_1 -= 0x28
        result -= 0x28
        *result = eax
        result[1] = *(esi_1 - 4)
        result[2] = *esi_1
        result[3] = *(esi_1 + 4)
        sub_4b55f0(&result[4], esi_1 + 8)
        result[8].b = *(esi_1 + 0x18)
        result[9] = *(esi_1 + 0x1c)
    while (esi_1 - 8 != arg4)

return result
