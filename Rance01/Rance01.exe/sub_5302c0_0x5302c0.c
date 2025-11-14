// 函数: sub_5302c0
// 地址: 0x5302c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f0c4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
BOOL lpMem
int32_t eax_2 = data_78c474 ^ &lpMem
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
lpMem = 0
BOOL i_2 = 0
int32_t var_100 = 0
int32_t var_fc = 0
int32_t var_4 = 0
BOOL lpMem_1

if (sub_54f500(&lpMem, arg2[0x29], arg3) == 0)
    lpMem_1 = lpMem
    
    if (lpMem_1 != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
    
    lpMem_1.b = 0
else if (i_2 s<= 0)
    lpMem_1 = lpMem
    
    if (lpMem_1 != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
    
    lpMem_1.b = 0
else
    void* var_fc_1 = nullptr
    int32_t var_58_1 = 0xf
    int32_t var_5c_1 = 0
    char var_6c = 0
    var_4.b = 1
    
    if (sub_5568e0(&lpMem, &var_6c) != 0)
        int32_t edi_1 = esi[4]
        
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t eax_10 = var_5c_1
        
        if (var_5c_1 u>= edi_1)
            eax_10 = edi_1
        
        int32_t* edx_3 = var_6c.d
        
        if (var_58_1 u< 0x10)
            edx_3 = &var_6c
        
        int32_t eax_11 = sub_402320(eax_10, edx_3, esi, eax_10)
        bool cond:2_1 = eax_11 == 0
        
        if (eax_11 == 0)
            if (var_5c_1 u>= edi_1)
                eax_11.b = var_5c_1 != edi_1
            else
                eax_11 = 0xffffffff
            
            cond:2_1 = eax_11 == 0
        
        eax_11.b = cond:2_1
        eax_11.b = eax_11.b == 0
        
        if (eax_11.b == 0)
            if (i_2 s< var_fc_1 + 0x38)
                goto label_53050c
            
            int32_t eax_15 = neg.d(i_2)
            int32_t var_a4
            sub_6c02a0(&var_a4, (sbb.d(eax_15, eax_15, i_2 != 0) & lpMem) + var_fc_1, 0x38, eax_4)
            int32_t* var_fc_2 = var_fc_1 + 0x38
            
            if (var_a4 != 0x3e8)
                goto label_53050c
            
            int32_t var_a0
            
            if (var_a0 == 7)
                if (sub_5568e0(&lpMem, arg2 + 0x80) == 0)
                    goto label_53050c
                
                int32_t* var_94
                
                if (var_94 s>= 0 && var_94 s< i_2)
                    var_fc_2 = var_94
                
                int32_t ebp_1 = 0
                int32_t var_ec
                int32_t var_e8
                int32_t var_e0
                int32_t var_dc
                int32_t var_d8
                int32_t var_90
                
                if (var_90 s> 0)
                    while (true)
                        int32_t esi_2 = 0
                        var_dc = 0
                        var_d8 = 0
                        int32_t var_d4_1 = 0
                        var_4.b = 2
                        
                        if (sub_556800(&lpMem, &var_e0) != 0 && sub_556800(&lpMem, &var_ec) != 0)
                            int32_t ebx_2 = var_ec
                            
                            if (ebx_2 s> 0)
                                do
                                    if (sub_556800(&lpMem, &var_e8) == 0)
                                        goto label_530896
                                    
                                    sub_416780(&var_e8, &var_dc)
                                    esi_2 += 1
                                while (esi_2 s< ebx_2)
                            
                            sub_531d60(&var_e0, arg2)
                            var_4.b = 1
                            sub_532b80(&var_e0)
                            ebp_1 += 1
                            
                            if (ebp_1 s>= var_90)
                                break
                            
                            continue
                        
                    label_530896:
                        sub_532b80(&var_e0)
                        goto label_53050c
                
                int32_t* var_8c
                
                if (var_8c s>= 0 && var_8c s< i_2)
                    var_fc_2 = var_8c
                
                int32_t ebx_4 = 0
                int32_t var_88
                
                if (var_88 s> 0)
                    while (true)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        var_4.b = 3
                        void var_34
                        
                        if (sub_556800(&lpMem, &var_34) == 0)
                            sub_5356e0(&var_34)
                            sub_401110(&var_6c)
                        label_5308b8:
                            lpMem_1 = lpMem
                            
                            if (lpMem_1 == 0)
                                goto label_53051a_1
                            
                            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                            lpMem_1.b = 0
                            goto label_5313c5
                        
                        void var_30
                        
                        if (sub_556800(&lpMem, &var_30) != 0 && sub_5568e0(&lpMem, &var_2c) != 0)
                            sub_531e20(&var_34, &arg2[4])
                            var_4.b = 1
                            sub_5356e0(&var_34)
                            ebx_4 += 1
                            
                            if (ebx_4 s>= var_88)
                                break
                            
                            continue
                        
                        sub_5356e0(&var_34)
                        goto label_53050c
                
                int32_t* var_84
                
                if (var_84 s>= 0 && var_84 s< i_2)
                    var_fc_2 = var_84
                
                int32_t esi_5 = 0
                int32_t var_80
                
                if (var_80 s> 0)
                    do
                        int32_t var_3c_1 = 0xf
                        int32_t var_40_1 = 0
                        char var_50 = 0
                        var_4.b = 4
                        
                        if (sub_5568e0(&lpMem, &var_50) == 0)
                            if (var_3c_1 u>= 0x10)
                                int32_t var_120_20 = var_50.d
                                sub_6b4d5b()
                            
                            int32_t var_3c_3 = 0xf
                            int32_t var_40_3 = 0
                            var_50 = 0
                            
                            if (var_58_1 u>= 0x10)
                                int32_t var_120_21 = var_6c.d
                                sub_6b4d5b()
                            
                            int32_t var_58_3 = 0xf
                            int32_t var_5c_3 = 0
                            var_6c = 0
                            goto label_5308b8
                        
                        sub_405220(&var_50, &arg2[8])
                        var_4.b = 1
                        
                        if (var_3c_1 u>= 0x10)
                            int32_t var_120_18 = var_50.d
                            sub_6b4d5b()
                        
                        esi_5 += 1
                        int32_t var_3c_2 = 0xf
                        int32_t var_40_2 = 0
                        var_50 = 0
                    while (esi_5 s< var_80)
                
                int32_t* var_7c
                
                if (var_7c s>= 0 && var_7c s< i_2)
                    var_fc_2 = var_7c
                
                var_ec = 0
                int32_t var_f8
                int32_t var_e4
                int32_t var_78
                
                if (var_78 s> 0)
                    int32_t eax_89
                    
                    do
                        int32_t* ecx_10 = nullptr
                        void* ebp_3 = nullptr
                        int32_t i_1 = 0
                        BOOL lpMem_7 = 0
                        int32_t* var_c0_1 = nullptr
                        int32_t var_bc_1 = 0
                        void* var_b4 = nullptr
                        int32_t i = 0
                        int32_t var_ac_1 = 0
                        var_4.b = 5
                        
                        if (i_2 s< &var_fc_2[1])
                            if (var_58_1 u>= 0x10)
                                int32_t var_120_27 = var_6c.d
                                sub_6b4d5b()
                            
                            lpMem_1 = lpMem
                            int32_t var_58_4 = 0xf
                            int32_t var_5c_4 = 0
                            var_6c = 0
                            
                            if (lpMem_1 == 0)
                                goto label_53051a_1
                            
                            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                            lpMem_1.b = 0
                            goto label_5313c5
                        
                        BOOL i_3 = i_2
                        int32_t eax_43 = neg.d(i_3)
                        BOOL lpMem_5 = 0
                        lpMem_1 = *((sbb.d(eax_43, eax_43, i_3 != 0) & lpMem) + var_fc_2)
                        BOOL lpMem_6 = lpMem_1
                        void* edi_9 = &var_fc_2[1]
                        
                        if (lpMem_1 s> 0)
                            do
                                if (i_3 s< edi_9 + 4)
                                    void* ebp_6 = var_b4
                                    
                                    if (ebp_6 != 0)
                                        if (ebp_6 != i)
                                            void* esi_18 = ebp_6 + 8
                                            
                                            do
                                                int32_t eax_91 = *esi_18
                                                
                                                if (eax_91 != 0)
                                                    int32_t var_120_29 = eax_91
                                                    sub_6b4d5b()
                                                
                                                *esi_18 = 0
                                                *(esi_18 + 4) = 0
                                                *(esi_18 + 8) = 0
                                                esi_18 += 0x18
                                            while (esi_18 - 8 != i)
                                        
                                        void* var_120_30 = ebp_6
                                        sub_6b4d5b()
                                    
                                    BOOL lpMem_11 = lpMem_7
                                    
                                    if (lpMem_11 != 0)
                                        BOOL lpMem_15 = lpMem_11
                                        sub_6b4d5b()
                                    
                                    if (var_58_1 u>= 0x10)
                                        int32_t var_120_31 = var_6c.d
                                        sub_6b4d5b()
                                    
                                    lpMem_1 = lpMem
                                    int32_t var_58_5 = 0xf
                                    int32_t var_5c_5 = 0
                                    var_6c = 0
                                    
                                    if (lpMem_1 == 0)
                                        goto label_53051a_1
                                    
                                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                    lpMem_1.b = 0
                                    goto label_5313c5
                                
                                int32_t eax_47 = neg.d(i_2)
                                int32_t esi_6 = *((sbb.d(eax_47, eax_47, i_2 != 0) & lpMem) + edi_9)
                                edi_9 += 4
                                int32_t* edx_7 = &var_f8
                                var_f8 = esi_6
                                void* var_fc_3 = edi_9
                                BOOL lpMem_9
                                
                                if (&var_f8 u< ecx_10)
                                    lpMem_9 = lpMem_7
                                
                                if (&var_f8 u>= ecx_10 || lpMem_9 u> &var_f8)
                                    if (ecx_10 == var_bc_1)
                                        sub_40d3d0(&lpMem_7, edx_7, 1)
                                        ecx_10 = var_c0_1
                                    
                                    if (ecx_10 != 0)
                                        *ecx_10 = esi_6
                                else
                                    int32_t esi_8 = (&var_f8 - lpMem_9) s>> 2
                                    
                                    if (ecx_10 == var_bc_1)
                                        sub_40d3d0(&lpMem_7, edx_7, 1)
                                        ecx_10 = var_c0_1
                                        lpMem_9 = lpMem_7
                                    
                                    if (ecx_10 != 0)
                                        *ecx_10 = *(lpMem_9 + (esi_8 << 2))
                                
                                i_3 = i_2
                                lpMem_1 = lpMem_5 + 1
                                ecx_10 = &ecx_10[1]
                                var_c0_1 = ecx_10
                                lpMem_5 = lpMem_1
                            while (lpMem_1 s< lpMem_6)
                            
                            i_1 = i
                            ebp_3 = var_b4
                        
                        if (i_3 s< edi_9 + 4)
                            if (ebp_3 != 0)
                                if (ebp_3 != i_1)
                                    void* esi_19 = ebp_3 + 8
                                    
                                    do
                                        int32_t eax_93 = *esi_19
                                        
                                        if (eax_93 != 0)
                                            int32_t var_120_33 = eax_93
                                            sub_6b4d5b()
                                        
                                        *esi_19 = 0
                                        *(esi_19 + 4) = 0
                                        *(esi_19 + 8) = 0
                                        esi_19 += 0x18
                                    while (esi_19 - 8 != i_1)
                                
                                void* var_120_34 = ebp_3
                                sub_6b4d5b()
                            
                            if (lpMem_7 != 0)
                                BOOL lpMem_8 = lpMem_7
                                sub_6b4d5b()
                            
                            if (var_58_1 u>= 0x10)
                                int32_t var_120_35 = var_6c.d
                                sub_6b4d5b()
                            
                            bool cond:4_1 = lpMem == 0
                            int32_t var_58_6 = 0xf
                            int32_t var_5c_6 = 0
                            var_6c = 0
                            
                            if (cond:4_1)
                                goto label_53051a_1
                            
                            HeapFree(data_797df4, HEAP_NONE, lpMem)
                            lpMem_1.b = 0
                            goto label_5313c5
                        
                        int32_t eax_56 = neg.d(i_3)
                        var_fc_2 = edi_9 + 4
                        int32_t eax_59 = *((sbb.d(eax_56, eax_56, i_3 != 0) & lpMem) + edi_9)
                        var_e4 = eax_59
                        int32_t var_f0_1 = 0
                        
                        if (eax_59 s> 0)
                            int32_t eax_86
                            
                            do
                                int32_t esi_12 = 0
                                int32_t* edx_9 = nullptr
                                int32_t ebx_6 = 0
                                var_d8 = 0
                                int32_t* var_d4_2 = nullptr
                                int32_t var_d0_1 = 0
                                var_4.b = 6
                                
                                if (i_2 s< &var_fc_2[1])
                                    void* ebx_8 = var_b4
                                    
                                    if (ebx_8 != 0)
                                        if (ebx_8 != i)
                                            void* esi_20 = ebx_8 + 8
                                            
                                            do
                                                int32_t eax_96 = *esi_20
                                                
                                                if (eax_96 != 0)
                                                    int32_t var_120_37 = eax_96
                                                    sub_6b4d5b()
                                                
                                                *esi_20 = 0
                                                *(esi_20 + 4) = 0
                                                *(esi_20 + 8) = 0
                                                esi_20 += 0x18
                                            while (esi_20 - 8 != i)
                                        
                                        void* var_120_38 = ebx_8
                                        sub_6b4d5b()
                                    
                                    BOOL lpMem_12 = lpMem_7
                                    
                                    if (lpMem_12 != 0)
                                        BOOL lpMem_16 = lpMem_12
                                        sub_6b4d5b()
                                    
                                    if (var_58_1 u>= 0x10)
                                        int32_t var_120_39 = var_6c.d
                                        sub_6b4d5b()
                                    
                                    lpMem_1 = lpMem
                                    int32_t var_58_7 = 0xf
                                    int32_t var_5c_7 = 0
                                    var_6c = 0
                                    
                                    if (lpMem_1 == 0)
                                        goto label_53051a_1
                                    
                                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                    lpMem_1.b = 0
                                    goto label_5313c5
                                
                                BOOL lpMem_2 = lpMem
                                int32_t eax_61 = neg.d(i_2)
                                var_e0 = *(var_fc_2 + (sbb.d(eax_61, eax_61, i_2 != 0) & lpMem_2))
                                
                                if (i_2 s< &var_fc_2[2])
                                    void* ebx_9 = var_b4
                                    
                                    if (ebx_9 != 0)
                                        if (ebx_9 != i)
                                            void* esi_21 = ebx_9 + 8
                                            
                                            do
                                                int32_t eax_98 = *esi_21
                                                
                                                if (eax_98 != 0)
                                                    int32_t var_120_41 = eax_98
                                                    sub_6b4d5b()
                                                
                                                *esi_21 = 0
                                                *(esi_21 + 4) = 0
                                                *(esi_21 + 8) = 0
                                                esi_21 += 0x18
                                            while (esi_21 - 8 != i)
                                        
                                        void* var_120_42 = ebx_9
                                        sub_6b4d5b()
                                    
                                    lpMem_1 = lpMem_7
                                    
                                    if (lpMem_1 != 0)
                                        BOOL lpMem_4 = lpMem_1
                                        sub_6b4d5b()
                                    
                                    if (var_58_1 u>= 0x10)
                                        int32_t var_120_43 = var_6c.d
                                        sub_6b4d5b()
                                    
                                    int32_t var_58_8 = 0xf
                                    int32_t var_5c_8 = 0
                                    var_6c = 0
                                    
                                    if (lpMem_2 == 0)
                                        goto label_53051a_1
                                    
                                    HeapFree(data_797df4, HEAP_NONE, lpMem_2)
                                    lpMem_1.b = 0
                                    goto label_5313c5
                                
                                int32_t eax_66 = neg.d(i_2)
                                int32_t* ebp_4 = &var_fc_2[2]
                                var_fc_2 = ebp_4
                                var_dc =
                                    *(&var_fc_2[1] + (sbb.d(eax_66, eax_66, i_2 != 0) & lpMem_2))
                                var_e8 = 0
                                
                                if (var_e0 s> 0)
                                    while (i_2 s>= &ebp_4[1])
                                        int32_t eax_71 = neg.d(i_2)
                                        int32_t edi_12 =
                                            *((sbb.d(eax_71, eax_71, i_2 != 0) & lpMem) + ebp_4)
                                        ebp_4 = &ebp_4[1]
                                        var_f8 = edi_12
                                        var_fc_2 = ebp_4
                                        
                                        if (&var_f8 u>= edx_9 || esi_12 u> &var_f8)
                                            if (edx_9 == ebx_6)
                                                int32_t eax_80 = (edx_9 - esi_12) s>> 2
                                                
                                                if (eax_80 u> 0x3ffffffe)
                                                    sub_6b47bf("vector<T> too long")
                                                    noreturn
                                                
                                                int32_t ecx_24 = (ebx_6 - esi_12) s>> 2
                                                
                                                if (eax_80 + 1 u> ecx_24)
                                                    uint32_t edx_13 = ecx_24 u>> 1
                                                    int32_t ecx_25
                                                    
                                                    if (0x3fffffff - edx_13 u>= ecx_24)
                                                        ecx_25 = ecx_24 + edx_13
                                                    else
                                                        ecx_25 = 0
                                                    
                                                    if (ecx_25 u< eax_80 + 1)
                                                        ecx_25 = eax_80 + 1
                                                    
                                                    sub_6b0560(&var_d8, ecx_25)
                                                    ebx_6 = var_d0_1
                                                    edx_9 = var_d4_2
                                                    esi_12 = var_d8
                                            
                                            if (edx_9 != 0)
                                                *edx_9 = edi_12
                                        else
                                            int32_t edi_14 = (&var_f8 - esi_12) s>> 2
                                            
                                            if (edx_9 == ebx_6)
                                                int32_t eax_76 = (edx_9 - esi_12) s>> 2
                                                
                                                if (eax_76 u> 0x3ffffffe)
                                                    sub_6b47bf("vector<T> too long")
                                                    noreturn
                                                
                                                int32_t ecx_19 = (ebx_6 - esi_12) s>> 2
                                                
                                                if (eax_76 + 1 u> ecx_19)
                                                    uint32_t edx_11 = ecx_19 u>> 1
                                                    int32_t ecx_20
                                                    
                                                    if (0x3fffffff - edx_11 u>= ecx_19)
                                                        ecx_20 = ecx_19 + edx_11
                                                    else
                                                        ecx_20 = 0
                                                    
                                                    if (ecx_20 u< eax_76 + 1)
                                                        ecx_20 = eax_76 + 1
                                                    
                                                    sub_6b0560(&var_d8, ecx_20)
                                                    ebx_6 = var_d0_1
                                                    edx_9 = var_d4_2
                                                    esi_12 = var_d8
                                            
                                            if (edx_9 != 0)
                                                *edx_9 = *(esi_12 + (edi_14 << 2))
                                        
                                        int32_t eax_83 = var_e8 + 1
                                        edx_9 = &edx_9[1]
                                        var_d4_2 = edx_9
                                        var_e8 = eax_83
                                        
                                        if (eax_83 s>= var_e0)
                                            goto label_530b52
                                    
                                    if (esi_12 != 0)
                                        int32_t var_120_45 = esi_12
                                        sub_6b4d5b()
                                    
                                    void* ebx_10 = var_b4
                                    
                                    if (ebx_10 != 0)
                                        if (ebx_10 != i)
                                            void* esi_22 = ebx_10 + 8
                                            
                                            do
                                                int32_t eax_100 = *esi_22
                                                
                                                if (eax_100 != 0)
                                                    int32_t var_120_46 = eax_100
                                                    sub_6b4d5b()
                                                
                                                *esi_22 = 0
                                                *(esi_22 + 4) = 0
                                                *(esi_22 + 8) = 0
                                                esi_22 += 0x18
                                            while (esi_22 - 8 != i)
                                        
                                        void* var_120_47 = ebx_10
                                        sub_6b4d5b()
                                    
                                    BOOL lpMem_13 = lpMem_7
                                    
                                    if (lpMem_13 != 0)
                                        BOOL lpMem_17 = lpMem_13
                                        sub_6b4d5b()
                                    
                                    if (var_58_1 u>= 0x10)
                                        int32_t var_120_48 = var_6c.d
                                        sub_6b4d5b()
                                    
                                    lpMem_1 = lpMem
                                    int32_t var_58_9 = 0xf
                                    int32_t var_5c_9 = 0
                                    var_6c = 0
                                    
                                    if (lpMem_1 == 0)
                                        goto label_53051a_1
                                    
                                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                    lpMem_1.b = 0
                                    goto label_5313c5
                                
                            label_530b52:
                                sub_531c10(&var_e0, &var_b4)
                                var_4.b = 5
                                int32_t eax_84 = var_d8
                                
                                if (eax_84 != 0)
                                    int32_t var_120_24 = eax_84
                                    sub_6b4d5b()
                                
                                eax_86 = var_f0_1 + 1
                                var_f0_1 = eax_86
                            while (eax_86 s< var_e4)
                        
                        sub_534de0(&lpMem_6, &arg2[0xc])
                        var_4.b = 1
                        void* ebp_5 = var_b4
                        
                        if (ebp_5 != 0)
                            if (ebp_5 != i)
                                int32_t* esi_17 = ebp_5 + 8
                                
                                do
                                    int32_t eax_87 = *esi_17
                                    
                                    if (eax_87 != 0)
                                        int32_t var_120_25 = eax_87
                                        sub_6b4d5b()
                                    
                                    *esi_17 = 0
                                    esi_17[1] = 0
                                    esi_17[2] = 0
                                    esi_17 = &esi_17[6]
                                while (&esi_17[-2] != i)
                            
                            void* var_120_26 = ebp_5
                            sub_6b4d5b()
                        
                        BOOL lpMem_10 = lpMem_7
                        
                        if (lpMem_10 != 0)
                            BOOL lpMem_14 = lpMem_10
                            sub_6b4d5b()
                        
                        eax_89 = var_ec + 1
                        var_ec = eax_89
                    while (eax_89 s< var_78)
                
                BOOL var_74
                
                if (var_74 s>= 0 && var_74 s< i_2)
                    var_fc_2 = var_74
                
                BOOL lpMem_3 = lpMem
                int32_t esi_23 = 0
                int32_t var_70
                
                if (var_70 s> 0)
                    do
                        if (i_2 s< &var_fc_2[1])
                            if (var_58_1 u>= 0x10)
                                int32_t var_120_52 = var_6c.d
                                sub_6b4d5b()
                            
                            int32_t var_58_10 = 0xf
                            int32_t var_5c_10 = 0
                            var_6c = 0
                            
                            if (lpMem_3 == 0)
                                goto label_53051a_1
                            
                            HeapFree(data_797df4, HEAP_NONE, lpMem_3)
                            lpMem_1.b = 0
                            goto label_5313c5
                        
                        int32_t eax_103 = neg.d(i_2)
                        var_e4 = *((sbb.d(eax_103, eax_103, i_2 != 0) & lpMem_3) + var_fc_2)
                        var_fc_2 = &var_fc_2[1]
                        sub_416780(&var_e4, &arg2[0x10])
                        esi_23 += 1
                    while (esi_23 s< var_70)
                
                if (i_2 s< &var_fc_2[1])
                    if (var_58_1 u>= 0x10)
                        int32_t var_120_54 = var_6c.d
                        sub_6b4d5b()
                    
                    int32_t var_58_11 = 0xf
                    int32_t var_5c_11 = 0
                    var_6c = 0
                    
                    if (lpMem_3 == 0)
                    label_53051a:
                        lpMem_1.b = 0
                    else
                        HeapFree(data_797df4, HEAP_NONE, lpMem_3)
                        lpMem_1.b = 0
                else
                    int32_t eax_108 = neg.d(i_2)
                    int32_t esi_24 = *((sbb.d(eax_108, eax_108, i_2 != 0) & lpMem_3) + var_fc_2)
                    void** edi_25 = &arg2[0x14]
                    var_e4 = esi_24
                    void* var_fc_4 = &var_fc_2[1]
                    void** var_f4_1 = edi_25
                    sub_531f40(esi_24, edi_25)
                    var_e8 = 0
                    
                    if (esi_24 s> 0)
                        int32_t var_f0_2 = 0
                        
                        while (true)
                            int32_t* ebx_13 = *edi_25 + var_f0_2
                            
                            if (sub_5568e0(&lpMem, ebx_13) == 0)
                                if (var_58_1 u>= 0x10)
                                    int32_t var_120_57 = var_6c.d
                                    sub_6b4d5b()
                                
                                lpMem_1 = lpMem
                                int32_t var_58_12 = 0xf
                                int32_t var_5c_12 = 0
                                var_6c = 0
                                
                                if (lpMem_1 == 0)
                                    goto label_53051a_1
                                
                                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                lpMem_1.b = 0
                                goto label_5313c5
                            
                            BOOL i_4 = i_2
                            
                            if (i_4 s< var_fc_4 + 4)
                                if (var_58_1 u>= 0x10)
                                    int32_t var_120_59 = var_6c.d
                                    sub_6b4d5b()
                                
                                lpMem_1 = lpMem
                                int32_t var_58_13 = 0xf
                                int32_t var_5c_13 = 0
                                var_6c = 0
                                
                                if (lpMem_1 == 0)
                                    goto label_53051a_1
                                
                                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                lpMem_1.b = 0
                                goto label_5313c5
                            
                            int32_t eax_114 = neg.d(i_4)
                            void* ebp_7 = var_fc_4 + 4
                            int32_t edi_26 =
                                *((sbb.d(eax_114, eax_114, i_4 != 0) & lpMem) + var_fc_4)
                            var_fc_4 = ebp_7
                            sub_531cd0(edi_26, &ebx_13[7])
                            var_ec = 0
                            
                            if (edi_26 s> 0)
                                var_f8 = 0
                                
                                while (true)
                                    if (i_4 s< ebp_7 + 4)
                                        if (var_58_1 u>= 0x10)
                                            int32_t var_120_61 = var_6c.d
                                            sub_6b4d5b()
                                        
                                        bool cond:5_1 = lpMem == 0
                                        int32_t var_58_14 = 0xf
                                        int32_t var_5c_14 = 0
                                        var_6c = 0
                                        
                                        if (cond:5_1)
                                            break
                                        
                                        HeapFree(data_797df4, HEAP_NONE, lpMem)
                                        lpMem_1.b = 0
                                        goto label_5313c5
                                    
                                    int32_t esi_25 = neg.d(i_4)
                                    int32_t* eax_120 = ebx_13[7] + var_f8 + 4
                                    eax_120[-1] =
                                        *((sbb.d(esi_25, esi_25, i_4 != 0) & lpMem) + ebp_7)
                                    var_fc_4 = ebp_7 + 4
                                    
                                    if (sub_5568e0(&lpMem, eax_120) == 0)
                                        if (var_58_1 u>= 0x10)
                                            int32_t var_120_63 = var_6c.d
                                            sub_6b4d5b()
                                        
                                        lpMem_1 = lpMem
                                        int32_t var_58_15 = 0xf
                                        int32_t var_5c_15 = 0
                                        var_6c = 0
                                        
                                        if (lpMem_1 == 0)
                                            break
                                        
                                        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                                        lpMem_1.b = 0
                                        goto label_5313c5
                                    
                                    int32_t eax_122 = var_ec
                                    var_f8 += 0x20
                                    var_ec = eax_122 + 1
                                    
                                    if (eax_122 + 1 s>= edi_26)
                                        goto label_5311ec
                                    
                                    ebp_7 = var_fc_4
                                    i_4 = i_2
                                
                                goto label_53051a_1
                            
                        label_5311ec:
                            var_f0_2 += 0x2c
                            int32_t eax_125 = var_e8 + 1
                            var_e8 = eax_125
                            
                            if (eax_125 s>= var_e4)
                                break
                            
                            edi_25 = var_f4_1
                    
                    if (var_58_1 u>= 0x10)
                        int32_t var_120_65 = var_6c.d
                        sub_6b4d5b()
                    
                    lpMem_1 = lpMem
                    int32_t var_58_16 = 0xf
                    int32_t var_5c_16 = 0
                    var_6c = 0
                    
                    if (lpMem_1 != 0)
                        HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                    
                    lpMem_1.b = 1
            else
                int32_t var_120_9 = var_a0
                sub_604c90(0x751cac)
            label_53050c:
                sub_401110(&var_6c)
                sub_560430(&lpMem)
            label_53051a_1:
                lpMem_1.b = 0
        else
            int32_t* eax_12
            
            if (arg3[5] u< 0x10)
                eax_12 = arg3
            else
                eax_12 = *arg3
            
            int32_t* var_120_7 = eax_12
            int32_t ebx_1
            ebx_1.b = sub_604c90(0x751c6c)
            sub_401110(&var_6c)
            lpMem_1 = lpMem
            
            if (lpMem_1 != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem_1)
            
            lpMem_1.b = ebx_1.b
    else
        if (var_58_1 u>= 0x10)
            int32_t var_120_3 = var_6c.d
            sub_6b4d5b()
        
        lpMem_1 = lpMem
        int32_t var_58_2 = 0xf
        int32_t var_5c_2 = 0
        var_6c = 0
        
        if (lpMem_1 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_1)
        
        lpMem_1.b = 0

label_5313c5:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &lpMem)
return lpMem_1
