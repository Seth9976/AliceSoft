// 函数: sub_5572c0
// 地址: 0x5572c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* lpMem_1)(void* arg1) = sub_723a2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
int32_t* edx
ecx, edx = __chkstk(0x10f4)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
int32_t arg_10e8
fsbase->NtTib.ExceptionList = &arg_10e8
void** ebx = arg3
arg1[4] = 0
void* eax_6 = &arg1[5]
bool cond:0 = *(eax_6 + 0x14) u< 0x10
*(eax_6 + 0x10) = 0

if (not(cond:0))
    eax_6 = *eax_6

*eax_6 = 0
void* arg_34
sub_405410(arg1, &arg_34, *arg1, arg1[1])
lpMem_1 = nullptr
int32_t var_4 = 0
__builtin_memset(&__return_addr, 0, 8)
int32_t arg_10f0 = 0
int32_t (* lpMem)(void* arg1)

if (sub_559b90(edx, arg4, arg2, &lpMem_1, 1) != 0)
    int32_t arg_68 = 0xf
    int32_t arg_64 = 0
    char arg_54 = 0
    arg_10f0.b = 1
    
    if (sub_5568e0(&lpMem_1, &arg_54) == 0)
        if (arg_68 u>= 0x10)
            int32_t var_24_3 = arg_54.d
            sub_6b4d5b()
        
        arg_68 = 0xf
        arg_64 = 0
        arg_54 = 0
        goto label_558141
    
    int32_t arg_20
    
    if (sub_402680(0x74c8f4, &arg_54) != 0)
        if (sub_556800(&lpMem_1, &arg_20) == 0)
            sub_401110(&arg_54)
            lpMem = lpMem_1
            
            if (lpMem == 0)
                lpMem.b = 0
            else
                int32_t var_28_5 = 0
                HeapFree(data_797df4, HEAP_NONE, lpMem)
                lpMem.b = 0
        else if (arg_20 u> 9)
            sub_401110(&arg_54)
        label_558141:
            lpMem = lpMem_1
            
            if (lpMem == 0)
                lpMem.b = 0
            else
                int32_t var_28_15 = 0
                HeapFree(data_797df4, HEAP_NONE, lpMem)
                lpMem.b = 0
        else
            int32_t arg_84 = 0xf
            int32_t arg_80 = 0
            char arg_70 = 0
            arg_10f0.b = 2
            
            if (sub_5568e0(&lpMem_1, &arg_70) == 0)
                goto label_5575e1
            
            int32_t esi_1 = ebx[4]
            
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            int32_t eax_14 = arg_80
            
            if (arg_80 u>= esi_1)
                eax_14 = esi_1
            
            int32_t* edx_5 = arg_70.d
            
            if (arg_84 u< 0x10)
                edx_5 = &arg_70
            
            int32_t eax_15 = sub_402320(eax_14, edx_5, ebx, eax_14)
            bool cond:1_1 = eax_15 == 0
            
            if (eax_15 == 0)
                if (arg_80 u>= esi_1)
                    eax_15.b = arg_80 != esi_1
                else
                    eax_15 = 0xffffffff
                
                cond:1_1 = eax_15 == 0
            
            eax_15.b = cond:1_1
            eax_15.b = eax_15.b == 0
            
            if (eax_15.b != 0)
                goto label_5575e1
            
            int32_t ebx_1 = arg_20
            int32_t arg_30
            char arg_a8
            int32_t arg_b8
            int32_t arg_bc
            
            if (ebx_1 s>= 7)
                if (sub_556800(&lpMem_1, &arg_30) == 0)
                    goto label_5575e1
                
                int32_t edi_3 = arg_30
                int32_t esi_2 = 0
                
                if (edi_3 s> 0)
                    do
                        arg_bc = 0xf
                        arg_b8 = 0
                        arg_a8 = 0
                        arg_10f0.b = 3
                        char* ecx_7 = &arg_a8
                        
                        if (sub_5568e0(&lpMem_1, &arg_a8) == 0)
                            sub_401110(ecx_7)
                            goto label_5575e1
                        
                        arg_10f0.b = 2
                        sub_401110(ecx_7)
                        esi_2 += 1
                    while (esi_2 s< edi_3)
                
                goto label_5575b1
            
        label_5575b1:
            int32_t* arg_8
            void* ebx_2
            int32_t* ebp_1
            
            if (ebx_1 s>= 4)
                ebp_1 = arg1
                ebx_2 = ecx
                
                if (sub_5582e0(&lpMem_1, ebx_2, ebp_1, &arg_8) != 0)
                    goto label_557620
                
                goto label_5575e1
            
            if (sub_556800(&lpMem_1, &arg_8) == 0)
                goto label_5575e1
            
            ebp_1 = arg1
            ebx_2 = ecx
        label_557620:
            
            if (sub_556800(&lpMem_1, &arg_34) == 0)
                goto label_5575e1
            
            int32_t arg_c = 0
            int32_t arg_10 = 0
            int32_t arg_14 = 0
            arg_10f0.b = 4
            
            if (sub_559770(&arg_c, &lpMem_1) == 0)
            label_55784a:
                sub_4279f0(&arg_c)
            label_5575e1:
                sub_401110(&arg_70)
                sub_401110(&arg_54)
                sub_560430(&lpMem_1)
                lpMem.b = 0
            else
                int128_t arg_c4[0x40]
                int128_t (* arg_4c4)[0x40] = &arg_c4
                sub_6bc670(&arg_c4, 0, 0x400)
                
                if (arg_20 s<= 3 && sub_5374c0(&lpMem_1, &arg_c4) == 0)
                    goto label_55784a
                
                int128_t arg_4cc[0x40]
                int128_t (* arg_8cc)[0x40] = &arg_4cc
                sub_6bc670(&arg_4cc, 0, 0x400)
                int128_t arg_cdc[0x40]
                int128_t (* arg_10dc)[0x40] = &arg_cdc
                sub_6bc670(&arg_cdc, 0, 0x400)
                int128_t arg_8d4[0x40]
                int128_t (* arg_cd4)[0x40] = &arg_8d4
                sub_6bc670(&arg_8d4, 0, 0x400)
                int32_t* esi_4 = &lpMem_1
                
                if (sub_5374c0(esi_4, &arg_4cc) == 0)
                    goto label_55784a
                
                if (sub_5374c0(esi_4, &arg_8d4) == 0)
                    goto label_55784a
                
                if (sub_5374c0(esi_4, &arg_cdc) == 0)
                    goto label_55784a
                
                if (arg_20 s>= 4 && sub_558460(&arg_c4, ebp_1, &lpMem_1, ebx_2) == 0)
                    goto label_55784a
                
                *(ebx_2 + 0x28c) = *(ebx_2 + 0x290) + arg_8
                sub_55ed80(ebx_2 + 0x2a4, &arg_c)
                sub_537440(&arg_c4, ebx_2 + 0x2b4)
                sub_537440(&arg_4cc, ebx_2 + 0x6b8)
                sub_537440(&arg_8d4, ebx_2 + 0xabc)
                sub_537440(&arg_cdc, ebx_2 + 0xec0)
                
                if (sub_556800(&lpMem_1, ebx_2 + 0x1f4) == 0)
                    goto label_55784a
                
                int32_t arg_28
                
                if (sub_556800(&lpMem_1, &arg_28) == 0)
                    goto label_55784a
                
                void* arg_1c
                
                if (sub_556800(&lpMem_1, &arg_1c) == 0)
                    goto label_55784a
                
                void* edi_9 = arg_1c
                int32_t esi_11 = 0
                
                if (edi_9 s> 0)
                    do
                        if (sub_556800(&lpMem_1, &arg_28) == 0)
                            goto label_55784a
                        
                        if (sub_556800(&lpMem_1, &arg_34) == 0)
                            goto label_55784a
                        
                        esi_11 += 1
                    while (esi_11 s< edi_9)
                
                if (arg_20 s< 9)
                    *(ebx_2 + 0x1f8) = 1
                else if (sub_556800(&lpMem_1, ebx_2 + 0x1f8) == 0)
                    goto label_55784a
                
                sub_552760(ebx_2 + 0x1dc)
                
                if (sub_556800(&lpMem_1, &arg_30) == 0)
                    goto label_55784a
                
                int32_t arg_44 = 0
                
                if (arg_30 s> 0)
                    int32_t eax_145
                    
                    do
                        arg_8 = nullptr
                        
                        if (sub_556800(&lpMem_1, &arg_8) == 0)
                            goto label_55784a
                        
                        int32_t* ebp_2 = arg_8
                        
                        if (ebp_2 != 0xffffffff)
                            int32_t ebx_4 = arg_20
                            int32_t edi_13
                            int32_t arg_38
                            
                            if (ebx_4 s< 1)
                                edi_13 = 1
                                arg_38 = 1
                            else
                                if (sub_556800(&lpMem_1, &arg_38) == 0)
                                    goto label_55784a
                                
                                edi_13 = arg_38
                            int32_t esi_12
                            int32_t arg_40
                            
                            if (ebx_4 s< 9)
                                esi_12 = 0
                                arg_40 = 0
                            else
                                if (sub_556800(&lpMem_1, &arg_40) == 0)
                                    goto label_55784a
                                
                                esi_12 = arg_40
                            
                            if (ebp_2 u> 5)
                                goto label_55784a
                            
                            void** var_24_33
                            int128_t* var_24_34
                            void arg_3c
                            char arg_8c
                            int32_t arg_9c
                            int32_t arg_a0
                            char* ecx_29
                            int32_t* ebp_3
                            int32_t* esi_20
                            void* edi_19
                            
                            switch (ebp_2)
                                case nullptr
                                    int32_t* eax_55
                                    int32_t ecx_12
                                    eax_55, ecx_12 = operator new(0x5c)
                                    int32_t* eax_57
                                    
                                    if (eax_55 == 0)
                                        eax_57 = nullptr
                                    else
                                        eax_57 = sub_54f770(ecx_12, 0, ebx_2 + 0x1dc, eax_55)
                                    
                                    eax_57[4] = edi_13
                                    arg_8 = eax_57
                                    eax_57[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    
                                    if (sub_556800(&lpMem_1, &arg_3c) == 0)
                                        goto label_55784a
                                    
                                    ebp_3 = arg_8
                                    ebp_3[7] = *(ecx + 0x1b4)
                                    void* arg_50
                                    
                                    if (sub_556800(&lpMem_1, &arg_50) == 0)
                                        goto label_55784a
                                    
                                    void* edi_16 = arg_50
                                    
                                    if (edi_16 s> 0)
                                        sub_427a10(&ebp_3[8], edi_16)
                                        void* edi_17 = edi_16 * 2
                                        
                                        if (edi_17 != neg.d(edi_17)
                                                && sub_5567c0(&lpMem_1, edi_17 * 2, ebp_3[8]) == 0)
                                            goto label_55784a
                                    
                                    var_24_33 = &arg_1c
                                label_5579d4:
                                    
                                    if (sub_556800(&lpMem_1, var_24_33) == 0)
                                        goto label_55784a
                                    
                                    edi_19 = arg_1c
                                    ebp_3[1] = 0
                                    
                                    if (edi_19 s> 0)
                                    label_5579f6:
                                        
                                        if (sub_54fa60(ebp_3, edi_19) == 0)
                                            goto label_55784a
                                        
                                        if (ebp_3[1] != 0)
                                            var_24_34 = *ebp_3
                                        else
                                            var_24_34 = nullptr
                                        
                                        goto label_558045
                                case 1
                                    int32_t* eax_68
                                    int32_t ecx_14
                                    eax_68, ecx_14 = operator new(0x5c)
                                    int32_t* eax_70
                                    
                                    if (eax_68 == 0)
                                        eax_70 = nullptr
                                    else
                                        eax_70 = sub_54f770(ecx_14, 1, ebx_2 + 0x1dc, eax_68)
                                    
                                    eax_70[4] = edi_13
                                    arg_8 = eax_70
                                    eax_70[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    
                                    if (ebx_4 s< 5)
                                        ebp_3 = arg_8
                                        
                                        if (sub_556800(&lpMem_1, &ebp_3[7]) == 0)
                                            goto label_55784a
                                    else
                                        arg_a0 = 0xf
                                        arg_9c = 0
                                        arg_8c = 0
                                        arg_10f0.b = 5
                                        char eax_72
                                        void** ecx_15
                                        eax_72, ecx_15 = sub_5568e0(&lpMem_1, &arg_8c)
                                        
                                        if (eax_72 == 0)
                                        label_5580f8:
                                            ecx_29 = &arg_8c
                                        label_5580ff:
                                            sub_401110(ecx_29)
                                            sub_4279f0(&arg_c)
                                            goto label_5575e1
                                        
                                        ebp_3 = arg_8
                                        
                                        if (arg_9c != 0)
                                            void* var_24_37 = ecx + 0x4c
                                            int32_t eax_75 = sub_539550(ecx_15, &arg_8c)
                                            ebp_3[7] = eax_75
                                            
                                            if (eax_75 == 0xffffffff)
                                                goto label_5580f8
                                            
                                            arg_10f0.b = 4
                                            sub_401110(&arg_8c)
                                        else
                                            ebp_3[7] = 0xffffffff
                                            arg_10f0.b = 4
                                            sub_401110(&arg_8c)
                                    
                                    void* arg_48
                                    
                                    if (sub_556800(&lpMem_1, &arg_48) == 0)
                                        goto label_55784a
                                    
                                    void* edi_23 = arg_48
                                    
                                    if (edi_23 s> 0)
                                        sub_427a10(&ebp_3[8], edi_23)
                                        void* edi_24 = edi_23 * 2
                                        
                                        if (edi_24 != neg.d(edi_24)
                                                && sub_5567c0(&lpMem_1, edi_24 * 2, ebp_3[8]) == 0)
                                            goto label_55784a
                                    
                                    if (arg_20 s< 8)
                                        ebp_3[0x11] = 0xffffffff
                                        var_24_33 = &arg_1c
                                    else
                                        if (sub_556800(&lpMem_1, &ebp_3[0x11]) == 0)
                                            goto label_55784a
                                        
                                        var_24_33 = &arg_1c
                                    
                                    goto label_5579d4
                                case 2
                                    int32_t* eax_84
                                    int32_t ecx_19
                                    eax_84, ecx_19 = operator new(0x5c)
                                    int32_t* eax_86
                                    
                                    if (eax_84 == 0)
                                        eax_86 = nullptr
                                    else
                                        eax_86 = sub_54f770(ecx_19, 2, ebx_2 + 0x1dc, eax_84)
                                    
                                    eax_86[4] = edi_13
                                    arg_8 = eax_86
                                    eax_86[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    
                                    if (sub_556800(&lpMem_1, &arg_28) == 0)
                                        goto label_55784a
                                    
                                    esi_20 = arg_8
                                    *(esi_20 + 0x2d) = arg_28 == 1
                                    
                                    if (sub_556800(&lpMem_1, &arg_1c) == 0)
                                        goto label_55784a
                                    
                                    edi_19 = arg_1c
                                    
                                    if (edi_19 s<= 0)
                                        esi_20[1] = 0
                                    else
                                        if (sub_54fa60(esi_20, edi_19) == 0)
                                            goto label_55784a
                                        
                                        if (esi_20[1] != 0)
                                        label_557c25:
                                            var_24_34 = *esi_20
                                            goto label_558045
                                        
                                        var_24_34 = nullptr
                                    label_558045:
                                        
                                        if (sub_5567c0(&lpMem_1, edi_19, var_24_34) == 0)
                                            goto label_55784a
                                case 3
                                    int32_t* eax_93
                                    int32_t ecx_20
                                    eax_93, ecx_20 = operator new(0x5c)
                                    int32_t* eax_95
                                    
                                    if (eax_93 == 0)
                                        eax_95 = nullptr
                                    else
                                        eax_95 = sub_54f770(ecx_20, 3, ebx_2 + 0x1dc, eax_93)
                                    
                                    eax_95[4] = edi_13
                                    arg_8 = eax_95
                                    eax_95[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    esi_20 = arg_8
                                    
                                    if (sub_556800(&lpMem_1, &esi_20[0xc]) == 0)
                                        goto label_55784a
                                    
                                    arg_8 = nullptr
                                    
                                    if (sub_556800(&lpMem_1, &arg_8) == 0)
                                        goto label_55784a
                                    
                                    esi_20[0xd] = arg_8
                                    
                                    if (ebx_4 s< 5)
                                        if (sub_556800(&lpMem_1, &esi_20[0xe]) == 0)
                                            goto label_55784a
                                    else
                                        arg_a0 = 0xf
                                        arg_9c = 0
                                        arg_8c = 0
                                        arg_10f0.b = 6
                                        
                                        if (sub_5568e0(&lpMem_1, &arg_8c) == 0)
                                            goto label_5580f8
                                        
                                        void* var_24_49 = ecx + 0x4c
                                        esi_20[0xe] = sub_537e30(ecx + 0x4c, &arg_8c)
                                        arg_10f0.b = 4
                                        sub_401110(&arg_8c)
                                    
                                    if (sub_556800(&lpMem_1, &esi_20[0xf]) == 0)
                                        goto label_55784a
                                    
                                    if (sub_556800(&lpMem_1, &arg_28) == 0)
                                        goto label_55784a
                                    
                                    esi_20[0x10].b = arg_28 == 1
                                    
                                    if (sub_556800(&lpMem_1, &arg_1c) == 0)
                                        goto label_55784a
                                    
                                    edi_19 = arg_1c
                                    
                                    if (edi_19 s> 0)
                                        if (sub_54fa60(esi_20, edi_19) == 0)
                                            goto label_55784a
                                        
                                        if (esi_20[1] != 0)
                                            goto label_557c25
                                        
                                        var_24_34 = nullptr
                                        goto label_558045
                                    
                                    esi_20[1] = 0
                                case 4
                                    int32_t* eax_113
                                    int32_t ecx_25
                                    eax_113, ecx_25 = operator new(0x5c)
                                    int32_t* eax_115
                                    
                                    if (eax_113 == 0)
                                        eax_115 = nullptr
                                    else
                                        eax_115 = sub_54f770(ecx_25, 4, ebx_2 + 0x1dc, eax_113)
                                    
                                    eax_115[4] = edi_13
                                    arg_8 = eax_115
                                    eax_115[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    
                                    if (ebx_4 s< 5)
                                        if (sub_556800(&lpMem_1, &arg_3c) == 0)
                                            goto label_55784a
                                        
                                        if (sub_556800(&lpMem_1, &arg_3c) == 0)
                                            goto label_55784a
                                    else
                                        arg_bc = 0xf
                                        arg_b8 = 0
                                        arg_a8 = 0
                                        arg_a0 = 0xf
                                        arg_9c = 0
                                        arg_8c = 0
                                        arg_10f0.b = 8
                                        char* ecx_26
                                        
                                        if (sub_5568e0(&lpMem_1, &arg_a8) == 0)
                                            ecx_26 = &arg_8c
                                        label_558119:
                                            sub_401110(ecx_26)
                                            sub_401110(&arg_a8)
                                            sub_4279f0(&arg_c)
                                            goto label_5575e1
                                        
                                        ecx_26 = &arg_8c
                                        
                                        if (sub_5568e0(&lpMem_1, &arg_8c) == 0)
                                            goto label_558119
                                        
                                        sub_401110(ecx_26)
                                        arg_10f0.b = 4
                                        sub_401110(&arg_a8)
                                    
                                    int32_t esi_22 = arg_20
                                    ebp_3 = arg_8
                                    
                                    if (esi_22 s>= 2)
                                        int32_t arg_4c
                                        
                                        if (sub_556800(&lpMem_1, &arg_4c) == 0)
                                            goto label_55784a
                                        
                                        ebp_3[0xb].b = arg_4c == 1
                                    
                                    if (esi_22 s< 5)
                                        if (sub_556800(&lpMem_1, &ebp_3[7]) == 0)
                                            goto label_55784a
                                        
                                        goto label_557f65
                                    
                                    arg_a0 = 0xf
                                    arg_9c = 0
                                    arg_8c = 0
                                    arg_10f0.b = 9
                                    char eax_125
                                    void** ecx_28
                                    eax_125, ecx_28 = sub_5568e0(&lpMem_1, &arg_8c)
                                    
                                    if (eax_125 == 0)
                                        goto label_5580f8
                                    
                                    void* var_24_61 = ecx + 0x4c
                                    int32_t eax_126 = sub_5395b0(ecx_28, &arg_8c)
                                    ebp_3[7] = eax_126
                                    ecx_29 = &arg_8c
                                    
                                    if (eax_126 == 0xffffffff)
                                        goto label_5580ff
                                    
                                    arg_10f0.b = 4
                                    sub_401110(ecx_29)
                                label_557f65:
                                    
                                    if (sub_556800(&lpMem_1, &arg_34) == 0)
                                        goto label_55784a
                                    
                                    void* edi_34 = arg_34
                                    
                                    if (edi_34 s> 0)
                                        sub_427a10(&ebp_3[8], edi_34)
                                        void* edi_35 = edi_34 * 2
                                        
                                        if (edi_35 != neg.d(edi_35)
                                                && sub_5567c0(&lpMem_1, edi_35 * 2, ebp_3[8]) == 0)
                                            goto label_55784a
                                    
                                    if (sub_556800(&lpMem_1, &arg_1c) == 0)
                                        goto label_55784a
                                    
                                    edi_19 = arg_1c
                                    
                                    if (edi_19 s> 0)
                                        goto label_5579f6
                                    
                                    ebp_3[1] = 0
                                case 5
                                    int32_t* eax_135
                                    int32_t ecx_30
                                    eax_135, ecx_30 = operator new(0x5c)
                                    int32_t* eax_137
                                    
                                    if (eax_135 == 0)
                                        eax_137 = nullptr
                                    else
                                        eax_137 = sub_54f770(ecx_30, 5, ebx_2 + 0x1dc, eax_135)
                                    
                                    eax_137[4] = edi_13
                                    arg_8 = eax_137
                                    eax_137[6] = esi_12
                                    sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                                    
                                    if (sub_556800(&lpMem_1, &arg_1c) == 0)
                                        goto label_55784a
                                    
                                    edi_19 = arg_1c
                                    
                                    if (edi_19 s> 0)
                                        int32_t* esi_26 = arg_8
                                        
                                        if (sub_54fa60(esi_26, edi_19) == 0)
                                            goto label_55784a
                                        
                                        int128_t* eax_142
                                        
                                        if (esi_26[1] != 0)
                                            eax_142 = *esi_26
                                        else
                                            eax_142 = nullptr
                                        
                                        var_24_34 = eax_142
                                        goto label_558045
                                    
                                    arg_8[1] = 0
                        else
                            arg_8 = nullptr
                            sub_61b5a0(&arg_8, ebx_2 + 0x1e4)
                        
                        eax_145 = arg_44 + 1
                        arg_44 = eax_145
                    while (eax_145 s< arg_30)
                    ebp_1 = arg1
                
                if (arg_20 s>= 6)
                    if (sub_558580(ebp_1, &lpMem_1) == 0)
                        goto label_55784a
                    
                    if (sub_558750(ecx, ebp_1) == 0)
                        goto label_55784a
                
                if (sub_53aeb0(ecx) == 0)
                    goto label_55784a
                
                if (sub_53af10(ecx) == 0)
                    goto label_55784a
                
                sub_53af70(ecx)
                sub_4279f0(&arg_c)
                sub_401110(&arg_70)
                sub_401110(&arg_54)
                sub_560430(&lpMem_1)
                lpMem.b = 1
    else
        if (arg_68 u>= 0x10)
            int32_t var_24_4 = arg_54.d
            sub_6b4d5b()
        
        lpMem = lpMem_1
        arg_68 = 0xf
        arg_64 = 0
        arg_54 = 0
        
        if (lpMem == 0)
            lpMem.b = 0
        else
            int32_t var_28_4 = 0
            HeapFree(data_797df4, HEAP_NONE, lpMem)
            lpMem.b = 0
else
    lpMem = lpMem_1
    
    if (lpMem == 0)
        lpMem.b = 0
    else
        int32_t var_28_2 = 0
        HeapFree(data_797df4, HEAP_NONE, lpMem)
        lpMem.b = 0

fsbase->NtTib.ExceptionList = arg_10e8
sub_6b4885(eax_2 ^ &ExceptionList)
return lpMem
