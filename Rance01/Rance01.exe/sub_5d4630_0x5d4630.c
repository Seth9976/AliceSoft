// 函数: sub_5d4630
// 地址: 0x5d4630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0x1c] != 0)
    void* esi_1 = &arg1[0x18]
    void* eax_1
    
    if (arg1[0x1d] u< 0x10)
        eax_1 = esi_1
    else
        eax_1 = *esi_1
    
    sub_40da60(eax_1)
    bool cond:1_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:1_1))
        esi_1 = *esi_1
    
    *esi_1 = 0

if (arg1[6] == 0)
    sub_40da60("CDirectSoundBuffer::Play()\n")
    void* eax_2
    eax_2.b = 0
    return eax_2

if ((*(*arg1 + 0x1c))() == 0)
    HANDLE hEvent = arg1[0x13]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    if (sub_576230(&arg1[0x12], sub_5d4980, arg1) == 0)
        sub_40da60(0x736b70)
        void* eax_5
        eax_5.b = 0
        return eax_5

return 1
