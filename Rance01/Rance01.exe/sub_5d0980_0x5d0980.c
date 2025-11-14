// 函数: sub_5d0980
// 地址: 0x5d0980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 8)
*(arg1 + 8) = *result
void* edx_1 = *result

if (*(edx_1 + 0x59) == 0)
    *(edx_1 + 4) = arg1

result[1] = *(arg1 + 4)
void* edx_4 = *(arg2 + 4)

if (arg1 == *(edx_4 + 4))
    *(edx_4 + 4) = result
    *result = arg1
    *(arg1 + 4) = result
    return result

int32_t** edx_5 = *(arg1 + 4)

if (arg1 != *edx_5)
    edx_5[2] = result
    *result = arg1
    *(arg1 + 4) = result
    return result

*edx_5 = result
*result = arg1
*(arg1 + 4) = result
return result
