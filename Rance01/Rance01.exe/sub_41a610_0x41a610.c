// 函数: sub_41a610
// 地址: 0x41a610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = *(arg3 + 0x2c)
int32_t* result = *(arg3 + 0x28)

if (result != ecx_1)
    while (*result != arg2)
        result = &result[1]
        
        if (result == ecx_1)
            break
    
    if (result != ecx_1)
        result = sub_6b49d0(result, &result[1], ((*(arg3 + 0x2c) - &result[1]) s>> 2) * 4)
        *(arg3 + 0x2c) -= 4
        *(arg3 + 0x25) = 1

return result
