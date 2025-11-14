// 函数: sub_415610
// 地址: 0x415610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[4]
uint8_t var_9 = ebx.b
sub_54e400(&var_9, arg2 + 4)
var_9 = (ebx u>> 8).b
sub_54e400(&var_9, arg2 + 4)
var_9 = (ebx u>> 0x10).b
sub_54e400(&var_9, arg2 + 4)
var_9 = (ebx u>> 0x18).b
sub_54e400(&var_9, arg2 + 4)
int32_t* result = arg1[3]
int32_t* i_5 = *result
int32_t* i_1 = i_5

if (i_5 != result)
    char var_a = 1
    
    while (true)
        int32_t eax_6 = *(arg2 + 8)
        int32_t edx_1
        
        if (&var_a u< eax_6)
            edx_1 = *(arg2 + 4)
        
        if (&var_a u>= eax_6 || edx_1 u> &var_a)
            int32_t ecx_4 = *(arg2 + 0xc)
            
            if (eax_6 != ecx_4)
            label_41572b:
                char* eax_12 = *(arg2 + 8)
                
                if (eax_12 != 0)
                    *eax_12 = 1
                
                *(arg2 + 8) += 1
            label_41573d:
                int32_t eax_13 = *(arg2 + 8)
                var_9 = 0
                int32_t edx_8
                
                if (&var_9 u< eax_13)
                    edx_8 = *(arg2 + 4)
                
                if (&var_9 u>= eax_13 || edx_8 u> &var_9)
                    int32_t ecx_9 = *(arg2 + 0xc)
                    
                    if (eax_13 != ecx_9)
                    label_4157df:
                        char* eax_19 = *(arg2 + 8)
                        
                        if (eax_19 != 0)
                            *eax_19 = 0
                        
                    label_4157e9:
                        *(arg2 + 8) += 1
                        int32_t eax_20 = *(arg2 + 8)
                        var_9 = 0
                        int32_t edx_15
                        
                        if (&var_9 u< eax_20)
                            edx_15 = *(arg2 + 4)
                        
                        if (&var_9 u>= eax_20 || edx_15 u> &var_9)
                            int32_t ecx_14 = *(arg2 + 0xc)
                            
                            if (eax_20 != ecx_14)
                            label_41588e:
                                char* eax_26 = *(arg2 + 8)
                                
                                if (eax_26 != 0)
                                    *eax_26 = 0
                                
                            label_415898:
                                *(arg2 + 8) += 1
                                int32_t eax_27 = *(arg2 + 8)
                                var_9 = 0
                                int32_t edx_22
                                
                                if (&var_9 u< eax_27)
                                    edx_22 = *(arg2 + 4)
                                
                                if (&var_9 u>= eax_27 || edx_22 u> &var_9)
                                    int32_t ecx_19 = *(arg2 + 0xc)
                                    
                                    if (eax_27 != ecx_19)
                                    label_41593d:
                                        char* eax_33 = *(arg2 + 8)
                                        
                                        if (eax_33 != 0)
                                            *eax_33 = 0
                                        
                                    label_415947:
                                        *(arg2 + 8) += 1
                                        int32_t ebx_6 = i_1[3]
                                        int32_t eax_34 = *(arg2 + 8)
                                        var_9 = ebx_6.b
                                        int32_t edx_30
                                        
                                        if (&var_9 u< eax_34)
                                            edx_30 = *(arg2 + 4)
                                        
                                        if (&var_9 u>= eax_34 || edx_30 u> &var_9)
                                            int32_t ecx_24 = *(arg2 + 0xc)
                                            
                                            if (eax_34 != ecx_24)
                                            label_4159f7:
                                                char* eax_40 = *(arg2 + 8)
                                                
                                                if (eax_40 != 0)
                                                    *eax_40 = ebx_6.b
                                                
                                            label_415a00:
                                                *(arg2 + 8) += 1
                                                int32_t eax_41 = *(arg2 + 8)
                                                uint8_t ebx_7 = (ebx_6 u>> 8).b
                                                var_9 = ebx_7
                                                int32_t edx_37
                                                
                                                if (&var_9 u< eax_41)
                                                    edx_37 = *(arg2 + 4)
                                                
                                                if (&var_9 u>= eax_41 || edx_37 u> &var_9)
                                                    int32_t ecx_29 = *(arg2 + 0xc)
                                                    
                                                    if (eax_41 != ecx_29)
                                                    label_415aa7:
                                                        uint8_t* eax_47 = *(arg2 + 8)
                                                        
                                                        if (eax_47 != 0)
                                                            *eax_47 = ebx_7
                                                        
                                                    label_415ab0:
                                                        *(arg2 + 8) += 1
                                                        int32_t eax_48 = *(arg2 + 8)
                                                        uint8_t ebx_10 = (ebx_6 u>> 0x10).b
                                                        var_9 = ebx_10
                                                        int32_t edx_44
                                                        
                                                        if (&var_9 u< eax_48)
                                                            edx_44 = *(arg2 + 4)
                                                        
                                                        if (&var_9 u>= eax_48 || edx_44 u> &var_9)
                                                            int32_t ecx_34 = *(arg2 + 0xc)
                                                            
                                                            if (eax_48 != ecx_34)
                                                            label_415b5b:
                                                                uint8_t* eax_54 = *(arg2 + 8)
                                                                
                                                                if (eax_54 != 0)
                                                                    *eax_54 = ebx_10
                                                                
                                                            label_415b64:
                                                                *(arg2 + 8) += 1
                                                                int32_t eax_55 = *(arg2 + 8)
                                                                uint8_t ebx_13 = (ebx_6 u>> 0x18).b
                                                                var_9 = ebx_13
                                                                int32_t edx_51
                                                                
                                                                if (&var_9 u< eax_55)
                                                                    edx_51 = *(arg2 + 4)
                                                                
                                                                if (&var_9 u>= eax_55
                                                                        || edx_51 u> &var_9)
                                                                    int32_t ecx_39 = *(arg2 + 0xc)
                                                                    
                                                                    if (eax_55 != ecx_39)
                                                                    label_415c0f:
                                                                        uint8_t* eax_61 = *(arg2 + 8)
                                                                        
                                                                        if (eax_61 != 0)
                                                                            *eax_61 = ebx_13
                                                                        
                                                                    label_415c1c:
                                                                        *(arg2 + 8) += 1
                                                                        int32_t* i = i_1
                                                                        
                                                                        if (sub_413d10(i[4], arg2) == 0)
                                                                            return false
                                                                        
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
                                                                        
                                                                        if (i == arg1[3])
                                                                            break
                                                                        
                                                                        continue
                                                                    else
                                                                        int32_t edx_55 = *(arg2 + 4)
                                                                        int32_t eax_59 = eax_55 - edx_55
                                                                        
                                                                        if (eax_59 u<= 0xfffffffe)
                                                                            int32_t ecx_40 = ecx_39 - edx_55
                                                                            
                                                                            if (eax_59 + 1 u> ecx_40)
                                                                                uint32_t edx_57 = ecx_40 u>> 1
                                                                                int32_t ecx_41
                                                                                
                                                                                if (0xffffffff - edx_57 u>= ecx_40)
                                                                                    ecx_41 = ecx_40 + edx_57
                                                                                else
                                                                                    ecx_41 = 0
                                                                                
                                                                                if (ecx_41 u< eax_59 + 1)
                                                                                    ecx_41 = eax_59 + 1
                                                                                
                                                                                sub_424860(arg2 + 4, ecx_41)
                                                                            
                                                                            goto label_415c0f
                                                                else
                                                                    int32_t ecx_37 = *(arg2 + 0xc)
                                                                    
                                                                    if (eax_55 != ecx_37)
                                                                    label_415bc4:
                                                                        char* eax_58 = *(arg2 + 8)
                                                                        
                                                                        if (eax_58 != 0)
                                                                            ecx_37.b =
                                                                                *(&var_9 - edx_51 + *(arg2 + 4))
                                                                            *eax_58 = ecx_37.b
                                                                        
                                                                        goto label_415c1c
                                                                    
                                                                    int32_t eax_56 = eax_55 - edx_51
                                                                    
                                                                    if (eax_56 u<= 0xfffffffe)
                                                                        ecx_37 -= edx_51
                                                                        
                                                                        if (eax_56 + 1 u> ecx_37)
                                                                            uint32_t edx_53 = ecx_37 u>> 1
                                                                            int32_t ecx_38
                                                                            
                                                                            if (0xffffffff - edx_53 u>= ecx_37)
                                                                                ecx_38 = ecx_37 + edx_53
                                                                            else
                                                                                ecx_38 = 0
                                                                            
                                                                            if (ecx_38 u< eax_56 + 1)
                                                                                ecx_38 = eax_56 + 1
                                                                            
                                                                            sub_424860(arg2 + 4, ecx_38)
                                                                        
                                                                        goto label_415bc4
                                                            else
                                                                int32_t edx_48 = *(arg2 + 4)
                                                                int32_t eax_52 = eax_48 - edx_48
                                                                
                                                                if (eax_52 u<= 0xfffffffe)
                                                                    int32_t ecx_35 = ecx_34 - edx_48
                                                                    
                                                                    if (eax_52 + 1 u> ecx_35)
                                                                        uint32_t edx_50 = ecx_35 u>> 1
                                                                        int32_t ecx_36
                                                                        
                                                                        if (0xffffffff - edx_50 u>= ecx_35)
                                                                            ecx_36 = ecx_35 + edx_50
                                                                        else
                                                                            ecx_36 = 0
                                                                        
                                                                        if (ecx_36 u< eax_52 + 1)
                                                                            ecx_36 = eax_52 + 1
                                                                        
                                                                        sub_424860(arg2 + 4, ecx_36)
                                                                    
                                                                    goto label_415b5b
                                                        else
                                                            int32_t ecx_32 = *(arg2 + 0xc)
                                                            
                                                            if (eax_48 != ecx_32)
                                                            label_415b10:
                                                                char* eax_51 = *(arg2 + 8)
                                                                
                                                                if (eax_51 != 0)
                                                                    ecx_32.b =
                                                                        *(&var_9 - edx_44 + *(arg2 + 4))
                                                                    *eax_51 = ecx_32.b
                                                                
                                                                goto label_415b64
                                                            
                                                            int32_t eax_49 = eax_48 - edx_44
                                                            
                                                            if (eax_49 u<= 0xfffffffe)
                                                                ecx_32 -= edx_44
                                                                
                                                                if (eax_49 + 1 u> ecx_32)
                                                                    uint32_t edx_46 = ecx_32 u>> 1
                                                                    int32_t ecx_33
                                                                    
                                                                    if (0xffffffff - edx_46 u>= ecx_32)
                                                                        ecx_33 = ecx_32 + edx_46
                                                                    else
                                                                        ecx_33 = 0
                                                                    
                                                                    if (ecx_33 u< eax_49 + 1)
                                                                        ecx_33 = eax_49 + 1
                                                                    
                                                                    sub_424860(arg2 + 4, ecx_33)
                                                                
                                                                goto label_415b10
                                                    else
                                                        int32_t edx_41 = *(arg2 + 4)
                                                        int32_t eax_45 = eax_41 - edx_41
                                                        
                                                        if (eax_45 u<= 0xfffffffe)
                                                            int32_t ecx_30 = ecx_29 - edx_41
                                                            
                                                            if (eax_45 + 1 u> ecx_30)
                                                                uint32_t edx_43 = ecx_30 u>> 1
                                                                int32_t ecx_31
                                                                
                                                                if (0xffffffff - edx_43 u>= ecx_30)
                                                                    ecx_31 = ecx_30 + edx_43
                                                                else
                                                                    ecx_31 = 0
                                                                
                                                                if (ecx_31 u< eax_45 + 1)
                                                                    ecx_31 = eax_45 + 1
                                                                
                                                                sub_424860(arg2 + 4, ecx_31)
                                                            
                                                            goto label_415aa7
                                                else
                                                    int32_t ecx_27 = *(arg2 + 0xc)
                                                    
                                                    if (eax_41 != ecx_27)
                                                    label_415a5c:
                                                        char* eax_44 = *(arg2 + 8)
                                                        
                                                        if (eax_44 != 0)
                                                            ecx_27.b =
                                                                *(&var_9 - edx_37 + *(arg2 + 4))
                                                            *eax_44 = ecx_27.b
                                                        
                                                        goto label_415ab0
                                                    
                                                    int32_t eax_42 = eax_41 - edx_37
                                                    
                                                    if (eax_42 u<= 0xfffffffe)
                                                        ecx_27 -= edx_37
                                                        
                                                        if (eax_42 + 1 u> ecx_27)
                                                            uint32_t edx_39 = ecx_27 u>> 1
                                                            int32_t ecx_28
                                                            
                                                            if (0xffffffff - edx_39 u>= ecx_27)
                                                                ecx_28 = ecx_27 + edx_39
                                                            else
                                                                ecx_28 = 0
                                                            
                                                            if (ecx_28 u< eax_42 + 1)
                                                                ecx_28 = eax_42 + 1
                                                            
                                                            sub_424860(arg2 + 4, ecx_28)
                                                        
                                                        goto label_415a5c
                                            else
                                                int32_t edx_34 = *(arg2 + 4)
                                                int32_t eax_38 = eax_34 - edx_34
                                                
                                                if (eax_38 u<= 0xfffffffe)
                                                    int32_t ecx_25 = ecx_24 - edx_34
                                                    
                                                    if (eax_38 + 1 u> ecx_25)
                                                        uint32_t edx_36 = ecx_25 u>> 1
                                                        int32_t ecx_26
                                                        
                                                        if (0xffffffff - edx_36 u>= ecx_25)
                                                            ecx_26 = ecx_25 + edx_36
                                                        else
                                                            ecx_26 = 0
                                                        
                                                        if (ecx_26 u< eax_38 + 1)
                                                            ecx_26 = eax_38 + 1
                                                        
                                                        sub_424860(arg2 + 4, ecx_26)
                                                    
                                                    goto label_4159f7
                                        else
                                            int32_t ecx_22 = *(arg2 + 0xc)
                                            
                                            if (eax_34 != ecx_22)
                                            label_4159ac:
                                                char* eax_37 = *(arg2 + 8)
                                                
                                                if (eax_37 != 0)
                                                    ecx_22.b = *(&var_9 - edx_30 + *(arg2 + 4))
                                                    *eax_37 = ecx_22.b
                                                
                                                goto label_415a00
                                            
                                            int32_t eax_35 = eax_34 - edx_30
                                            
                                            if (eax_35 u<= 0xfffffffe)
                                                ecx_22 -= edx_30
                                                
                                                if (eax_35 + 1 u> ecx_22)
                                                    uint32_t edx_32 = ecx_22 u>> 1
                                                    int32_t ecx_23
                                                    
                                                    if (0xffffffff - edx_32 u>= ecx_22)
                                                        ecx_23 = ecx_22 + edx_32
                                                    else
                                                        ecx_23 = 0
                                                    
                                                    if (ecx_23 u< eax_35 + 1)
                                                        ecx_23 = eax_35 + 1
                                                    
                                                    sub_424860(arg2 + 4, ecx_23)
                                                
                                                goto label_4159ac
                                    else
                                        int32_t edx_26 = *(arg2 + 4)
                                        int32_t eax_31 = eax_27 - edx_26
                                        
                                        if (eax_31 u<= 0xfffffffe)
                                            int32_t ecx_20 = ecx_19 - edx_26
                                            
                                            if (eax_31 + 1 u> ecx_20)
                                                uint32_t edx_28 = ecx_20 u>> 1
                                                int32_t ecx_21
                                                
                                                if (0xffffffff - edx_28 u>= ecx_20)
                                                    ecx_21 = ecx_20 + edx_28
                                                else
                                                    ecx_21 = 0
                                                
                                                if (ecx_21 u< eax_31 + 1)
                                                    ecx_21 = eax_31 + 1
                                                
                                                sub_424860(arg2 + 4, ecx_21)
                                            
                                            goto label_41593d
                                else
                                    int32_t ecx_17 = *(arg2 + 0xc)
                                    
                                    if (eax_27 != ecx_17)
                                    label_4158f2:
                                        char* eax_30 = *(arg2 + 8)
                                        
                                        if (eax_30 != 0)
                                            ecx_17.b = *(&var_9 - edx_22 + *(arg2 + 4))
                                            *eax_30 = ecx_17.b
                                        
                                        goto label_415947
                                    
                                    int32_t eax_28 = eax_27 - edx_22
                                    
                                    if (eax_28 u<= 0xfffffffe)
                                        ecx_17 -= edx_22
                                        
                                        if (eax_28 + 1 u> ecx_17)
                                            uint32_t edx_24 = ecx_17 u>> 1
                                            int32_t ecx_18
                                            
                                            if (0xffffffff - edx_24 u>= ecx_17)
                                                ecx_18 = ecx_17 + edx_24
                                            else
                                                ecx_18 = 0
                                            
                                            if (ecx_18 u< eax_28 + 1)
                                                ecx_18 = eax_28 + 1
                                            
                                            sub_424860(arg2 + 4, ecx_18)
                                        
                                        goto label_4158f2
                            else
                                int32_t edx_19 = *(arg2 + 4)
                                int32_t eax_24 = eax_20 - edx_19
                                
                                if (eax_24 u<= 0xfffffffe)
                                    int32_t ecx_15 = ecx_14 - edx_19
                                    
                                    if (eax_24 + 1 u> ecx_15)
                                        uint32_t edx_21 = ecx_15 u>> 1
                                        int32_t ecx_16
                                        
                                        if (0xffffffff - edx_21 u>= ecx_15)
                                            ecx_16 = ecx_15 + edx_21
                                        else
                                            ecx_16 = 0
                                        
                                        if (ecx_16 u< eax_24 + 1)
                                            ecx_16 = eax_24 + 1
                                        
                                        sub_424860(arg2 + 4, ecx_16)
                                    
                                    goto label_41588e
                        else
                            int32_t ecx_12 = *(arg2 + 0xc)
                            
                            if (eax_20 != ecx_12)
                            label_415843:
                                char* eax_23 = *(arg2 + 8)
                                
                                if (eax_23 != 0)
                                    ecx_12.b = *(&var_9 - edx_15 + *(arg2 + 4))
                                    *eax_23 = ecx_12.b
                                
                                goto label_415898
                            
                            int32_t eax_21 = eax_20 - edx_15
                            
                            if (eax_21 u<= 0xfffffffe)
                                ecx_12 -= edx_15
                                
                                if (eax_21 + 1 u> ecx_12)
                                    uint32_t edx_17 = ecx_12 u>> 1
                                    int32_t ecx_13
                                    
                                    if (0xffffffff - edx_17 u>= ecx_12)
                                        ecx_13 = ecx_12 + edx_17
                                    else
                                        ecx_13 = 0
                                    
                                    if (ecx_13 u< eax_21 + 1)
                                        ecx_13 = eax_21 + 1
                                    
                                    sub_424860(arg2 + 4, ecx_13)
                                
                                goto label_415843
                    else
                        int32_t edx_12 = *(arg2 + 4)
                        int32_t eax_17 = eax_13 - edx_12
                        
                        if (eax_17 u<= 0xfffffffe)
                            int32_t ecx_10 = ecx_9 - edx_12
                            
                            if (eax_17 + 1 u> ecx_10)
                                uint32_t edx_14 = ecx_10 u>> 1
                                int32_t ecx_11
                                
                                if (0xffffffff - edx_14 u>= ecx_10)
                                    ecx_11 = ecx_10 + edx_14
                                else
                                    ecx_11 = 0
                                
                                if (ecx_11 u< eax_17 + 1)
                                    ecx_11 = eax_17 + 1
                                
                                sub_424860(arg2 + 4, ecx_11)
                            
                            goto label_4157df
                else
                    int32_t ecx_7 = *(arg2 + 0xc)
                    
                    if (eax_13 != ecx_7)
                    label_415794:
                        char* eax_16 = *(arg2 + 8)
                        
                        if (eax_16 != 0)
                            ecx_7.b = *(&var_9 - edx_8 + *(arg2 + 4))
                            *eax_16 = ecx_7.b
                        
                        goto label_4157e9
                    
                    int32_t eax_14 = eax_13 - edx_8
                    
                    if (eax_14 u<= 0xfffffffe)
                        ecx_7 -= edx_8
                        
                        if (eax_14 + 1 u> ecx_7)
                            uint32_t edx_10 = ecx_7 u>> 1
                            int32_t ecx_8
                            
                            if (0xffffffff - edx_10 u>= ecx_7)
                                ecx_8 = ecx_7 + edx_10
                            else
                                ecx_8 = 0
                            
                            if (ecx_8 u< eax_14 + 1)
                                ecx_8 = eax_14 + 1
                            
                            sub_424860(arg2 + 4, ecx_8)
                        
                        goto label_415794
            else
                int32_t edx_5 = *(arg2 + 4)
                int32_t eax_10 = eax_6 - edx_5
                
                if (eax_10 u<= 0xfffffffe)
                    int32_t ecx_5 = ecx_4 - edx_5
                    
                    if (eax_10 + 1 u> ecx_5)
                        uint32_t edx_7 = ecx_5 u>> 1
                        int32_t ecx_6
                        
                        if (0xffffffff - edx_7 u>= ecx_5)
                            ecx_6 = ecx_5 + edx_7
                        else
                            ecx_6 = 0
                        
                        if (ecx_6 u< eax_10 + 1)
                            ecx_6 = eax_10 + 1
                        
                        sub_424860(arg2 + 4, ecx_6)
                    
                    goto label_41572b
        else
            int32_t ecx_2 = *(arg2 + 0xc)
            
            if (eax_6 != ecx_2)
            label_4156de:
                char* eax_9 = *(arg2 + 8)
                
                if (eax_9 != 0)
                    ecx_2.b = *(&var_a - edx_1 + *(arg2 + 4))
                    *eax_9 = ecx_2.b
                
                *(arg2 + 8) += 1
                goto label_41573d
            
            int32_t eax_7 = eax_6 - edx_1
            
            if (eax_7 u<= 0xfffffffe)
                ecx_2 -= edx_1
                
                if (eax_7 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0xffffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_7 + 1)
                        ecx_3 = eax_7 + 1
                    
                    sub_424860(arg2 + 4, ecx_3)
                
                goto label_4156de
        
        sub_6b47bf("vector<T> too long")
        noreturn

result.b = 1
return result
