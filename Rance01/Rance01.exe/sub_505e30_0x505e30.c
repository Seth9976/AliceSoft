// 函数: sub_505e30
// 地址: 0x505e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
char eax = sub_4c8d50(ebp, arg2)

if (eax == 0)
    return eax

int32_t var_20 = sub_506e00(arg2, &ebp[8])
int32_t var_20_2 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0xb])))
sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0xc])))
bool var_9 = ebp[0xd].b != 0
int32_t var_20_4 = sub_54e400(&var_9, arg2 + 4)
int32_t var_20_6 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0xe])))
int32_t var_20_8 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0xf])))
sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x10])))
sub_4101f0(arg2, ebp[0x11])
sub_4101f0(arg2, ebp[0x12])
sub_506e00(arg2, &ebp[0x13])
sub_506e00(arg2, &ebp[0x16])
sub_506e00(arg2, &ebp[0x19])
int32_t var_20_12 = sub_506e00(arg2, &ebp[0x1c])
int32_t var_20_14 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x1f])))
sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x20])))
sub_4101f0(arg2, ebp[0x21])
sub_507040(arg2, &ebp[0x22])
sub_507040(arg2, &ebp[0x26])
sub_507040(arg2, &ebp[0x2a])
int32_t var_20_21 = sub_4101f0(arg2, ebp[0x2e])
int32_t var_20_23 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x2f])))
sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x30])))
sub_506f00(arg2, &ebp[0x31])
sub_4101f0(arg2, ebp[0x45])
int32_t var_20_27 = sub_4101f0(arg2, ebp[0x46])
int32_t var_20_29 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x47])))
int32_t var_20_31 = sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x48])))
sub_4101f0(arg2, fconvert.s(fconvert.t(ebp[0x49])))
sub_4101f0(arg2, ebp[0x4e])
sub_4101f0(arg2, ebp[0x4f])
sub_4101f0(arg2, ebp[0x50])
sub_4101f0(arg2, ebp[0x51])
sub_4101f0(arg2, ebp[0x52])
sub_4101f0(arg2, ebp[0x55])
int32_t* eax_41 = ebp[0x54]
int32_t* i_5 = *eax_41
int32_t* i_1 = i_5

