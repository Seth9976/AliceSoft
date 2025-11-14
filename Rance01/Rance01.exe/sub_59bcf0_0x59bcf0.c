// 函数: sub_59bcf0
// 地址: 0x59bcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724780
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* ebx = *(arg1 + 4)
void* edi = arg1 + 4
int128_t* eax_6 = *(edi + 4)
void* var_84 = edi

if (ebx != eax_6)
    void* esi_2 = 0
    sub_6b49d0(ebx, eax_6, esi_2, eax_4)
    *(edi + 4) = esi_2 + ebx

*(arg1 + 0x24) = 0xffffffff
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
int32_t var_70
sub_59ca70(arg1 + 0x34, &var_70, *(arg1 + 0x34), *(arg1 + 0x38))
sub_429ad0(*(*(arg1 + 0x48) + 4))
void* eax_9 = *(arg1 + 0x48)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x48)
*eax_10 = eax_10
void* eax_11 = *(arg1 + 0x48)
*(eax_11 + 8) = eax_11
*(arg1 + 0x4c) = 0
void* result

if (sub_59d830(arg2, edi) == 0)
    int128_t* eax_26 = arg2
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    void* edx_8 = eax_26 + 1
    char i
    
    do
        i = *eax_26
        eax_26 += 1
    while (i != 0)
    sub_401270(&var_38, eax_26 - edx_8, arg2)
    int32_t var_c_2 = 0
    char* eax_28 = var_38.d
    
    if (var_24_1 u< 0x10)
        eax_28 = &var_38
    
    char* var_a0_9 = eax_28
    sub_40da60(0x746e44)
    
    if (var_24_1 u< 0x10)
    label_59c7ba:
        result.b = 0
    else
        int32_t var_a0_10 = var_38.d
    label_59c7b2:
        sub_6b4d5b()
    label_59c7ba_1:
        result.b = 0
