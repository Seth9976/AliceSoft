// 函数: sub_593310
// 地址: 0x593310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_1 = (*(*(arg1 + 0x64) + 0x1c))() * (*(*(arg1 + 0x64) + 0xc))()
uint32_t edi_2 = (*(arg1 + 0x2c) * ebx_1) u>> 3
int32_t eax_6 = sub_593ad0(arg1, arg2)

if (eax_6 u>= edi_2)
    eax_6.b = 0
    return eax_6

EnterCriticalSection(*(arg1 + 0xa0))
*(arg1 + 0x81) = 1
*(arg1 + 0x34) = eax_6
*(arg1 + 0x30) = *(arg1 + 0x34)
HANDLE hEvent = *(arg1 + 0x94)

if (hEvent != 0)
    SetEvent(hEvent)

LeaveCriticalSection(*(arg1 + 0xa0))
int32_t eax_8
eax_8.b = 1
return eax_8
