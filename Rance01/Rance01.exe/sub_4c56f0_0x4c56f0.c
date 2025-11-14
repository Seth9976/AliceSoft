// 函数: sub_4c56f0
// 地址: 0x4c56f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx

if (*(arg1 + 0x1d4) != 0)
    ecx = sub_576800(*(arg1 + 0x294))
    *(arg1 + 0x1d4) = 0

int32_t* esi_2 = *(arg1 + 0x1d0)

if (esi_2 != 0)
    ecx = sub_4f8480(esi_2)
    *(arg1 + 0x1d0) = 0

sub_4efb40(ecx, arg1 + 0x214)
sub_4ac220(ecx, arg1 + 0x1d8)
void var_4
sub_4c87d0(arg1 + 0x1ac, &var_4, *(arg1 + 0x1ac), *(arg1 + 0x1b0))

if (*(arg1 + 0x1c) != 0)
    bool cond:0_1 = *(arg1 + 0x28c) == 0
    *(arg1 + 0x1d4) = 1
    
    if (cond:0_1)
        char eax_2 = sub_4c57d0(arg1)
        
        if (eax_2 == 0)
            return eax_2
    else
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_3 = operator new(0x10)
        
        if (eax_3 != 0)
            *eax_3 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
            eax_3[1] = 1
            eax_3[2] = arg1
            eax_3[3] = sub_4c57d0
            struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable**
                 var_10_1 = eax_3
            sub_576750(*(arg1 + 0x294))
            BOOL eax_4
            eax_4.b = 1
            return eax_4
        
        int32_t var_10_2 = 0
        sub_576750(*(arg1 + 0x294))

return 1
