// 函数: sub_5068e0
// 地址: 0x5068e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2

if (sub_4c9030(arg1, edi) != 0)
    long double x87_r7_1 = float.t(0)
    float var_14 = fconvert.s(x87_r7_1)
    float var_10_1 = fconvert.s(x87_r7_1)
    float var_c_1 = fconvert.s(x87_r7_1)
    
    if (sub_5073c0(&var_14, edi) != 0)
        arg1[8] = var_14
        arg1[9] = var_10_1
        arg1[0xa] = var_c_1
        uint32_t var_28
        
        if (sub_40ff40(var_10_1, edi, &var_28) != 0)
            float var_24
            char eax_1
            int32_t ecx_3
            eax_1, ecx_3 = sub_40ff40(&var_24, edi, &var_24)
            
            if (eax_1 != 0)
                int32_t var_3c_3 = ecx_3
                arg1[0xb] = fconvert.s(sub_4b6bc0(fconvert.s(fconvert.t(var_28))))
                int32_t var_3c_5 = ecx_3
                arg1[0xc] = fconvert.s(sub_4b6bc0(fconvert.s(fconvert.t(var_24))))
                int32_t ecx_4
                eax_1, ecx_4 = sub_40fea0(edi, &arg1[0xd])
                
                if (eax_1 != 0 && sub_40ff40(ecx_4, edi, &arg1[0xe]) != 0)
                    int32_t ecx_6
                    eax_1, ecx_6 = sub_40ff40(&arg1[0xf], edi, &arg1[0xf])
                    
                    if (eax_1 != 0 && sub_40ff40(ecx_6, edi, &arg1[0x10]) != 0
                            && sub_5546f0(edi, &arg1[0x11]) != 0
                            && sub_5546f0(edi, &arg1[0x12]) != 0
                            && sub_5073c0(&arg1[0x13], edi) != 0
                            && sub_5073c0(&arg1[0x16], edi) != 0
                            && sub_5073c0(&arg1[0x19], edi) != 0)
                        int32_t ecx_10
                        eax_1, ecx_10 = sub_5073c0(&arg1[0x1c], edi)
                        
                        if (eax_1 != 0)
                            int32_t ecx_11
                            eax_1, ecx_11 = sub_40ff40(ecx_10, edi, &arg1[0x1f])
                            uint32_t var_1c
                            uint32_t var_18
                            
                            if (eax_1 != 0 && sub_40ff40(ecx_11, edi, &arg1[0x20]) != 0
                                    && sub_5546f0(edi, &arg1[0x21]) != 0
                                    && sub_5074f0(edi, &arg1[0x22]) != 0
                                    && sub_5074f0(edi, &arg1[0x26]) != 0
                                    && sub_5074f0(edi, &arg1[0x2a]) != 0
                                    && sub_5546f0(edi, &arg1[0x2e]) != 0
                                    && sub_40ff40(edi, edi, &arg1[0x2f]) != 0
                                    && sub_40ff40(&arg1[0x30], edi, &arg1[0x30]) != 0
                                    && sub_507450(&arg1[0x31], edi) != 0
                                    && sub_5546f0(edi, &var_18) != 0
                                    && sub_5546f0(edi, &var_1c) != 0)
                                float var_20
                                int32_t ecx_19
                                eax_1, ecx_19 = sub_40ff40(&var_20, edi, &var_20)
                                
                                if (eax_1 != 0)
                                    int32_t ecx_20
                                    eax_1, ecx_20 = sub_40ff40(ecx_19, edi, &var_28)
                                    
                                    if (eax_1 != 0 && sub_40ff40(ecx_20, edi, &var_24) != 0)
                                        sub_503530(&arg1[0x35], var_18, var_1c, 
                                            fconvert.s(fconvert.t(var_20)), 
                                            fconvert.s(fconvert.t(var_28)), 
                                            fconvert.s(fconvert.t(var_24)))
                                        
                                        if (sub_5546f0(edi, &arg1[0x4e]) != 0
                                                && sub_5546f0(edi, &arg1[0x4f]) != 0
                                                && sub_5546f0(edi, &arg1[0x50]) != 0
                                                && sub_5546f0(edi, &arg1[0x51]) != 0
                                                && sub_5546f0(edi, &var_18) != 0)
                                            arg1[0x52] = var_18
                                            
                                            if (sub_5546f0(edi, &var_28) != 0)
                                                sub_5f7c70(&arg1[0x53])
                                                int32_t edi_2 = 0
                                                int32_t* esi_3
                                                
                                                if (var_28 s<= 0)
                                                    esi_3 = arg2
                                                else
                                                    do
                                                        esi_3 = arg2
                                                        int32_t* ecx_26 = esi_3
                                                        
                                                        if (sub_5546f0(ecx_26, &var_18) == 0)
                                                            return 0
                                                        
                                                        if (sub_5546f0(ecx_26, &var_20) == 0)
                                                            return 0
                                                        
                                                        var_1c = var_18
                                                        float* eax_19 =
                                                            sub_4ccf80(&arg1[0x53], &var_1c)
                                                        edi_2 += 1
                                                        *eax_19 = var_20
                                                    while (edi_2 s< var_28)
                                                
                                                if (sub_5546f0(esi_3, &var_18) != 0)
                                                    int32_t* ecx_30 = esi_3
                                                    arg1[0x57] = var_18
                                                    
                                                    if (sub_5546f0(ecx_30, &arg1[0x58]) != 0
                                                            && sub_5546f0(ecx_30, &arg1[0x59]) != 0
                                                            && sub_5546f0(ecx_30, &arg1[0x5a])
                                                            != 0)
                                                        int32_t* ecx_32 = esi_3
                                                        
                                                        if (sub_5546f0(ecx_32, &arg1[0x5b]) != 0
                                                                && sub_5546f0(ecx_32, &arg1[0x5c]) != 0
                                                                && sub_5546f0(ecx_32, &arg1[0x5d])
                                                                != 0)
                                                            int32_t* ecx_34 = esi_3
                                                            
                                                            if (sub_5546f0(ecx_34, &arg1[0x5e]) != 0
                                                                    && sub_5546f0(ecx_34, &arg1[0x5f]) != 0
                                                                    && sub_5546f0(ecx_34, &arg1[0x60])
                                                                    != 0)
                                                                int32_t* ecx_36 = esi_3
                                                                
                                                                if (sub_5546f0(ecx_36, &arg1[0x61]) != 0
                                                                        && sub_5546f0(ecx_36, &arg1[0x66]) != 0
                                                                        && sub_5546f0(ecx_36, &var_18) != 0)
                                                                    void* edx_32 = arg1[0x68]
                                                                    arg1[0x67] = var_18
                                                                    
                                                                    if (sub_4cbcd0(edx_32, esi_3) != 0
                                                                            && sub_5074f0(esi_3, &arg1[0x69]) != 0
                                                                            && sub_4b0c50(&arg1[0x6d], esi_3) != 0)
                                                                        return sub_5074f0(esi_3, &arg1[0x71])
                                                                            != 0

return 0
