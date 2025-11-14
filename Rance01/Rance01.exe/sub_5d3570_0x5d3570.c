// 函数: sub_5d3570
// 地址: 0x5d3570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0xa4))

if (*(arg1 + 0x1c) == 0)
    LeaveCriticalSection(*(arg1 + 0xa4))
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_1 = *(arg1 + 0x1c)
void* ecx_1 = *eax_1

if (*(arg1 + 0x84) == 0)
    (*(ecx_1 + 0x30))(eax_1, 0, 0, 1)
    CRITICAL_SECTION* lpCriticalSection_2 = *(arg1 + 0xa4)
    *(arg1 + 0x44) += *(arg1 + 0x4c)
    *(arg1 + 0x4c) = 0
    LeaveCriticalSection(lpCriticalSection_2)
    int32_t eax_7
    eax_7.b = 1
    return eax_7

(*(ecx_1 + 0x48))(eax_1)
int32_t* ecx_2 = data_797d98

if (ecx_2 == 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xa4)
    *(arg1 + 0x48) = 0
    LeaveCriticalSection(lpCriticalSection)
    int32_t eax_2
    eax_2.b = 1
    return eax_2

int32_t eax_4 = (**ecx_2)()
CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0xa4)
*(arg1 + 0x48) = eax_4
LeaveCriticalSection(lpCriticalSection_1)
int32_t eax_5
eax_5.b = 1
return eax_5
