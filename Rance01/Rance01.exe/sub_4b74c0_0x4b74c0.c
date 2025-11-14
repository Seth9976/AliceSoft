// 函数: sub_4b74c0
// 地址: 0x4b74c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*arg1)
int32_t eax_3

if (arg2 s<= (eax_1 - edx) s>> 1)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(arg1[1])
    
    if (arg3 s<= (eax_5 - edx_1) s>> 1)
        int32_t edx_2 = arg1[4]
        int32_t ecx_1 = arg1[3]
        eax_3 = edx_2
        
        if (ecx_1 != edx_2)
            int32_t ecx_2 = ecx_1
            
            do
                int32_t ebx_1 = *(ecx_2 + 8)
                
                if (ebx_1 s>= arg2)
                    int32_t edi_1 = *(ecx_2 + 0xc)
                    
                    if (edi_1 s>= arg3 &&
                            (eax_3 == edx_2 || *(eax_3 + 8) s> ebx_1 || *(eax_3 + 0xc) s> edi_1))
                        eax_3 = ecx_2
                
                ecx_2 += 0x10
            while (ecx_2 != edx_2)
        
        if (eax_3 != edx_2)
            int32_t edi_2 = *(eax_3 + 0xc)
            int32_t ebx_2 = arg1[4]
            int32_t var_40 = *eax_3
            int32_t ecx_4 = *(eax_3 + 8)
            int32_t* eax_7 = eax_3 + 0x10
            int32_t var_3c = *(eax_3 + 4)
            
            if (eax_7 != ebx_2)
                int32_t* edx_4 = &eax_7[-4]
                
                do
                    *edx_4 = *eax_7
                    edx_4[1] = eax_7[1]
                    edx_4[2] = eax_7[2]
                    edx_4[3] = eax_7[3]
                    eax_7 = &eax_7[4]
                    edx_4 = &edx_4[4]
                while (eax_7 != ebx_2)
            
            arg1[4] -= 0x10
            int32_t eax_9
            int32_t edx_5
            edx_5:eax_9 = sx.q(ecx_4)
            
            if (arg2 s<= (eax_9 - edx_5) s>> 1)
                while (true)
                    int32_t eax_13
                    int32_t edx_6
                    edx_6:eax_13 = sx.q(edi_2)
                    int32_t ebp_6 = (eax_13 - edx_6) s>> 1
                    
                    if (arg3 s> ebp_6)
                        break
                    
                    int32_t eax_16
                    int32_t edx_7
                    edx_7:eax_16 = sx.q(ecx_4)
                    int32_t eax_18 = (eax_16 - edx_7) s>> 1
                    int32_t edi_3 = eax_18 + var_40
                    int32_t eax_19 = arg1[4]
                    int32_t var_30 = edi_3
                    int32_t var_2c_1 = var_3c
                    int32_t edx_8
                    
                    if (&var_30 u< eax_19)
                        edx_8 = arg1[3]
                    
                    int32_t* eax_26
                    int32_t ecx_12
                    
                    if (&var_30 u>= eax_19 || edx_8 u> &var_30)
                        int32_t ecx_13 = arg1[5]
                        
                        if (eax_19 != ecx_13)
                        label_4b768a:
                            eax_26 = arg1[4]
                            
                            if (eax_26 == 0)
                                goto label_4b76ac
                            
                            ecx_12 = ebp_6
                            *eax_26 = edi_3
                            eax_26[1] = var_3c
                            eax_26[2] = eax_18
                        label_4b76a1:
                            eax_26[3] = ecx_12
                        label_4b76ac:
                            arg1[4] += 0x10
                            int32_t ebp_9 = var_3c + ebp_6
                            int32_t eax_28 = arg1[4]
                            int32_t var_20 = var_40
                            int32_t var_1c_1 = ebp_9
                            int32_t edx_17
                            
                            if (&var_20 u< eax_28)
                                edx_17 = arg1[3]
                            
                            int32_t* eax_35
                            int32_t ecx_25
                            
                            if (&var_20 u>= eax_28 || edx_17 u> &var_20)
                                int32_t ecx_26 = arg1[5]
                                
                                if (eax_28 != ecx_26)
                                label_4b7798:
                                    eax_35 = arg1[4]
                                    
                                    if (eax_35 == 0)
                                        goto label_4b77b2
                                    
                                    ecx_25 = ebp_6
                                    *eax_35 = var_40
                                    eax_35[1] = ebp_9
                                    eax_35[2] = eax_18
                                label_4b77af:
                                    eax_35[3] = ecx_25
                                label_4b77b2:
                                    arg1[4] += 0x10
                                    int32_t eax_36 = arg1[4]
                                    int32_t ebx_7 = eax_18
                                    int32_t var_10 = edi_3
                                    int32_t var_c_1 = ebp_9
                                    int32_t var_8_1 = ebx_7
                                    int32_t edx_27
                                    
                                    if (&var_10 u< eax_36)
                                        edx_27 = arg1[3]
                                    
                                    int32_t* eax_43
                                    int32_t ecx_37
                                    
                                    if (&var_10 u>= eax_36 || edx_27 u> &var_10)
                                        int32_t ecx_38 = arg1[5]
                                        
                                        if (eax_36 != ecx_38)
                                        label_4b7896:
                                            eax_43 = arg1[4]
                                            
                                            if (eax_43 == 0)
                                                goto label_4b78b8
                                            
                                            ecx_37 = ebp_6
                                            *eax_43 = edi_3
                                            eax_43[1] = ebp_9
                                            eax_43[2] = var_8_1
                                        label_4b78ad:
                                            eax_43[3] = ecx_37
                                        label_4b78b8:
                                            arg1[4] += 0x10
                                            edi_2 = ebp_6
                                            int32_t eax_46
                                            int32_t edx_37
                                            edx_37:eax_46 = sx.q(ebx_7)
                                            ecx_4 = ebx_7
                                            
                                            if (arg2 s> (eax_46 - edx_37) s>> 1)
                                                break
                                            
                                            continue
                                        else
                                            int32_t edx_32 = arg1[3]
                                            int32_t eax_41 = (eax_36 - edx_32) s>> 4
                                            
                                            if (eax_41 u<= 0xffffffe)
                                                int32_t ecx_40 = (ecx_38 - edx_32) s>> 4
                                                
                                                if (eax_41 + 1 u> ecx_40)
                                                    uint32_t edx_34 = ecx_40 u>> 1
                                                    int32_t ecx_41
                                                    
                                                    if (0xfffffff - edx_34 u>= ecx_40)
                                                        ecx_41 = ecx_40 + edx_34
                                                    else
                                                        ecx_41 = 0
                                                    
                                                    if (ecx_41 u< eax_41 + 1)
                                                        ecx_41 = eax_41 + 1
                                                    
                                                    sub_4b7b00(&arg1[3], ecx_41)
                                                    ebx_7 = eax_18
                                                
                                                goto label_4b7896
                                    else
                                        int32_t ecx_31 = arg1[5]
                                        
                                        if (eax_36 != ecx_31)
                                        label_4b782b:
                                            eax_43 = arg1[4]
                                            void* edi_14 =
                                                ((&var_10 - edx_27) & 0xfffffff0) + arg1[3]
                                            
                                            if (eax_43 == 0)
                                                goto label_4b78b8
                                            
                                            *eax_43 = *edi_14
                                            eax_43[1] = *(edi_14 + 4)
                                            eax_43[2] = *(edi_14 + 8)
                                            ecx_37 = *(edi_14 + 0xc)
                                            goto label_4b78ad
                                        
                                        int32_t eax_38 = (eax_36 - edx_27) s>> 4
                                        
                                        if (eax_38 u<= 0xffffffe)
                                            int32_t ecx_33 = (ecx_31 - edx_27) s>> 4
                                            
                                            if (eax_38 + 1 u> ecx_33)
                                                uint32_t edx_29 = ecx_33 u>> 1
                                                int32_t ecx_34
                                                
                                                if (0xfffffff - edx_29 u>= ecx_33)
                                                    ecx_34 = ecx_33 + edx_29
                                                else
                                                    ecx_34 = 0
                                                
                                                if (ecx_34 u< eax_38 + 1)
                                                    ecx_34 = eax_38 + 1
                                                
                                                sub_4b7b00(&arg1[3], ecx_34)
                                            
                                            goto label_4b782b
                                else
                                    int32_t edx_22 = arg1[3]
                                    int32_t eax_33 = (eax_28 - edx_22) s>> 4
                                    
                                    if (eax_33 u<= 0xffffffe)
                                        int32_t ecx_28 = (ecx_26 - edx_22) s>> 4
                                        
                                        if (eax_33 + 1 u> ecx_28)
                                            uint32_t edx_24 = ecx_28 u>> 1
                                            int32_t ecx_29
                                            
                                            if (0xfffffff - edx_24 u>= ecx_28)
                                                ecx_29 = ecx_28 + edx_24
                                            else
                                                ecx_29 = 0
                                            
                                            if (ecx_29 u< eax_33 + 1)
                                                ecx_29 = eax_33 + 1
                                            
                                            sub_4b7b00(&arg1[3], ecx_29)
                                        
                                        goto label_4b7798
                            else
                                int32_t ecx_19 = arg1[5]
                                
                                if (eax_28 != ecx_19)
                                label_4b772d:
                                    eax_35 = arg1[4]
                                    void* edi_10 = ((&var_20 - edx_17) & 0xfffffff0) + arg1[3]
                                    
                                    if (eax_35 == 0)
                                        goto label_4b77b2
                                    
                                    *eax_35 = *edi_10
                                    eax_35[1] = *(edi_10 + 4)
                                    eax_35[2] = *(edi_10 + 8)
                                    ecx_25 = *(edi_10 + 0xc)
                                    goto label_4b77af
                                
                                int32_t eax_30 = (eax_28 - edx_17) s>> 4
                                
                                if (eax_30 u<= 0xffffffe)
                                    int32_t ecx_21 = (ecx_19 - edx_17) s>> 4
                                    
                                    if (eax_30 + 1 u> ecx_21)
                                        uint32_t edx_19 = ecx_21 u>> 1
                                        int32_t ecx_22
                                        
                                        if (0xfffffff - edx_19 u>= ecx_21)
                                            ecx_22 = ecx_21 + edx_19
                                        else
                                            ecx_22 = 0
                                        
                                        if (ecx_22 u< eax_30 + 1)
                                            ecx_22 = eax_30 + 1
                                        
                                        sub_4b7b00(&arg1[3], ecx_22)
                                    
                                    goto label_4b772d
                        else
                            int32_t edx_13 = arg1[3]
                            int32_t eax_24 = (eax_19 - edx_13) s>> 4
                            
                            if (eax_24 u<= 0xffffffe)
                                int32_t ecx_15 = (ecx_13 - edx_13) s>> 4
                                
                                if (eax_24 + 1 u> ecx_15)
                                    uint32_t edx_15 = ecx_15 u>> 1
                                    int32_t ecx_16
                                    
                                    if (0xfffffff - edx_15 u>= ecx_15)
                                        ecx_16 = ecx_15 + edx_15
                                    else
                                        ecx_16 = 0
                                    
                                    if (ecx_16 u< eax_24 + 1)
                                        ecx_16 = eax_24 + 1
                                    
                                    sub_4b7b00(&arg1[3], ecx_16)
                                
                                goto label_4b768a
                    else
                        int32_t ecx_6 = arg1[5]
                        
                        if (eax_19 != ecx_6)
                        label_4b7623:
                            eax_26 = arg1[4]
                            void* edi_6 = ((&var_30 - edx_8) & 0xfffffff0) + arg1[3]
                            
                            if (eax_26 == 0)
                                goto label_4b76ac
                            
                            *eax_26 = *edi_6
                            eax_26[1] = *(edi_6 + 4)
                            eax_26[2] = *(edi_6 + 8)
                            ecx_12 = *(edi_6 + 0xc)
                            goto label_4b76a1
                        
                        int32_t eax_21 = (eax_19 - edx_8) s>> 4
                        
                        if (eax_21 u<= 0xffffffe)
                            int32_t ecx_8 = (ecx_6 - edx_8) s>> 4
                            
                            if (eax_21 + 1 u> ecx_8)
                                uint32_t edx_10 = ecx_8 u>> 1
                                int32_t ecx_9
                                
                                if (0xfffffff - edx_10 u>= ecx_8)
                                    ecx_9 = ecx_8 + edx_10
                                else
                                    ecx_9 = 0
                                
                                if (ecx_9 u< eax_21 + 1)
                                    ecx_9 = eax_21 + 1
                                
                                sub_4b7b00(&arg1[3], ecx_9)
                            
                            goto label_4b7623
                    sub_6b47bf("vector<T> too long")
                    noreturn
            
            *arg4 = var_40
            arg4[1] = var_3c
            arg4[2] = ecx_4
            arg4[3] = edi_2
            int32_t* eax_49
            eax_49.b = 1
            return eax_49

eax_3.b = 0
return eax_3
