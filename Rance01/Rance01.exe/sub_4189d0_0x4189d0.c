// 函数: sub_4189d0
// 地址: 0x4189d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg2

if (result != 0)
    int32_t eax = *(result + 8)
    result = eax - *(arg1 + 8)
    
    if (eax - *(arg1 + 8) s>= 0)
        int32_t edx_1 = *(arg1 + 0x24)
        
        if (result s< (*(arg1 + 0x28) - edx_1) s>> 2)
            *(edx_1 + (result << 2)) = 0

return result
