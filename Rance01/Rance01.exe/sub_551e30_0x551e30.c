// 函数: sub_551e30
// 地址: 0x551e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2[1]
uint32_t ecx_1 = result u>> 2

if (ecx_1 s>= 3)
    int32_t edx
    
    if (result != 0)
        edx = *arg2
    else
        edx = 0
    
    result = 0
    
    if (ecx_1 s> 0)
        do
            if (*(edx + (result << 2)) == arg4 && *(edx + (result << 2) + 4) == arg3)
                result.b = 1
                return result
            
            result += 3
        while (result s< ecx_1)

result.b = 0
return result
