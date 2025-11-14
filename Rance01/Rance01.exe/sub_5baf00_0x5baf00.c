// 函数: sub_5baf00
// 地址: 0x5baf00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
void* eax_2 = arg1[0x10]
void* edx = *(eax_2 + 0x68)
void* edi = *(eax_2 + 4)
int32_t ecx = *(edi + 0x1c)
void* eax_3 = arg1[0x1a]
int32_t ecx_1 = arg1[9]
void* esi_2 = *(edi + 4) * 4
void* var_4c = edi
__alloca_probe_16(esi_2)
int32_t __saved_edi
int32_t* var_68 = &__saved_edi
int32_t eax_6 = sub_5b4eb0(esi_2, arg1)
int32_t* eax_10 = sub_5b4eb0(*(edi + 4) * 4, arg1)
int32_t** eax_14 = sub_5b4eb0(*(edi + 4) * 4, arg1)
float var_48 = fconvert.s(fconvert.t(*(eax_3 + 4)))
__alloca_probe_16(*(edi + 4) * 4)
long double x87_r7_1 = fconvert.t(7.1771142984289327e-07)
int32_t ecx_2 = arg1[7]
long double x87_r6 = fconvert.t(764.6162109375)
long double x87_r5 = fconvert.t(0.34499999999999997)
int32_t* eax_18 = *(ecx + (ecx_2 << 2) + 0x220)
int32_t eax_20 = neg.d(ecx_2)
int32_t* var_34 = &__saved_edi
int32_t* eax_25 = ((sbb.d(eax_20, eax_20, ecx_2 != 0) & 2) + *(eax_3 + 8)) * 0x34 + *(edx + 0x38)
arg1[0xa] = ecx_2
int32_t var_14 = 0

