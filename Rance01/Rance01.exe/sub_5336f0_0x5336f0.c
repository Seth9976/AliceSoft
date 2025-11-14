// 函数: sub_5336f0
// 地址: 0x5336f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL lpMem_4 = 0
void* var_50 = nullptr
uint32_t dwBytes = 0
void* var_48 = nullptr
int32_t var_4 = 0
BOOL lpMem_1
int32_t edx

if (sub_560510(arg3, edx, &lpMem_4) != 0)
    void* esi_1 = var_48
    void* var_58_1 = esi_1
    int32_t var_44
    sub_6bc670(&var_44, 0, 0x38)
    int32_t var_38_1 = arg2
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_3 = edx_2 s>> 3
    int32_t var_30_1 = (edx_3 u>> 0x1f) + edx_3
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = muls.dp.d(0x38e38e39, arg1[5] - arg1[4])
    int32_t edx_5 = edx_4 s>> 3
    int32_t var_28_1 = (edx_5 u>> 0x1f) + edx_5
    int32_t var_20_1 = (arg1[9] - arg1[8]) s/ 0x1c
    int32_t eax_15
    int32_t edx_9
    edx_9:eax_15 = muls.dp.d(0x38e38e39, arg1[0xd] - arg1[0xc])
    void* eax_16 = var_50
    int32_t edx_10 = edx_9 s>> 3
    int32_t var_18_1 = (edx_10 u>> 0x1f) + edx_10
    void* ecx_15 = esi_1 + 0x38
    int32_t edx_13 = (arg1[0x11] - arg1[0x10]) s>> 2
    var_44 = 0x3e8
    int32_t var_40_1 = 7
    int32_t var_3c_1 = 0x38
    int32_t var_10_1 = edx_13
    
    if (eax_16 s>= ecx_15)
        goto label_53385a
    
    if (sub_427ad0(&lpMem_4, eax_16 + 0x40038) == 0)
        lpMem_1 = lpMem_4
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem_1.b = 0
    else
        esi_1 = var_48
        eax_16 = var_50
    label_53385a:
        int32_t eax_18 = neg.d(eax_16)
        
        if (sub_560510(&arg1[0x18], 
                sub_6c02a0((sbb.d(eax_18, eax_18, eax_16 != 0) & lpMem_4) + esi_1, &var_44, 0x38, 
                    eax_2), 
                &lpMem_4) == 0)
            goto label_53374e
        
        int32_t* esi_4 = *arg1
        void* ebp_1 = esi_1 + 0x38
        void* var_70_1 = ebp_1
        BOOL lpMem
        
        if (esi_4 == arg1[1])
        label_533981:
            int32_t* eax_43 = arg1[4]
            bool cond:4_1 = eax_43 == arg1[5]
            void* var_6c_1 = ebp_1
            int32_t* var_84_1 = eax_43
            
            while (true)
                if (cond:4_1)
                    int32_t* ecx_29 = arg1[8]
                    void* esi_9 = var_50
                    BOOL lpMem_3 = lpMem_4
                    void* var_68_1 = ebp_1
                    int32_t* var_80_1 = ecx_29
                    
                    if (ecx_29 != arg1[9])
                        while (true)
                            void* eax_55 = ecx_29[4]
                            int32_t* var_7c_2
                            
                            if (ecx_29[5] u< 0x10)
                                var_7c_2 = ecx_29
                            else
                                var_7c_2 = *ecx_29
                            
                            if (eax_55 != 0xffffffff)
                                void* ecx_30 = eax_55 + 1 + ebp_1
                                
                                if (esi_9 s< ecx_30)
                                    esi_9 = eax_55 + 1 + esi_9 + 0x40000
                                    
                                    if (esi_9 u>= dwBytes)
                                        uint32_t dwBytes_6 = dwBytes
                                        dwBytes += esi_9
                                        
                                        if (dwBytes_6 != neg.d(esi_9))
                                            if (lpMem_3 == 0)
                                                lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                            else
                                                lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                    lpMem_3, dwBytes)
                                            
                                            lpMem_3 = lpMem_1
                                            
                                            if (lpMem_3 == 0)
                                                lpMem_4 = lpMem_3
                                                lpMem_1.b = 0
                                                break
                                    
                                    void* var_50_1 = esi_9
                                
                                int32_t eax_60 = neg.d(esi_9)
                                sub_6c02a0((sbb.d(eax_60, eax_60, esi_9 != 0) & lpMem_3) + ebp_1, 
                                    var_7c_2, eax_55 + 1)
                                ebp_1 = ecx_30
                                ecx_29 = var_80_1
                            
                            ecx_29 = &ecx_29[7]
                            var_80_1 = ecx_29
                            
                            if (ecx_29 == arg1[9])
                                lpMem_4 = lpMem_3
                                goto label_533ba9
                        
                        goto label_53444a
                    
                label_533ba9:
                    int32_t* ecx_33 = arg1[0xc]
                    void* var_64_1 = ebp_1
                    int32_t* var_84_3 = ecx_33
                    
                    if (ecx_33 == arg1[0xd])
                    label_533f58:
                        void** eax_120 = arg1
                        int32_t* ebx_7 = eax_120[0x10]
                        void* var_60_1 = ebp_1
                        
                        if (ebx_7 != eax_120[0x11])
                            while (true)
                                int32_t eax_114 = *ebx_7
                                void* ecx_51 = ebp_1 + 4
                                
                                if (esi_9 s< ecx_51)
                                    esi_9 += 0x40004
                                    
                                    if (esi_9 u>= dwBytes)
                                        uint32_t dwBytes_5 = dwBytes
                                        dwBytes += esi_9
                                        
                                        if (dwBytes_5 != neg.d(esi_9))
                                            if (lpMem_3 == 0)
                                                lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                            else
                                                lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                    lpMem_3, dwBytes)
                                            
                                            lpMem_3 = lpMem_1
                                            
                                            if (lpMem_3 == 0)
                                                lpMem_4 = lpMem_3
                                                lpMem_1.b = 0
                                                break
                                    
                                    void* var_50_8 = esi_9
                                
                                int32_t eax_117 = neg.d(esi_9)
                                *((sbb.d(eax_117, eax_117, esi_9 != 0) & lpMem_3) + ebp_1) = eax_114
                                eax_120 = arg1
                                ebx_7 = &ebx_7[1]
                                ebp_1 = ecx_51
                                
                                if (ebx_7 == eax_120[0x11])
                                    lpMem_4 = lpMem_3
                                    goto label_533ffa
                            
                            goto label_53444a
                        
                    label_533ffa:
                        void* ecx_54 = ebp_1 + 4
                        int32_t ebx_10 = (eax_120[0x15] - eax_120[0x14]) s>> 2
                        
                        if (esi_9 s< ecx_54)
                            esi_9 += 0x40004
                            
                            if (esi_9 u>= dwBytes)
                                uint32_t dwBytes_3 = dwBytes
                                dwBytes += esi_9
                                
                                if (dwBytes_3 != neg.d(esi_9))
                                    if (lpMem_3 == 0)
                                        lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                    else
                                        lpMem_1 =
                                            HeapReAlloc(data_797df4, HEAP_NONE, lpMem_3, dwBytes)
                                    
                                    lpMem_3 = lpMem_1
                                    lpMem_4 = lpMem_3
                                    
                                    if (lpMem_3 == 0)
                                        goto label_533764
                            
                            void* var_50_9 = esi_9
                        
                        int32_t eax_124 = neg.d(esi_9)
                        *((sbb.d(eax_124, eax_124, esi_9 != 0) & lpMem_3) + ebp_1) = ebx_10
                        void* ebx_11 = ecx_54
                        int32_t* i = arg1[0x14]
                        void* var_48_4 = ebx_11
                        int32_t* i_2 = i
                        
                        while (i != arg1[0x15])
                            void* eax_133 = *i
                            void* ebp_5 = *(eax_133 + 0x20)
                            void* ecx_57 = eax_133 + 0x10
                            void* var_80_3 = eax_133
                            
                            if (*(eax_133 + 0x24) u>= 0x10)
                                ecx_57 = *ecx_57
                            
                            if (ebp_5 != 0xffffffff)
                                void* eax_127 = ebx_11 + ebp_5 + 1
                                
                                if (esi_9 s< eax_127)
                                    esi_9 = esi_9 + ebp_5 + 1 + 0x40000
                                    
                                    if (esi_9 u>= dwBytes)
                                        uint32_t dwBytes_10 = dwBytes
                                        dwBytes += esi_9
                                        
                                        if (dwBytes_10 != neg.d(esi_9))
                                            if (lpMem_3 == 0)
                                                lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                            else
                                                lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                    lpMem_3, dwBytes)
                                            
                                            lpMem_3 = lpMem_1
                                            lpMem_4 = lpMem_3
                                            
                                            if (lpMem_3 == 0)
                                                goto label_533764
                                    
                                    void* var_50_10 = esi_9
                                
                                int32_t eax_130 = neg.d(esi_9)
                                sub_6c02a0(
                                    ebx_11 + (sbb.d(eax_130, eax_130, esi_9 != 0) & lpMem_3), 
                                    ecx_57, ebp_5 + 1)
                                ebx_11 = eax_127
                                eax_133 = var_80_3
                            
                            int32_t eax_134
                            int32_t edx_45
                            edx_45:eax_134 =
                                muls.dp.d(0x2e8ba2e9, *(eax_133 + 0x38) - *(eax_133 + 0x34))
                            int32_t edx_46 = edx_45 s>> 3
                            void* ecx_62 = ebx_11 + 4
                            
                            if (esi_9 s< ecx_62)
                                esi_9 += 0x40004
                                
                                if (esi_9 u>= dwBytes)
                                    uint32_t dwBytes_9 = dwBytes
                                    dwBytes += esi_9
                                    
                                    if (dwBytes_9 != neg.d(esi_9))
                                        if (lpMem_3 == 0)
                                            lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                        else
                                            lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem_3, 
                                                dwBytes)
                                        
                                        lpMem_3 = lpMem_1
                                        lpMem_4 = lpMem_3
                                        
                                        if (lpMem_3 == 0)
                                            goto label_533764
                                
                                void* var_50_11 = esi_9
                            
                            int32_t eax_137 = neg.d(esi_9)
                            *(ebx_11 + (sbb.d(eax_137, eax_137, esi_9 != 0) & lpMem_3)) =
                                (edx_46 u>> 0x1f) + edx_46
                            ebx_11 = ecx_62
                            int32_t ecx_64 = *(var_80_3 + 0x34)
                            int32_t eax_141
                            int32_t edx_51
                            edx_51:eax_141 = muls.dp.d(0x2e8ba2e9, *(var_80_3 + 0x38) - ecx_64)
                            int32_t edx_52 = edx_51 s>> 3
                            void* var_48_5 = ebx_11
                            int32_t j_1 = 0
                            
                            if ((edx_52 u>> 0x1f) + edx_52 s> 0)
                                void* var_84_5 = nullptr
                                int32_t edx_60
                                int32_t j
                                
                                do
                                    int32_t eax_145 = *(var_84_5 + ecx_64 + 0x1c)
                                    int32_t* ebp_11 = var_84_5 + ecx_64
                                    void* ecx_65 = ebx_11 + 4
                                    
                                    if (esi_9 s< ecx_65)
                                        esi_9 += 0x40004
                                        
                                        if (esi_9 u>= dwBytes)
                                            uint32_t dwBytes_13 = dwBytes
                                            dwBytes += esi_9
                                            
                                            if (dwBytes_13 != neg.d(esi_9))
                                                if (lpMem_3 == 0)
                                                    lpMem_1 =
                                                        HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                                else
                                                    lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                        lpMem_3, dwBytes)
                                                
                                                lpMem_3 = lpMem_1
                                                lpMem_4 = lpMem_3
                                                
                                                if (lpMem_3 == 0)
                                                    goto label_533764
                                        
                                        void* var_50_12 = esi_9
                                    
                                    int32_t eax_148 = neg.d(esi_9)
                                    *(ebx_11 + (sbb.d(eax_148, eax_148, esi_9 != 0) & lpMem_3)) =
                                        eax_145
                                    ebx_11 = ecx_65
                                    void* var_48_6 = ebx_11
                                    int32_t* var_88_8
                                    
                                    if (ebp_11[5] u< 0x10)
                                        var_88_8 = ebp_11
                                    else
                                        var_88_8 = *ebp_11
                                    
                                    void* ebp_12 = ebp_11[4] + 1
                                    
                                    if (ebp_12 != 0)
                                        void* eax_152 = ebx_11 + ebp_12
                                        
                                        if (esi_9 s< eax_152)
                                            esi_9 = esi_9 + ebp_12 + 0x40000
                                            
                                            if (esi_9 u>= dwBytes)
                                                uint32_t dwBytes_15 = dwBytes
                                                dwBytes += esi_9
                                                
                                                if (dwBytes_15 != neg.d(esi_9))
                                                    if (lpMem_3 == 0)
                                                        lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, 
                                                            dwBytes)
                                                    else
                                                        lpMem_1 = HeapReAlloc(data_797df4, 
                                                            HEAP_NONE, lpMem_3, dwBytes)
                                                    
                                                    lpMem_3 = lpMem_1
                                                    lpMem_4 = lpMem_3
                                                    
                                                    if (lpMem_3 == 0)
                                                        goto label_533764
                                            
                                            void* var_50_13 = esi_9
                                        
                                        int32_t eax_155 = neg.d(esi_9)
                                        sub_6c02a0(
                                            ebx_11
                                                + (sbb.d(eax_155, eax_155, esi_9 != 0) & lpMem_3), 
                                            var_88_8, ebp_12)
                                        ebx_11 = eax_152
                                        void* var_48_7 = ebx_11
                                    
                                    ecx_64 = *(var_80_3 + 0x34)
                                    var_84_5 += 0x2c
                                    int32_t eax_159
                                    int32_t edx_59
                                    edx_59:eax_159 =
                                        muls.dp.d(0x2e8ba2e9, *(var_80_3 + 0x38) - ecx_64)
                                    edx_60 = edx_59 s>> 3
                                    j = j_1 + 1
                                    j_1 = j
                                while (j s< (edx_60 u>> 0x1f) + edx_60)
                            
                            i = &i_2[1]
                            i_2 = i
                        
                        void* var_34_1 = var_70_1
                        void* var_2c_1 = var_6c_1
                        void* var_24_1 = var_68_1
                        void* var_1c_1 = var_64_1
                        void* var_14_1 = var_60_1
                        
                        if (esi_9 s< ecx_15)
                            esi_9 += 0x40038
                            
                            if (esi_9 u>= dwBytes)
                                void* dwBytes_1 = dwBytes + esi_9
                                
                                if (dwBytes != neg.d(esi_9))
                                    if (lpMem_3 == 0)
                                        lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes_1)
                                    else
                                        lpMem_1 =
                                            HeapReAlloc(data_797df4, HEAP_NONE, lpMem_3, dwBytes_1)
                                    
                                    lpMem_3 = lpMem_1
                                    lpMem_4 = lpMem_3
                                    
                                    if (lpMem_3 == 0)
                                        goto label_533764
                            
                            void* var_50_14 = esi_9
                        
                        int32_t eax_168 = neg.d(esi_9)
                        sub_6c02a0((sbb.d(eax_168, eax_168, esi_9 != 0) & lpMem_3) + var_58_1, 
                            &var_44, 0x38)
                        int32_t esi_10 = neg.d(esi_9)
                        
                        if (sub_54f630(arg1[0x29], arg4, 
                                sbb.d(esi_10, esi_10, esi_9 != 0) & lpMem_3, ebx_11).b != 0)
                            if (lpMem_3 != 0)
                                HeapFree(data_797df4, HEAP_NONE, lpMem_3)
                            
                            lpMem_1.b = 1
                            goto label_53444a
                    else
                        int32_t* ecx_34 = ecx_33
                        
                        while (true)
                            int32_t eax_64 = *ecx_34
                            
                            if (esi_9 s< ebp_1 + 4)
                                esi_9 += 0x40004
                                
                                if (esi_9 u>= dwBytes)
                                    uint32_t dwBytes_4 = dwBytes
                                    dwBytes += esi_9
                                    
                                    if (dwBytes_4 != neg.d(esi_9))
                                        if (lpMem_3 == 0)
                                            lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                        else
                                            lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem_3, 
                                                dwBytes)
                                        
                                        lpMem_3 = lpMem_1
                                        lpMem_4 = lpMem_3
                                        
                                        if (lpMem_3 == 0)
                                            goto label_533764
                                        
                                        ecx_34 = var_84_3
                                
                                void* var_50_2 = esi_9
                            
                            int32_t eax_67 = neg.d(esi_9)
                            *((sbb.d(eax_67, eax_67, esi_9 != 0) & lpMem_3) + ebp_1) = eax_64
                            int32_t eax_70 = ecx_34[2]
                            void* ebp_3 = ebp_1 + 4
                            int128_t* ebx_2 = ecx_34[1]
                            
                            if (ebx_2 != eax_70)
                                int32_t eax_73 = ((eax_70 - ebx_2) s>> 2) * 2
                                int32_t edx_25 = eax_73 * 2
                                
                                if (eax_73 != neg.d(eax_73))
                                    void* eax_75 = edx_25 + ebp_3
                                    
                                    if (esi_9 s< eax_75)
                                        esi_9 = edx_25 + esi_9 + 0x40000
                                        
                                        if (esi_9 u>= dwBytes)
                                            uint32_t dwBytes_8 = dwBytes
                                            dwBytes += esi_9
                                            
                                            if (dwBytes_8 != neg.d(esi_9))
                                                if (lpMem_3 == 0)
                                                    lpMem_1 =
                                                        HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                                else
                                                    lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                        lpMem_3, dwBytes)
                                                
                                                lpMem_3 = lpMem_1
                                                lpMem_4 = lpMem_3
                                                
                                                if (lpMem_3 == 0)
                                                    goto label_533764
                                        
                                        void* var_50_3 = esi_9
                                    
                                    int32_t eax_79 = neg.d(esi_9)
                                    sub_6c02a0(
                                        (sbb.d(eax_79, eax_79, esi_9 != 0) & lpMem_3) + ebp_3, 
                                        ebx_2, edx_25)
                                    ebp_3 = eax_75
                                    ecx_34 = var_84_3
                            
                            int32_t eax_83
                            int32_t edx_29
                            edx_29:eax_83 = muls.dp.d(0x2aaaaaab, ecx_34[6] - ecx_34[5])
                            int32_t edx_30 = edx_29 s>> 2
                            void* ecx_38 = ebp_3 + 4
                            
                            if (esi_9 s< ecx_38)
                                esi_9 += 0x40004
                                
                                if (esi_9 u>= dwBytes)
                                    uint32_t dwBytes_7 = dwBytes
                                    dwBytes += esi_9
                                    
                                    if (dwBytes_7 != neg.d(esi_9))
                                        if (lpMem_3 == 0)
                                            lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                        else
                                            lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem_3, 
                                                dwBytes)
                                        
                                        lpMem_3 = lpMem_1
                                        lpMem_4 = lpMem_3
                                        
                                        if (lpMem_3 == 0)
                                            goto label_533764
                                
                                void* var_50_4 = esi_9
                            
                            int32_t eax_86 = neg.d(esi_9)
                            *((sbb.d(eax_86, eax_86, esi_9 != 0) & lpMem_3) + ebp_3) =
                                (edx_30 u>> 0x1f) + edx_30
                            int32_t* eax_89 = var_84_3
                            int32_t* ebx_6 = eax_89[5]
                            ebp_1 = ecx_38
                            
                            if (ebx_6 != eax_89[6])
                                while (true)
                                    int32_t edx_32 = *ebx_6
                                    void* ecx_41 = ebp_1 + 4
                                    
                                    if (esi_9 s< ecx_41)
                                        esi_9 += 0x40004
                                        
                                        if (esi_9 u>= dwBytes)
                                            uint32_t dwBytes_11 = dwBytes
                                            dwBytes += esi_9
                                            
                                            if (dwBytes_11 != neg.d(esi_9))
                                                if (lpMem_3 == 0)
                                                    lpMem_1 =
                                                        HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                                else
                                                    lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                        lpMem_3, dwBytes)
                                                
                                                lpMem_3 = lpMem_1
                                                lpMem_4 = lpMem_3
                                                
                                                if (lpMem_3 == 0)
                                                    goto label_533764
                                        
                                        void* var_50_5 = esi_9
                                    
                                    int32_t eax_93 = neg.d(esi_9)
                                    *((sbb.d(eax_93, eax_93, esi_9 != 0) & lpMem_3) + ebp_1) =
                                        edx_32
                                    int32_t eax_96 = ebx_6[1]
                                    void* ecx_43 = ecx_41 + 4
                                    
                                    if (esi_9 s< ecx_43)
                                        esi_9 += 0x40004
                                        
                                        if (esi_9 u>= dwBytes)
                                            uint32_t dwBytes_12 = dwBytes
                                            dwBytes += esi_9
                                            
                                            if (dwBytes_12 != neg.d(esi_9))
                                                if (lpMem_3 == 0)
                                                    lpMem_1 =
                                                        HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                                                else
                                                    lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, 
                                                        lpMem_3, dwBytes)
                                                
                                                lpMem_3 = lpMem_1
                                                lpMem_4 = lpMem_3
                                                
                                                if (lpMem_3 == 0)
                                                    goto label_533764
                                        
                                        void* var_50_6 = esi_9
                                    
                                    int32_t eax_99 = neg.d(esi_9)
                                    *((sbb.d(eax_99, eax_99, esi_9 != 0) & lpMem_3) + ecx_41) =
                                        eax_96
                                    int128_t* edx_37 = ebx_6[2]
                                    ebp_1 = ecx_43
                                    int32_t ecx_46 = ebx_6[3]
                                    lpMem_1 = (ecx_46 - edx_37) s>> 2
                                    
                                    if (*ebx_6 s> lpMem_1)
                                        break
                                    
                                    if (edx_37 != ecx_46)
                                        void* eax_104 = lpMem_1 * 2
                                        void* eax_105 = eax_104 * 2
                                        
                                        if (eax_104 != neg.d(eax_104))
                                            void* ecx_47 = eax_105 + ebp_1
                                            
                                            if (esi_9 s< ecx_47)
                                                esi_9 = eax_105 + esi_9 + 0x40000
                                                
                                                if (esi_9 u>= dwBytes)
                                                    uint32_t dwBytes_14 = dwBytes
                                                    dwBytes += esi_9
                                                    
                                                    if (dwBytes_14 != neg.d(esi_9))
                                                        if (lpMem_3 == 0)
                                                            lpMem_1 = HeapAlloc(data_797df4, 
                                                                HEAP_NONE, dwBytes)
                                                        else
                                                            lpMem_1 = HeapReAlloc(data_797df4, 
                                                                HEAP_NONE, lpMem_3, dwBytes)
                                                        
                                                        lpMem_3 = lpMem_1
                                                        lpMem_4 = lpMem_3
                                                        
                                                        if (lpMem_3 == 0)
                                                            goto label_533764
                                                
                                                void* var_50_7 = esi_9
                                            
                                            int32_t eax_109 = neg.d(esi_9)
                                            sub_6c02a0(
                                                (sbb.d(eax_109, eax_109, esi_9 != 0) & lpMem_3)
                                                    + ebp_1, 
                                                edx_37, eax_105)
                                            ebp_1 = ecx_47
                                    
                                    eax_89 = var_84_3
                                    ebx_6 = &ebx_6[6]
                                    
                                    if (ebx_6 == eax_89[6])
                                        goto label_533f3a
                                
                                break
                            
                        label_533f3a:
                            var_84_3 = &eax_89[9]
                            
                            if (&eax_89[9] == arg1[0xd])
                                goto label_533f58
                            
                            ecx_34 = &eax_89[9]
                    
                    if (lpMem_3 == 0)
                        goto label_533a02
                    
                    lpMem = lpMem_3
                    goto label_5339fc
                
                void* eax_44 = var_50
                int32_t edx_16 = *var_84_1
                
                if (eax_44 s< ebp_1 + 4)
                    void* ecx_20 = eax_44 + 0x40004
                    
                    if (ecx_20 u>= dwBytes)
                        uint32_t dwBytes_2 = dwBytes + ecx_20
                        bool cond:1_1 = dwBytes == neg.d(ecx_20)
                        dwBytes = dwBytes_2
                        
                        if (not(cond:1_1))
                            BOOL lpMem_2 = lpMem_4
                            
                            if (lpMem_2 == 0)
                                lpMem_1 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes_2)
                            else
                                lpMem_1 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem_2, dwBytes_2)
                            
                            lpMem_4 = lpMem_1
                            
                            if (lpMem_1 == 0)
                                goto label_533764
                    
                    eax_44 = ecx_20
                    var_50 = eax_44
                
                int32_t ecx_23 = neg.d(eax_44)
                *((sbb.d(ecx_23, ecx_23, eax_44 != 0) & lpMem_4) + ebp_1) = edx_16
                int32_t ebp_2 = var_84_1[1]
                void* ecx_26 = ebp_1 + 4
                void* edx_19 = ecx_26 + 4
                
                if (eax_44 s< edx_19)
                    char eax_49
                    eax_49, edx_19 = sub_427ad0(&lpMem_4, eax_44 + 0x40004)
                    
                    if (eax_49 == 0)
                        break
                    
                    eax_44 = var_50
                
                int32_t eax_50 = neg.d(eax_44)
                *((sbb.d(eax_50, eax_50, eax_44 != 0) & lpMem_4) + ecx_26 + 4 - 4) = ebp_2
                
                if (sub_560510(&var_84_1[2], edx_19, &lpMem_4) == 0)
                    goto label_5338b7
                
                ebp_1 = ecx_26 + 4
                cond:4_1 = &var_84_1[9] == arg1[5]
                var_84_1 = &var_84_1[9]
        else
            while (true)
                int32_t i_1 = *esi_4
                
                if (i_1 != 0)
                    int32_t* edi_2 = arg1[0x14]
                    int32_t ecx_18 = arg1[0x15]
                    int32_t* eax_26 = edi_2
                    
                    if (eax_26 == ecx_18)
                    label_5339ea:
                        lpMem_1 = lpMem_4
                        
                        if (lpMem_1 != 0)
                            lpMem = lpMem_1
                        label_5339fc:
                            HeapFree(data_797df4, HEAP_NONE, lpMem)
                        
                    label_533a02:
                        lpMem_1.b = 0
                        goto label_53444a
                    
                    while (*eax_26 != i_1)
                        eax_26 = &eax_26[1]
                        
                        if (eax_26 == ecx_18)
                            break
                    
                    if (eax_26 == ecx_18)
                        goto label_5339ea
                    
                    if (sub_5604b0(&lpMem_4, (eax_26 - edi_2) s>> 2) == 0)
                        break
                    
                    goto label_53393c
                
                if (sub_5604b0(&lpMem_4, 0xffffffff) != 0)
                label_53393c:
                    
                    if (sub_5604b0(&lpMem_4, (esi_4[2] - esi_4[1]) s>> 2) != 0)
                        int128_t* ecx_19 = esi_4[1]
                        int32_t eax_36 = esi_4[2]
                        
                        if (ecx_19 != eax_36)
                            int32_t eax_39 = ((eax_36 - ecx_19) s>> 2) * 2
                            
                            if (eax_39 != neg.d(eax_39)
                                    && sub_560450(&lpMem_4, ecx_19, eax_39 * 2) == 0)
                                sub_560430(&lpMem_4)
                                lpMem_1.b = 0
                                goto label_53444a
                        
                        esi_4 = &esi_4[5]
                        
                        if (esi_4 != arg1[1])
                            continue
                        
                        ebp_1 = esi_1 + 0x38
                        goto label_533981
                
            label_5338b7:
                lpMem_1 = lpMem_4
                
                if (lpMem_1 != 0)
                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                
                lpMem_1.b = 0
                goto label_53444a
        lpMem_1 = lpMem_4
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem_1.b = 0
else
label_53374e:
    lpMem_1 = lpMem_4
    
    if (lpMem_1 != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
    
label_533764:
    lpMem_1.b = 0

label_53444a:
fsbase->NtTib.ExceptionList = ExceptionList
return lpMem_1
