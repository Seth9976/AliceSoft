// 函数: sub_5d49b0
// 地址: 0x5d49b0
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
(*(*eax_8 + 0x30))(eax_8, 0, 0, 0)
LeaveCriticalSection(*(arg1 + 0x5c))
int32_t eax_10 = *(arg1 + 0x50)
int32_t var_c = 0
char ebx = 0
HANDLE handles = *(arg1 + 0x4c)
int32_t var_4 = eax_10
enum WAIT_EVENT i
int32_t ecx_4
i, ecx_4 = WaitForMultipleObjects(2, &handles, 0, 1)

while (i != WAIT_OBJECT_0)
    if (i != 0x1)
    label_5d4ac6:
        
        if (sub_5d4e90(ecx_4, arg1) != 0)
            ebx = 1
    else
        if (ebx == 0)
            int32_t eax_11 = *(arg1 + 0x2c)
            
            if (eax_11 != 0)
                int32_t ecx_6 = var_c + 1
                var_c = ecx_6
                
                if (ecx_6 s>= eax_11)
                    break
            
            EnterCriticalSection(*(arg1 + 0x5c))
            int32_t* eax_12 = *(arg1 + 0x18)
            (*(*eax_12 + 0x48))(eax_12)
            int32_t* eax_13 = *(arg1 + 0x18)
            (*(*eax_13 + 0x34))(eax_13, 0)
            int32_t* eax_14 = *(arg1 + 0x18)
            (*(*eax_14 + 0x30))(eax_14, 0, 0, 0)
            ecx_4 = LeaveCriticalSection(*(arg1 + 0x5c))
            goto label_5d4ac6
        
        ebx = 0
    
    i, ecx_4 = WaitForMultipleObjects(2, &handles, 0, 1)

EnterCriticalSection(*(arg1 + 0x5c))
int32_t* eax_17 = *(arg1 + 0x18)
(*(*eax_17 + 0x48))(eax_17)
LeaveCriticalSection(*(arg1 + 0x5c))
int32_t eax_19
eax_19.b = 1
return eax_19
