// 函数: sub_4c5290
// 地址: 0x4c5290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x160) != 0)
    sub_576800(*(arg1 + 0x294))
    *(arg1 + 0x160) = 0

int32_t* esi_2 = *(arg1 + 0x15c)

if (esi_2 != 0)
    sub_4d0840(esi_2)
    *(arg1 + 0x15c) = 0

if (*(arg1 + 0x1c) != 0)
    sub_401180(arg1 + 0x16c, 0xffffffff, arg2, 0)
    
    if (*(arg1 + 0x17c) == 0)
        int32_t* eax_3
        eax_3.b = 1
        return eax_3
    
    bool cond:0_1 = *(arg1 + 0x28c) == 0
    *(arg1 + 0x160) = 1
    
    if (not(cond:0_1))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_4 = operator new(0x10)
        
        if (eax_4 == 0)
            int32_t var_14_3 = 0
            sub_576750(*(arg1 + 0x294))
            BOOL eax_6
            eax_6.b = 1
            return eax_6
        
        *eax_4 = &
            thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
        eax_4[1] = 1
        eax_4[2] = arg1
        eax_4[3] = sub_4c53a0
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            var_14_2 = eax_4
        sub_576750(*(arg1 + 0x294))
        BOOL eax_5
        eax_5.b = 1
        return eax_5
    
    if (sub_4c53a0(arg1) != 0)
        return 1
else
    int32_t* eax_1
    
    if (arg2[5] u< 0x10)
        eax_1 = arg2
    else
        eax_1 = *arg2
    
    int32_t* var_14_1 = eax_1
    sub_51ddc0(0x756148)

return 0
