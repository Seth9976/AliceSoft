// 函数: sub_60fc50
// 地址: 0x60fc50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *arg1
*arg1 = *(result + 8)
void* edx_1 = *(result + 8)

if (*(edx_1 + 0xa5) == 0)
    *(edx_1 + 4) = arg1

*(result + 4) = arg1[1]
void* edx_4 = *(arg2 + 4)

if (arg1 == *(edx_4 + 4))
    *(edx_4 + 4) = result
    *(result + 8) = arg1
    arg1[1] = result
    return result

void** edx_5 = arg1[1]

if (arg1 != edx_5[2])
    *edx_5 = result
    *(result + 8) = arg1
    arg1[1] = result
    return result

edx_5[2] = result
*(result + 8) = arg1
arg1[1] = result
return result
