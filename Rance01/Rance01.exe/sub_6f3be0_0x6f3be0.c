// 函数: sub_6f3be0
// 地址: 0x6f3be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
uint32_t var_30
int32_t result = sub_6f2b00(arg2, &var_30)

if (result == 0)
    uint32_t eax_1 = var_30
    
    if (eax_1 s>= 2)
        var_30 = eax_1 - 2
        
        if (eax_1 - 2 s<= 0x443)
            result = sub_6f2920(arg2, eax_1 - 2, &var_38, &var_3c, &var_34)
            
            if (result == 0 && var_30 s> 0)
                char* ecx_1 = var_3c
                
                while (true)
                    uint32_t eax_5 = zx.d(*ecx_1)
                    int32_t edx_6 = (eax_5 & 0xf0) s>> 4
                    int32_t eax_6 = eax_5 & 0xf
                    
                    if (edx_6 s< 0 || edx_6 s> 1)
                        result = 0xfffffffa
                        break
                    
                    if (eax_6 s> 3)
                        result = 0xfffffffa
                        break
                    
                    if (eax_6 s>= *(arg1 + 0x90))
                        *(arg1 + 0x90) = eax_6 + 1
                    
                    int32_t ebx_4 = eax_6 * 0xc
                    
                    if (*(ebx_4 + arg1 + 0x373c) != 0 && *(ebx_4 + arg1 + 0x3740) != 0)
                        int32_t ebx_7 = (edx_6 + (eax_6 << 1)) * 0xc
                        void* ebp_3 = arg1 + ebx_7
                        *(ebp_3 + 0x3744) = edx_6.b
                        char* ebx_8 = *(ebp_3 + 0x373c)
                        *(ebp_3 + 0x3745) = eax_6.b
                        char* ecx_4
                        ecx_4.b = var_3c[1]
                        *ebx_8 = ecx_4.b
                        char* ebx_9 = var_3c
                        uint32_t ecx_5 = zx.d(ebx_9[1])
                        ebx_9.b = ebx_9[2]
                        *(*(ebp_3 + 0x373c) + 1) = ebx_9.b
                        char* esi_3 = var_3c
                        uint32_t ebx_11 = zx.d(esi_3[2]) + ecx_5
                        ecx_5.b = esi_3[3]
                        *(*(ebp_3 + 0x373c) + 2) = ecx_5.b
                        char* ecx_6 = var_3c
                        uint32_t esi_6 = zx.d(ecx_6[3]) + ebx_11
                        ecx_6.b = ecx_6[4]
                        *(*(ebp_3 + 0x373c) + 3) = ecx_6.b
                        char* ecx_7 = var_3c
                        uint32_t ebx_14 = zx.d(ecx_7[4]) + esi_6
                        ecx_7.b = ecx_7[5]
                        *(*(ebp_3 + 0x373c) + 4) = ecx_7.b
                        char* ecx_8 = var_3c
                        uint32_t esi_9 = zx.d(ecx_8[5]) + ebx_14
                        ecx_8.b = ecx_8[6]
                        *(*(ebp_3 + 0x373c) + 5) = ecx_8.b
                        char* ecx_9 = var_3c
                        uint32_t ebx_17 = zx.d(ecx_9[6]) + esi_9
                        ecx_9.b = ecx_9[7]
                        *(*(ebp_3 + 0x373c) + 6) = ecx_9.b
                        char* ecx_10 = var_3c
                        uint32_t esi_12 = zx.d(ecx_10[7]) + ebx_17
                        ecx_10.b = ecx_10[8]
                        *(*(ebp_3 + 0x373c) + 7) = ecx_10.b
                        char* ecx_11 = var_3c
                        uint32_t ebx_20 = zx.d(ecx_11[8]) + esi_12
                        ecx_11.b = ecx_11[9]
                        *(*(ebp_3 + 0x373c) + 8) = ecx_11.b
                        char* ecx_12 = var_3c
                        uint32_t esi_15 = zx.d(ecx_12[9]) + ebx_20
                        ecx_12.b = ecx_12[0xa]
                        *(*(ebp_3 + 0x373c) + 9) = ecx_12.b
                        char* ecx_13 = var_3c
                        uint32_t ebx_23 = zx.d(ecx_13[0xa]) + esi_15
                        ecx_13.b = ecx_13[0xb]
                        *(*(ebp_3 + 0x373c) + 0xa) = ecx_13.b
                        char* ecx_14 = var_3c
                        uint32_t esi_18 = zx.d(ecx_14[0xb]) + ebx_23
                        ecx_14.b = ecx_14[0xc]
                        *(*(ebp_3 + 0x373c) + 0xb) = ecx_14.b
                        char* ecx_15 = var_3c
                        uint32_t ebx_26 = zx.d(ecx_15[0xc]) + esi_18
                        ecx_15.b = ecx_15[0xd]
                        *(*(ebp_3 + 0x373c) + 0xc) = ecx_15.b
                        char* ecx_16 = var_3c
                        uint32_t edi_2 = zx.d(ecx_16[0xd]) + ebx_26
                        ecx_16.b = ecx_16[0xe]
                        *(*(ebp_3 + 0x373c) + 0xd) = ecx_16.b
                        char* ecx_17 = var_3c
                        uint32_t esi_21 = zx.d(ecx_17[0xe]) + edi_2
                        ecx_17.b = ecx_17[0xf]
                        *(*(ebp_3 + 0x373c) + 0xe) = ecx_17.b
                        char* ecx_18 = var_3c
                        uint32_t ebx_30 = zx.d(ecx_18[0xf]) + esi_21
                        ecx_18.b = ecx_18[0x10]
                        *(*(ebp_3 + 0x373c) + 0xf) = ecx_18.b
                        ecx_1 = var_3c
                        uint32_t ebp_5 = zx.d(ecx_1[0x10])
                        uint32_t edi_3 = ebp_5 + ebx_30
                        char* var_28_1 = nullptr
                        
                        if (edi_3 s> 0)
                            void* var_18_1
                            
                            if (ebp_5 + ebx_30 s< 6)
                                var_18_1 = arg1 + ebx_7 + 0x3740
                            else
                                var_18_1 = arg1 + ebx_7 + 0x3740
                                char* eax_7 = nullptr
                                
                                while (true)
                                    ecx_1.b = *(ecx_1 + eax_7 + 0x11)
                                    eax_7[*(ebx_7 + arg1 + 0x3740)] = ecx_1.b
                                    ecx_1.b = *(eax_7 + var_3c + 0x12)
                                    eax_7[*(ebx_7 + arg1 + 0x3740) + 1] = ecx_1.b
                                    char* ecx_19
                                    ecx_19.b = *(eax_7 + var_3c + 0x13)
                                    eax_7[*(ebx_7 + arg1 + 0x3740) + 2] = ecx_19.b
                                    char* ecx_20
                                    ecx_20.b = *(eax_7 + var_3c + 0x14)
                                    eax_7[*(ebx_7 + arg1 + 0x3740) + 3] = ecx_20.b
                                    char* ecx_21
                                    ecx_21.b = *(eax_7 + var_3c + 0x15)
                                    eax_7[*(ebx_7 + arg1 + 0x3740) + 4] = ecx_21.b
                                    eax_7 = &eax_7[5]
                                    
                                    if (eax_7 s> ebp_5 + ebx_30 - 6)
                                        break
                                    
                                    ecx_1 = var_3c
                                
                                var_28_1 = eax_7
                                ecx_1 = var_3c
                            
                            char* ebx_33 = var_28_1
                            
                            while (true)
                                ecx_1.b = *(ecx_1 + ebx_33 + 0x11)
                                ebx_33[*var_18_1] = ecx_1.b
                                ebx_33 = &ebx_33[1]
                                
                                if (ebx_33 s>= edi_3)
                                    break
                                
                                ecx_1 = var_3c
                            
                            ecx_1 = var_3c
                    
                    if (edx_6 == 0)
                        result = sub_6cb930(&ecx_1[1], &ecx_1[0x11], edx_6, eax_6, 
                            arg1 + eax_6 * 0x670 + 0x1d24)
                        
                        if (result != 0)
                            result = 0xfffffffa
                            break
                        
                        int32_t edx_14 = *(arg1 + 0x8c)
                        
                        if (edx_14 s< 4)
                            *(arg1 + 0x8c) = edx_14 + 1
                    else
                        result = sub_6cb930(&ecx_1[1], &ecx_1[0x11], edx_6, eax_6, 
                            arg1 + eax_6 * 0x670 + 0x364)
                        
                        if (result != 0)
                            result = 0xfffffffa
                            break
                        
                        int32_t edx_10 = *(arg1 + 0x88)
                        
                        if (edx_10 s< 4)
                            *(arg1 + 0x88) = edx_10 + 1
                    
                    char* ecx_27 = var_3c
                    var_3c = &ecx_27[2]
                    uint32_t esi_27 = zx.d(ecx_27[1])
                    var_3c = &ecx_27[3]
                    uint32_t edx_18 = zx.d(ecx_27[2]) + esi_27
                    var_3c = &ecx_27[4]
                    uint32_t ebx_38 = zx.d(ecx_27[3]) + edx_18
                    var_3c = &ecx_27[5]
                    uint32_t esi_29 = zx.d(ecx_27[4]) + ebx_38
                    var_3c = &ecx_27[6]
                    uint32_t ebx_40 = zx.d(ecx_27[5]) + esi_29
                    var_3c = &ecx_27[7]
                    uint32_t esi_31 = zx.d(ecx_27[6]) + ebx_40
                    var_3c = &ecx_27[8]
                    uint32_t ebx_42 = zx.d(ecx_27[7]) + esi_31
                    var_3c = &ecx_27[9]
                    uint32_t esi_33 = zx.d(ecx_27[8]) + ebx_42
                    var_3c = &ecx_27[0xa]
                    uint32_t ebx_44 = zx.d(ecx_27[9]) + esi_33
                    var_3c = &ecx_27[0xb]
                    uint32_t esi_35 = zx.d(ecx_27[0xa]) + ebx_44
                    var_3c = &ecx_27[0xc]
                    uint32_t ebx_46 = zx.d(ecx_27[0xb]) + esi_35
                    var_3c = &ecx_27[0xd]
                    uint32_t esi_37 = zx.d(ecx_27[0xc]) + ebx_46
                    var_3c = &ecx_27[0xe]
                    uint32_t ebx_48 = zx.d(ecx_27[0xd]) + esi_37
                    var_3c = &ecx_27[0xf]
                    uint32_t esi_39 = zx.d(ecx_27[0xe]) + ebx_48
                    var_3c = &ecx_27[0x10]
                    uint32_t ebx_50 = zx.d(ecx_27[0xf]) + esi_39
                    var_3c = &ecx_27[0x11]
                    uint32_t edx_33 = zx.d(ecx_27[0x10]) + ebx_50
                    ecx_1 = &ecx_27[edx_33 + 0x11]
                    var_3c = ecx_1
                    bool cond:2_1 = var_30 - edx_33 - 0x11 s> 0
                    var_30 = var_30 - edx_33 - 0x11
                    
                    if (not(cond:2_1))
                        break
                    
                    continue
        else
            result = 0xffffffeb
    else
        result = 0xffffffeb

if (var_34 != 0)
    int32_t edx_2 = var_38
    
    if (edx_2 != 0)
        int32_t var_54_1 = edx_2
        sub_6b4d5b()

return result
