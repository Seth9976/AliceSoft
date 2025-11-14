// 函数: sub_576f40
// 地址: 0x576f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x18) == 0)
    int32_t result
    result.b = 0
    return result

char eax_1 = (*(**(arg1 + 0x1c) + 8))()
int32_t* ecx_1 = *(arg1 + 0x1c)

if (eax_1 != 0)
    if (ecx_1 != 0)
        (**ecx_1)(1)
        *(arg1 + 0x1c) = 0
    
    *(arg1 + 0x18) = 0
    return 1

if (ecx_1 != 0)
    (**ecx_1)(1)

*(arg1 + 0x1c) = 0
*(arg1 + 0x18) = 0
return 0
