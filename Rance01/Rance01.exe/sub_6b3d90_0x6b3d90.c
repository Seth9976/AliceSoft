// 函数: sub_6b3d90
// 地址: 0x6b3d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 8)
*(arg1 + 8) = *result
void* edx_1 = *result

if (*(edx_1 + 0x15) == 0)
    *(edx_1 + 4) = arg1

result[1] = *(arg1 + 4)
void* edx_3 = data_797e30

if (arg1 == *(edx_3 + 4))
    *(edx_3 + 4) = result
    *result = arg1
    *(arg1 + 4) = result
    return result

int32_t** edx_4 = *(arg1 + 4)

if (arg1 != *edx_4)
    edx_4[2] = result
    *result = arg1
    *(arg1 + 4) = result
    return result

*edx_4 = result
*result = arg1
*(arg1 + 4) = result
return result