if (*(edi + 4) s> 0)
    int32_t eax_27
    int32_t edx_3
    edx_3:eax_27 = sx.q(ecx_1)
    void* eax_31 = (((eax_27 - edx_3) s>> 1 << 2) + 7) & 0xfffffff8
    int32_t* var_c_1 = &__saved_edi
    
    while (true)
        float* esi_5 = *(*arg1 + (var_14 << 2))
        void* edi_1 = arg1[0x12]
        void* eax_37 = eax_31
        
        if (edi_1 + eax_37 s> arg1[0x13])
            if (arg1[0x11] != 0)
                int32_t* eax_38 = sub_6b5c43(8)
                int32_t ecx_5 = arg1[0x15]
                arg1[0x14] += edi_1
                eax_38[1] = ecx_5
                *eax_38 = arg1[0x11]
                arg1[0x15] = eax_38
                eax_37 = eax_31
            
            arg1[0x13] = eax_37
            x87_r6 = fconvert.t(764.6162109375)
            arg1[0x11] = sub_6b5c43(eax_37)
            arg1[0x12] = 0
            x87_r5 = fconvert.t(0.34499999999999997)
            x87_r7_1 = fconvert.t(7.1771142984289327e-07)
        
        void* ecx_6 = arg1[0x12]
        void* edi_3 = var_c_1 + eax_6 - &__saved_edi
        void* eax_41 = arg1[0x11] + ecx_6
        arg1[0x12] = ecx_6 + eax_31
        *(edi_3 + eax_10 - eax_6) = eax_41
        
        if (arg1[0x12] + eax_31 s> arg1[0x13])
            if (arg1[0x11] != 0)
                int32_t* eax_44 = sub_6b5c43(8)
                int32_t edx_7 = arg1[0x15]
                arg1[0x14] += arg1[0x12]
                eax_44[1] = edx_7
                *eax_44 = arg1[0x11]
                arg1[0x15] = eax_44
            
            arg1[0x13] = eax_31
            x87_r6 = fconvert.t(764.6162109375)
            arg1[0x11] = sub_6b5c43(eax_31)
            arg1[0x12] = 0
            x87_r5 = fconvert.t(0.34499999999999997)
            x87_r7_1 = fconvert.t(7.1771142984289327e-07)
        
        void* ecx_11 = arg1[0x12]
        void* eax_48 = arg1[0x11] + ecx_11
        arg1[0x12] = ecx_11 + eax_31
        *edi_3 = eax_48
        int32_t eax_50 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(4.0) / float.t(ecx_1)))) & 0x7fffffff
        long double x87_r4_4 = float.t(eax_50)
        
        if (eax_50 s< 0)
            x87_r4_4 = x87_r4_4 + fconvert.t(4.2949673e+09f)
        
        int32_t ecx_13 = arg1[8]
        int32_t var_84_3 = ecx_13
        sub_5c6e40(ecx, arg1[7], ecx_13, esi_5, edx + 4, arg1[6])
        sub_5bcd10(**(edx + (arg1[7] << 2) + 0xc), esi_5, *edi_3)
        int32_t eax_56 = arg1[7]
        int32_t ecx_16 = *(edx + eax_56 * 0xc + 0x14)
        
        if (ecx_16 != 1)
            int32_t edx_12 = *(edx + eax_56 * 0xc + 0x18)
            int32_t var_84_4 = edx_12 + (ecx_16 << 2)
            sub_5c3c70(edx + eax_56 * 0xc + 0x14, *(edx + eax_56 * 0xc + 0x1c), esi_5, ecx_16, 
                ecx_16, edx_12)
        
        int32_t eax_59 = fconvert.s(fconvert.t(*esi_5)) & 0x7fffffff
        long double x87_r7_10 = float.t(eax_59)
        
        if (eax_59 s< 0)
            x87_r7_10 = x87_r7_10 + fconvert.t(4.2949673e+09f)
        
        long double x87_r6_3 = fconvert.t(7.1771142984289327e-07)
        int32_t i = 1
        long double x87_r5_6 = fconvert.t(764.6162109375)
        long double x87_r4_5 =
            fconvert.t(fconvert.s(x87_r5 + fconvert.t(fconvert.s(x87_r7_1 * x87_r4_4 - x87_r6))))
        long double x87_r3_2 = fconvert.t(0.34499999999999997)
        long double x87_r3_4 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r7_10 * x87_r6_3 - x87_r5_6)) + x87_r4_5 + x87_r3_2))
        *esi_5 = fconvert.s(x87_r3_4)
        *var_c_1 = fconvert.s(x87_r3_4)
        
        if (ecx_1 - 1 s> 1)
            long double x87_r3_5 = fconvert.t(0.5)
            
            do
                long double x87_r2_1 = fconvert.t(esi_5[i + 1])
                long double x87_r1_1 = fconvert.t(esi_5[i])
                int32_t eax_61 = fconvert.s(x87_r2_1 * x87_r2_1 + x87_r1_1 * x87_r1_1) & 0x7fffffff
                long double x87_r2_4 = float.t(eax_61)
                
                if (eax_61 s< 0)
                    x87_r2_4 = x87_r2_4 + fconvert.t(4.2949673e+09f)
                
                long double x87_r2_11 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r2_4 * x87_r6_3 - x87_r5_6)) * x87_r3_5 + x87_r4_5
                    + x87_r3_2))
                esi_5[(i + 1) s>> 1] = fconvert.s(x87_r2_11)
                long double x87_r2_12 = fconvert.t(fconvert.s(x87_r2_11))
                long double x87_r1_3 = fconvert.t(*var_c_1)
                x87_r1_3 - x87_r2_12
                eax_59.w = (x87_r1_3 < x87_r2_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_3, x87_r2_12) ? 1 : 0) << 0xa
                    | (x87_r1_3 == x87_r2_12 ? 1 : 0) << 0xe | 0x1000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    x87_r3_5 = x87_r2_12
                else
                    *var_c_1 = fconvert.s(x87_r2_12)
                
                i += 2
            while (i s< ecx_1 - 1)
        
        long double x87_r5_13 = x87_r4_5
        long double x87_r4_6 = float.t(0)
        long double temp5_1 = fconvert.t(*var_c_1)
        x87_r4_6 - temp5_1
        eax_59.w = (x87_r4_6 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_6, temp5_1) ? 1 : 0) << 0xa
            | (x87_r4_6 == temp5_1 ? 1 : 0) << 0xe | 0x2000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r5_13 = x87_r4_6
        else
            *var_c_1 = fconvert.s(x87_r4_6)
        
        long double x87_r4_7 = fconvert.t(*var_c_1)
        long double x87_r3_6 = fconvert.t(var_48)
        x87_r3_6 - x87_r4_7
        eax_59.w = (x87_r3_6 < x87_r4_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_6, x87_r4_7) ? 1 : 0) << 0xa
            | (x87_r3_6 == x87_r4_7 ? 1 : 0) << 0xe | 0x2800
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            var_48 = fconvert.s(fconvert.t(*var_c_1))
        
        int32_t eax_64 = var_14 + 1
        var_14 = eax_64
        var_c_1 = &var_c_1[1]
        
        if (eax_64 s>= *(var_4c + 4))
            break
        
        x87_r7_1 = x87_r6_3
        x87_r5 = x87_r5_13
        x87_r6 = x87_r5_6
    
    edi = var_4c

