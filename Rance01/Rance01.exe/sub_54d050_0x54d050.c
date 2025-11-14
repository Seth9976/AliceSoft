// 函数: sub_54d050
// 地址: 0x54d050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t result = **(arg1 + 0x2b0)

if (result != 0xffffffff)
    int32_t result_1
    int32_t edx
    
    if (result s< 0)
        result_1 = result
        return sub_53d1c0(result, edx, arg1, 0x7510d0)
    
    edx = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
    
    if (result s>= edx)
        result_1 = result
        return sub_53d1c0(result, edx, arg1, 0x7510d0)
    
    int32_t edx_3 = *(arg1 + 0x1e4)
    edx = edx_3 + (result << 2)
    
    if (*(edx_3 + (result << 2)) == 0)
        result_1 = result
        return sub_53d1c0(result, edx, arg1, 0x7510d0)
    
    void* edx_4 = *edx
    *(edx_4 + 0x10) += 1

result.b = 1
return result
