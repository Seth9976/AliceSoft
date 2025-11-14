// 函数: sub_4b4150
// 地址: 0x4b4150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg2 + 0x5c) != 0)
    (*(*arg1 + 0x94))(0)
    (*(*arg1 + 0x98))(0)
    (*(*arg1 + 0xa0))(0)
    (*(*arg1 + 0x84))(0)
    (*(*arg1 + 0x8c))(0, 1)
    (*(*arg1 + 0x7c))(0, 1, 0)
    (*(*arg1 + 0x80))(0, 1)
    
    if ((*(**(arg2 + 0x5c) + 0x10))().b != 0)
        int32_t* ecx_9 = *(arg2 + 4)
        
        if (ecx_9 != 0 && (*(*ecx_9 + 0x14))().b != 0 && (*(*arg3 + 0x24))(0).b != 0)
            long double x87_r7_1 = float.t(0)
            
            if (*arg2 == 0)
                arg1 = *(arg2 + 0x58)
                int32_t edi_1 = 0
                
                if (arg1 s> 0)
                    while (true)
                        int32_t eax_26
                        int32_t edx_17
                        edx_17:eax_26 = sx.q(arg1)
                        
                        if ((*(**(arg2 + 0x5c) + 0x20))(edi_1, 
                                fconvert.s(fconvert.t(fconvert.s(
                                    float.t(edi_1 - ((eax_26 - edx_17) s>> 1))
                                    / fconvert.t(fconvert.s(float.t(arg4)))))), 
                                fconvert.s(x87_r7_1), fconvert.s(x87_r7_1), fconvert.s(x87_r7_1)).b == 0)
                            goto label_4b4162
                        
                        arg1 = *(arg2 + 0x58)
                        edi_1 += 1
                        
                        if (edi_1 s>= arg1)
                            break
                        
                        x87_r7_1 = float.t(0)
                
            label_4b43b6:
                int32_t* ecx_19 = *(arg2 + 0x34)
                
                if (ecx_19 != 0 && (*(*ecx_19 + 0x20))().b != 0)
                    arg1 = (*(**(arg2 + 0x34) + 0x2c))()
                    
                    if (arg1.b != 0)
                        int32_t* ecx_21 = *(arg2 + 4)
                        
                        if (ecx_21 != 0)
                            arg1 = (*(*ecx_21 + 0x18))()
                        
                        if (ecx_21 == 0 || arg1.b != 0)
                            int32_t* ecx_22 = *(arg2 + 4)
                            
                            if (ecx_22 != 0 && (*(*ecx_22 + 0x24))(0).b != 0)
                                int32_t* ecx_23 = *(arg2 + 0x1c)
                                
                                if (ecx_23 != 0 && (*(*ecx_23 + 0x14))().b != 0)
                                    int32_t i = 0
                                    
                                    if (*arg2 == 0)
                                        arg1 = *(arg2 + 0x58)
                                        
                                        if (arg1 s> 0)
                                            do
                                                long double x87_r7_37 = float.t(0)
                                                int32_t eax_51
                                                int32_t edx_31
                                                edx_31:eax_51 = sx.q(arg1)
                                                
                                                if ((*(**(arg2 + 0x5c) + 0x20))(i, 
                                                        fconvert.s(x87_r7_37), 
                                                        fconvert.s(fconvert.t(fconvert.s(
                                                            float.t(i - ((eax_51 - edx_31) s>> 1))
                                                            / fconvert.t(fconvert.s(float.t(
                                                            arg5)))))), 
                                                        fconvert.s(x87_r7_37), 
                                                        fconvert.s(x87_r7_37)).b == 0)
                                                    goto label_4b4162
                                                
                                                arg1 = *(arg2 + 0x58)
                                                i += 1
                                            while (i s< arg1)
                                        
                                    label_4b45ce:
                                        int32_t* ecx_29 = *(arg2 + 0x34)
                                        
                                        if (ecx_29 != 0 && (*(*ecx_29 + 0x20))().b != 0)
                                            arg1 = (*(**(arg2 + 0x34) + 0x2c))()
                                            
                                            if (arg1.b != 0)
                                                int32_t* ecx_31 = *(arg2 + 0x1c)
                                                
                                                if (ecx_31 != 0)
                                                    arg1 = (*(*ecx_31 + 0x18))()
                                                
                                                if (ecx_31 == 0 || arg1.b != 0)
                                                    int32_t* ecx_32 = *(arg2 + 4)
                                                    
                                                    if (ecx_32 != 0
                                                            && (*(*ecx_32 + 0x28))(0).b != 0)
                                                        (*(**(arg2 + 0x5c) + 0x14))()
                                                        return 
                                    else
                                        int32_t ecx_24 = *(arg2 + 0x58)
                                        int32_t eax_36
                                        int32_t edx_25
                                        edx_25:eax_36 = sx.q(ecx_24 * 2 - 1)
                                        int32_t eax_41
                                        int32_t edx_26
                                        edx_26:eax_41 = sx.q(ecx_24)
                                        arg4 = fconvert.s(float.t(neg.d((eax_36 - edx_25) s>> 1))
                                            + fconvert.t(0.5))
                                        
                                        if ((eax_41 - edx_26) s>> 1 s> 0)
                                            int32_t eax_46
                                            int32_t edx_28
                                            
                                            do
                                                long double x87_r7_24 = float.t(0)
                                                
                                                if ((*(**(arg2 + 0x5c) + 0x20))(i, 
                                                        fconvert.s(x87_r7_24), 
                                                        fconvert.s(fconvert.t(fconvert.s(
                                                            fconvert.t(arg4) / fconvert.t(fconvert
                                                            .s(float.t(arg5)))))), 
                                                        fconvert.s(fconvert.t(2f)), 
                                                        fconvert.s(x87_r7_24)).b == 0)
                                                    goto label_4b4162
                                                
                                                edx_28:eax_46 = sx.q(*(arg2 + 0x58))
                                                i += 1
                                                arg4 =
                                                    fconvert.s(fconvert.t(arg4) + fconvert.t(2.0))
                                            while (i s< (eax_46 - edx_28) s>> 1)
                                        
                                        long double x87_r7_27 = float.t(0)
                                        
                                        if ((*(**(arg2 + 0x5c) + 0x20))(i, fconvert.s(x87_r7_27), 
                                                fconvert.s(x87_r7_27), fconvert.s(float.t(1)), 
                                                fconvert.s(x87_r7_27)).b != 0)
                                            int32_t i_1 = i + 1
                                            arg4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg4)
                                                - fconvert.t(0.5))) + fconvert.t(1.5))
                                            
                                            while (i_1 s< *(arg2 + 0x58))
                                                long double x87_r7_33 = float.t(0)
                                                
                                                if ((*(**(arg2 + 0x5c) + 0x20))(i_1, 
                                                        fconvert.s(x87_r7_33), 
                                                        fconvert.s(fconvert.t(fconvert.s(
                                                            fconvert.t(arg4) / fconvert.t(fconvert
                                                            .s(float.t(arg5)))))), 
                                                        fconvert.s(fconvert.t(2f)), 
                                                        fconvert.s(x87_r7_33)).b == 0)
                                                    goto label_4b4162
                                                
                                                i_1 += 1
                                                arg4 =
                                                    fconvert.s(fconvert.t(arg4) + fconvert.t(2.0))
                                            
                                            goto label_4b45ce
            else
                int32_t ecx_11 = *(arg2 + 0x58)
                int32_t eax_11
                int32_t edx_11
                edx_11:eax_11 = sx.q(ecx_11 * 2 - 1)
                int32_t eax_16
                int32_t edx_12
                edx_12:eax_16 = sx.q(ecx_11)
                int32_t i_2 = 0
                arg3 = fconvert.s(float.t(neg.d((eax_11 - edx_11) s>> 1)) + fconvert.t(0.5))
                
                if ((eax_16 - edx_12) s>> 1 s> 0)
                    int32_t eax_21
                    int32_t edx_14
                    
                    do
                        if ((*(**(arg2 + 0x5c) + 0x20))(i_2, 
                                fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3)
                                    / fconvert.t(fconvert.s(float.t(arg4)))))), 
                                fconvert.s(x87_r7_1), fconvert.s(fconvert.t(2f)), 
                                fconvert.s(x87_r7_1)).b == 0)
                            goto label_4b4162
                        
                        edx_14:eax_21 = sx.q(*(arg2 + 0x58))
                        i_2 += 1
                        arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(2.0))
                        x87_r7_1 = float.t(0)
                    while (i_2 s< (eax_21 - edx_14) s>> 1)
                
                int32_t ecx_15
                arg1, ecx_15 = (*(**(arg2 + 0x5c) + 0x20))(i_2, fconvert.s(x87_r7_1), 
                    fconvert.s(x87_r7_1), fconvert.s(float.t(1)), fconvert.s(x87_r7_1))
                
                if (arg1.b != 0)
                    int32_t i_3 = i_2 + 1
                    arg3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3) - fconvert.t(0.5)))
                        + fconvert.t(1.5))
                    
                    while (i_3 s< *(arg2 + 0x58))
                        long double x87_r7_12 = float.t(0)
                        
                        if ((*(**(arg2 + 0x5c) + 0x20))(i_3, 
                                fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3)
                                    / fconvert.t(fconvert.s(float.t(arg4)))))), 
                                fconvert.s(x87_r7_12), fconvert.s(fconvert.t(2f)), 
                                fconvert.s(x87_r7_12)).b == 0)
                            goto label_4b4162
                        
                        i_3 += 1
                        arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(2.0))
                    
                    goto label_4b43b6

label_4b4162:
arg1.b = 0
