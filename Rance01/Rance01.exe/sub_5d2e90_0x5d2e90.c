// 函数: sub_5d2e90
// 地址: 0x5d2e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) != 0)
    EnterCriticalSection(*(arg1 + 0xa4))
    
    if (*(arg1 + 0x1c) != 0)
        LeaveCriticalSection(*(arg1 + 0xa4))
        int32_t edx_1 = *(*(arg1 + 0x68) + 0x1c)
        *(arg1 + 0x30) = 0
        int32_t ebp_1 = edx_1() * (*(*(arg1 + 0x68) + 0xc))()
        uint32_t eax_7 = (*(arg1 + 0x34) * ebp_1) u>> 3
        void* ebx_2 = (*(arg1 + 0x38) * ebp_1) u>> 3
        
        if (ebx_2 u<= eax_7)
            void* var_44_1 = ebx_2
            uint32_t var_48_1 = eax_7
            sub_40da60(0x737190)
            void* eax_8
            eax_8.b = 0
            return eax_8
        
        int32_t eax_9 = *(arg1 + 0x14)
        uint32_t ebp_3 = eax_9 u>> 1
        uint32_t eax_10 = eax_9 - ebp_3
        int32_t edi = (*(**(arg1 + 0x28) + 0x20))()
        
        if (edi != 0xffffffff)
            EnterCriticalSection(*(arg1 + 0xac))
            
            if (sub_5d33b0(arg1, 0, ebp_3, eax_7, ebx_2) == 0)
                LeaveCriticalSection(*(arg1 + 0xac))
                int32_t eax_16
                eax_16.b = 0
                return eax_16
            
            LeaveCriticalSection(*(arg1 + 0xac))
            
            if (sub_5d3330(arg1).b != 0)
                EnterCriticalSection(*(arg1 + 0xac))
                
                if (sub_5d33b0(arg1, ebp_3, eax_10, eax_7, ebx_2) != 0)
                    LeaveCriticalSection(*(arg1 + 0xac))
                    int32_t var_8 = *(arg1 + 0x94)
                    HANDLE handles = *(arg1 + 0x90)
                    uint32_t var_2c = 0
                    uint32_t var_24 = ebp_3
                    void* var_1c = nullptr
                    int32_t var_18 = edi
                    int32_t var_20 = edi
                    int32_t var_4 = *(arg1 + 0x98)
                    
                    for (enum WAIT_EVENT i = WaitForMultipleObjects(3, &handles, 0, 1); 
                            i != WAIT_OBJECT_0; i = WaitForMultipleObjects(3, &handles, 0, 1))
                        if (i != 0x1)
                            if (i == 0x2)
                                i = sub_5d3610(arg1, ebx_2)
                                goto label_5d3047
                            
                        label_5d304f:
                            i.b = *(arg1 + 0x84)
                            
                            if (i.b == 0)
                                void* var_28 = nullptr
                                
                                if (sub_5d3660(&var_28, arg1, &var_28) != 0)
                                    void* eax_24 = var_28
                                    
                                    if (eax_24 u< var_1c)
                                        var_20 = var_18
                                    
                                    void* edi_1 = eax_24 + var_20
                                    
                                    if (edi_1 u> ebx_2)
                                        edi_1 += eax_7 - ebx_2
                                    
                                    EnterCriticalSection(*(arg1 + 0xa8))
                                    
                                    if (edi_1 u<= eax_9 + eax_7 && edi_1 u>= eax_7
                                            && *(arg1 + 0x40) + eax_9 u>= ebx_2)
                                        *(arg1 + 0x85) = 0
                                        *(arg1 + 0x40) = 0
                                    else if (*(arg1 + 0x40) u<= edi_1
                                            && *(arg1 + 0x40) + eax_9 u>= edi_1)
                                        *(arg1 + 0x85) = 0
                                        *(arg1 + 0x40) = 0
                                    
                                    int32_t edx_11
                                    edx_11.b = *(arg1 + 0x85)
                                    
                                    if (edx_11.b == 0)
                                        *(arg1 + 0x3c) = edi_1
                                    
                                    LeaveCriticalSection(*(arg1 + 0xa8))
                                    void* eax_28 = var_28
                                    var_1c = eax_28
                                    
                                    if ((var_2c != 0 || eax_28 u>= ebp_3)
                                            && (var_2c != ebp_3 || eax_28 u< ebp_3))
                                        int32_t eax_30 = (*(**(arg1 + 0x28) + 0x20))()
                                        
                                        if (eax_30 == 0xffffffff)
                                            break
                                        
                                        EnterCriticalSection(*(arg1 + 0xac))
                                        int32_t eax_31 = *(arg1 + 0x2c)
                                        
                                        if (eax_31 s> 0 && *(arg1 + 0x30) s>= eax_31)
                                            LeaveCriticalSection(*(arg1 + 0xac))
                                            break
                                        
                                        if (sub_5d33b0(arg1, var_2c, var_24, eax_7, ebx_2) != 0)
                                            LeaveCriticalSection(*(arg1 + 0xac))
                                            
                                            if (var_2c != 0)
                                                var_2c = 0
                                                var_24 = ebp_3
                                            else
                                                var_18 = eax_30
                                                var_2c = ebp_3
                                                var_24 = eax_10
                                        else
                                            LeaveCriticalSection(*(arg1 + 0xac))
                            else
                                *(arg1 + 0x4c) = sub_5da3e0() - *(arg1 + 0x48)
                        else
                            i = sub_5d3570(arg1)
                        label_5d3047:
                            
                            if (i.b != 0)
                                goto label_5d304f
                        
                        int32_t eax_36 = *(arg1 + 0x94)
                        int32_t ecx_22 = *(arg1 + 0x98)
                        handles = *(arg1 + 0x90)
                        int32_t var_8_1 = eax_36
                        int32_t var_4_1 = ecx_22
                    
                    EnterCriticalSection(*(arg1 + 0xa4))
                    int32_t* eax_38 = *(arg1 + 0x1c)
                    
                    if (eax_38 != 0)
                        (*(*eax_38 + 0x48))(eax_38)
                    
                    LeaveCriticalSection(*(arg1 + 0xa4))
                    int32_t eax_40
                    eax_40.b = 1
                    return eax_40
                
                LeaveCriticalSection(*(arg1 + 0xac))
        
        int32_t eax_12
        eax_12.b = 0
        return eax_12
    
    LeaveCriticalSection(*(arg1 + 0xa4))

arg1.b = 0
return arg1
