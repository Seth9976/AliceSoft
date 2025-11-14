// 函数: sub_5d2cf0
// 地址: 0x5d2cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_1 = (*(*(arg1 + 0x68) + 0x1c))() * (*(*(arg1 + 0x68) + 0xc))()
uint32_t edi_2 = (*(arg1 + 0x38) * ebx_1) u>> 3
int32_t eax_6 = sub_5d3740(arg1, arg2)

if (eax_6 u>= edi_2)
    eax_6.b = 0
    return eax_6

EnterCriticalSection(*(arg1 + 0xa8))
*(arg1 + 0x85) = 1
*(arg1 + 0x40) = eax_6
*(arg1 + 0x3c) = *(arg1 + 0x40)
HANDLE hEvent = *(arg1 + 0x98)

if (hEvent != 0)
    SetEvent(hEvent)

LeaveCriticalSection(*(arg1 + 0xa8))
int32_t eax_8
eax_8.b = 1
return eax_8
