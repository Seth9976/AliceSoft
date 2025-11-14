// 函数: sub_4bcaf0
// 地址: 0x4bcaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *arg2
int32_t eax_1 = arg2[1]
int32_t* var_3c = ecx

if (ecx == eax_1)
    long double x87_r7_1 = float.t(0)
    *arg1 = &sealengine::CEmitterPos::`vftable'
    arg1[1] = fconvert.s(x87_r7_1)
    arg1[2] = fconvert.s(x87_r7_1)
    arg1[3] = fconvert.s(x87_r7_1)
    arg1[4] = fconvert.s(x87_r7_1)
    arg1[5] = fconvert.s(x87_r7_1)
    return 

int32_t eax_7 = (eax_1 - ecx) s/ 0x24
float edx_3 = 0f

if (eax_7 s> 0)
    long double x87_r7_2 = fconvert.t(arg3)
    int32_t ebp_1 = 3
    int32_t ebx_1 = 2
    int32_t edi_1 = 1
    int32_t var_40_1 = &ecx[0x1b]
    
    while (true)
        long double x87_r6_1 = float.t(*ecx)
        x87_r6_1 - x87_r7_2
        int32_t eax_9
        eax_9.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_9:1.b & 0x41) != 0)
            if (edi_1 s>= eax_7)
                break
            
            if (ecx[1] != 0)
                if (ebx_1 s>= eax_7)
                    int32_t* edi_2 = var_3c[edx_3 i* 9 + 9]
                    void* edx_8 = &var_3c[edx_3 i* 9 + 9]
                    long double x87_r6_4 = float.t(edi_2)
                    x87_r6_4 - x87_r7_2
                    int32_t* eax_14
                    eax_14.w = (x87_r6_4 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_2))
                        *arg1 = &sealengine::CEmitterPos::`vftable'
                        arg1[1] = *(edx_8 + 0xc)
                        arg1[2] = *(edx_8 + 0x10)
                        arg1[3] = *(edx_8 + 0x14)
                        arg1[4] = fconvert.s(fconvert.t(*(edx_8 + 0x18)))
                        arg1[5] = fconvert.s(fconvert.t(*(edx_8 + 0x1c)))
                        return 
                    
                    int32_t eax_17 = *ecx
                    float edi_3 = edi_2 - eax_17
                    
                    if (edi_3 s<= 0)
                        break
                    
                    int32_t* var_50 = ecx
                    struct sealengine::CEmitterPos::VTable* var_34
                    sub_4bddb0(&ecx[2], &var_34, edx_8 + 8)
                    struct sealengine::CEmitterPos::VTable* var_1c
                    sub_4bde10(&var_34, &var_1c, 
                        fconvert.s(fconvert.t(fconvert.s((x87_r7_2 - float.t(eax_17))
                            / float.t(edi_3)))))
                    sub_4bdd50(&var_1c, arg1, &ecx[2])
                    return 
                
                if (ebp_1 s>= eax_7)
                    long double x87_r6_5 = float.t(var_3c[edx_3 i* 9 + 0x12])
                    ecx = &var_3c[edx_3 i* 9 + 0x12]
                    x87_r6_5 - x87_r7_2
                    int32_t eax_22
                    eax_22.w = (x87_r6_5 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_5, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    bool p_3 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_3))
                        break
                    
                    int32_t* var_50_3 = ecx
                    sub_4bd300(arg1, arg2, edx_3, 4.20389539e-45f, fconvert.s(x87_r7_2))
                    return 
                
                long double x87_r6_3 = float.t(*var_40_1)
                x87_r6_3 - x87_r7_2
                eax_9.w = (x87_r6_3 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (p_1)
                    int32_t* var_50_5 = ecx
                    sub_4bd300(arg1, arg2, edx_3, 5.60519386e-45f, fconvert.s(x87_r7_2))
                    return 
                
                var_40_1 += 0x6c
                edx_3 += 3
                edi_1 += 3
                ecx = &ecx[0x1b]
                ebx_1 += 3
                ebp_1 += 3
            else
                long double x87_r6_2 = float.t(ecx[9])
                x87_r6_2 - x87_r7_2
                eax_9.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_9:1.b & 0x41) == 0)
                    *arg1 = &sealengine::CEmitterPos::`vftable'
                    arg1[1] = ecx[3]
                    arg1[2] = ecx[4]
                    arg1[3] = ecx[5]
                    goto label_4bcbf9
                
                var_40_1 += 0x24
                edx_3 += 1
                edi_1 += 1
                ecx = &ecx[9]
                ebx_1 += 1
                ebp_1 += 1
            
            if (edx_3 s< eax_7)
                continue
        
        ecx = var_3c
        break

*arg1 = &sealengine::CEmitterPos::`vftable'
arg1[1] = ecx[3]
arg1[2] = ecx[4]
arg1[3] = ecx[5]
label_4bcbf9:
arg1[4] = fconvert.s(fconvert.t(ecx[6]))
arg1[5] = fconvert.s(fconvert.t(ecx[7]))
