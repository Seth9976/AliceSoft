// 函数: sub_683810
// 地址: 0x683810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_418bd0(data_797ddc + 0xa8, arg1)
int32_t* result_1 = result

if (result_1 != 0)
    result = sub_414e30(result)
    int32_t* ecx = result_1[0xe]
    int32_t* result_2 = result
    
    if (ecx != 0 && result_2[2] == 0)
        result_2[8] = ecx
        result = (**ecx)(1)
        result_2[2] = result
    
    result_2[3] = result_1[0xc]
    result_2[4] = result_1
    
    if (arg2 != 0 && arg3 != 0 && arg4 != 0)
        result = sub_5f7370(*data_797da0, *(result_2[2] + 4))
        
        if (result != 0)
            *arg2 = *(result[3] + 0x2c)
            *arg3 = *(result[3] + 0x30)
            result = result[3]
            *arg4 = result[0xd]

return result
