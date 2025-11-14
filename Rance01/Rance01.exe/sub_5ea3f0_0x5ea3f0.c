// 函数: sub_5ea3f0
// 地址: 0x5ea3f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_114
int32_t eax_1 = data_78c474 ^ &var_114
float var_ec = fconvert.s(fconvert.t(arg5))
void* edx = arg1
float var_e8 = fconvert.s(fconvert.t(arg6))
int32_t* i = *(edx + 8)
float var_f0 = fconvert.s(fconvert.t(arg7))
void* var_fc = edx
int32_t* i_1 = i

if (i != *(edx + 0xc))
    int16_t top_1 = 0xffff
    
    do
        int32_t* edi_1 = *i
        
        if (edi_1 != 0)
            if (*edi_1 == 0xffffffff)
                break
            
            if (edi_1[1] != 0)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                sub_5f9e50(*(edx + 0x5c), *(edx + 0x60), *(edx + 0x64), *(edx + 0x68))
                unimplemented  {fldz }
            
            float var_10c
            int32_t ebx_1
            
            if (edi_1[1] != 0 && edi_1[1] != 0)
                float eax_5 = *edi_1
                
                if (eax_5 != 0xffffffff)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    void* esi_1 = *(data_797d2c + 0x30)
                    var_10c = eax_5
                    int32_t* var_cc
                    sub_42e070(esi_1 + 0x294, &var_cc, &var_10c)
                    int32_t* eax_7 = var_cc
                    void* eax_8
                    
                    if (eax_7 != *(esi_1 + 0x298))
                        eax_8 = eax_7[4]
                    
                    int32_t eax_9
                    
                    if (eax_7 != *(esi_1 + 0x298) && eax_8 != 0)
                        eax_9 = *(eax_8 + 0x18)
                    else
                        eax_9 = 0
                    
                    unimplemented  {fldz }
                    ebx_1 = eax_9
                else
                    ebx_1 = 0
            else
                ebx_1 = 0
            
            int32_t eax_10
            
            if (edi_1[1] != 0)
                float eax_11 = *edi_1
                
                if (eax_11 != 0xffffffff)
                    var_10c = eax_11
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    void* esi_2 = *(data_797d2c + 0x30)
                    int32_t* var_d0
                    sub_42e070(esi_2 + 0x294, &var_d0, &var_10c)
                    int32_t* eax_14 = var_d0
                    void* eax_15
                    
                    if (eax_14 != *(esi_2 + 0x298))
                        eax_15 = eax_14[4]
                    
                    if (eax_14 != *(esi_2 + 0x298) && eax_15 != 0)
                        eax_10 = *(eax_15 + 0x14)
                    else
                        eax_10 = 0
                    
                    unimplemented  {fldz }
                else
                    eax_10 = 0
            else
                eax_10 = 0
            
            int32_t var_e0
            int32_t ecx_6 = sub_5f7e90(var_fc + 0x5c, &var_e0, eax_10, ebx_1)
            unimplemented  {fld st0, dword [ebp+0x14]}
            unimplemented  {fld1 }
            unimplemented  {fld st0, st0}
            unimplemented  {fucomp st0, st2} f- unimplemented  {fucomp st0, st2}
            bool c0_1 = unimplemented  {fucomp st0, st2} f< unimplemented  {fucomp st0, st2}
            bool c2_1 =
                is_unordered.t(unimplemented  {fucomp st0, st2}, unimplemented  {fucomp st0, st2})
            bool c3_1 = unimplemented  {fucomp st0, st2} f== unimplemented  {fucomp st0, st2}
            unimplemented  {fucomp st0, st2}
            int32_t* eax_16
            eax_16.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((top_1 - 2) & 7) << 0xb
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            bool p_1 = unimplemented  {test ah, 0x44}
            float var_100
            int32_t var_d8
            int32_t var_d4
            
            if (p_1)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
            label_5ea5f0:
                
                if (var_d8 s> 0 && var_d4 s> 0)
                    unimplemented  {fild st0, dword [esp+0x40]}
                    float var_108_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                    unimplemented  {fstp dword [esp+0x18], st0}
                    unimplemented  {fild st0, dword [esp+0x44]}
                    float var_104_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                    unimplemented  {fstp dword [esp+0x1c], st0}
                    unimplemented  {fild st0, dword [esp+0x48]}
                    var_100 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    float var_f8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    unimplemented  {fild st0, dword [esp+0x4c]}
                    var_10c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    float var_110_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    unimplemented  {fld st0, dword [esp+0x18]}
                    float var_c0 = fconvert.s(unimplemented  {fst dword [esp+0x60], st0})
                    unimplemented  {fld st0, dword [esp+0x1c]}
                    float var_bc_1 = fconvert.s(unimplemented  {fst dword [esp+0x64], st0})
                    unimplemented  {fld st0, dword [esp+0x28]}
                    unimplemented  {fadd st0, st2}
                    float var_f8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    unimplemented  {fld st0, dword [esp+0x28]}
                    float var_b0 = fconvert.s(unimplemented  {fst dword [esp+0x70], st0})
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_ac_1 = fconvert.s(unimplemented  {fst dword [esp+0x74], st0})
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    float var_a8 = fconvert.s(unimplemented  {fstp dword [esp+0x78], st0})
                    unimplemented  {fstp dword [esp+0x78], st0}
                    unimplemented  {fld st0, dword [esp+0x10]}
                    unimplemented  {faddp st2, st0}
                    unimplemented  {faddp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_110_2 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    unimplemented  {fld st0, dword [esp+0x10]}
                    float var_a4_1 = fconvert.s(unimplemented  {fst dword [esp+0x7c], st0})
                    float var_94_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8c], st0})
                    unimplemented  {fstp dword [esp+0x8c], st0}
                    float var_98 = fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                    unimplemented  {fstp dword [esp+0x88], st0}
                    unimplemented  {fld st0, dword [ebp+0x14]}
                    float var_90 = fconvert.s(unimplemented  {fstp dword [esp+0x90], st0})
                    unimplemented  {fstp dword [esp+0x90], st0}
                    float var_8c_1 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
                    float var_88_1 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
                    float var_84_1 = fconvert.s(unimplemented  {fst dword [esp+0x9c], st0})
                    float var_80_1 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
                    unimplemented  {fld st0, dword [ebp+0x18]}
                    float var_7c_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa4], st0})
                    unimplemented  {fstp dword [esp+0xa4], st0}
                    float var_78_1 = fconvert.s(unimplemented  {fst dword [esp+0xa8], st0})
                    float var_74_1 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
                    float var_70_1 = fconvert.s(unimplemented  {fst dword [esp+0xb0], st0})
                    float var_6c_1 = fconvert.s(unimplemented  {fst dword [esp+0xb4], st0})
                    unimplemented  {fld1 }
                    float var_68_1 = fconvert.s(unimplemented  {fst dword [esp+0xb8], st0})
                    float var_54_1 = fconvert.s(unimplemented  {fstp dword [esp+0xcc], st0})
                    unimplemented  {fstp dword [esp+0xcc], st0}
                    float var_64_1 = fconvert.s(unimplemented  {fst dword [esp+0xbc], st0})
                    float var_60_1 = fconvert.s(unimplemented  {fst dword [esp+0xc0], st0})
                    float var_5c_1 = fconvert.s(unimplemented  {fst dword [esp+0xc4], st0})
                    float var_58_1 = fconvert.s(unimplemented  {fst dword [esp+0xc8], st0})
                    unimplemented  {fld st0, dword [esp+0x38]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fld st0, st2}
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    int16_t top_31
                    eax_16.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | ((top_31 + 1) & 7) << 0xb
                    bool p_3 = unimplemented  {test ah, 0x44}
                    float var_50[0x11]
                    int16_t top_52
                    
                    if (not(p_3))
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_52 = top_31 + 2
                    else
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        int32_t var_124_12 = ecx_6
                        unimplemented  {fchs }
                        float var_124_13 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_5dcfd0(&var_50, var_124_13)
                        ecx_6 = sub_42e150(&var_90, &var_50)
                        top_52 = top_31 + 2
                        unimplemented  {fldz }
                    
                    unimplemented  {fld st0, dword [esp+0x34]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fld st0, st2}
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_4 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_4 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_4 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    eax_16.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | ((top_52 - 1) & 7) << 0xb
                    bool p_4 = unimplemented  {test ah, 0x44}
                    int16_t top_59
                    
                    if (not(p_4))
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_59 = top_52
                    else
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        int32_t var_124_14 = ecx_6
                        unimplemented  {fchs }
                        float var_124_15 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4b65a0(&var_50, var_124_15)
                        ecx_6 = sub_42e150(&var_90, &var_50)
                        top_59 = top_52
                        unimplemented  {fldz }
                    
                    unimplemented  {fld st0, dword [esp+0x30]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fld st0, st2}
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_5 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_5 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_5 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    eax_16.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                        | ((top_59 - 1) & 7) << 0xb
                    bool p_5 = unimplemented  {test ah, 0x44}
                    int16_t top_66
                    
                    if (not(p_5))
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_66 = top_59
                    else
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        int32_t var_124_16 = ecx_6
                        unimplemented  {fchs }
                        float var_124_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_5dd020(&var_50, var_124_17)
                        sub_42e150(&var_90, &var_50)
                        top_66 = top_59
                        unimplemented  {fldz }
                    
                    if (arg4 i- 1 u> 8)
                        float var_104_4 = fconvert.s(unimplemented  {fst dword [esp+0x1c], st0})
                    else
                        switch (arg4 i+ &jump_table_5ea8f8[2]:3)
                            case &lookup_table_5ea904, &lookup_table_5ea904[3], 
                                    &lookup_table_5ea904[6]
                                var_104_4 = fconvert.s(unimplemented  {fst dword [esp+0x1c], st0})
                            case &lookup_table_5ea904[1], &lookup_table_5ea904[4], 
                                    &lookup_table_5ea904[7]
                                int32_t var_110_3 = neg.d(var_d8)
                                unimplemented  {fild st0, dword [esp+0x10]}
                                unimplemented  {fmul st0, qword [0x75baa0]}
                                float var_104_2 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                                unimplemented  {fstp dword [esp+0x1c], st0}
                            case &lookup_table_5ea904[2], &lookup_table_5ea904[5], 
                                    &lookup_table_5ea904[8]
                                int32_t var_110_4 = neg.d(var_d8)
                                unimplemented  {fild st0, dword [esp+0x10]}
                                float var_104_3 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                                unimplemented  {fstp dword [esp+0x1c], st0}
                    
                    if (arg4 i- 1 u<= 8)
                        switch (arg4 i+ &jump_table_5ea910[2]:3)
                            case &lookup_table_5ea91c[3], &lookup_table_5ea91c[4], 
                                    &lookup_table_5ea91c[5]
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                int32_t var_110_5 = neg.d(var_d4)
                                unimplemented  {fild st0, dword [esp+0x10]}
                                unimplemented  {fmul st0, qword [0x75baa0]}
                            case &lookup_table_5ea91c[6], &lookup_table_5ea91c[7], 
                                    &lookup_table_5ea91c[8]
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                int32_t var_110_6 = neg.d(var_d4)
                                unimplemented  {fild st0, dword [esp+0x10]}
                    
                    float var_108_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                    unimplemented  {fstp dword [esp+0x18], st0}
                    float* edx_12 = *(var_fc + 0x54)
                    unimplemented  {fld st0, dword [esp+0x20]}
                    float var_110_7 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    float var_b8 = fconvert.s(unimplemented  {fst dword [esp+0x6c], st0})
                    unimplemented  {fld st0, dword [esp+0x20]}
                    float var_b4_1 = fconvert.s(unimplemented  {fst dword [esp+0x74], st0})
                    unimplemented  {fld st0, dword [esp+0x1c]}
                    unimplemented  {faddp st2, st0}
                    unimplemented  {faddp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_110_8 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                    unimplemented  {fstp dword [esp+0x24], st0}
                    unimplemented  {fld st0, dword [esp+0x24]}
                    float var_a0 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
                    float var_c8 = fconvert.s(unimplemented  {fstp dword [esp+0x74], st0})
                    unimplemented  {fstp dword [esp+0x74], st0}
                    float var_9c_1 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
                    unimplemented  {fadd dword [esp+0x30]}
                    float var_c4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x80], st0})
                    unimplemented  {fstp dword [esp+0x80], st0}
                    sub_5e82d0(&var_c8, edi_1, arg2, arg3, &var_90, &var_b8, &var_a0, &var_c8, 
                        &var_c0, &var_b0, &var_a8, &var_98, edx_12)
                    unimplemented  {call 0x5e82d0}
                    top_1 = top_66 - 1
                    unimplemented  {fldz }
            else
                unimplemented  {fld st0, dword [ebp+0x18]}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                eax_16.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_5ea5f0
                
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                int32_t var_124_5 = ecx_6
                unimplemented  {fld st0, dword [esp+0x38]}
                float var_124_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int16_t top_13 = top_1 + 1
                eax_16, ecx_6 = sub_5ea360(var_124_6)
                
                if (eax_16.b != 0)
                label_5ea5e6:
                    top_1 = top_13 - 1
                    unimplemented  {fldz }
                    goto label_5ea5f0
                
                unimplemented  {fld st0, dword [esp+0x38]}
                int32_t var_124_7 = ecx_6
                float var_124_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                eax_16, ecx_6 = sub_5ea360(var_124_8)
                
                if (eax_16.b != 0)
                    goto label_5ea5e6
                
                unimplemented  {fld st0, dword [esp+0x30]}
                int32_t var_124_9 = ecx_6
                float var_124_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                eax_16, ecx_6 = sub_5ea360(var_124_10)
                
                if (eax_16.b != 0)
                    goto label_5ea5e6
                
                int32_t edx_4 = sub_5e82a0(edi_1, 0)
                bool cond:1_1 = edi_1[1] == 0
                var_10c = arg4
                var_100 = arg4
                
                if (not(cond:1_1))
                    int32_t* esi_3 = *edi_1
                    
                    if (esi_3 != 0xffffffff)
                        int32_t eax_20
                        int32_t edx_5
                        eax_20, edx_5 = sub_5f2410(var_d4, edx_4, &var_10c)
                        sub_409460(esi_3, sub_5f23d0(var_d8, edx_5, &var_100) + arg2, eax_20 + arg3)
                
                top_1 = top_13 - 1
                unimplemented  {fldz }
        
        edx = var_fc
        i = &i_1[1]
        i_1 = i
    while (i != *(edx + 0xc))
    
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}

sub_6b4885(eax_1 ^ &var_114)
return i
