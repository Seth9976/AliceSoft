// 函数: sub_562990
// 地址: 0x562990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result
result.b = arg2
*(arg1 + 4) = result.b

if (result.b != 0)
    result = timeGetTime()
    uint32_t result_1 = data_797e3c
    
    if (result u< result_1)
        result = result_1
    
    data_797e3c = result
    *(arg1 + 8) = result

return result
