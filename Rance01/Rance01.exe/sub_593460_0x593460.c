// 函数: sub_593460
// 地址: 0x593460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x1c) == 0)
    arg1.b = 0
    return arg1

int32_t edx = *(*(arg1 + 0x64) + 0x1c)
*(arg1 + 0x24) = 0
int32_t ebp_1 = edx() * (*(*(arg1 + 0x64) + 0xc))()
uint32_t ebx_2 = (*(arg1 + 0x28) * ebp_1) u>> 3
uint32_t eax_6 = (*(arg1 + 0x2c) * ebp_1) u>> 3
void* var_28 = ebx_2
void* eax_7

if (eax_6 u> ebx_2)
    void* eax_8 = *(arg1 + 0x10)
    uint32_t ebp_3 = eax_8 u>> 1
    void* eax_9 = eax_8 - ebp_3
    eax_7 = (*(**(arg1 + 0x1c) + 0x20))()
    
    if (eax_7 != 0xffffffff)
        EnterCriticalSection(*(arg1 + 0xa4))
        void* eax_12 = *(arg1 + 0x60)
        
        if (eax_12 != 0 && ebp_3 != 0)
            sub_5938b0(arg1, eax_12, ebp_3, ebx_2, eax_6)
        
        LeaveCriticalSection(*(arg1 + 0xa4))
        int32_t* ecx_4 = data_797d98
        int32_t eax_13
        
        if (ecx_4 != 0)
            eax_13 = (**ecx_4)()
        else
            eax_13 = 0
        
        *(arg1 + 0x38) = eax_13
        CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xa4)
        *(arg1 + 0x3c) = 0
        EnterCriticalSection(lpCriticalSection)
        void* eax_15 = *(arg1 + 0x60)
        
        if (eax_15 != 0 && eax_9 != 0)
            sub_5938b0(arg1, eax_15, eax_9, ebx_2, eax_6)
        
        LeaveCriticalSection(*(arg1 + 0xa4))
        int32_t edx_6 = *(arg1 + 0x90)
        int32_t eax_17 = *(arg1 + 0x94)
        uint32_t ebx_3 = 0
        HANDLE handles = *(arg1 + 0x8c)
        void* var_24 = ebp_3
        void* const var_1c = nullptr
        void* var_18 = eax_7
        void* var_20 = eax_7
        int32_t var_8 = edx_6
        int32_t var_4 = eax_17
        enum WAIT_EVENT eax_18 = WaitForMultipleObjects(3, &handles, 0, 1)
        
        if (eax_18 != WAIT_OBJECT_0)
            while (true)
                if (eax_18 != 0x1)
                    if (eax_18 == 0x2)
                        eax_18 = sub_5939b0(arg1, eax_6)
                        goto label_5935db
                    
                label_5935e3:
                    eax_18.b = *(arg1 + 0x80)
                    
                    if (eax_18.b == 0)
                        void* var_2c = nullptr
                        
                        if (sub_593a00(arg1, &var_2c) != 0)
                            void* eax_24 = var_2c
                            
                            if (eax_24 u< var_1c)
                                var_20 = var_18
                            
                            void* edi_2 = eax_24 + var_20
                            
                            if (edi_2 u> eax_6)
                                edi_2 += var_28 - eax_6
                            
                            EnterCriticalSection(*(arg1 + 0xa0))
                            
                            if (edi_2 u<= eax_8 + var_28 && edi_2 u>= var_28
                                    && *(arg1 + 0x34) + eax_8 u>= eax_6)
                                *(arg1 + 0x81) = 0
                                *(arg1 + 0x34) = 0
                            else if (*(arg1 + 0x34) u<= edi_2 && *(arg1 + 0x34) + eax_8 u>= edi_2)
                                *(arg1 + 0x81) = 0
                                *(arg1 + 0x34) = 0
                            
                            void* edx_12
                            edx_12.b = *(arg1 + 0x81)
                            
                            if (edx_12.b == 0)
                                *(arg1 + 0x30) = edi_2
                            
                            LeaveCriticalSection(*(arg1 + 0xa0))
                            void* eax_29 = var_2c
                            var_1c = eax_29
                            
                            if ((ebx_3 != 0 || eax_29 u>= ebp_3)
                                    && (ebx_3 != ebp_3 || eax_29 u< ebp_3))
                                void* edi_3 = (*(**(arg1 + 0x1c) + 0x20))()
                                
                                if (edi_3 == 0xffffffff)
                                    break
                                
                                EnterCriticalSection(*(arg1 + 0xa4))
                                int32_t eax_31 = *(arg1 + 0x20)
                                
                                if (eax_31 s> 0 && *(arg1 + 0x24) s>= eax_31)
                                    LeaveCriticalSection(*(arg1 + 0xa4))
                                    break
                                
                                void* eax_32 = *(arg1 + 0x60)
                                
                                if (eax_32 != 0 && var_24 != 0)
                                    sub_5938b0(arg1, eax_32, var_24, var_28, eax_6)
                                
                                LeaveCriticalSection(*(arg1 + 0xa4))
                                
                                if (ebx_3 != 0)
                                    ebx_3 = 0
                                    var_24 = ebp_3
                                else
                                    var_18 = edi_3
                                    ebx_3 = ebp_3
                                    var_24 = eax_9
                    else
                        int32_t* ecx_7 = data_797d98
                        
                        if (ecx_7 != 0)
                            *(arg1 + 0x40) = (**ecx_7)() - *(arg1 + 0x3c)
                        else
                            *(arg1 + 0x40) = 0 - *(arg1 + 0x3c)
                else
                    eax_18 = sub_593970(arg1)
                label_5935db:
                    
                    if (eax_18.b != 0)
                        goto label_5935e3
                
                int32_t eax_34 = *(arg1 + 0x90)
                int32_t ecx_18 = *(arg1 + 0x94)
                handles = *(arg1 + 0x8c)
                int32_t var_8_1 = eax_34
                int32_t var_4_1 = ecx_18
                eax_18 = WaitForMultipleObjects(3, &handles, 0, 1)
                
                if (eax_18 == WAIT_OBJECT_0)
                    eax_18.b = 1
                    return eax_18
        
        eax_18.b = 1
        return eax_18
else
    uint32_t var_44_1 = eax_6
    uint32_t var_48_1 = ebx_2
    sub_40da60(0x74b254)

eax_7.b = 0
return eax_7