int16_t top = 0
int32_t eax_66
int32_t edx_16
edx_16:eax_66 = sx.q(ecx_1)
int32_t eax_68 = (eax_66 - edx_16) s>> 1
void* esi_7 = ((eax_68 << 2) + 7) & 0xfffffff8

if (arg1[0x12] + esi_7 s> arg1[0x13])
    if (arg1[0x11] != 0)
        int32_t* eax_71 = sub_6b5c43(8)
        int32_t edx_17 = arg1[0x15]
        arg1[0x14] += arg1[0x12]
        eax_71[1] = edx_17
        *eax_71 = arg1[0x11]
        arg1[0x15] = eax_71
    
    arg1[0x13] = esi_7
    arg1[0x11] = sub_6b5c43(esi_7)
    arg1[0x12] = 0

void* eax_73 = arg1[0x12]
void* ecx_20 = arg1[0x11]
void* edx_18 = ecx_20 + eax_73
void* eax_74 = eax_73 + esi_7
arg1[0x12] = eax_74

if (eax_74 + esi_7 s> arg1[0x13])
    if (ecx_20 != 0)
        int32_t* eax_76 = sub_6b5c43(8)
        int32_t edx_19 = arg1[0x15]
        arg1[0x14] += eax_74
        eax_76[1] = edx_19
        *eax_76 = arg1[0x11]
        arg1[0x15] = eax_76
    
    arg1[0x13] = esi_7
    arg1[0x11] = sub_6b5c43(esi_7)
    arg1[0x12] = 0

void* eax_78 = arg1[0x12]
void* ecx_24 = arg1[0x11] + eax_78
arg1[0x12] = eax_78 + esi_7
int32_t i_4 = 0

