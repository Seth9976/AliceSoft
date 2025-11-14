// 函数: sub_59eae0
// 地址: 0x59eae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = *(arg1 + 0x1c)
sub_5a3ce0(ebx)
int128_t* result_1 = *(ebx + 0x14)
int128_t* result = *(arg1 + 0x10)

if (result_1 u> result)
    result_1 = result

if (result_1 != 0)
    result = sub_6c02a0(*(arg1 + 0xc), *(ebx + 0x10), result_1)
    *(arg1 + 0xc) += result_1
    *(ebx + 0x10) += result_1
    *(arg1 + 0x14) += result_1
    *(arg1 + 0x10) -= result_1
    int32_t temp0_1 = *(ebx + 0x14)
    *(ebx + 0x14) -= result_1
    
    if (temp0_1 == result_1)
        *(ebx + 0x10) = *(ebx + 8)

return result
