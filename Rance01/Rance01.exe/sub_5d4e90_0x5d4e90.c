// 函数: sub_5d4e90
// 地址: 0x5d4e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg2 + 0x5c))
int32_t* eax_1 = *(arg2 + 0x18)
int32_t __saved_ecx

if ((*(*eax_1 + 0x24))(eax_1, &__saved_ecx) s>= 0)
    if (*(arg2 + 0x40) != 0)
        int32_t* ecx_2 = data_797d98
        int32_t eax_11
        
        if (ecx_2 != 0)
            eax_11 = (**ecx_2)(arg1)
        else
            eax_11 = 0
        
        int32_t eax_13 = eax_11 - *(arg2 + 0x40)
        *(arg2 + 0x40) = 0
        *(arg2 + 0x3c) += eax_13
    
    LeaveCriticalSection(*(arg2 + 0x5c))
    int32_t eax_14
    eax_14.b = 0
    return eax_14

int32_t* ecx_1 = data_797d98

if (*(arg2 + 0x40) != 0)
    int32_t eax_4
    
    if (ecx_1 != 0)
        eax_4 = (**ecx_1)(arg1)
        ecx_1 = data_797d98
    else
        eax_4 = 0
    
    *(arg2 + 0x3c) += eax_4 - *(arg2 + 0x40)

if (ecx_1 == 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg2 + 0x5c)
    *(arg2 + 0x40) = 0
    LeaveCriticalSection(lpCriticalSection)
    int32_t eax_7
    eax_7.b = 1
    return eax_7

int32_t eax_9 = (**ecx_1)(arg1)
CRITICAL_SECTION* lpCriticalSection_1 = *(arg2 + 0x5c)
*(arg2 + 0x40) = eax_9
LeaveCriticalSection(lpCriticalSection_1)
int32_t eax_10
eax_10.b = 1
return eax_10
