// 函数: sub_5d3330
// 地址: 0x5d3330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0xa4))
int32_t* eax = *(arg1 + 0x1c)

if (eax != 0 && (*(*eax + 0x34))(eax, 0) == 0)
    int32_t* eax_4 = *(arg1 + 0x1c)
    
    if ((*(*eax_4 + 0x30))(eax_4, 0, 0, 1) == 0)
        LeaveCriticalSection(*(arg1 + 0xa4))
        int32_t* ecx_1 = data_797d98
        
        if (ecx_1 != 0)
            *(arg1 + 0x44) = (**ecx_1)()
            *(arg1 + 0x48) = 0
            int32_t eax_9
            eax_9.b = 1
            return eax_9
        
        *(arg1 + 0x44) = 0
        *(arg1 + 0x48) = 0
        int32_t eax_7
        eax_7.b = 1
        return 1

LeaveCriticalSection(*(arg1 + 0xa4))
int32_t eax_1
eax_1.b = 0
return eax_1
