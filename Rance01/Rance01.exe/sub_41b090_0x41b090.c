// 函数: sub_41b090
// 地址: 0x41b090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_5f7370(*data_797da0, *(*(arg1 + 8) + 4))

if (result != 0)
    result = sub_5f33b0(result, arg2)
    int32_t* result_1 = result
    
    if (result_1 != 0)
        int32_t edx_1 = result_1[0x14]
        result = result_1[0x13]
        
        if (result != edx_1)
            int32_t* var_c_2 = arg2
            int32_t var_10_1 = edx_1
            result = sub_4febf0(result, edx_1, arg2)
            result_1[0x14] = result
        
        *(result_1 + 0x95) = 1

return result
