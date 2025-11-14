// 函数: sub_4b03c0
// 地址: 0x4b03c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg1[1] - *arg1) s/ 0x3c
uint8_t var_11 = ebx_2.b
sub_54e400(&var_11, arg2 + 4)
var_11 = (ebx_2 u>> 8).b
sub_54e400(&var_11, arg2 + 4)
var_11 = (ebx_2 u>> 0x10).b
sub_54e400(&var_11, arg2 + 4)
var_11 = (ebx_2 u>> 0x18).b
sub_54e400(&var_11, arg2 + 4)
int32_t* ebx_4 = *arg1
void* var_10 = ebx_4

if (ebx_4 != arg1[1])
    char var_12 = 0
    
    while (true)
        int32_t eax_7 = ebx_4[5]
        int32_t* ecx_4
        
        if (eax_7 u< 0x10)
            ecx_4 = ebx_4
        else
            ecx_4 = *ebx_4
        
        int128_t* eax_8
        
        if (eax_7 u< 0x10)
            eax_8 = ebx_4
        else
            eax_8 = *ebx_4
        
        void* var_28_1 = arg2
        sub_4102d0(arg2 + 4, *(arg2 + 8), eax_8, ecx_4 + ebx_4[4])
        int32_t eax_9 = *(arg2 + 8)
        int32_t edx_5
        
        if (&var_12 u< eax_9)
            edx_5 = *(arg2 + 4)
        
        if (&var_12 u>= eax_9 || edx_5 u> &var_12)
            int32_t ecx_8 = *(arg2 + 0xc)
            
            if (eax_9 != ecx_8)
            label_4b051e:
                char* eax_15 = *(arg2 + 8)
                
                if (eax_15 != 0)
                    *eax_15 = 0
                
                *(arg2 + 8) += 1
            label_4b0534:
                int32_t ebx_7 = *(var_10 + 0x1c)
                int32_t eax_16 = *(arg2 + 8)
                var_11 = ebx_7.b
                int32_t edx_13
                
                if (&var_11 u< eax_16)
                    edx_13 = *(arg2 + 4)
                
                if (&var_11 u>= eax_16 || edx_13 u> &var_11)
                    int32_t ecx_13 = *(arg2 + 0xc)
                    
                    if (eax_16 != ecx_13)
                    label_4b05dd:
                        char* eax_22 = *(arg2 + 8)
                        
                        if (eax_22 != 0)
                            *eax_22 = ebx_7.b
                        
                    label_4b05e6:
                        *(arg2 + 8) += 1
                        int32_t eax_23 = *(arg2 + 8)
                        uint8_t ebx_8 = (ebx_7 u>> 8).b
                        var_11 = ebx_8
                        int32_t edx_20
                        
                        if (&var_11 u< eax_23)
                            edx_20 = *(arg2 + 4)
                        
                        if (&var_11 u>= eax_23 || edx_20 u> &var_11)
                            int32_t ecx_18 = *(arg2 + 0xc)
                            
                            if (eax_23 != ecx_18)
                            label_4b068d:
                                uint8_t* eax_29 = *(arg2 + 8)
                                
                                if (eax_29 != 0)
                                    *eax_29 = ebx_8
                                
                            label_4b0696:
                                *(arg2 + 8) += 1
                                int32_t eax_30 = *(arg2 + 8)
                                uint8_t ebx_11 = (ebx_7 u>> 0x10).b
                                var_11 = ebx_11
                                int32_t edx_27
                                
                                if (&var_11 u< eax_30)
                                    edx_27 = *(arg2 + 4)
                                
                                if (&var_11 u>= eax_30 || edx_27 u> &var_11)
                                    int32_t ecx_23 = *(arg2 + 0xc)
                                    
                                    if (eax_30 != ecx_23)
                                    label_4b0741:
                                        uint8_t* eax_36 = *(arg2 + 8)
                                        
                                        if (eax_36 != 0)
                                            *eax_36 = ebx_11
                                        
                                    label_4b074a:
                                        *(arg2 + 8) += 1
                                        int32_t eax_37 = *(arg2 + 8)
                                        uint8_t ebx_14 = (ebx_7 u>> 0x18).b
                                        var_11 = ebx_14
                                        int32_t edx_34
                                        
                                        if (&var_11 u< eax_37)
                                            edx_34 = *(arg2 + 4)
                                        
                                        if (&var_11 u>= eax_37 || edx_34 u> &var_11)
                                            int32_t ecx_28 = *(arg2 + 0xc)
                                            
                                            if (eax_37 != ecx_28)
                                            label_4b07f5:
                                                uint8_t* eax_43 = *(arg2 + 8)
                                                
                                                if (eax_43 != 0)
                                                    *eax_43 = ebx_14
                                                
                                            label_4b07fe:
                                                *(arg2 + 8) += 1
                                                int32_t eax_44 = *(arg2 + 8)
                                                float var_c_1 =
                                                    fconvert.s(fconvert.t(*(var_10 + 0x20)))
                                                var_11 = var_c_1.b
                                                int32_t edx_42
                                                
                                                if (&var_11 u< eax_44)
                                                    edx_42 = *(arg2 + 4)
                                                
                                                if (&var_11 u>= eax_44 || edx_42 u> &var_11)
                                                    int32_t ecx_33 = *(arg2 + 0xc)
                                                    
                                                    if (eax_44 != ecx_33)
                                                    label_4b08b2:
                                                        char* eax_50 = *(arg2 + 8)
                                                        
                                                        if (eax_50 != 0)
                                                            *eax_50 = var_c_1.b
                                                        
                                                    label_4b08bb:
                                                        *(arg2 + 8) += 1
                                                        int32_t eax_51 = *(arg2 + 8)
                                                        uint8_t ebx_17 = (var_c_1 u>> 8).b
                                                        var_11 = ebx_17
                                                        int32_t edx_49
                                                        
                                                        if (&var_11 u< eax_51)
                                                            edx_49 = *(arg2 + 4)
                                                        
                                                        if (&var_11 u>= eax_51 || edx_49 u> &var_11)
                                                            int32_t ecx_38 = *(arg2 + 0xc)
                                                            
                                                            if (eax_51 != ecx_38)
                                                            label_4b0962:
                                                                uint8_t* eax_57 = *(arg2 + 8)
                                                                
                                                                if (eax_57 != 0)
                                                                    *eax_57 = ebx_17
                                                                
                                                            label_4b096b:
                                                                *(arg2 + 8) += 1
                                                                int32_t eax_58 = *(arg2 + 8)
                                                                uint8_t ebx_20 = (var_c_1 u>> 0x10).b
                                                                var_11 = ebx_20
                                                                int32_t edx_56
                                                                
                                                                if (&var_11 u< eax_58)
                                                                    edx_56 = *(arg2 + 4)
                                                                
                                                                if (&var_11 u>= eax_58
                                                                        || edx_56 u> &var_11)
                                                                    int32_t ecx_43 = *(arg2 + 0xc)
                                                                    
                                                                    if (eax_58 != ecx_43)
                                                                    label_4b0a16:
                                                                        uint8_t* eax_64 = *(arg2 + 8)
                                                                        
                                                                        if (eax_64 != 0)
                                                                            *eax_64 = ebx_20
                                                                        
                                                                    label_4b0a1f:
                                                                        *(arg2 + 8) += 1
                                                                        int32_t eax_65 = *(arg2 + 8)
                                                                        uint8_t ebx_23 = (var_c_1 u>> 0x18).b
                                                                        var_11 = ebx_23
                                                                        int32_t edx_63
                                                                        
                                                                        if (&var_11 u< eax_65)
                                                                            edx_63 = *(arg2 + 4)
                                                                        
                                                                        if (&var_11 u>= eax_65
                                                                                || edx_63 u> &var_11)
                                                                            int32_t ecx_48 = *(arg2 + 0xc)
                                                                            
                                                                            if (eax_65 != ecx_48)
                                                                            label_4b0aca:
                                                                                uint8_t* eax_71 = *(arg2 + 8)
                                                                                
                                                                                if (eax_71 != 0)
                                                                                    *eax_71 = ebx_23
                                                                                
                                                                            label_4b0ad3:
                                                                                *(arg2 + 8) += 1
                                                                                void* edi_20 = var_10
                                                                                int32_t eax_72 = *(arg2 + 8)
                                                                                float var_4_1 =
                                                                                    fconvert.s(fconvert.t(*(edi_20 + 0x24)))
                                                                                var_11 = var_4_1.b
                                                                                int32_t edx_70
                                                                                
                                                                                if (&var_11 u< eax_72)
                                                                                    edx_70 = *(arg2 + 4)
                                                                                
                                                                                if (&var_11 u>= eax_72
                                                                                        || edx_70 u> &var_11)
                                                                                    int32_t ecx_53 = *(arg2 + 0xc)
                                                                                    
                                                                                    if (eax_72 != ecx_53)
                                                                                    label_4b0b93:
                                                                                        char* eax_78 = *(arg2 + 8)
                                                                                        
                                                                                        if (eax_78 != 0)
                                                                                            *eax_78 = var_4_1.b
                                                                                        
                                                                                    label_4b0b9c:
                                                                                        *(arg2 + 8) += 1
                                                                                        var_11 = (var_4_1 u>> 8).b
                                                                                        sub_54e400(&var_11, arg2 + 4)
                                                                                        var_11 = (var_4_1 u>> 0x10).b
                                                                                        sub_54e400(&var_11, arg2 + 4)
                                                                                        var_11 = (var_4_1 u>> 0x18).b
                                                                                        int32_t var_28_22 =
                                                                                            sub_54e400(&var_11, arg2 + 4)
                                                                                        int32_t var_28_24 = sub_4101f0(arg2, 
                                                                                            fconvert.s(fconvert.t(
                                                                                                *(edi_20 + 0x28))))
                                                                                        int32_t var_28_26 = sub_4101f0(arg2, 
                                                                                            fconvert.s(fconvert.t(
                                                                                                *(edi_20 + 0x2c))))
                                                                                        int32_t var_28_28 = sub_4101f0(arg2, 
                                                                                            fconvert.s(fconvert.t(
                                                                                                *(edi_20 + 0x30))))
                                                                                        sub_4101f0(arg2, 
                                                                                            fconvert.s(fconvert.t(
                                                                                                *(edi_20 + 0x34))))
                                                                                        var_11 = *(edi_20 + 0x38) != 0
                                                                                        sub_54e400(&var_11, arg2 + 4)
                                                                                        var_10 = edi_20 + 0x3c
                                                                                        
                                                                                        if (edi_20 + 0x3c == arg1[1])
                                                                                            break
                                                                                        
                                                                                        ebx_4 = var_10
                                                                                        continue
                                                                                    else
                                                                                        int32_t edx_74 = *(arg2 + 4)
                                                                                        int32_t eax_76 = eax_72 - edx_74
                                                                                        
                                                                                        if (eax_76 u<= 0xfffffffe)
                                                                                            int32_t ecx_54 = ecx_53 - edx_74
                                                                                            
                                                                                            if (eax_76 + 1 u> ecx_54)
                                                                                                uint32_t edx_76 = ecx_54 u>> 1
                                                                                                uint32_t ecx_55
                                                                                                
                                                                                                if (0xffffffff - edx_76 u>= ecx_54)
                                                                                                    ecx_55 = ecx_54 + edx_76
                                                                                                else
                                                                                                    ecx_55 = 0
                                                                                                
                                                                                                if (ecx_55 u< eax_76 + 1)
                                                                                                    ecx_55 = eax_76 + 1
                                                                                                
                                                                                                sub_424860(arg2 + 4, ecx_55)
                                                                                                edi_20 = var_10
                                                                                            
                                                                                            goto label_4b0b93
                                                                                else
                                                                                    int32_t ecx_51 = *(arg2 + 0xc)
                                                                                    
                                                                                    if (eax_72 != ecx_51)
                                                                                    label_4b0b40:
                                                                                        char* eax_75 = *(arg2 + 8)
                                                                                        
                                                                                        if (eax_75 != 0)
                                                                                            ecx_51.b =
                                                                                                *(&var_11 - edx_70 + *(arg2 + 4))
                                                                                            *eax_75 = ecx_51.b
                                                                                        
                                                                                        edi_20 = var_10
                                                                                        goto label_4b0b9c
                                                                                    
                                                                                    int32_t eax_73 = eax_72 - edx_70
                                                                                    
                                                                                    if (eax_73 u<= 0xfffffffe)
                                                                                        ecx_51 -= edx_70
                                                                                        
                                                                                        if (eax_73 + 1 u> ecx_51)
                                                                                            uint32_t edx_72 = ecx_51 u>> 1
                                                                                            uint32_t ecx_52
                                                                                            
                                                                                            if (0xffffffff - edx_72 u>= ecx_51)
                                                                                                ecx_52 = ecx_51 + edx_72
                                                                                            else
                                                                                                ecx_52 = 0
                                                                                            
                                                                                            if (ecx_52 u< eax_73 + 1)
                                                                                                ecx_52 = eax_73 + 1
                                                                                            
                                                                                            sub_424860(arg2 + 4, ecx_52)
                                                                                        
                                                                                        goto label_4b0b40
                                                                            else
                                                                                int32_t edx_67 = *(arg2 + 4)
                                                                                int32_t eax_69 = eax_65 - edx_67
                                                                                
                                                                                if (eax_69 u<= 0xfffffffe)
                                                                                    int32_t ecx_49 = ecx_48 - edx_67
                                                                                    
                                                                                    if (eax_69 + 1 u> ecx_49)
                                                                                        uint32_t edx_69 = ecx_49 u>> 1
                                                                                        uint32_t ecx_50
                                                                                        
                                                                                        if (0xffffffff - edx_69 u>= ecx_49)
                                                                                            ecx_50 = ecx_49 + edx_69
                                                                                        else
                                                                                            ecx_50 = 0
                                                                                        
                                                                                        if (ecx_50 u< eax_69 + 1)
                                                                                            ecx_50 = eax_69 + 1
                                                                                        
                                                                                        sub_424860(arg2 + 4, ecx_50)
                                                                                    
                                                                                    goto label_4b0aca
                                                                        else
                                                                            int32_t ecx_46 = *(arg2 + 0xc)
                                                                            
                                                                            if (eax_65 != ecx_46)
                                                                            label_4b0a7f:
                                                                                char* eax_68 = *(arg2 + 8)
                                                                                
                                                                                if (eax_68 != 0)
                                                                                    ecx_46.b =
                                                                                        *(&var_11 - edx_63 + *(arg2 + 4))
                                                                                    *eax_68 = ecx_46.b
                                                                                
                                                                                goto label_4b0ad3
                                                                            
                                                                            int32_t eax_66 = eax_65 - edx_63
                                                                            
                                                                            if (eax_66 u<= 0xfffffffe)
                                                                                ecx_46 -= edx_63
                                                                                
                                                                                if (eax_66 + 1 u> ecx_46)
                                                                                    uint32_t edx_65 = ecx_46 u>> 1
                                                                                    uint32_t ecx_47
                                                                                    
                                                                                    if (0xffffffff - edx_65 u>= ecx_46)
                                                                                        ecx_47 = ecx_46 + edx_65
                                                                                    else
                                                                                        ecx_47 = 0
                                                                                    
                                                                                    if (ecx_47 u< eax_66 + 1)
                                                                                        ecx_47 = eax_66 + 1
                                                                                    
                                                                                    sub_424860(arg2 + 4, ecx_47)
                                                                                
                                                                                goto label_4b0a7f
                                                                    else
                                                                        int32_t edx_60 = *(arg2 + 4)
                                                                        int32_t eax_62 = eax_58 - edx_60
                                                                        
                                                                        if (eax_62 u<= 0xfffffffe)
                                                                            int32_t ecx_44 = ecx_43 - edx_60
                                                                            
                                                                            if (eax_62 + 1 u> ecx_44)
                                                                                uint32_t edx_62 = ecx_44 u>> 1
                                                                                uint32_t ecx_45
                                                                                
                                                                                if (0xffffffff - edx_62 u>= ecx_44)
                                                                                    ecx_45 = ecx_44 + edx_62
                                                                                else
                                                                                    ecx_45 = 0
                                                                                
                                                                                if (ecx_45 u< eax_62 + 1)
                                                                                    ecx_45 = eax_62 + 1
                                                                                
                                                                                sub_424860(arg2 + 4, ecx_45)
                                                                            
                                                                            goto label_4b0a16
                                                                else
                                                                    int32_t ecx_41 = *(arg2 + 0xc)
                                                                    
                                                                    if (eax_58 != ecx_41)
                                                                    label_4b09cb:
                                                                        char* eax_61 = *(arg2 + 8)
                                                                        
                                                                        if (eax_61 != 0)
                                                                            ecx_41.b =
                                                                                *(&var_11 - edx_56 + *(arg2 + 4))
                                                                            *eax_61 = ecx_41.b
                                                                        
                                                                        goto label_4b0a1f
                                                                    
                                                                    int32_t eax_59 = eax_58 - edx_56
                                                                    
                                                                    if (eax_59 u<= 0xfffffffe)
                                                                        ecx_41 -= edx_56
                                                                        
                                                                        if (eax_59 + 1 u> ecx_41)
                                                                            uint32_t edx_58 = ecx_41 u>> 1
                                                                            uint32_t ecx_42
                                                                            
                                                                            if (0xffffffff - edx_58 u>= ecx_41)
                                                                                ecx_42 = ecx_41 + edx_58
                                                                            else
                                                                                ecx_42 = 0
                                                                            
                                                                            if (ecx_42 u< eax_59 + 1)
                                                                                ecx_42 = eax_59 + 1
                                                                            
                                                                            sub_424860(arg2 + 4, ecx_42)
                                                                        
                                                                        goto label_4b09cb
                                                            else
                                                                int32_t edx_53 = *(arg2 + 4)
                                                                int32_t eax_55 = eax_51 - edx_53
                                                                
                                                                if (eax_55 u<= 0xfffffffe)
                                                                    int32_t ecx_39 = ecx_38 - edx_53
                                                                    
                                                                    if (eax_55 + 1 u> ecx_39)
                                                                        uint32_t edx_55 = ecx_39 u>> 1
                                                                        uint32_t ecx_40
                                                                        
                                                                        if (0xffffffff - edx_55 u>= ecx_39)
                                                                            ecx_40 = ecx_39 + edx_55
                                                                        else
                                                                            ecx_40 = 0
                                                                        
                                                                        if (ecx_40 u< eax_55 + 1)
                                                                            ecx_40 = eax_55 + 1
                                                                        
                                                                        sub_424860(arg2 + 4, ecx_40)
                                                                    
                                                                    goto label_4b0962
                                                        else
                                                            int32_t ecx_36 = *(arg2 + 0xc)
                                                            
                                                            if (eax_51 != ecx_36)
                                                            label_4b0917:
                                                                char* eax_54 = *(arg2 + 8)
                                                                
                                                                if (eax_54 != 0)
                                                                    ecx_36.b =
                                                                        *(&var_11 - edx_49 + *(arg2 + 4))
                                                                    *eax_54 = ecx_36.b
                                                                
                                                                goto label_4b096b
                                                            
                                                            int32_t eax_52 = eax_51 - edx_49
                                                            
                                                            if (eax_52 u<= 0xfffffffe)
                                                                ecx_36 -= edx_49
                                                                
                                                                if (eax_52 + 1 u> ecx_36)
                                                                    uint32_t edx_51 = ecx_36 u>> 1
                                                                    uint32_t ecx_37
                                                                    
                                                                    if (0xffffffff - edx_51 u>= ecx_36)
                                                                        ecx_37 = ecx_36 + edx_51
                                                                    else
                                                                        ecx_37 = 0
                                                                    
                                                                    if (ecx_37 u< eax_52 + 1)
                                                                        ecx_37 = eax_52 + 1
                                                                    
                                                                    sub_424860(arg2 + 4, ecx_37)
                                                                
                                                                goto label_4b0917
                                                    else
                                                        int32_t edx_46 = *(arg2 + 4)
                                                        int32_t eax_48 = eax_44 - edx_46
                                                        
                                                        if (eax_48 u<= 0xfffffffe)
                                                            int32_t ecx_34 = ecx_33 - edx_46
                                                            
                                                            if (eax_48 + 1 u> ecx_34)
                                                                uint32_t edx_48 = ecx_34 u>> 1
                                                                uint32_t ecx_35
                                                                
                                                                if (0xffffffff - edx_48 u>= ecx_34)
                                                                    ecx_35 = ecx_34 + edx_48
                                                                else
                                                                    ecx_35 = 0
                                                                
                                                                if (ecx_35 u< eax_48 + 1)
                                                                    ecx_35 = eax_48 + 1
                                                                
                                                                sub_424860(arg2 + 4, ecx_35)
                                                            
                                                            goto label_4b08b2
                                                else
                                                    int32_t ecx_31 = *(arg2 + 0xc)
                                                    
                                                    if (eax_44 != ecx_31)
                                                    label_4b0867:
                                                        char* eax_47 = *(arg2 + 8)
                                                        
                                                        if (eax_47 != 0)
                                                            ecx_31.b =
                                                                *(&var_11 - edx_42 + *(arg2 + 4))
                                                            *eax_47 = ecx_31.b
                                                        
                                                        goto label_4b08bb
                                                    
                                                    int32_t eax_45 = eax_44 - edx_42
                                                    
                                                    if (eax_45 u<= 0xfffffffe)
                                                        ecx_31 -= edx_42
                                                        
                                                        if (eax_45 + 1 u> ecx_31)
                                                            uint32_t edx_44 = ecx_31 u>> 1
                                                            uint32_t ecx_32
                                                            
                                                            if (0xffffffff - edx_44 u>= ecx_31)
                                                                ecx_32 = ecx_31 + edx_44
                                                            else
                                                                ecx_32 = 0
                                                            
                                                            if (ecx_32 u< eax_45 + 1)
                                                                ecx_32 = eax_45 + 1
                                                            
                                                            sub_424860(arg2 + 4, ecx_32)
                                                        
                                                        goto label_4b0867
                                            else
                                                int32_t edx_38 = *(arg2 + 4)
                                                int32_t eax_41 = eax_37 - edx_38
                                                
                                                if (eax_41 u<= 0xfffffffe)
                                                    int32_t ecx_29 = ecx_28 - edx_38
                                                    
                                                    if (eax_41 + 1 u> ecx_29)
                                                        uint32_t edx_40 = ecx_29 u>> 1
                                                        uint32_t ecx_30
                                                        
                                                        if (0xffffffff - edx_40 u>= ecx_29)
                                                            ecx_30 = ecx_29 + edx_40
                                                        else
                                                            ecx_30 = 0
                                                        
                                                        if (ecx_30 u< eax_41 + 1)
                                                            ecx_30 = eax_41 + 1
                                                        
                                                        sub_424860(arg2 + 4, ecx_30)
                                                    
                                                    goto label_4b07f5
                                        else
                                            int32_t ecx_26 = *(arg2 + 0xc)
                                            
                                            if (eax_37 != ecx_26)
                                            label_4b07aa:
                                                char* eax_40 = *(arg2 + 8)
                                                
                                                if (eax_40 != 0)
                                                    ecx_26.b = *(&var_11 - edx_34 + *(arg2 + 4))
                                                    *eax_40 = ecx_26.b
                                                
                                                goto label_4b07fe
                                            
                                            int32_t eax_38 = eax_37 - edx_34
                                            
                                            if (eax_38 u<= 0xfffffffe)
                                                ecx_26 -= edx_34
                                                
                                                if (eax_38 + 1 u> ecx_26)
                                                    uint32_t edx_36 = ecx_26 u>> 1
                                                    uint32_t ecx_27
                                                    
                                                    if (0xffffffff - edx_36 u>= ecx_26)
                                                        ecx_27 = ecx_26 + edx_36
                                                    else
                                                        ecx_27 = 0
                                                    
                                                    if (ecx_27 u< eax_38 + 1)
                                                        ecx_27 = eax_38 + 1
                                                    
                                                    sub_424860(arg2 + 4, ecx_27)
                                                
                                                goto label_4b07aa
                                    else
                                        int32_t edx_31 = *(arg2 + 4)
                                        int32_t eax_34 = eax_30 - edx_31
                                        
                                        if (eax_34 u<= 0xfffffffe)
                                            int32_t ecx_24 = ecx_23 - edx_31
                                            
                                            if (eax_34 + 1 u> ecx_24)
                                                uint32_t edx_33 = ecx_24 u>> 1
                                                uint32_t ecx_25
                                                
                                                if (0xffffffff - edx_33 u>= ecx_24)
                                                    ecx_25 = ecx_24 + edx_33
                                                else
                                                    ecx_25 = 0
                                                
                                                if (ecx_25 u< eax_34 + 1)
                                                    ecx_25 = eax_34 + 1
                                                
                                                sub_424860(arg2 + 4, ecx_25)
                                            
                                            goto label_4b0741
                                else
                                    int32_t ecx_21 = *(arg2 + 0xc)
                                    
                                    if (eax_30 != ecx_21)
                                    label_4b06f6:
                                        char* eax_33 = *(arg2 + 8)
                                        
                                        if (eax_33 != 0)
                                            ecx_21.b = *(&var_11 - edx_27 + *(arg2 + 4))
                                            *eax_33 = ecx_21.b
                                        
                                        goto label_4b074a
                                    
                                    int32_t eax_31 = eax_30 - edx_27
                                    
                                    if (eax_31 u<= 0xfffffffe)
                                        ecx_21 -= edx_27
                                        
                                        if (eax_31 + 1 u> ecx_21)
                                            uint32_t edx_29 = ecx_21 u>> 1
                                            uint32_t ecx_22
                                            
                                            if (0xffffffff - edx_29 u>= ecx_21)
                                                ecx_22 = ecx_21 + edx_29
                                            else
                                                ecx_22 = 0
                                            
                                            if (ecx_22 u< eax_31 + 1)
                                                ecx_22 = eax_31 + 1
                                            
                                            sub_424860(arg2 + 4, ecx_22)
                                        
                                        goto label_4b06f6
                            else
                                int32_t edx_24 = *(arg2 + 4)
                                int32_t eax_27 = eax_23 - edx_24
                                
                                if (eax_27 u<= 0xfffffffe)
                                    int32_t ecx_19 = ecx_18 - edx_24
                                    
                                    if (eax_27 + 1 u> ecx_19)
                                        uint32_t edx_26 = ecx_19 u>> 1
                                        uint32_t ecx_20
                                        
                                        if (0xffffffff - edx_26 u>= ecx_19)
                                            ecx_20 = ecx_19 + edx_26
                                        else
                                            ecx_20 = 0
                                        
                                        if (ecx_20 u< eax_27 + 1)
                                            ecx_20 = eax_27 + 1
                                        
                                        sub_424860(arg2 + 4, ecx_20)
                                    
                                    goto label_4b068d
                        else
                            int32_t ecx_16 = *(arg2 + 0xc)
                            
                            if (eax_23 != ecx_16)
                            label_4b0642:
                                char* eax_26 = *(arg2 + 8)
                                
                                if (eax_26 != 0)
                                    ecx_16.b = *(&var_11 - edx_20 + *(arg2 + 4))
                                    *eax_26 = ecx_16.b
                                
                                goto label_4b0696
                            
                            int32_t eax_24 = eax_23 - edx_20
                            
                            if (eax_24 u<= 0xfffffffe)
                                ecx_16 -= edx_20
                                
                                if (eax_24 + 1 u> ecx_16)
                                    uint32_t edx_22 = ecx_16 u>> 1
                                    uint32_t ecx_17
                                    
                                    if (0xffffffff - edx_22 u>= ecx_16)
                                        ecx_17 = ecx_16 + edx_22
                                    else
                                        ecx_17 = 0
                                    
                                    if (ecx_17 u< eax_24 + 1)
                                        ecx_17 = eax_24 + 1
                                    
                                    sub_424860(arg2 + 4, ecx_17)
                                
                                goto label_4b0642
                    else
                        int32_t edx_17 = *(arg2 + 4)
                        int32_t eax_20 = eax_16 - edx_17
                        
                        if (eax_20 u<= 0xfffffffe)
                            int32_t ecx_14 = ecx_13 - edx_17
                            
                            if (eax_20 + 1 u> ecx_14)
                                uint32_t edx_19 = ecx_14 u>> 1
                                uint32_t ecx_15
                                
                                if (0xffffffff - edx_19 u>= ecx_14)
                                    ecx_15 = ecx_14 + edx_19
                                else
                                    ecx_15 = 0
                                
                                if (ecx_15 u< eax_20 + 1)
                                    ecx_15 = eax_20 + 1
                                
                                sub_424860(arg2 + 4, ecx_15)
                            
                            goto label_4b05dd
                else
                    int32_t ecx_11 = *(arg2 + 0xc)
                    
                    if (eax_16 != ecx_11)
                    label_4b0592:
                        char* eax_19 = *(arg2 + 8)
                        
                        if (eax_19 != 0)
                            ecx_11.b = *(&var_11 - edx_13 + *(arg2 + 4))
                            *eax_19 = ecx_11.b
                        
                        goto label_4b05e6
                    
                    int32_t eax_17 = eax_16 - edx_13
                    
                    if (eax_17 u<= 0xfffffffe)
                        ecx_11 -= edx_13
                        
                        if (eax_17 + 1 u> ecx_11)
                            uint32_t edx_15 = ecx_11 u>> 1
                            uint32_t ecx_12
                            
                            if (0xffffffff - edx_15 u>= ecx_11)
                                ecx_12 = ecx_11 + edx_15
                            else
                                ecx_12 = 0
                            
                            if (ecx_12 u< eax_17 + 1)
                                ecx_12 = eax_17 + 1
                            
                            sub_424860(arg2 + 4, ecx_12)
                        
                        goto label_4b0592
            else
                int32_t edx_9 = *(arg2 + 4)
                int32_t eax_13 = eax_9 - edx_9
                
                if (eax_13 u<= 0xfffffffe)
                    int32_t ecx_9 = ecx_8 - edx_9
                    
                    if (eax_13 + 1 u> ecx_9)
                        uint32_t edx_11 = ecx_9 u>> 1
                        uint32_t ecx_10
                        
                        if (0xffffffff - edx_11 u>= ecx_9)
                            ecx_10 = ecx_9 + edx_11
                        else
                            ecx_10 = 0
                        
                        if (ecx_10 u< eax_13 + 1)
                            ecx_10 = eax_13 + 1
                        
                        sub_424860(arg2 + 4, ecx_10)
                    
                    goto label_4b051e
        else
            int32_t ecx_6 = *(arg2 + 0xc)
            
            if (eax_9 != ecx_6)
            label_4b04d1:
                char* eax_12 = *(arg2 + 8)
                
                if (eax_12 != 0)
                    ecx_6.b = *(&var_12 - edx_5 + *(arg2 + 4))
                    *eax_12 = ecx_6.b
                
                *(arg2 + 8) += 1
                goto label_4b0534
            
            int32_t eax_10 = eax_9 - edx_5
            
            if (eax_10 u<= 0xfffffffe)
                ecx_6 -= edx_5
                
                if (eax_10 + 1 u> ecx_6)
                    uint32_t edx_7 = ecx_6 u>> 1
                    uint32_t ecx_7
                    
                    if (0xffffffff - edx_7 u>= ecx_6)
                        ecx_7 = ecx_6 + edx_7
                    else
                        ecx_7 = 0
                    
                    if (ecx_7 u< eax_10 + 1)
                        ecx_7 = eax_10 + 1
                    
                    sub_424860(arg2 + 4, ecx_7)
                
                goto label_4b04d1
        
        sub_6b47bf("vector<T> too long")
        noreturn

char* result
result.b = 1
return result
