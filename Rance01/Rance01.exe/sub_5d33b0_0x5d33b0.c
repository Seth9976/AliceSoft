// 函数: sub_5d33b0
// 地址: 0x5d33b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg5
void* ebp = arg4
EnterCriticalSection(*(arg1 + 0xa4))
int32_t* eax_1 = *(arg1 + 0x1c)
void* var_4 = nullptr
arg4 = nullptr
void* var_8 = nullptr
arg5 = nullptr

if ((*(*eax_1 + 0x2c))(eax_1, arg2, arg3, &var_4, &var_8, &arg4, &arg5, 0) != 0)
    LeaveCriticalSection(*(arg1 + 0xa4))
    int32_t eax_4
    eax_4.b = 0
    return eax_4

void* ecx_2 = var_4

if (ecx_2 != 0)
    void* eax_5 = var_8
    
    if (eax_5 u> 0)
        sub_5d34b0(arg1, ecx_2, eax_5, ebp, ebx)
        void* eax_6 = arg4
        
        if (eax_6 != 0)
            void* ecx_3 = arg5
            
            if (ecx_3 u> 0)
                sub_5d34b0(arg1, eax_6, ecx_3, ebp, ebx)

int32_t* eax_7 = *(arg1 + 0x1c)

if ((*(*eax_7 + 0x4c))(eax_7, var_4, var_8, arg4, arg5) == 0)
    LeaveCriticalSection(*(arg1 + 0xa4))
    int32_t eax_11
    eax_11.b = 1
    return eax_11

LeaveCriticalSection(*(arg1 + 0xa4))
int32_t eax_10
eax_10.b = 0
return eax_10
