// 函数: sub_5939b0
// 地址: 0x5939b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x1c) != 0)
    EnterCriticalSection(*(arg1 + 0xa0))
    int32_t eax_2 = *(arg1 + 0x34)
    
    if (eax_2 u>= arg2)
    label_5939f4:
        LeaveCriticalSection(*(arg1 + 0xa0))
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    if ((*(**(arg1 + 0x1c) + 0x14))(eax_2) != 0)
        goto label_5939f4
    
    LeaveCriticalSection(*(arg1 + 0xa0))

int32_t eax
eax.b = 0
return eax
