// 函数: sub_4c9c30
// 地址: 0x4c9c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x18) != 0 || *(arg1 + 0x10) == 0)
    goto label_4c9c6d

if (sub_4d98e0(*(arg1 + 0x14), arg5) != 0)
    sub_4f8480(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0
label_4c9c6d:
    int32_t* ebp_1 = *(arg2 + 0x1d0)
    int32_t* esi_2 = *(arg1 + 0x14)
    void* eax_3
    
    if (ebp_1 == 0)
        if (esi_2 == 0)
            eax_3.b = 1
            return eax_3
        
        sub_4d96d0(esi_2)
        int32_t* ecx_2 = *(arg1 + 0x74)
        *(arg1 + 0x14) = ebp_1
        sub_4c0e30(ecx_2)
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    
    if (esi_2 != 0)
        if (esi_2[4] == ebp_1 && esi_2[5] == arg3)
            eax_3.b = arg4
        
        if (esi_2[4] == ebp_1 && esi_2[5] == arg3 && *(esi_2 + 0x139) == eax_3.b)
            eax_3.b = 1
            return eax_3
        
        sub_4d96d0(esi_2)
        int32_t* ecx_3 = *(arg1 + 0x74)
        *(arg1 + 0x14) = 0
        sub_4c0e30(ecx_3)
    
    *(arg1 + 0x10) = ebp_1
    EnterCriticalSection(ebp_1[1])
    *ebp_1 += 1
    LeaveCriticalSection(ebp_1[1])
    bool cond:0_1 = *(arg1 + 0x6c) == 0
    *(arg1 + 0x1c) = arg3
    *(arg1 + 0x20) = arg4
    *(arg1 + 0x18) = 1
    
    if (not(cond:0_1))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable**
             eax_5 = operator new(0x10)
        
        if (eax_5 == 0)
            int32_t var_10_7 = 0
            sub_576750(*(arg1 + 0x68))
            BOOL eax_7
            eax_7.b = 1
            return eax_7
        
        *eax_5 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
        eax_5[1] = 1
        eax_5[2] = arg1
        eax_5[3] = sub_4c9d90
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable**
             var_10_6 = eax_5
        sub_576750(*(arg1 + 0x68))
        BOOL eax_6
        eax_6.b = 1
        return eax_6
    
    if (sub_4c9d90(arg1) != 0 && sub_4d98e0(*(arg1 + 0x14), arg5) != 0)
        sub_4f8480(*(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        eax_3.b = 1
        return eax_3

return false
