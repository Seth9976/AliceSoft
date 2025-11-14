// 函数: sub_6b1ea0
// 地址: 0x6b1ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *arg1
*arg1 = *(result + 8)
void* edx_1 = *(result + 8)

if (*(edx_1 + 0x15) == 0)
    *(edx_1 + 4) = arg1

*(result + 4) = arg1[1]
void* edx_3 = data_797e5c

if (arg1 == *(edx_3 + 4))
    *(edx_3 + 4) = result
    *(result + 8) = arg1
    arg1[1] = result
    return result

void** edx_4 = arg1[1]

if (arg1 != edx_4[2])
    *edx_4 = result
    *(result + 8) = arg1
    arg1[1] = result
    return result

edx_4[2] = result
*(result + 8) = arg1
arg1[1] = result
return result