else
    int32_t ecx_3 = *edi
    int32_t edx_1 = *(edi + 4)
    int32_t eax_14 = ecx_3 - edx_1
    int32_t eax_15 = neg.d(eax_14)
    int32_t eax_17 = sbb.d(eax_15, eax_15, eax_14 != 0) & ecx_3
    *(edi + 0x10) = eax_17
    *(edi + 0x14) = eax_17 - ecx_3 + edx_1
    *(edi + 0x1c) = 1
    void* i_1 = nullptr
    
    if (edx_1 - *edi s> 0)
        do
            char* esi_5 = i_1 + *edi
            int32_t edx_3
            edx_3.b = *esi_5
            edx_3.b = rol.b(edx_3.b, 4)
            *esi_5 = edx_3.b
            i_1 += 1
        while (i_1 s< *(edi + 4) - *edi)
    
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    int32_t var_c_1 = 1
    int32_t var_a4_3
    
    if (sub_59db20(edi, &var_54, 1) != 0)
        char i_2
        
        do
            int32_t eax_21 = var_44_1
            
            if (var_44_1 u>= 7)
                eax_21 = 7
            
            char* edx_7 = var_54.d
            
            if (var_40_1 u< 0x10)
                edx_7 = &var_54
            
            if (sub_402320(eax_21, edx_7, "Version", eax_21) != 0 || var_44_1 u< 7)
            label_59bf3c:
                int32_t eax_29 = var_44_1
                
                if (var_44_1 u>= 4)
                    eax_29 = 4
                
                char* edx_10 = var_54.d
                
                if (var_40_1 u< 0x10)
                    edx_10 = &var_54
                
                if (sub_402320(eax_29, edx_10, "data", eax_29) != 0 || var_44_1 u< 4)
                label_59c02c:
                    int32_t eax_38 = var_44_1
                    
                    if (var_44_1 u>= 9)
                        eax_38 = 9
                    
                    char* edx_13 = var_54.d
                    
                    if (var_40_1 u< 0x10)
                        edx_13 = &var_54
                    
                    if (sub_402320(eax_38, edx_13, "NumofLink", eax_38) != 0 || var_44_1 u< 9)
                    label_59c0bf:
                        int32_t eax_45 = var_44_1
                        
                        if (var_44_1 u>= 0xa)
                            eax_45 = 0xa
                        
                        char* edx_14 = var_54.d
                        
                        if (var_40_1 u< 0x10)
                            edx_14 = &var_54
                        
                        if (sub_402320(eax_45, edx_14, "NumofDWORD", eax_45) != 0
                            || var_44_1 u< 0xa)
                        label_59c1a8:
                            int32_t var_a4_6
                            
                            if (sub_402680("NumofString", &var_54) == 0)
                                int32_t var_a4_7
                                
                                if (sub_402680("DefaultDWORD", &var_54) == 0)
                                    bool cond:4_1
                                    
                                    if (sub_402680("DWORD", &var_54) == 0)
                                        char* eax_116 = var_54.d
                                        
                                        if (var_40_1 u< 0x10)
                                            eax_116 = &var_54
                                        
                                        char* var_a0_71 = eax_116
                                        int32_t var_a4_9 = *(arg1 + 0x20)
                                        int128_t* var_a8_6 = arg2
                                        sub_40da60("%s (%d)\n")
                                        cond:4_1 = var_40_1 u< 0x10
                                    label_59c7ab:
                                        
                                        if (cond:4_1)
                                            goto label_59c7ba_2
                                        
                                        int32_t var_a0_72 = var_54.d
                                        goto label_59c7b2
                                    
                                    void* esi_19 = var_84
                                    
                                    if (sub_59dcf0(0x74a764, esi_19) == 0)
                                        int32_t var_a0_60 = *(arg1 + 0x20)
                                        var_a4_7 = 0x74a7fc
                                    label_59c65f:
                                        sub_40da60(var_a4_7)
                                        sub_401110(&var_54)
                                        goto label_59c7ba_2
                                    
                                    if (sub_59dcf0(0x74a7ac, esi_19) == 0)
                                        while (true)
                                            if (sub_59dcf0(0x74a83c, esi_19) == 0)
                                                if (sub_59de60() == 0)
                                                    int32_t var_a0_68 = *(arg1 + 0x20)
                                                    var_a4_7 = 0x74aa38
                                                    goto label_59c65f
                                                
                                                int32_t edi_16 = 0
                                                
                                                if (sub_59dcf0(0x74aa34, var_84) != 0)
                                                    while (true)
                                                        if (sub_59de60() == 0)
                                                            int32_t var_a0_69 = *(arg1 + 0x20)
                                                            sub_40da60(0x74aae0)
                                                            cond:4_1 = var_40_1 u< 0x10
                                                            break
                                                        
                                                        void* eax_87 = *(arg1 + 0x34)
                                                        int32_t var_60
                                                        int32_t edx_32 = var_60 << 5
                                                        
                                                        if (edi_16 s>= (*(eax_87 + edx_32 + 4)
                                                                - *(eax_87 + edx_32)) s>> 2)
                                                            int32_t var_a0_70 = *(arg1 + 0x20)
                                                            var_a4_7 = 0x74aa7c
                                                            goto label_59c65f
                                                        
                                                        int32_t var_68
                                                        *(*(eax_87 + edx_32) + (edi_16 << 2)) =
                                                            var_68
                                                        edi_16 += 1
                                                        
                                                        if (sub_59dcf0(0x74aa34, var_84) == 0)
                                                            goto label_59c4d9
                                                    
                                                    break
                                            else
                                                if (sub_59de60() == 0)
                                                    int32_t var_a0_61 = *(arg1 + 0x20)
                                                    var_a4_7 = 0x74a840
                                                    goto label_59c65f
                                                
                                                if (sub_59dcf0(0x74a884, var_84) == 0)
                                                    int32_t var_a0_62 = *(arg1 + 0x20)
                                                    var_a4_7 = 0x74a888
                                                    goto label_59c65f
                                                
                                                if (sub_59de60() == 0)
                                                    int32_t var_a0_63 = *(arg1 + 0x20)
                                                    var_a4_7 = 0x74a8d8
                                                    goto label_59c65f
                                                
                                                if (sub_59dcf0(0x74a8d4, var_84) == 0)
                                                    int32_t var_a0_64 = *(arg1 + 0x20)
                                                    var_a4_7 = 0x74a960
                                                    goto label_59c65f
                                                
                                                int32_t var_74
                                                int32_t eax_77
                                                
                                                if (var_74 s>= 0)
                                                    eax_77 = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 5
                                                
                                                int32_t var_78
                                                
                                                if (var_74 s< 0 || var_74 s>= eax_77 || var_78 s< 0
                                                        || var_78 s>= eax_77)
                                                    int32_t var_a0_67 = var_78
                                                    int32_t var_a4_8 = var_74
                                                    int32_t var_a8_5 = *(arg1 + 0x20)
                                                    sub_40da60(0x74a924)
                                                    sub_401110(&var_54)
                                                    goto label_59c7ba_2
                                                
                                                int32_t edi_15 = 0
                                                
                                                if (sub_59dcf0(0x74a9b4, var_84) != 0)
                                                    char j
                                                    
                                                    do
                                                        if (sub_59de60() == 0)
                                                            int32_t var_a0_65 = *(arg1 + 0x20)
                                                            var_a4_7 = 0x74a9b8
                                                            goto label_59c65f
                                                        
                                                        int32_t ecx_32 = var_74
                                                        void* edx_28 = *(arg1 + 0x34)
                                                        int32_t eax_82 = ecx_32 << 5
                                                        
                                                        if (edi_15 s>= (*(edx_28 + eax_82 + 4)
                                                                - *(edx_28 + eax_82)) s>> 2)
                                                            int32_t var_a0_66 = *(arg1 + 0x20)
                                                            var_a4_7 = 0x74a9fc
                                                            goto label_59c65f
                                                        
                                                        while (ecx_32 s<= var_78)
                                                            ecx_32 += 1
                                                            *(*(*(arg1 + 0x34) + eax_82)
                                                                + (edi_15 << 2)) = var_70
                                                            eax_82 += 0x20
                                                        
                                                        edi_15 += 1
                                                        j = sub_59dcf0(0x74a9b4, var_84)
                                                    while (j != 0)
                                            
                                        label_59c4d9:
                                            
                                            if (sub_59dcf0(0x74a7ac, var_84) != 0)
                                                goto label_59c4f0
                                            
                                            esi_19 = var_84
                                        
                                        goto label_59c7ab
                                else
                                    if (sub_59dcf0(0x74a698, var_84) == 0)
                                        int32_t var_a0_55 = *(arg1 + 0x20)
                                        var_a4_6 = 0x74a69c
                                    label_59c626:
                                        sub_40da60(var_a4_6)
                                        
                                        if (var_40_1 u< 0x10)
                                            goto label_59c7ba_2
                                        
                                        int32_t var_a0_54 = var_54.d
                                        goto label_59c7b2
                                    
                                    if (sub_59de60() == 0)
                                        int32_t var_a0_56 = *(arg1 + 0x20)
                                        var_a4_7 = 0x74a6dc
                                        goto label_59c65f
                                    
                                    if (sub_59dcf0(0x74a718, var_84) == 0)
                                        int32_t var_a0_57 = *(arg1 + 0x20)
                                        var_a4_7 = 0x74a720
                                        goto label_59c65f
                                    
                                    if (sub_59dcf0(0x74a71c, var_84) == 0)
                                        int32_t var_a0_58 = *(arg1 + 0x20)
                                        var_a4_7 = 0x74a768
                                        goto label_59c65f
                                    
                                    if (sub_59de60() == 0)
                                        int32_t var_a0_59 = *(arg1 + 0x20)
                                        var_a4_7 = 0x74a7b0
                                        goto label_59c65f
                                    
                                    int32_t j_1 = 0
                                    
                                    if (((*(arg1 + 0x38) - *(arg1 + 0x34)) & 0xffffffe0) s> 0)
                                        int32_t ecx_27 = 0
                                        
                                        do
                                            int32_t var_6c
                                            int32_t var_64
                                            *(*(*(arg1 + 0x34) + ecx_27) + (var_6c << 2)) = var_64
                                            j_1 += 1
                                            ecx_27 += 0x20
                                        while (j_1 s< (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 5)
                            else
                                if (sub_59dcf0(0x74a608, var_84) == 0)
                                    int32_t var_a0_52 = *(arg1 + 0x20)
                                    var_a4_3 = 0x74a60c
                                    goto label_59c54c
                                
                                if (sub_59de60() == 0)
                                    int32_t var_a0_53 = *(arg1 + 0x20)
                                    var_a4_6 = 0x74a64c
                                    goto label_59c626
                                
                                if (*(arg1 + 0x30) s> 0)
                                    int32_t j_2 = 0
                                    
                                    if (((*(arg1 + 0x38) - *(arg1 + 0x34)) & 0xffffffe0) s> 0)
                                        int32_t var_80_1 = 0
                                        
                                        do
                                            int32_t ecx_23 = *(arg1 + 0x34)
                                            sub_4bc7e0(*(arg1 + 0x30), var_80_1, ecx_23, 
                                                ecx_23 + var_80_1 + 0x10)
                                            var_80_1 += 0x20
                                            j_2 += 1
                                        while (j_2 s< (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 5)
                        else
                            int32_t eax_46
                            eax_46.b = var_44_1 != 0xa
                            
                            if (eax_46 != 0)
                                goto label_59c1a8
                            
                            if (sub_59dcf0(0x74a580, edi) == 0)
                                int32_t var_a0_50 = *(arg1 + 0x20)
                                var_a4_3 = 0x74a584
                                goto label_59c54c
                            
                            if (sub_59de60() == 0)
                                int32_t var_a0_51 = *(arg1 + 0x20)
                                var_a4_3 = 0x74a5c0
                                goto label_59c54c
                            
                            if (*(arg1 + 0x2c) s> 0)
                                int32_t j_5 = 0
                                
                                if (((*(arg1 + 0x38) - *(arg1 + 0x34)) & 0xffffffe0) s> 0)
                                    int32_t edi_6 = 0
                                    int32_t j_3
                                    
                                    do
                                        sub_65a090(*(arg1 + 0x34) + edi_6, *(arg1 + 0x2c))
                                        int32_t k = 0
                                        
                                        if (*(arg1 + 0x2c) s> 0)
                                            do
                                                *(*(*(arg1 + 0x34) + edi_6) + (k << 2)) = 0
                                                k += 1
                                            while (k s< *(arg1 + 0x2c))
                                        
                                        j_3 = j_5 + 1
                                        edi_6 += 0x20
                                        j_5 = j_3
                                    while (j_3 s< (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 5)
                    else
                        int32_t eax_39
                        eax_39.b = var_44_1 != 9
                        
                        if (eax_39 != 0)
                            goto label_59c0bf
                        
                        if (sub_59dcf0(0x74a4f8, edi) == 0)
                            int32_t var_a0_48 = *(arg1 + 0x20)
                            var_a4_3 = 0x74a4fc
                            goto label_59c54c
                        
                        if (sub_59de60() == 0)
                            int32_t var_a0_49 = *(arg1 + 0x20)
                            var_a4_3 = 0x74a538
                            goto label_59c54c
                        
                        if (*(arg1 + 0x28) s> 0)
                            void* var_58
                            sub_59ca70(arg1 + 0x34, &var_58, *(arg1 + 0x34), *(arg1 + 0x38))
                            sub_59ca00(*(arg1 + 0x28), arg1 + 0x34)
                else
                    int32_t eax_30
                    eax_30.b = var_44_1 != 4
                    
                    if (eax_30 != 0)
                        goto label_59c02c
                    
                    if (sub_59dcf0("DWORD", edi) == 0)
                        int32_t var_a0_43 = *(arg1 + 0x20)
                        var_a4_3 = 0x74a378
                        goto label_59c54c
                    
                    if (sub_59dcf0(0x74a3bc, edi) == 0)
                        int32_t var_a0_44 = *(arg1 + 0x20)
                        var_a4_3 = 0x74a3c0
                        goto label_59c54c
                    
                    char eax_33
                    int32_t ecx_8
                    eax_33, ecx_8 = sub_59dcf0(0x74a404, edi)
                    
                    if (eax_33 == 0)
                        char j_4
                        
                        do
                            if (sub_59da60(var_84, &var_54) == 0)
                                int32_t var_a0_45 = *(arg1 + 0x20)
                                var_a4_3 = 0x74a408
                                goto label_59c54c
                            
                            if (sub_59dcf0(0x74a450, var_84) == 0)
                                int32_t var_a0_46 = *(arg1 + 0x20)
                                var_a4_3 = 0x74a460
                                goto label_59c54c
                            
                            if (sub_59de60() == 0)
                                int32_t var_a0_47 = *(arg1 + 0x20)
                                var_a4_3 = 0x74a4a8
                                goto label_59c54c
                            
                            int32_t var_5c
                            *sub_513fa0(arg1 + 0x44, &var_54) = var_5c
                            j_4 = sub_59dcf0(0x74a404, var_84)
                        while (j_4 == 0)
            else
                int32_t eax_22
                eax_22.b = var_44_1 != 7
                
                if (eax_22 != 0)
                    goto label_59bf3c
                
                if (sub_59dcf0(0x74a2f0, edi) == 0)
                    int32_t var_a0_42 = *(arg1 + 0x20)
                    var_a4_3 = 0x74a2f4
                    goto label_59c54c
                
                if (sub_59de60() == 0)
                    int32_t var_a0_7 = *(arg1 + 0x20)
                    var_a4_3 = 0x74a330
                    goto label_59c54c
            
        label_59c4f0:
            i_2 = sub_59db20(var_84, &var_54, 1)
            edi = var_84
        while (i_2 != 0)
    
    if (*(arg1 + 0x1c) != 0)
        int32_t var_a0_40 = *(arg1 + 0x20)
        var_a4_3 = 0x7481ac
    label_59c54c:
        sub_40da60(var_a4_3)
        
        if (var_40_1 u>= 0x10)
            int32_t var_a0_41 = var_54.d
            goto label_59c7b2
        
    label_59c7ba_2:
        result.b = 0
    else
        result = *(edi + 4)
        int128_t* ebx_2 = *edi
        
        if (ebx_2 != result)
            void* esi_25 = 0
            sub_6b49d0(ebx_2, result, esi_25, eax_4)
            *(edi + 4) = esi_25 + ebx_2
        
        if (var_40_1 u>= 0x10)
            int32_t var_a0_39 = var_54.d
            sub_6b4d5b()
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
