// 函数: sub_5b8250
// 地址: 0x5b8250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg3 - arg5
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
int32_t ebx_1 = arg4 - arg1
int32_t temp0 = divs.dp.d(sx.q(ecx), ebx_1)
int32_t eax_5

if (ecx s>= 0)
    eax_5 = temp0 + 1
else
    eax_5 = temp0 - 1

int32_t var_1c = arg5
long double x87_r6 = fconvert.t(7.3142857551574707)
int32_t var_10 = 0
long double x87_r5 = fconvert.t(1023.5)
int32_t eax_7 = sub_70c710(fconvert.t(*(arg6 i+ (arg1 << 2))) * x87_r6 + x87_r5)
int32_t ecx_1

if (eax_7 s<= 0x3ff)
    int32_t ecx_2
    ecx_2.b = eax_7 s< 0
    ecx_1 = (ecx_2 - 1) & eax_7
else
    ecx_1 = 0x3ff

int32_t esi_1 = arg5 - ecx_1
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(temp0 * ebx_1)
void* ecx_5 = arg8
long double x87_r5_3 = fconvert.t(*(arg7 i+ (arg1 << 2))) + fconvert.t(*(ecx_5 + 0x458))
long double x87_r4 = fconvert.t(*(arg6 i+ (arg1 << 2)))
x87_r4 - x87_r5_3
int32_t ebp_5 = esi_1 * esi_1
int32_t eax_12
eax_12.w = (x87_r4 < x87_r5_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r5_3) ? 1 : 0) << 0xa
    | (x87_r4 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000
int32_t var_14 = 1
bool p = unimplemented  {test ah, 0x41}
long double x87_r4_1

if (p)
label_5b835d:
    arg5 = arg1 + 1
    
    if (arg1 + 1 s< arg4)
        float* esi_2 = arg6 i+ ((arg1 + 1) << 2)
        
        do
            int32_t eax_15 = var_10 + (eax_1 ^ edx) - edx - ((eax_10 ^ edx_3) - edx_3)
            var_10 = eax_15
            
            if (eax_15 s< ebx_1)
                var_1c += temp0
            else
                var_1c += eax_5
                var_10 = eax_15 - ebx_1
            
            int32_t eax_18 = sub_70c710(fconvert.t(*esi_2) * x87_r6 + x87_r5)
            int32_t ecx_6
            
            if (eax_18 s<= 0x3ff)
                int32_t ecx_7
                ecx_7.b = eax_18 s< 0
                ecx_6 = (ecx_7 - 1) & eax_18
            else
                ecx_6 = 0x3ff
            
            long double x87_r5_13 =
                fconvert.t(*(arg7 i- arg6 + esi_2)) + fconvert.t(*(arg8 + 0x458))
            var_14 += 1
            long double x87_r4_3 = fconvert.t(*esi_2)
            int32_t eax_20 = var_1c - ecx_6
            x87_r4_3 - x87_r5_13
            ebp_5 += eax_20 * eax_20
            int32_t eax_21
            eax_21.w = (x87_r4_3 < x87_r5_13 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_3, x87_r5_13) ? 1 : 0) << 0xa
                | (x87_r4_3 == x87_r5_13 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1) && ecx_6 != 0)
                x87_r4_1 = fconvert.t(fconvert.s(float.t(var_1c)))
                long double x87_r5_17 = fconvert.t(*(arg8 + 0x448)) + x87_r4_1
                long double x87_r3_4 = fconvert.t(fconvert.s(float.t(ecx_6)))
                x87_r3_4 - x87_r5_17
                eax_21.w = (x87_r3_4 < x87_r5_17 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_4, x87_r5_17) ? 1 : 0) << 0xa
                    | (x87_r3_4 == x87_r5_17 ? 1 : 0) << 0xe | 0x1800
                x87_r6 = x87_r3_4
                
                if ((eax_21:1.b & 0x41) == 0)
                    return 1
                
                long double x87_r4_4 = x87_r4_1 - fconvert.t(*(arg8 + 0x44c))
                x87_r4_4 - x87_r5_17
                eax_21.w = (x87_r4_4 < x87_r5_17 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_4, x87_r5_17) ? 1 : 0) << 0xa
                    | (x87_r4_4 == x87_r5_17 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_21:1.b & 0x41) == 0)
                    return 1
            
            eax_12 = arg5 + 1
            esi_2 = &esi_2[1]
            arg5 = eax_12
        while (eax_12 s< arg4)
        
        ecx_5 = arg8
    
    long double x87_r7_6 = fconvert.t(*(ecx_5 + 0x448))
    long double x87_r7_8 = x87_r7_6 * x87_r7_6 / fconvert.t(fconvert.s(float.t(var_14)))
    long double x87_r5_19 = fconvert.t(*(ecx_5 + 0x450))
    x87_r5_19 - x87_r7_8
    eax_12.w = (x87_r5_19 < x87_r7_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_19, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r5_19 == x87_r7_8 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        return 0
    
    long double x87_r6_3 = fconvert.t(*(ecx_5 + 0x44c))
    long double x87_r6_4 = x87_r6_3 * x87_r6_3
    long double x87_r7_9 = x87_r6_4 / x87_r6_4
    long double x87_r6_5 = fconvert.t(*(ecx_5 + 0x450))
    x87_r6_5 - x87_r7_9
    eax_12.w = (x87_r6_5 < x87_r7_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x5}
    bool p_4
    
    if (p_3)
        long double x87_r7_10 = float.t(divs.dp.d(sx.q(ebp_5), var_14))
        long double x87_r6_6 = fconvert.t(*(ecx_5 + 0x450))
        x87_r6_6 - x87_r7_10
        int32_t eax_26
        eax_26.w = (x87_r6_6 < x87_r7_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_10 ? 1 : 0) << 0xe
        p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_3) || p_4)
        return 0
else
    x87_r4_1 = fconvert.t(fconvert.s(float.t(arg5)))
    long double x87_r5_7 = fconvert.t(*(ecx_5 + 0x448)) + x87_r4_1
    long double x87_r3_2 = fconvert.t(fconvert.s(float.t(ecx_1)))
    x87_r3_2 - x87_r5_7
    eax_12.w = (x87_r3_2 < x87_r5_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r3_2, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r3_2 == x87_r5_7 ? 1 : 0) << 0xe | 0x1800
    x87_r6 = x87_r3_2
    
    if ((eax_12:1.b & 0x41) != 0)
        long double x87_r4_2 = x87_r4_1 - fconvert.t(*(ecx_5 + 0x44c))
        x87_r4_2 - x87_r5_7
        eax_12.w = (x87_r4_2 < x87_r5_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_2, x87_r5_7) ? 1 : 0) << 0xa
            | (x87_r4_2 == x87_r5_7 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_12:1.b & 0x41) != 0)
            goto label_5b835d
return 1
