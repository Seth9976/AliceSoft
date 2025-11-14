// 函数: sub_556a40
// 地址: 0x556a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721f11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e0
int32_t eax_2 = data_78c474 ^ &var_e0
int32_t __saved_edi
int32_t var_f4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL lpMem_1 = 0
int32_t var_d8 = 0
int32_t var_d4 = 0
int32_t var_d0 = 0
int32_t var_4 = 0
*(arg3 + 0x10) = 0
int32_t* var_c0 = nullptr
int32_t var_bc = 0
int32_t var_b8 = 0
var_4.b = 1
sub_558da0(arg6, arg2, &var_c0, arg4, arg5)
int32_t var_8c = 0
int32_t var_88 = 0xf
char var_9c = 0
int32_t ebx
ebx.b = sub_560510(&var_9c, sub_401270(&var_9c, 3, 0x74c8f0), &lpMem_1) == 0

if (var_88 u>= 0x10)
    int32_t var_f8_1 = var_9c.d
    sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c_1 = 0
var_9c = 0
BOOL lpMem

if (ebx.b == 0)
    char eax_11
    int32_t edx_2
    eax_11, edx_2 = sub_5604b0(&lpMem_1, 9)
    
    if (eax_11 != 0)
        if (sub_560510(arg5, edx_2, &lpMem_1) != 0)
            int32_t* ebx_1 = var_c0
            int32_t esi_8 = (var_bc - ebx_1) s/ 0x1c
            char eax_17
            int32_t edx_7
            eax_17, edx_7 = sub_5604b0(&lpMem_1, esi_8)
            
            if (eax_17 != 0)
                int32_t edi_3 = 0
                
                if (esi_8 s> 0)
                    while (true)
                        char eax_20
                        eax_20, edx_7 = sub_560510(ebx_1, edx_7, &lpMem_1)
                        
                        if (eax_20 == 0)
                            break
                        
                        edi_3 += 1
                        ebx_1 = &ebx_1[7]
                        
                        if (edi_3 s>= esi_8)
                            goto label_556c8d
                    
                    goto label_556cc0
                
            label_556c8d:
                
                if (sub_5581a0(*(arg1 + 0x28c) - *(arg1 + 0x290), &lpMem_1, arg1) != 0)
                    if (sub_5604b0(&lpMem_1, 0) == 0)
                    label_556cc0:
                        sub_4054e0(&var_c0)
                        lpMem = lpMem_1
                        
                        if (lpMem != 0)
                            HeapFree(data_797df4, HEAP_NONE, lpMem)
                        
                        lpMem.b = 0
                    else
                        int32_t var_cc = 0
                        int32_t var_c8_1 = 0
                        int32_t var_c4_1 = 0
                        var_4.b = 2
                        sub_55ee00(&var_cc, arg1 + 0x2a4)
                        int32_t* eax_129
                        
                        if (sub_5596c0(&lpMem_1, &var_cc) != 0)
                            int32_t* edi_4 = &lpMem_1
                            
                            if (sub_537480(arg1 + 0x6b8, edi_4) == 0)
                                goto label_556d25
                            
                            if (sub_537480(arg1 + 0xabc, edi_4) == 0)
                                goto label_556d25
                            
                            if (sub_537480(arg1 + 0xec0, edi_4) == 0)
                                goto label_556d25
                            
                            if (sub_558220(edi_4, arg1) == 0)
                                goto label_556d25
                            
                            if (sub_5604b0(&lpMem_1, *(arg1 + 0x1f4)) == 0)
                                goto label_556d25
                            
                            if (sub_5604b0(&lpMem_1, 0) == 0)
                                goto label_556d25
                            
                            if (sub_5604b0(&lpMem_1, 0) == 0)
                                goto label_556d25
                            
                            if (sub_5604b0(&lpMem_1, *(arg1 + 0x1f8)) == 0)
                                goto label_556d25
                            
                            if (sub_5604b0(&lpMem_1, (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                    == 0)
                                goto label_556d25
                            
                            int32_t eax_46 = *(arg1 + 0x1e4)
                            int32_t i_1 = 0
                            
                            if (((*(arg1 + 0x1e8) - eax_46) & 0xfffffffc) s> 0)
                                int32_t i
                                
                                do
                                    int32_t* ebp_1 = *(eax_46 + (i_1 << 2))
                                    char eax_48
                                    
                                    if (ebp_1 != 0)
                                        if (sub_5604b0(&lpMem_1, ebp_1[3]) == 0)
                                            goto label_556d25
                                        
                                        if (sub_5604b0(&lpMem_1, ebp_1[4]) == 0)
                                            goto label_556d25
                                        
                                        if (sub_5604b0(&lpMem_1, ebp_1[6]) == 0)
                                            goto label_556d25
                                        
                                        int32_t eax_58 = ebp_1[3]
                                        
                                        if (eax_58 u> 5)
                                            goto label_556d25
                                        
                                        void* var_f8_22
                                        char eax_79
                                        
                                        switch (eax_58)
                                            case 0
                                                if (sub_5604b0(&lpMem_1, 0xffffffff) == 0)
                                                    goto label_556d25
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[9]) == 0)
                                                    goto label_556d25
                                                
                                                var_f8_22 = &ebp_1[8]
                                            label_5571ba:
                                                eax_79 = sub_560630(&lpMem_1, var_f8_22)
                                                goto label_5571bf
                                            case 1
                                                int32_t ecx_12 = ebp_1[7]
                                                
                                                if (ecx_12 == 0xffffffff)
                                                label_556ef7:
                                                    bool cond:1_1 = sub_560510(&var_9c, 
                                                        sub_402be0(&var_9c, 0x72d952), &lpMem_1) == 0
                                                    sub_401110(&var_9c)
                                                    
                                                    if (cond:1_1 != 0)
                                                        goto label_556d25
                                                else
                                                    int32_t eax_64
                                                    int32_t edx_13
                                                    edx_13:eax_64 = muls.dp.d(0x6bca1af3, 
                                                        *(arg1 + 0xbc) - *(arg1 + 0xb8))
                                                    int32_t edx_14 = edx_13 s>> 5
                                                    
                                                    if (ecx_12 u>= (edx_14 u>> 0x1f) + edx_14)
                                                        goto label_556ef7
                                                    
                                                    int32_t ecx_13 = ecx_12 * 0x4c
                                                    
                                                    if (ecx_13 == neg.d(*(arg1 + 0xb8)))
                                                        goto label_556ef7
                                                    
                                                    int32_t* eax_68 = ecx_13 + *(arg1 + 0xb8) + 4
                                                    
                                                    if (eax_68 == 0)
                                                        goto label_556ef7
                                                    
                                                    if (sub_560510(eax_68, edx_14, &lpMem_1) == 0)
                                                        goto label_556d25
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[9]) == 0)
                                                    goto label_556d25
                                                
                                                if (sub_560630(&lpMem_1, &ebp_1[8]) == 0)
                                                    goto label_556d25
                                                
                                                eax_79 = sub_5604b0(&lpMem_1, ebp_1[0x11])
                                                goto label_5571bf
                                            case 2
                                                int32_t eax_80
                                                eax_80.b = *(ebp_1 + 0x2d) != 0
                                                eax_79 = sub_5604b0(&lpMem_1, eax_80)
                                            label_5571bf:
                                                
                                                if (eax_79 == 0)
                                                    goto label_556d25
                                                
                                                goto label_5571cf
                                            case 3
                                                if (sub_5604b0(&lpMem_1, ebp_1[0xc]) == 0)
                                                    goto label_556d25
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[0xd]) == 0)
                                                    goto label_556d25
                                                
                                                int32_t edi_5 = ebp_1[0xe]
                                                int32_t* eax_86
                                                int32_t edx_18
                                                
                                                if (edi_5 != 0xffffffff)
                                                    eax_86, edx_18 = sub_5586e0(arg1 + 0x4c, edi_5)
                                                
                                                if (edi_5 != 0xffffffff && eax_86 != 0)
                                                    if (sub_560510(eax_86, edx_18, &lpMem_1) == 0)
                                                        goto label_556d25
                                                else
                                                    void var_80
                                                    bool cond:2_1 = sub_560510(&var_80, 
                                                        sub_402be0(&var_80, 0x72d953), &lpMem_1) == 0
                                                    sub_401110(&var_80)
                                                    
                                                    if (cond:2_1 != 0)
                                                        goto label_556d25
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[0xf]) == 0)
                                                    goto label_556d25
                                                
                                                int32_t ecx_23
                                                ecx_23.b = ebp_1[0x10].b != 0
                                                eax_79 = sub_5604b0(&lpMem_1, ecx_23)
                                                goto label_5571bf
                                            case 4
                                                void* eax_95
                                                int32_t edx_20
                                                eax_95, edx_20 = sub_550330(ebp_1)
                                                
                                                if (eax_95 == 0)
                                                    goto label_556d25
                                                
                                                int32_t ecx_25 = *(eax_95 + 0x2c)
                                                int32_t edi_6 = *(eax_95 + 0x30)
                                                int32_t* var_b0_1
                                                
                                                if (ecx_25 != 0xffffffff)
                                                    int32_t* eax_96
                                                    eax_96, edx_20 = sub_558720(ecx_25, arg1 + 0x4c)
                                                    var_b0_1 = eax_96
                                                else
                                                    var_b0_1 = nullptr
                                                
                                                int32_t* esi_20
                                                
                                                if (edi_6 != 0xffffffff)
                                                    int32_t* eax_97
                                                    eax_97, edx_20 = sub_558720(edi_6, arg1 + 0x4c)
                                                    esi_20 = eax_97
                                                else
                                                    esi_20 = nullptr
                                                
                                                int32_t edx_22
                                                
                                                if (var_b0_1 != 0)
                                                    char eax_102
                                                    eax_102, edx_22 =
                                                        sub_560510(var_b0_1, edx_20, &lpMem_1)
                                                    
                                                    if (eax_102 == 0)
                                                        goto label_556d25
                                                else
                                                    void var_48
                                                    bool cond:3_1 = sub_560510(&var_48, 
                                                        sub_402be0(&var_48, 0x72d965), &lpMem_1) == 0
                                                    edx_22 = sub_401110(&var_48)
                                                    
                                                    if (cond:3_1 != 0)
                                                        goto label_556d25
                                                
                                                if (esi_20 != 0)
                                                    if (sub_560510(esi_20, edx_22, &lpMem_1) == 0)
                                                        goto label_556d25
                                                else
                                                    void var_64
                                                    bool cond:5_1 = sub_560510(&var_64, 
                                                        sub_402be0(&var_64, 0x72d966), &lpMem_1) == 0
                                                    sub_401110(&var_64)
                                                    
                                                    if (cond:5_1 != 0)
                                                        goto label_556d25
                                                
                                                int32_t edx_24
                                                edx_24.b = ebp_1[0xb].b != 0
                                                char eax_109
                                                int32_t edx_25
                                                eax_109, edx_25 = sub_5604b0(&lpMem_1, edx_24)
                                                
                                                if (eax_109 == 0)
                                                    goto label_556d25
                                                
                                                int32_t* eax_111
                                                int32_t edx_26
                                                eax_111, edx_26 =
                                                    sub_558690(arg1 + 0x4c, edx_25, ebp_1[7])
                                                
                                                if (eax_111 != 0)
                                                    if (sub_560510(eax_111, edx_26, &lpMem_1) == 0)
                                                        goto label_556d25
                                                else
                                                    void var_2c
                                                    bool cond:7_1 = sub_560510(&var_2c, 
                                                        sub_402be0(&var_2c, 0x72d967), &lpMem_1) == 0
                                                    sub_401110(&var_2c)
                                                    
                                                    if (cond:7_1 != 0)
                                                        goto label_556d25
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[9]) == 0)
                                                    goto label_556d25
                                                
                                                var_f8_22 = &ebp_1[8]
                                                goto label_5571ba
                                            case 5
                                            label_5571cf:
                                                
                                                if (sub_5604b0(&lpMem_1, ebp_1[1]) == 0)
                                                    goto label_556d25
                                                
                                                if (ebp_1[1] u> 0)
                                                    void* eax_124 = ebp_1[1]
                                                    int128_t* ebp_2
                                                    
                                                    if (eax_124 != 0)
                                                        ebp_2 = *ebp_1
                                                    else
                                                        ebp_2 = nullptr
                                                    
                                                    if (eax_124 != 0)
                                                        eax_48 =
                                                            sub_560450(&lpMem_1, ebp_2, eax_124)
                                                        goto label_5571ff
                                    else
                                        eax_48 = sub_5604b0(&lpMem_1, 0xffffffff)
                                    label_5571ff:
                                        
                                        if (eax_48 == 0)
                                            goto label_556d25
                                    eax_46 = *(arg1 + 0x1e4)
                                    i = i_1 + 1
                                    i_1 = i
                                while (i s< (*(arg1 + 0x1e8) - eax_46) s>> 2)
                            
                            if (sub_5584e0(&lpMem_1, arg1) == 0)
                                goto label_556d25
                            
                            eax_129 = &var_cc
                            
                            if (sub_559990(arg2, arg6, arg4, &lpMem_1, 1) == 0)
                                goto label_556d29
                            
                            sub_4279f0(eax_129)
                            sub_4054e0(&var_c0)
                            sub_560430(&lpMem_1)
                            lpMem.b = 1
                        else
                        label_556d25:
                            eax_129 = &var_cc
                        label_556d29:
                            sub_4279f0(eax_129)
                            sub_4054e0(&var_c0)
                            sub_560430(&lpMem_1)
                            lpMem.b = 0
                else
                    sub_4054e0(&var_c0)
                    lpMem = lpMem_1
                    
                    if (lpMem != 0)
                        HeapFree(data_797df4, HEAP_NONE, lpMem)
                    
                    lpMem.b = 0
            else
                sub_4054e0(&var_c0)
                lpMem = lpMem_1
                
                if (lpMem == 0)
                    lpMem.b = 0
                else
                    HeapFree(data_797df4, HEAP_NONE, lpMem)
                    lpMem.b = 0
        else
            sub_4054e0(&var_c0)
            lpMem = lpMem_1
            
            if (lpMem != 0)
                HeapFree(data_797df4, HEAP_NONE, lpMem)
            
            lpMem.b = 0
    else
        int32_t* esi_4 = var_c0
        
        if (esi_4 != 0)
            sub_405780(esi_4, var_bc)
            int32_t* var_f8_4 = esi_4
            sub_6b4d5b()
        
        lpMem = lpMem_1
        
        if (lpMem != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem)
        
        lpMem.b = 0
else
    int32_t* esi_3 = var_c0
    
    if (esi_3 != 0)
        sub_405780(esi_3, var_bc)
        int32_t* var_f8_2 = esi_3
        sub_6b4d5b()
    
    lpMem = lpMem_1
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)
    
    lpMem.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_e0)
return lpMem
