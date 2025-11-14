// 函数: sub_4c9680
// 地址: 0x4c9680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0xc) != 0 || *(arg1 + 0x10) == 0)
    goto label_4c96d7

void* esi_1 = *(arg1 + 8)

if (sub_502b50(esi_1, arg3) != 0 && sub_502d60(arg3, esi_1) != 0)
    bool eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_502de0(esi_1)
    
    if (eax_1 != 0 && sub_502e50(ecx_1, esi_1) != 0)
        *(esi_1 + 0xc) = 1
        sub_4f8480(*(arg1 + 0x10))
        *(arg1 + 0x10) = 0
    label_4c96d7:
        int32_t* edi_2 = *(arg2 + 0x1d0)
        void** esi_3 = *(arg1 + 8)
        
        if (edi_2 == 0)
            if (esi_3 == 0)
                return 1
            
            sub_5028f0(esi_3)
            int32_t* edx_1 = *(arg1 + 0x74)
            *(arg1 + 8) = 0
            sub_4c0e30(edx_1)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        if (esi_3 != 0)
            if (esi_3[4] == edi_2)
                return 1
            
            sub_5028f0(esi_3)
            int32_t* eax_4 = *(arg1 + 0x74)
            *(arg1 + 8) = 0
            sub_4c0e30(eax_4)
        
        *(arg1 + 0x10) = edi_2
        EnterCriticalSection(edi_2[1])
        *edi_2 += 1
        LeaveCriticalSection(edi_2[1])
        *(arg1 + 0xc) = 1
        
        if (*(arg1 + 0x6c) != 0)
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * eax_5 = operator new(0x10)
            
            if (eax_5 == 0)
                int32_t var_14_7 = 0
                sub_576750(*(arg1 + 0x68))
                BOOL eax_7
                eax_7.b = 1
                return eax_7
            
            *eax_5 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
            eax_5[1] = 1
            eax_5[2] = arg1
            eax_5[3] = sub_4c97e0
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * var_14_6 = eax_5
            sub_576750(*(arg1 + 0x68))
            BOOL eax_6
            eax_6.b = 1
            return eax_6
        
        if (sub_4c97e0(arg1) != 0 && sub_502a90(*(arg1 + 8), arg3) != 0)
            sub_4f8480(*(arg1 + 0x10))
            *(arg1 + 0x10) = 0
            return 1

return false
