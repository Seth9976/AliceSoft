// 函数: sub_4b3ba0
// 地址: 0x4b3ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1 = arg2[1]
int32_t edx = *arg2
int32_t result = (result_1 - edx) s>> 3

if (result u> arg1)
    int32_t* edx_1 = edx + (arg1 << 3)
    
    if (edx_1 != result_1)
        result = result_1
        
        if (result_1 != result_1)
            do
                *edx_1 = *result
                edx_1[1] = *(result + 4)
                result += 8
                edx_1 = &edx_1[2]
            while (result != result_1)
            
            arg2[1] = edx_1
            return result
        
        arg2[1] = edx_1
else if (result u< arg1)
    sub_562800(arg2, arg1 - result)
    float* eax_2 = arg2[1]
    int32_t var_4
    int32_t var_10_1 = var_4
    int32_t edx_6 = (eax_2 - *arg2) s>> 3
    sub_4b3c90(eax_2, edx_6, arg1 - edx_6)
    result = arg2[1]
    arg2[1] = result + ((arg1 - ((result - *arg2) s>> 3)) << 3)

return result
