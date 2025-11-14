// 函数: sub_5940f0
// 地址: 0x5940f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0x16] != 0)
    void* esi_1 = &arg1[0x12]
    void* eax_1
    
    if (arg1[0x17] u< 0x10)
        eax_1 = esi_1
    else
        eax_1 = *esi_1
    
    sub_40da60(eax_1)
    bool cond:1_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:1_1))
        esi_1 = *esi_1
    
    *esi_1 = 0

if ((*(*arg1 + 0x1c))() == 0)
    HANDLE hEvent = arg1[0xe]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    HANDLE hEvent_1 = arg1[0xf]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    if (sub_576230(&arg1[0xd], sub_594400, arg1) == 0)
        sub_40da60(0x74afa8)
        void* result
        result.b = 0
        return result

return 1