if (i_5 != eax_41)
    int32_t* i
    
    do
        int32_t ebx_1 = i_1[3]
        int32_t eax_42 = *(arg2 + 8)
        var_9 = ebx_1.b
        int32_t edx_5
        
        if (&var_9 u< eax_42)
            edx_5 = *(arg2 + 4)
        
        if (&var_9 u>= eax_42 || edx_5 u> &var_9)
            int32_t ecx_20 = *(arg2 + 0xc)
            
            if (eax_42 == ecx_20)
                int32_t edx_9 = *(arg2 + 4)
                int32_t eax_46 = eax_42 - edx_9
                
                if (eax_46 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_21 = ecx_20 - edx_9
                
                if (eax_46 + 1 u> ecx_21)
                    uint32_t edx_11 = ecx_21 u>> 1
                    uint32_t ecx_22
                    
                    if (0xffffffff - edx_11 u>= ecx_21)
                        ecx_22 = ecx_21 + edx_11
                    else
                        ecx_22 = 0
                    
                    if (ecx_22 u< eax_46 + 1)
                        ecx_22 = eax_46 + 1
                    
                    sub_424860(arg2 + 4, ecx_22)
            
            char* eax_48 = *(arg2 + 8)
            
            if (eax_48 != 0)
                *eax_48 = ebx_1.b
        else
            int32_t ecx_18 = *(arg2 + 0xc)
            
            if (eax_42 == ecx_18)
                int32_t eax_43 = eax_42 - edx_5
                
                if (eax_43 u> 0xfffffffe)
                    goto label_506664
                
                ecx_18 -= edx_5
                
                if (eax_43 + 1 u> ecx_18)
                    uint32_t edx_7 = ecx_18 u>> 1
                    uint32_t ecx_19
                    
                    if (0xffffffff - edx_7 u>= ecx_18)
                        ecx_19 = ecx_18 + edx_7
                    else
                        ecx_19 = 0
                    
                    if (ecx_19 u< eax_43 + 1)
                        ecx_19 = eax_43 + 1
                    
                    sub_424860(arg2 + 4, ecx_19)
                    ebp = arg1
            
            char* eax_45 = *(arg2 + 8)
            
            if (eax_45 != 0)
                ecx_18.b = *(&var_9 - edx_5 + *(arg2 + 4))
                *eax_45 = ecx_18.b
        
        *(arg2 + 8) += 1
        int32_t eax_49 = *(arg2 + 8)
        uint8_t ebx_2 = (ebx_1 u>> 8).b
        var_9 = ebx_2
        int32_t edx_12
        
        if (&var_9 u< eax_49)
            edx_12 = *(arg2 + 4)
        
        if (&var_9 u>= eax_49 || edx_12 u> &var_9)
            int32_t ecx_25 = *(arg2 + 0xc)
            
            if (eax_49 == ecx_25)
                int32_t edx_16 = *(arg2 + 4)
                int32_t eax_53 = eax_49 - edx_16
                
                if (eax_53 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_26 = ecx_25 - edx_16
                
                if (eax_53 + 1 u> ecx_26)
                    uint32_t edx_18 = ecx_26 u>> 1
                    uint32_t ecx_27
                    
                    if (0xffffffff - edx_18 u>= ecx_26)
                        ecx_27 = ecx_26 + edx_18
                    else
                        ecx_27 = 0
                    
                    if (ecx_27 u< eax_53 + 1)
                        ecx_27 = eax_53 + 1
                    
                    sub_424860(arg2 + 4, ecx_27)
            
            uint8_t* eax_55 = *(arg2 + 8)
            
            if (eax_55 != 0)
                *eax_55 = ebx_2
        else
            int32_t ecx_23 = *(arg2 + 0xc)
            
            if (eax_49 == ecx_23)
                int32_t eax_50 = eax_49 - edx_12
                
                if (eax_50 u> 0xfffffffe)
                    goto label_506664
                
                ecx_23 -= edx_12
                
                if (eax_50 + 1 u> ecx_23)
                    uint32_t edx_14 = ecx_23 u>> 1
                    uint32_t ecx_24
                    
                    if (0xffffffff - edx_14 u>= ecx_23)
                        ecx_24 = ecx_23 + edx_14
                    else
                        ecx_24 = 0
                    
                    if (ecx_24 u< eax_50 + 1)
                        ecx_24 = eax_50 + 1
                    
                    sub_424860(arg2 + 4, ecx_24)
            
            char* eax_52 = *(arg2 + 8)
            
            if (eax_52 != 0)
                ecx_23.b = *(&var_9 - edx_12 + *(arg2 + 4))
                *eax_52 = ecx_23.b
        
        *(arg2 + 8) += 1
        int32_t eax_56 = *(arg2 + 8)
        uint8_t ebx_5 = (ebx_1 u>> 0x10).b
        var_9 = ebx_5
        int32_t edx_19
        
        if (&var_9 u< eax_56)
            edx_19 = *(arg2 + 4)
        
        if (&var_9 u>= eax_56 || edx_19 u> &var_9)
            int32_t ecx_30 = *(arg2 + 0xc)
            
            if (eax_56 == ecx_30)
                int32_t edx_23 = *(arg2 + 4)
                int32_t eax_60 = eax_56 - edx_23
                
                if (eax_60 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_31 = ecx_30 - edx_23
                
                if (eax_60 + 1 u> ecx_31)
                    uint32_t edx_25 = ecx_31 u>> 1
                    uint32_t ecx_32
                    
                    if (0xffffffff - edx_25 u>= ecx_31)
                        ecx_32 = ecx_31 + edx_25
                    else
                        ecx_32 = 0
                    
                    if (ecx_32 u< eax_60 + 1)
                        ecx_32 = eax_60 + 1
                    
                    sub_424860(arg2 + 4, ecx_32)
            
            uint8_t* eax_62 = *(arg2 + 8)
            
            if (eax_62 != 0)
                *eax_62 = ebx_5
        else
            int32_t ecx_28 = *(arg2 + 0xc)
            
            if (eax_56 == ecx_28)
                int32_t eax_57 = eax_56 - edx_19
                
                if (eax_57 u> 0xfffffffe)
                    goto label_506664
                
                ecx_28 -= edx_19
                
                if (eax_57 + 1 u> ecx_28)
                    uint32_t edx_21 = ecx_28 u>> 1
                    uint32_t ecx_29
                    
                    if (0xffffffff - edx_21 u>= ecx_28)
                        ecx_29 = ecx_28 + edx_21
                    else
                        ecx_29 = 0
                    
                    if (ecx_29 u< eax_57 + 1)
                        ecx_29 = eax_57 + 1
                    
                    sub_424860(arg2 + 4, ecx_29)
            
            char* eax_59 = *(arg2 + 8)
            
            if (eax_59 != 0)
                ecx_28.b = *(&var_9 - edx_19 + *(arg2 + 4))
                *eax_59 = ecx_28.b
        
        *(arg2 + 8) += 1
        int32_t eax_63 = *(arg2 + 8)
        uint8_t ebx_8 = (ebx_1 u>> 0x18).b
        var_9 = ebx_8
        int32_t edx_26
        
        if (&var_9 u< eax_63)
            edx_26 = *(arg2 + 4)
        
        if (&var_9 u>= eax_63 || edx_26 u> &var_9)
            int32_t ecx_35 = *(arg2 + 0xc)
            
            if (eax_63 == ecx_35)
                int32_t edx_30 = *(arg2 + 4)
                int32_t eax_67 = eax_63 - edx_30
                
                if (eax_67 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_36 = ecx_35 - edx_30
                
                if (eax_67 + 1 u> ecx_36)
                    uint32_t edx_32 = ecx_36 u>> 1
                    uint32_t ecx_37
                    
                    if (0xffffffff - edx_32 u>= ecx_36)
                        ecx_37 = ecx_36 + edx_32
                    else
                        ecx_37 = 0
                    
                    if (ecx_37 u< eax_67 + 1)
                        ecx_37 = eax_67 + 1
                    
                    sub_424860(arg2 + 4, ecx_37)
            
            uint8_t* eax_69 = *(arg2 + 8)
            
            if (eax_69 != 0)
                *eax_69 = ebx_8
        else
            int32_t ecx_33 = *(arg2 + 0xc)
            
            if (eax_63 == ecx_33)
                int32_t eax_64 = eax_63 - edx_26
                
                if (eax_64 u> 0xfffffffe)
                    goto label_506664
                
                ecx_33 -= edx_26
                
                if (eax_64 + 1 u> ecx_33)
                    uint32_t edx_28 = ecx_33 u>> 1
                    uint32_t ecx_34
                    
                    if (0xffffffff - edx_28 u>= ecx_33)
                        ecx_34 = ecx_33 + edx_28
                    else
                        ecx_34 = 0
                    
                    if (ecx_34 u< eax_64 + 1)
                        ecx_34 = eax_64 + 1
                    
                    sub_424860(arg2 + 4, ecx_34)
            
            char* eax_66 = *(arg2 + 8)
            
            if (eax_66 != 0)
                ecx_33.b = *(&var_9 - edx_26 + *(arg2 + 4))
                *eax_66 = ecx_33.b
        
        *(arg2 + 8) += 1
        int32_t ebx_10 = i_1[4]
        int32_t eax_70 = *(arg2 + 8)
        var_9 = ebx_10.b
        int32_t edx_34
        
        if (&var_9 u< eax_70)
            edx_34 = *(arg2 + 4)
        
        if (&var_9 u>= eax_70 || edx_34 u> &var_9)
            int32_t ecx_40 = *(arg2 + 0xc)
            
            if (eax_70 == ecx_40)
                int32_t edx_38 = *(arg2 + 4)
                int32_t eax_74 = eax_70 - edx_38
                
                if (eax_74 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_41 = ecx_40 - edx_38
                
                if (eax_74 + 1 u> ecx_41)
                    uint32_t edx_40 = ecx_41 u>> 1
                    uint32_t ecx_42
                    
                    if (0xffffffff - edx_40 u>= ecx_41)
                        ecx_42 = ecx_41 + edx_40
                    else
                        ecx_42 = 0
                    
                    if (ecx_42 u< eax_74 + 1)
                        ecx_42 = eax_74 + 1
                    
                    sub_424860(arg2 + 4, ecx_42)
            
            char* eax_76 = *(arg2 + 8)
            
            if (eax_76 != 0)
                *eax_76 = ebx_10.b
        else
            int32_t ecx_38 = *(arg2 + 0xc)
            
            if (eax_70 == ecx_38)
                int32_t eax_71 = eax_70 - edx_34
                
                if (eax_71 u> 0xfffffffe)
                    goto label_506664
                
                ecx_38 -= edx_34
                
                if (eax_71 + 1 u> ecx_38)
                    uint32_t edx_36 = ecx_38 u>> 1
                    uint32_t ecx_39
                    
                    if (0xffffffff - edx_36 u>= ecx_38)
                        ecx_39 = ecx_38 + edx_36
                    else
                        ecx_39 = 0
                    
                    if (ecx_39 u< eax_71 + 1)
                        ecx_39 = eax_71 + 1
                    
                    sub_424860(arg2 + 4, ecx_39)
                    ebp = arg1
            
            char* eax_73 = *(arg2 + 8)
            
            if (eax_73 != 0)
                ecx_38.b = *(&var_9 - edx_34 + *(arg2 + 4))
                *eax_73 = ecx_38.b
        
        *(arg2 + 8) += 1
        int32_t eax_77 = *(arg2 + 8)
        uint8_t ebx_11 = (ebx_10 u>> 8).b
        var_9 = ebx_11
        int32_t edx_41
        
        if (&var_9 u< eax_77)
            edx_41 = *(arg2 + 4)
        
        if (&var_9 u>= eax_77 || edx_41 u> &var_9)
            int32_t ecx_45 = *(arg2 + 0xc)
            
            if (eax_77 == ecx_45)
                int32_t edx_45 = *(arg2 + 4)
                int32_t eax_81 = eax_77 - edx_45
                
                if (eax_81 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_46 = ecx_45 - edx_45
                
                if (eax_81 + 1 u> ecx_46)
                    uint32_t edx_47 = ecx_46 u>> 1
                    uint32_t ecx_47
                    
                    if (0xffffffff - edx_47 u>= ecx_46)
                        ecx_47 = ecx_46 + edx_47
                    else
                        ecx_47 = 0
                    
                    if (ecx_47 u< eax_81 + 1)
                        ecx_47 = eax_81 + 1
                    
                    sub_424860(arg2 + 4, ecx_47)
            
            uint8_t* eax_83 = *(arg2 + 8)
            
            if (eax_83 != 0)
                *eax_83 = ebx_11
        else
            int32_t ecx_43 = *(arg2 + 0xc)
            
            if (eax_77 == ecx_43)
                int32_t eax_78 = eax_77 - edx_41
                
                if (eax_78 u> 0xfffffffe)
                    goto label_506664
                
                ecx_43 -= edx_41
                
                if (eax_78 + 1 u> ecx_43)
                    uint32_t edx_43 = ecx_43 u>> 1
                    uint32_t ecx_44
                    
                    if (0xffffffff - edx_43 u>= ecx_43)
                        ecx_44 = ecx_43 + edx_43
                    else
                        ecx_44 = 0
                    
                    if (ecx_44 u< eax_78 + 1)
                        ecx_44 = eax_78 + 1
                    
                    sub_424860(arg2 + 4, ecx_44)
            
            char* eax_80 = *(arg2 + 8)
            
            if (eax_80 != 0)
                ecx_43.b = *(&var_9 - edx_41 + *(arg2 + 4))
                *eax_80 = ecx_43.b
        
        *(arg2 + 8) += 1
        int32_t eax_84 = *(arg2 + 8)
        uint8_t ebx_14 = (ebx_10 u>> 0x10).b
        var_9 = ebx_14
        int32_t edx_48
        
        if (&var_9 u< eax_84)
            edx_48 = *(arg2 + 4)
        
        if (&var_9 u>= eax_84 || edx_48 u> &var_9)
            int32_t ecx_50 = *(arg2 + 0xc)
            
            if (eax_84 == ecx_50)
                int32_t edx_52 = *(arg2 + 4)
                int32_t eax_88 = eax_84 - edx_52
                
                if (eax_88 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_51 = ecx_50 - edx_52
                
                if (eax_88 + 1 u> ecx_51)
                    uint32_t edx_54 = ecx_51 u>> 1
                    uint32_t ecx_52
                    
                    if (0xffffffff - edx_54 u>= ecx_51)
                        ecx_52 = ecx_51 + edx_54
                    else
                        ecx_52 = 0
                    
                    if (ecx_52 u< eax_88 + 1)
                        ecx_52 = eax_88 + 1
                    
                    sub_424860(arg2 + 4, ecx_52)
            
            uint8_t* eax_90 = *(arg2 + 8)
            
            if (eax_90 != 0)
                *eax_90 = ebx_14
        else
            int32_t ecx_48 = *(arg2 + 0xc)
            
            if (eax_84 == ecx_48)
                int32_t eax_85 = eax_84 - edx_48
                
                if (eax_85 u> 0xfffffffe)
                    goto label_506664
                
                ecx_48 -= edx_48
                
                if (eax_85 + 1 u> ecx_48)
                    uint32_t edx_50 = ecx_48 u>> 1
                    uint32_t ecx_49
                    
                    if (0xffffffff - edx_50 u>= ecx_48)
                        ecx_49 = ecx_48 + edx_50
                    else
                        ecx_49 = 0
                    
                    if (ecx_49 u< eax_85 + 1)
                        ecx_49 = eax_85 + 1
                    
                    sub_424860(arg2 + 4, ecx_49)
            
            char* eax_87 = *(arg2 + 8)
            
            if (eax_87 != 0)
                ecx_48.b = *(&var_9 - edx_48 + *(arg2 + 4))
                *eax_87 = ecx_48.b
        
        *(arg2 + 8) += 1
        int32_t eax_91 = *(arg2 + 8)
        uint8_t ebx_17 = (ebx_10 u>> 0x18).b
        var_9 = ebx_17
        int32_t edx_55
        
        if (&var_9 u< eax_91)
            edx_55 = *(arg2 + 4)
        
        if (&var_9 u>= eax_91 || edx_55 u> &var_9)
            int32_t ecx_55 = *(arg2 + 0xc)
            
            if (eax_91 == ecx_55)
                int32_t edx_59 = *(arg2 + 4)
                int32_t eax_95 = eax_91 - edx_59
                
                if (eax_95 u> 0xfffffffe)
                    goto label_506664
                
                int32_t ecx_56 = ecx_55 - edx_59
                
                if (eax_95 + 1 u> ecx_56)
                    uint32_t edx_61 = ecx_56 u>> 1
                    uint32_t ecx_57
                    
                    if (0xffffffff - edx_61 u>= ecx_56)
                        ecx_57 = ecx_56 + edx_61
                    else
                        ecx_57 = 0
                    
                    if (ecx_57 u< eax_95 + 1)
                        ecx_57 = eax_95 + 1
                    
                    sub_424860(arg2 + 4, ecx_57)
            
            uint8_t* eax_97 = *(arg2 + 8)
            
            if (eax_97 != 0)
                *eax_97 = ebx_17
        else
            int32_t ecx_53 = *(arg2 + 0xc)
            
            if (eax_91 == ecx_53)
                int32_t eax_92 = eax_91 - edx_55
                
                if (eax_92 u> 0xfffffffe)
                    goto label_506664
                
                ecx_53 -= edx_55
                
                if (eax_92 + 1 u> ecx_53)
                    uint32_t edx_57 = ecx_53 u>> 1
                    uint32_t ecx_54
                    
                    if (0xffffffff - edx_57 u>= ecx_53)
                        ecx_54 = ecx_53 + edx_57
                    else
                        ecx_54 = 0
                    
                    if (ecx_54 u< eax_92 + 1)
                        ecx_54 = eax_92 + 1
                    
                    sub_424860(arg2 + 4, ecx_54)
            
            char* eax_94 = *(arg2 + 8)
            
            if (eax_94 != 0)
                ecx_53.b = *(&var_9 - edx_55 + *(arg2 + 4))
                *eax_94 = ecx_53.b
        
        i = i_1
        *(arg2 + 8) += 1
        
        if (*(i + 0x15) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0x15) != 0)
                int32_t* i_2 = i[1]
                
                if (*(i_2 + 0x15) == 0)
                    while (i == i_2[2])
                        i = i_2
                        i_2 = i_2[1]
                        
                        if (*(i_2 + 0x15) != 0)
                            break
                
                i = i_2
            else
                int32_t* i_4 = *i_3
                
                while (*(i_4 + 0x15) == 0)
                    i_3 = i_4
                    i_4 = *i_3
                
                i = i_3
            
            i_1 = i
    while (i != ebp[0x54])

int32_t ebx_19 = ebp[0x57]
int32_t eax_98 = *(arg2 + 8)
var_9 = ebx_19.b
int32_t edx_62

if (&var_9 u< eax_98)
    edx_62 = *(arg2 + 4)

if (&var_9 u< eax_98 && edx_62 u<= &var_9)
    int32_t ecx_58 = *(arg2 + 0xc)
    
    if (eax_98 != ecx_58)
    label_506693:
        char* eax_101 = *(arg2 + 8)
        
        if (eax_101 != 0)
            ecx_58.b = *(&var_9 - edx_62 + *(arg2 + 4))
            *eax_101 = ecx_58.b
        
        goto label_5066ec
    
    int32_t eax_99 = eax_98 - edx_62
    
    if (eax_99 u<= 0xfffffffe)
        ecx_58 -= edx_62
        
        if (eax_99 + 1 u> ecx_58)
            uint32_t edx_64 = ecx_58 u>> 1
            uint32_t ecx_59
            
            if (0xffffffff - edx_64 u>= ecx_58)
                ecx_59 = ecx_58 + edx_64
            else
                ecx_59 = 0
            
            if (ecx_59 u< eax_99 + 1)
                ecx_59 = eax_99 + 1
            
            sub_424860(arg2 + 4, ecx_59)
            ebp = arg1
        
        goto label_506693
    
label_506664:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_60 = *(arg2 + 0xc)

if (eax_98 == ecx_60)
    int32_t edx_66 = *(arg2 + 4)
    int32_t eax_102 = eax_98 - edx_66
    
    if (eax_102 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t ecx_61 = ecx_60 - edx_66
    
    if (eax_102 + 1 u> ecx_61)
        uint32_t edx_68 = ecx_61 u>> 1
        uint32_t ecx_62
        
        if (0xffffffff - edx_68 u>= ecx_61)
            ecx_62 = ecx_61 + edx_68
        else
            ecx_62 = 0
        
        if (ecx_62 u< eax_102 + 1)
            ecx_62 = eax_102 + 1
        
        sub_424860(arg2 + 4, ecx_62)

char* eax_104 = *(arg2 + 8)

if (eax_104 != 0)
    *eax_104 = ebx_19.b

label_5066ec:
*(arg2 + 8) += 1
int32_t eax_105 = *(arg2 + 8)
uint8_t ebx_20 = (ebx_19 u>> 8).b
arg1.b = ebx_20
int32_t edx_69

if (&arg1 u< eax_105)
    edx_69 = *(arg2 + 4)

if (&arg1 u>= eax_105 || edx_69 u> &arg1)
    int32_t ecx_65 = *(arg2 + 0xc)
    
    if (eax_105 == ecx_65)
        int32_t edx_73 = *(arg2 + 4)
        int32_t eax_109 = eax_105 - edx_73
        
        if (eax_109 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_66 = ecx_65 - edx_73
        
        if (eax_109 + 1 u> ecx_66)
            uint32_t edx_75 = ecx_66 u>> 1
            uint32_t ecx_67
            
            if (0xffffffff - edx_75 u>= ecx_66)
                ecx_67 = ecx_66 + edx_75
            else
                ecx_67 = 0
            
            if (ecx_67 u< eax_109 + 1)
                ecx_67 = eax_109 + 1
            
            sub_424860(arg2 + 4, ecx_67)
    
    uint8_t* eax_111 = *(arg2 + 8)
    
    if (eax_111 != 0)
        *eax_111 = ebx_20
else
    int32_t ecx_63 = *(arg2 + 0xc)
    
    if (eax_105 == ecx_63)
        int32_t eax_106 = eax_105 - edx_69
        
        if (eax_106 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_63 -= edx_69
        
        if (eax_106 + 1 u> ecx_63)
            uint32_t edx_71 = ecx_63 u>> 1
            uint32_t ecx_64
            
            if (0xffffffff - edx_71 u>= ecx_63)
                ecx_64 = ecx_63 + edx_71
            else
                ecx_64 = 0
            
            if (ecx_64 u< eax_106 + 1)
                ecx_64 = eax_106 + 1
            
            sub_424860(arg2 + 4, ecx_64)
    
    char* eax_108 = *(arg2 + 8)
    
    if (eax_108 != 0)
        ecx_63.b = *(&arg1 - edx_69 + *(arg2 + 4))
        *eax_108 = ecx_63.b

*(arg2 + 8) += 1
arg1.b = (ebx_19 u>> 0x10).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_19 u>> 0x18).b
sub_54e400(&arg1, arg2 + 4)
sub_4101f0(arg2, ebp[0x58])
sub_4101f0(arg2, ebp[0x59])
sub_4101f0(arg2, ebp[0x5a])
sub_4101f0(arg2, ebp[0x5b])
sub_4101f0(arg2, ebp[0x5c])
sub_4101f0(arg2, ebp[0x5d])
sub_4101f0(arg2, ebp[0x5e])
sub_4101f0(arg2, ebp[0x5f])
sub_4101f0(arg2, ebp[0x60])
sub_4101f0(arg2, ebp[0x61])
sub_4101f0(arg2, ebp[0x66])
sub_4101f0(arg2, ebp[0x67])

if (sub_4cb8a0(ebp[0x68], arg2) != 0)
    sub_507040(arg2, &ebp[0x69])
    
    if (sub_4b03c0(&ebp[0x6d], arg2) != 0)
        sub_507040(arg2, &ebp[0x71])
        float* eax_134
        eax_134.b = 1
        return eax_134

return 0
