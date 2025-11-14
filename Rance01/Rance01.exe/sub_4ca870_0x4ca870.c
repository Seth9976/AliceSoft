// 函数: sub_4ca870
// 地址: 0x4ca870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax
eax.b = *(arg1 + 0x54)

if (eax.b != 0 || *(arg1 + 0x58) == 0)
    goto label_4ca8c1

if (sub_4eb920(*(arg1 + 0x50), arg4) != 0)
    sub_4dd8d0(*(arg1 + 0x58))
    int32_t* esi_2 = *(arg1 + 0x5c)
    *(arg1 + 0x58) = 0
    sub_4c3d90(esi_2)
    int32_t* eax_2 = *(arg1 + 0x74)
    *(arg1 + 0x5c) = 0
    sub_4c0e30(eax_2)
label_4ca8c1:
    int32_t* ebp_1 = arg2[0x9b]
    int32_t* esi_3 = *(arg1 + 0x50)
    
    if (ebp_1 == 0)
        if (esi_3 == 0)
            eax.b = 1
            return eax
        
        sub_4eb640(esi_3)
        int32_t* ecx_2 = *(arg1 + 0x74)
        *(arg1 + 0x50) = ebp_1
        sub_4c0e30(ecx_2)
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    
    if (esi_3 != 0)
        if (sub_405d70(&arg2[3], &esi_3[4]) != 0 && esi_3[0xb] == ebp_1[2])
            eax.b = 1
            return eax
        
        sub_4eb640(*(arg1 + 0x50))
        *(arg1 + 0x50) = 0
    
    *(arg1 + 0x58) = ebp_1
    EnterCriticalSection(ebp_1[1])
    *ebp_1 += 1
    LeaveCriticalSection(ebp_1[1])
    *(arg1 + 0x5c) = arg2
    EnterCriticalSection(arg2[1])
    *arg2 += 1
    LeaveCriticalSection(arg2[1])
    bool cond:0_1 = *(arg1 + 0x6c) == 0
    *(arg1 + 0x60) = arg3
    *(arg1 + 0x54) = 1
    
    if (not(cond:0_1))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable**
             eax_7 = operator new(0x10)
        
        if (eax_7 == 0)
            int32_t var_14_9 = 0
            sub_576750(*(arg1 + 0x68))
            BOOL eax_9
            eax_9.b = 1
            return eax_9
        
        *eax_7 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
        eax_7[1] = 1
        eax_7[2] = arg1
        eax_7[3] = sub_4caa00
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable**
             var_14_8 = eax_7
        sub_576750(*(arg1 + 0x68))
        BOOL eax_8
        eax_8.b = 1
        return eax_8
    
    if (sub_4caa00(arg1) != 0 && sub_4eb920(*(arg1 + 0x50), arg4) != 0)
        sub_4dd8d0(*(arg1 + 0x58))
        int32_t* esi_6 = *(arg1 + 0x5c)
        *(arg1 + 0x58) = 0
        sub_4c3d90(esi_6)
        int32_t* edx_6 = *(arg1 + 0x74)
        *(arg1 + 0x5c) = 0
        sub_4c0e30(edx_6)
        eax.b = 1
        return eax

return 0