if (*(edi + 4) s> 0)
    int32_t** edi_8 = eax_14
    void* eax_83 = var_34 - edi_8
    int32_t i_1
    
    do
        int32_t ecx_26 = eax_18[i_4 + 1]
        int32_t esi_8 = arg1[0x12]
        void* ecx_28 = eax_83 + edi_8
        void* var_44_4 = ecx_28
        void* ecx_29 = *(ecx_28 + eax_6 - var_34)
        float* eax_85 = *(*arg1 + (i_4 << 2))
        float* var_30_2 = &eax_85[eax_68]
        arg1[0xa] = ecx_2
        
        if (esi_8 + 0x40 s> arg1[0x13])
            if (arg1[0x11] != 0)
                int32_t* eax_87 = sub_6b5c43(8)
                int32_t edx_24 = arg1[0x15]
                arg1[0x14] += esi_8
                eax_87[1] = edx_24
                *eax_87 = arg1[0x11]
                arg1[0x15] = eax_87
            
            arg1[0x13] = 0x40
            arg1[0x11] = sub_6b5c43(0x40)
            arg1[0x12] = 0
        
        int32_t ecx_33 = arg1[0x12]
        int32_t* eax_90 = arg1[0x11] + ecx_33
        arg1[0x12] = ecx_33 + 0x40
        *edi_8 = eax_90
        sub_6bc670(eax_90, 0, 0x3c)
        unimplemented  {fld st0, qword [0x75be30]}
        int32_t ecx_35 = eax_68
        unimplemented  {fld st0, qword [0x75bb38]}
        int16_t top_3 = top - 3
        unimplemented  {fld st0, qword [0x75bb40]}
        int32_t edx_25 = 0
        
        if (ecx_35 s>= 4)
            void* ecx_36 = ecx_29 + 0xc
            void* eax_92 = &var_30_2[1]
            int32_t j_7 = ((eax_68 - 4) u>> 2) + 1
            void* var_50_1 = ecx_29 - var_30_2
            int32_t esi_11 = j_7 << 2
            int32_t j
            
            do
                unimplemented  {fld st0, dword [ecx-0xc]}
                float var_28_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                int32_t esi_13 = var_28_3 & 0x7fffffff
                int32_t var_2c_1 = esi_13
                unimplemented  {fild st0, dword [ebp-0x28]}
                
                if (esi_13 s< 0)
                    unimplemented  {fadd dword [0x75bb48]}
                
                unimplemented  {fmul st0, st1}
                unimplemented  {fsub st0, st2}
                float var_2c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd st0, st3}
                *(eax_92 - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                unimplemented  {fstp dword [eax-0x4], st0}
                unimplemented  {fld st0, dword [esi+eax]}
                float var_28_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                int32_t esi_15 = var_28_4 & 0x7fffffff
                int32_t var_2c_3 = esi_15
                unimplemented  {fild st0, dword [ebp-0x28]}
                
                if (esi_15 s< 0)
                    unimplemented  {fadd dword [0x75bb48]}
                
                unimplemented  {fmul st0, st1}
                unimplemented  {fsub st0, st2}
                float var_2c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd st0, st3}
                *eax_92 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                unimplemented  {fstp dword [eax], st0}
                unimplemented  {fld st0, dword [ecx-0x4]}
                float var_28_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                int32_t esi_17 = var_28_5 & 0x7fffffff
                int32_t var_2c_5 = esi_17
                unimplemented  {fild st0, dword [ebp-0x28]}
                
                if (esi_17 s< 0)
                    unimplemented  {fadd dword [0x75bb48]}
                
                unimplemented  {fmul st0, st1}
                unimplemented  {fsub st0, st2}
                float var_2c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd st0, st3}
                *(eax_92 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                unimplemented  {fstp dword [eax+0x4], st0}
                unimplemented  {fld st0, dword [ecx]}
                float var_28_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                int32_t esi_19 = var_28_6 & 0x7fffffff
                int32_t var_2c_7 = esi_19
                unimplemented  {fild st0, dword [ebp-0x28]}
                
                if (esi_19 s< 0)
                    unimplemented  {fadd dword [0x75bb48]}
                
                unimplemented  {fmul st0, st1}
                eax_92 += 0x10
                ecx_36 += 0x10
                j = j_7
                j_7 -= 1
                unimplemented  {fsub st0, st2}
                float var_2c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd st0, st3}
                *(eax_92 - 8) = fconvert.s(unimplemented  {fstp dword [eax-0x8], st0})
                unimplemented  {fstp dword [eax-0x8], st0}
                int16_t top_19
                top_3 = top_19
            while (j != 1)
            edx_25 = esi_11
            ecx_35 = eax_68
        
        if (edx_25 s< ecx_35)
            void* eax_94 = &var_30_2[edx_25]
            int32_t j_6 = ecx_35 - edx_25
            int32_t j_1
            
            do
                unimplemented  {fld st0, dword [eax+esi]}
                float var_28_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                edx_25 = var_28_7 & 0x7fffffff
                int32_t var_50_2 = edx_25
                unimplemented  {fild st0, dword [ebp-0x4c]}
                
                if (edx_25 s< 0)
                    unimplemented  {fadd dword [0x75bb48]}
                
                unimplemented  {fmul st0, st1}
                eax_94 += 4
                j_1 = j_6
                j_6 -= 1
                unimplemented  {fsub st0, st2}
                float var_50_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
                unimplemented  {fstp dword [ebp-0x4c], st0}
                unimplemented  {fld st0, dword [ebp-0x4c]}
                unimplemented  {fadd st0, st3}
                *(eax_94 - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                unimplemented  {fstp dword [eax-0x4], st0}
            while (j_1 != 1)
        
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        sub_5be1f0(edx_18, edx_25, var_30_2, eax_25, edx_18)
        unimplemented  {fld st0, dword [ecx]}
        float var_84_8 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
        unimplemented  {fstp dword [esp+0x4], st0}
        unimplemented  {fld st0, dword [ebp-0x44]}
        float var_88_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        sub_5be3e0(eax_25, eax_85, ecx_24, var_88_4, var_84_8)
        unimplemented  {call 0x5be3e0}
        sub_5be520(eax_85, ecx_29, ecx_24, eax_25, edx_18, 1, eax_85, ecx_29, var_30_2)
        int32_t eax_99 = eax_18[ecx_26 + 0x101]
        
        if (*(ecx + (eax_99 << 2) + 0x320) != 1)
            sub_6b4885(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        float* var_84_9 = var_30_2
        int32_t var_88_5 = *(*(edx + 0x30) + (eax_99 << 2))
        int32_t eax_101 = sub_5b84d0(arg1)
        top = top_3 + 1
        unimplemented  {call 0x5b84d0}
        (*edi_8)[7] = eax_101
        
        if (sub_5b4ad0(arg1) != 0 && (*edi_8)[7] != 0)
            sub_5be520(edx_18, eax_85, ecx_24, eax_25, edx_18, 2, eax_85, ecx_29, var_30_2)
            float* var_98_3 = var_30_2
            int32_t var_9c_2 = *(*(edx + 0x30) + (eax_18[ecx_26 + 0x101] << 2))
            int32_t eax_108 = sub_5b84d0(arg1)
            unimplemented  {call 0x5b84d0}
            (*edi_8)[0xe] = eax_108
            sub_5be520(var_30_2, edx_18, ecx_24, eax_25, edx_18, 0, eax_85, ecx_29, var_30_2)
            float* var_b8_1 = var_30_2
            int32_t var_bc_1 = *(*(edx + 0x30) + (eax_18[ecx_26 + 0x101] << 2))
            int32_t eax_113 = sub_5b84d0(arg1)
            top -= 2
            unimplemented  {call 0x5b84d0}
            **edi_8 = eax_113
            void* var_c_8 = 4
            
            for (int32_t j_2 = 0x10000; j_2 s< 0x70000; )
                int32_t* ecx_57 = *edi_8
                int32_t edx_49 = *(edx + 0x30)
                int32_t* ecx_59 = var_c_8
                *(ecx_59 + *edi_8) = sub_5b8a60(*(edx_49 + (eax_18[ecx_26 + 0x101] << 2)), edx_49, 
                    *ecx_57, arg1, ecx_57[7], j_2 s/ 7)
                j_2 += 0x10000
                var_c_8 = &ecx_59[1]
            
            void* var_c_9 = 0x20
            
            for (int32_t j_3 = 0x10000; j_3 s< 0x70000; )
                int32_t* ecx_61 = *edi_8
                int32_t edx_57 = *(edx + 0x30)
                int32_t* ecx_63 = var_c_9
                *(ecx_63 + *edi_8) = sub_5b8a60(*(edx_57 + (eax_18[ecx_26 + 0x101] << 2)), edx_57, 
                    ecx_61[7], arg1, ecx_61[0xe], j_3 s/ 7)
                j_3 += 0x10000
                var_c_9 = &ecx_63[1]
        
        i_1 = i_4 + 1
        edi_8 = &edi_8[1]
        i_4 = i_1
    while (i_1 s< *(var_4c + 4))
    edi = var_4c

unimplemented  {fld st0, dword [ebp-0x44]}
*(eax_3 + 4) = fconvert.s(unimplemented  {fstp dword [edx+0x4], st0})
unimplemented  {fstp dword [edx+0x4], st0}
void* esi_25 = *(edi + 4) * 4
__alloca_probe_16(esi_25)
int32_t* var_3c_3 = &__saved_edi
__alloca_probe_16(esi_25)
void* eax_134 = *(arg1[0x10] + 0x68)
int32_t* var_48_1 = &__saved_edi
int32_t eax_136

if (eax_134 == 0xffffffb0 || *(eax_134 + 0x50) == 0)
    eax_136 = 0
else
    eax_136 = 1

int32_t eax_138 = neg.d(eax_136)
int32_t edx_60 = (sbb.d(eax_138, eax_138, eax_136 != 0) & 0xfffffff9) + 7
int32_t var_10_2 = edx_60
int32_t eax_142 = sub_5b4ad0(arg1)
int32_t eax_143 = neg.d(eax_142)

if (edx_60 s<= (sbb.d(eax_143, eax_143, eax_142 != 0) & 7) + 7)
    while (true)
        int32_t* esi_26 = *(eax_3 + (edx_60 << 2) + 0xc)
        sub_5b4af0(esi_26, 0, 1)
        sub_5b4af0(esi_26, ecx_2, *(edx + 0x2c))
        
        if (arg1[7] != 0)
            sub_5b4af0(esi_26, arg1[6], 1)
            sub_5b4af0(esi_26, arg1[8], 1)
        
        int32_t i_5 = 0
        
        if (*(edi + 4) s> 0)
            int32_t** esi_27 = eax_14
            int32_t* eax_150 = eax_10 - esi_27
            int32_t* eax_152 = var_68 - esi_27
            void* var_1c_3 = &eax_18[1]
            int32_t i_2
            
            do
                int32_t eax_155 = sub_5b8b00(edx, arg1, esi_26, 
                    *(*(edx + 0x30) + (eax_18[*var_1c_3 + 0x101] << 2)), (*esi_27)[var_10_2], 
                    *(eax_150 + esi_27))
                var_1c_3 += 4
                *(eax_152 + esi_27) = eax_155
                i_2 = i_5 + 1
                esi_27 = &esi_27[1]
                i_5 = i_2
            while (i_2 s< *(edi + 4))
        
        int32_t esi_28 = var_10_2
        sub_5bee40(ecx, esi_28, ecx + 0xb34, eax_25, eax_18, eax_6, eax_10, var_68, 
            *(ecx + (((arg1[7] + 0x36) * 0xf + esi_28) << 2)), *(edi + 4))
        unimplemented  {call 0x5bee40}
        int32_t i_6 = 0
        
        if (*eax_18 s> 0)
            int32_t* esi_29 = var_3c_3
            void* var_40_3 = &eax_18[0x111]
            int32_t i_3
            
            do
                int32_t ecx_87 = *var_40_3
                int32_t var_4c_1 = 0
                int32_t j_4 = 0
                
                if (*(edi + 4) s> 0)
                    int32_t* eax_162 = eax_10
                    void* var_1c_4 = &eax_18[1]
                    void* ecx_91 = var_68 - eax_162
                    int32_t* var_34_2 = eax_162
                    int32_t* ecx_94 = var_48_1
                    
                    do
                        if (*var_1c_4 == i_6)
                            bool cond:17_1 = *(ecx_91 + eax_162) == 0
                            *ecx_94 = 0
                            
                            if (not(cond:17_1))
                                *ecx_94 = 1
                            
                            var_4c_1 += 1
                            *(esi_29 - var_48_1 + ecx_94) = *eax_162
                            eax_162 = var_34_2
                            ecx_94 = &ecx_94[1]
                        
                        j_4 += 1
                        var_1c_4 += 4
                        eax_162 = &eax_162[1]
                        var_34_2 = eax_162
                    while (j_4 s< *(edi + 4))
                
                int32_t eax_166 = (
                    *(*((*(ecx + (ecx_87 << 2) + 0x520) << 2) + &data_737a6c) + 0x14))(arg1, 
                    *(*(edx + 0x34) + (ecx_87 << 2)), esi_29, var_48_1, var_4c_1)
                int32_t eax_167 = 0
                int32_t j_5 = 0
                
                if (*(edi + 4) s> 0)
                    void* var_1c_5 = &eax_18[1]
                    
                    do
                        esi_29 = var_3c_3
                        
                        if (*var_1c_5 == i_6)
                            esi_29[eax_167] = eax_10[j_5]
                            eax_167 += 1
                        
                        var_1c_5 += 4
                        j_5 += 1
                    while (j_5 s< *(edi + 4))
                
                (*(*((*(ecx + (ecx_87 << 2) + 0x520) << 2) + &data_737a6c) + 0x18))(esi_26, arg1, 
                    *(*(edx + 0x34) + (ecx_87 << 2)), esi_29, var_48_1, eax_167, eax_166, i_6)
                var_40_3 += 4
                i_3 = i_6 + 1
                i_6 = i_3
            while (i_3 s< *eax_18)
            esi_28 = var_10_2
        
        var_10_2 = esi_28 + 1
        int32_t eax_173 = sub_5b4ad0(arg1)
        int32_t eax_174 = neg.d(eax_173)
        
        if (esi_28 + 1 s> (sbb.d(eax_174, eax_174, eax_173 != 0) & 7) + 7)
            break
        
        edx_60 = var_10_2

sub_6b4885(eax_1 ^ &__saved_ebp)
return 0
