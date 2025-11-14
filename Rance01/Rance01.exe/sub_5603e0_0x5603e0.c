// 函数: sub_5603e0
// 地址: 0x5603e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = *(arg3 + 4)
int32_t* result = ecx_4[1]

if (arg2 u< result u>> 2)
    if (result != 0)
        result = *ecx_4
    
    int32_t edx = result[arg2]
    result = ecx_4[5]
    
    if (edx u< (result[3] - result[2]) s>> 2)
        result = *(result[2] + (edx << 2))
        
        if (result != 0)
            return sub_550660(result, arg4) != 0

result.b = 0
return result
