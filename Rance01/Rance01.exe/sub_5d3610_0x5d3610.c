// 函数: sub_5d3610
// 地址: 0x5d3610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) != 0)
    EnterCriticalSection(*(arg1 + 0xa8))
    int32_t eax_2 = *(arg1 + 0x40)
    
    if (eax_2 u>= arg2)
    label_5d3654:
        LeaveCriticalSection(*(arg1 + 0xa8))
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    if ((*(**(arg1 + 0x28) + 0x14))(eax_2) != 0)
        goto label_5d3654
    
    LeaveCriticalSection(*(arg1 + 0xa8))

int32_t eax
eax.b = 0
return eax
