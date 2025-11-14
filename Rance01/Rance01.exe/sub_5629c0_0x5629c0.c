// 函数: sub_5629c0
// 地址: 0x5629c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (*(arg1 + 4) != 0)
    uint32_t eax = timeGetTime()
    uint32_t ecx = data_797e3c
    
    if (eax u< ecx)
        eax = ecx
    
    data_797e3c = eax
    
    if (eax - *(arg1 + 8) u>= 0x7530)
        result.b = 0
        return result

result.b = *(arg1 + 4)
return result
