// 函数: sub_4ca3d0
// 地址: 0x4ca3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
arg1.b = *(arg2 + 0x2c)

if (arg1.b == 0)
    int32_t ecx
    ecx.b = *(arg2 + 0x2c)
    
    if (ecx.b == 0 && *(arg2 + 0x40) != 0)
        void* esi_1 = *(arg2 + 0x28)
        
        if (sub_4b2ff0(esi_1, arg3).b == 0)
            arg1.b = 0
            return arg1
        
        if (sub_4b3570(arg3, esi_1).b == 0)
            arg1.b = 0
            return arg1
        
        void* eax = arg2 + 0x30
        *(esi_1 + 0xc) = 1
        bool cond:1_1 = *(eax + 0x14) u< 0x10
        *(eax + 0x10) = 0
        
        if (not(cond:1_1))
            eax = *eax
        
        *eax = 0
    
    void* esi_2 = *(arg2 + 0x28)
    
    if (esi_2 == 0)
        goto label_4ca478
    
    if (sub_405d70(&edi[3], esi_2 + 0x64).b == 0 || *(esi_2 + 0x80) != edi[0x98])
        sub_4b2b90(*(arg2 + 0x28))
        int32_t* edx_3 = *(arg2 + 0x74)
        *(arg2 + 0x28) = 0
        sub_4c0e30(edx_3)
    label_4ca478:
        void* ebx_3 = arg2 + 0x30
        sub_401180(ebx_3, 0xffffffff, &edi[3], 0)
        bool cond:0_1 = *(arg2 + 0x6c) == 0
        *(arg2 + 0x4c) = edi[0x98]
        *(arg2 + 0x2c) = 1
        
        if (not(cond:0_1))
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * eax_3 = operator new(0x10)
            
            if (eax_3 == 0)
                int32_t var_18_4 = 0
                sub_576750(*(arg2 + 0x68))
                BOOL eax_5
                eax_5.b = 1
                return eax_5
            
            *eax_3 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
            eax_3[1] = 1
            eax_3[2] = arg2
            eax_3[3] = sub_4ca530
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * var_18_3 = eax_3
            sub_576750(*(arg2 + 0x68))
            BOOL eax_4
            eax_4.b = 1
            return eax_4
        
        if (sub_4ca530(arg2).b == 0)
            arg1.b = 0
            return arg1
        
        if (sub_4b2fc0(*(arg2 + 0x28), arg3).b == 0)
            arg1.b = 0
            return arg1
        
        bool cond:2_1 = *(ebx_3 + 0x14) u< 0x10
        *(ebx_3 + 0x10) = 0
        
        if (not(cond:2_1))
            ebx_3 = *ebx_3
        
        *ebx_3 = 0

arg1.b = 1
return arg1
