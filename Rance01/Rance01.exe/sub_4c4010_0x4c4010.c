// 函数: sub_4c4010
// 地址: 0x4c4010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x268) != 0)
    sub_576800(*(arg1 + 0x294))
    *(arg1 + 0x268) = 0

int32_t* esi_2 = *(arg1 + 0x264)

if (esi_2 != 0)
    sub_4cb6a0(esi_2)
    *(arg1 + 0x264) = 0

if (*(arg1 + 0x1c) != 0)
    bool cond:0_1 = *(arg1 + 0x28c) == 0
    *(arg1 + 0x268) = 1
    
    if (cond:0_1)
        char eax = sub_4c40b0(arg1)
        
        if (eax == 0)
            return eax
    else
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_1 = operator new(0x10)
        
        if (eax_1 != 0)
            *eax_1 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
            eax_1[1] = 1
            eax_1[2] = arg1
            eax_1[3] = sub_4c40b0
            struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable**
                 var_8_1 = eax_1
            sub_576750(*(arg1 + 0x294))
            BOOL eax_2
            eax_2.b = 1
            return eax_2
        
        int32_t var_8_2 = 0
        sub_576750(*(arg1 + 0x294))

return 1
