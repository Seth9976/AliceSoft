// 函数: sub_4bf1b0
// 地址: 0x4bf1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg3
void* result = arg3

if (arg1 != arg4)
    int32_t* ebx_1 = arg1 + 0x10c
    
    do
        int32_t* result_1 = result
        int32_t j_1 = 3
        int32_t j
        
        do
            sub_4bf230(ebx_1 - result - 0x10c + result_1, result_1)
            result_1 = &result_1[0x16]
            j = j_1
            j_1 -= 1
        while (j != 1)
        *(result + 0x108) = ebx_1[-1]
        *(result + 0x10c) = *ebx_1
        int32_t ecx = ebx_1[1]
        ebx_1 = &ebx_1[0x45]
        *(result + 0x110) = ecx
        result += 0x114
    while (&ebx_1[-0x43] != arg4)

return result
