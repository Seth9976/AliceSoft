// 函数: sub_5d4b10
// 地址: 0x5d4b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0x5c))
int32_t* eax_1 = *(arg1 + 0x18)

if (eax_1 == 0)
    LeaveCriticalSection(*(arg1 + 0x5c))
    int32_t eax_2
    eax_2.b = 0
    return eax_2

(*(*eax_1 + 0x48))(eax_1)
int32_t* eax_4 = *(arg1 + 0x18)
(*(*eax_4 + 0x34))(eax_4, 0)
LeaveCriticalSection(*(arg1 + 0x5c))
HANDLE hEvent = *(arg1 + 0x50)

if (hEvent != 0)
    ResetEvent(hEvent)

int32_t* ecx_2 = data_797d98
int32_t eax_6

if (ecx_2 != 0)
    eax_6 = (**ecx_2)()
else
    eax_6 = 0

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x5c)
*(arg1 + 0x3c) = eax_6
*(arg1 + 0x40) = 0
EnterCriticalSection(lpCriticalSection)
int32_t* eax_8 = *(arg1 + 0x18)
(*(*eax_8 + 0x30))(eax_8, 0, 0, 1)
LeaveCriticalSection(*(arg1 + 0x5c))
enum WAIT_EVENT eax_11
int32_t ecx_4
eax_11, ecx_4 = WaitForSingleObject(*(arg1 + 0x4c), 1)

if (eax_11 != WAIT_OBJECT_0)
    enum WAIT_EVENT i
    
    do
        sub_5d4e90(ecx_4, arg1)
        i, ecx_4 = WaitForSingleObject(*(arg1 + 0x4c), 1)
    while (i != WAIT_OBJECT_0)

EnterCriticalSection(*(arg1 + 0x5c))
int32_t* eax_13 = *(arg1 + 0x18)
(*(*eax_13 + 0x48))(eax_13)
LeaveCriticalSection(*(arg1 + 0x5c))
int32_t eax_15
eax_15.b = 1
return eax_15
