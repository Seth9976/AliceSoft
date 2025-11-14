// 函数: sub_5d53b0
// 地址: 0x5d53b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0x5c))

if (*(arg1 + 0x18) == 0)
    LeaveCriticalSection(*(arg1 + 0x5c))
    int32_t eax
    eax.b = 0
    return eax

int32_t* edi = *(arg1 + 0x18)
*(arg1 + 0xc) = arg2
(*(*edi + 0x3c))(edi, sub_5d5350(arg2))
LeaveCriticalSection(*(arg1 + 0x5c))
int32_t eax_3
eax_3.b = 1
return eax_3
