// 函数: sub_4b6c30
// 地址: 0x4b6c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* edx = arg5
float* ebx = arg6
float* ebp = arg7
float var_24 = fconvert.s(fconvert.t(*ebx) - fconvert.t(*edx))
float var_20 = fconvert.s(fconvert.t(ebx[1]) - fconvert.t(edx[1]))
float var_1c = fconvert.s(fconvert.t(ebx[2]) - fconvert.t(edx[2]))
float var_18 = fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg1))
float var_10 = fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2]))
long double x87_r7_18 = fconvert.t(var_20)
long double x87_r6 = fconvert.t(var_24)
long double x87_r5 = fconvert.t(var_1c)
long double x87_r7_22 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1])))
long double x87_r5_2 = fconvert.t(var_18)
long double x87_r3 = fconvert.t(var_10)
arg6 = fconvert.s(x87_r3 * x87_r3 + x87_r7_22 * x87_r7_22 + x87_r5_2 * x87_r5_2)
long double x87_r4_7 = fconvert.t(fconvert.s(fconvert.t(edx[1]) - fconvert.t(arg1[1])))
long double x87_r2_3 = fconvert.t(fconvert.s(fconvert.t(*edx) - fconvert.t(*arg1)))
long double x87_r1_4 = fconvert.t(fconvert.s(fconvert.t(edx[2]) - fconvert.t(arg1[2])))
arg5 = fconvert.s(x87_r3 * x87_r1_4 + x87_r4_7 * x87_r7_22 + x87_r2_3 * x87_r5_2)
long double x87_r2_5 = fconvert.t(1.1920929e-07f)
long double x87_r1_6 =
    fconvert.t(fconvert.s(x87_r7_18 * x87_r7_18 + x87_r6 * x87_r6 + x87_r5 * x87_r5))
x87_r1_6 - x87_r2_5
arg2.w = (x87_r1_6 < x87_r2_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_6, x87_r2_5) ? 1 : 0) << 0xa
    | (x87_r1_6 == x87_r2_5 ? 1 : 0) << 0xe | 0x800
bool p = unimplemented  {test ah, 0x41}
long double x87_r6_21

if (p)
    long double x87_r1_8 = fconvert.t(var_1c)
    arg7 = fconvert.s(x87_r1_4 * x87_r1_8 + x87_r2_3 * fconvert.t(var_24)
        + x87_r4_7 * fconvert.t(var_20))
    long double x87_r2_7 = fconvert.t(arg6)
    x87_r2_7 - x87_r2_5
    arg2.w = (x87_r2_7 < x87_r2_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_7, x87_r2_5) ? 1 : 0) << 0xa
        | (x87_r2_7 == x87_r2_5 ? 1 : 0) << 0xe | 0x1000
    bool p_4 = unimplemented  {test ah, 0x41}
    
    if (p_4)
        long double x87_r3_13 = fconvert.t(fconvert.s(x87_r1_8 * fconvert.t(var_10)
            + x87_r7_22 * fconvert.t(var_20) + x87_r5_2 * fconvert.t(var_24)))
        arg6 = fconvert.s(x87_r2_5 * x87_r2_7 - x87_r3_13 * x87_r3_13)
        long double x87_r2_14 = fconvert.t(arg6)
        long double x87_r1_15 = float.t(0)
        x87_r1_15 - x87_r2_14
        arg2.w = (x87_r1_15 < x87_r2_14 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_15, x87_r2_14) ? 1 : 0) << 0xa
            | (x87_r1_15 == x87_r2_14 ? 1 : 0) << 0xe | 0x800
        bool p_7 = unimplemented  {test ah, 0x44}
        long double x87_r2_21
        long double x87_r3_16
        long double x87_r5_18
        
        if (not(p_7))
            *ebp = fconvert.s(x87_r2_14)
            x87_r3_16 = x87_r2_14
            x87_r2_21 = x87_r5_2
            x87_r5_18 = x87_r1_15
        else
            long double x87_r2_19 = fconvert.t(fconvert.s((x87_r1_15 * fconvert.t(arg5)
                - fconvert.t(arg7) * x87_r2_14) / fconvert.t(arg6)))
            x87_r2_19 - x87_r5_2
            arg2.w = (x87_r2_19 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_19, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r2_19 == x87_r5_2 ? 1 : 0) << 0xe | 0x1000
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (p_8)
                long double x87_r1_18 = float.t(1)
                x87_r1_18 - x87_r2_19
                arg2.w = (x87_r1_18 < x87_r2_19 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_18, x87_r2_19) ? 1 : 0) << 0xa
                    | (x87_r1_18 == x87_r2_19 ? 1 : 0) << 0xe | 0x800
                bool p_9 = unimplemented  {test ah, 0x5}
                
                if (p_9)
                    x87_r3_16 = x87_r5_2
                    x87_r5_18 = x87_r1_15
                    *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r1_18)))
                    x87_r2_21 = fconvert.t(var_18)
                else
                    x87_r3_16 = x87_r5_2
                    x87_r5_18 = x87_r1_18
                    *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r2_19)))
                    x87_r2_21 = fconvert.t(var_18)
            else
                x87_r3_16 = x87_r5_2
                x87_r5_18 = x87_r2_19
                *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r3_16)))
                x87_r2_21 = fconvert.t(var_18)
        
        long double x87_r1_21 = fconvert.t(*ebp) * x87_r5_18 + fconvert.t(arg5)
        x87_r6_21 = x87_r2_21
        long double x87_r2_27 = fconvert.t(fconvert.s(x87_r1_21 / x87_r1_21))
        *arg8 = fconvert.s(x87_r2_27)
        x87_r2_27 - x87_r3_16
        arg2.w = (x87_r2_27 < x87_r3_16 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_27, x87_r3_16) ? 1 : 0) << 0xa
            | (x87_r2_27 == x87_r3_16 ? 1 : 0) << 0xe | 0x1000
        bool p_10 = unimplemented  {test ah, 0x5}
        
        if (p_10)
            long double x87_r1_22 = float.t(1)
            x87_r1_22 - x87_r2_27
            arg2.w = (x87_r1_22 < x87_r2_27 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_22, x87_r2_27) ? 1 : 0) << 0xa
                | (x87_r1_22 == x87_r2_27 ? 1 : 0) << 0xe | 0x800
            bool p_13 = unimplemented  {test ah, 0x5}
            
            if (p_13)
                x87_r6_21 = x87_r1_22
            else
                *arg8 = fconvert.s(x87_r2_27)
                long double x87_r5_25 = x87_r5_18 - fconvert.t(arg7)
                long double x87_r3_23 = fconvert.t(fconvert.s(x87_r5_25 / x87_r5_25))
                x87_r3_23 - x87_r1_22
                arg2.w = (x87_r3_23 < x87_r1_22 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_23, x87_r1_22) ? 1 : 0) << 0xa
                    | (x87_r3_23 == x87_r1_22 ? 1 : 0) << 0xe | 0x1800
                bool p_14 = unimplemented  {test ah, 0x5}
                
                if (p_14)
                    x87_r1_22 - x87_r3_23
                    arg2.w = (x87_r1_22 < x87_r3_23 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_22, x87_r3_23) ? 1 : 0) << 0xa
                        | (x87_r1_22 == x87_r3_23 ? 1 : 0) << 0xe | 0x2000
                    
                    if ((arg2:1.b & 0x41) != 0)
                        x87_r6_21 = x87_r1_22
                        *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r3_23)))
                    else
                        *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r1_22)))
                else
                    x87_r6_21 = x87_r3_23
                    *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r2_27)))
        else
            x87_r6_21 = x87_r2_27
            *arg8 = fconvert.s(x87_r5_18)
            long double x87_r3_20 = fneg(fconvert.t(arg7))
            long double x87_r4_22 = fconvert.t(fconvert.s(x87_r3_20 / x87_r3_20))
            x87_r4_22 - x87_r5_18
            arg2.w = (x87_r4_22 < x87_r5_18 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_22, x87_r5_18) ? 1 : 0) << 0xa
                | (x87_r4_22 == x87_r5_18 ? 1 : 0) << 0xe | 0x2000
            bool p_11 = unimplemented  {test ah, 0x5}
            bool p_12
            
            if (p_11)
                x87_r6_21 = x87_r4_22
                x87_r4_22 = float.t(1)
                x87_r4_22 - x87_r5_18
                arg2.w = (x87_r4_22 < x87_r5_18 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_22, x87_r5_18) ? 1 : 0) << 0xa
                    | (x87_r4_22 == x87_r5_18 ? 1 : 0) << 0xe | 0x2000
                p_12 = unimplemented  {test ah, 0x5}
            
            if (not(p_11) || p_12)
                *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r4_22)))
            else
                x87_r6_21 = x87_r4_22
                *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r5_18)))
    else
        x87_r7_22 = x87_r2_5
        long double x87_r4_17 = float.t(0)
        *arg8 = fconvert.s(x87_r4_17)
        long double x87_r3_11 = fneg(fconvert.t(arg7))
        long double x87_r4_19 = fconvert.t(fconvert.s(x87_r3_11 / x87_r3_11))
        x87_r4_19 - x87_r4_17
        float* eax_5
        eax_5.w = (x87_r4_19 < x87_r4_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_19, x87_r4_17) ? 1 : 0) << 0xa
            | (x87_r4_19 == x87_r4_17 ? 1 : 0) << 0xe | 0x2000
        bool p_5 = unimplemented  {test ah, 0x5}
        bool p_6
        
        if (p_5)
            x87_r7_22 = x87_r4_19
            x87_r4_19 = float.t(1)
            x87_r4_19 - x87_r4_17
            eax_5.w = (x87_r4_19 < x87_r4_17 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_19, x87_r4_17) ? 1 : 0) << 0xa
                | (x87_r4_19 == x87_r4_17 ? 1 : 0) << 0xe | 0x2000
            p_6 = unimplemented  {test ah, 0x5}
        
        if (not(p_5) || p_6)
            x87_r6_21 = x87_r4_19
            *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r4_17)))
        else
            x87_r7_22 = x87_r4_19
            x87_r6_21 = x87_r5_2
            *ebp = fconvert.s(fconvert.t(fconvert.s(x87_r4_17)))
else
    long double x87_r4_8 = fconvert.t(arg6)
    x87_r4_8 - x87_r2_3
    arg2.w = (x87_r4_8 < x87_r2_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_8, x87_r2_3) ? 1 : 0) << 0xa
        | (x87_r4_8 == x87_r2_3 ? 1 : 0) << 0xe | 0x2000
    x87_r7_22 = x87_r4_8
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        long double x87_r7_26 = float.t(0)
        *ebp = fconvert.s(x87_r7_26)
        *arg8 = fconvert.s(x87_r7_26)
        *arg4 = *edx
        arg4[1] = edx[1]
        arg4[2] = edx[2]
        *arg3 = *arg1
        arg3[1] = arg1[1]
        arg3[2] = arg1[2]
        long double x87_r7_29 = fconvert.t(fconvert.s(fconvert.t(*arg4) - fconvert.t(*arg3)))
        long double x87_r6_13 = fconvert.t(fconvert.s(fconvert.t(arg4[1]) - fconvert.t(arg3[1])))
        long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(arg4[2]) - fconvert.t(arg3[2])))
        return fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r6_13)) * fconvert.t(fconvert.s(x87_r6_13))
            + fconvert.t(fconvert.s(x87_r7_29)) * fconvert.t(fconvert.s(x87_r7_29))
            + fconvert.t(fconvert.s(x87_r5_7)) * fconvert.t(fconvert.s(x87_r5_7))))
    
    long double x87_r4_9 = float.t(0)
    *ebp = fconvert.s(x87_r4_9)
    long double x87_r3_6 = fconvert.t(arg5)
    long double x87_r4_11 = fconvert.t(fconvert.s(x87_r3_6 / x87_r3_6))
    *arg8 = fconvert.s(x87_r4_11)
    long double x87_r4_12 = fconvert.t(fconvert.s(x87_r4_11))
    x87_r4_12 - x87_r4_9
    arg2.w = (x87_r4_12 < x87_r4_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_12, x87_r4_9) ? 1 : 0) << 0xa
        | (x87_r4_12 == x87_r4_9 ? 1 : 0) << 0xe | 0x2000
    bool p_2 = unimplemented  {test ah, 0x5}
    bool p_3
    
    if (p_2)
        x87_r7_22 = x87_r4_12
        x87_r4_12 = float.t(1)
        x87_r4_12 - x87_r4_9
        arg2.w = (x87_r4_12 < x87_r4_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_12, x87_r4_9) ? 1 : 0) << 0xa
            | (x87_r4_12 == x87_r4_9 ? 1 : 0) << 0xe | 0x2000
        p_3 = unimplemented  {test ah, 0x5}
    
    if (not(p_2) || p_3)
        x87_r6_21 = x87_r4_12
        *arg8 = fconvert.s(fconvert.t(fconvert.s(x87_r4_9)))
    else
        x87_r7_22 = x87_r4_12
        x87_r6_21 = x87_r2_5
        *arg8 = fconvert.s(fconvert.t(fconvert.s(x87_r4_9)))

long double x87_r4_26 = fconvert.t(fconvert.s(fconvert.t(*ebp)))
float var_20_1 =
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_20) * x87_r4_26)) + fconvert.t(edx[1]))
long double x87_r5_41 = fconvert.t(edx[2]) + fconvert.t(fconvert.s(x87_r4_26 * fconvert.t(var_1c)))
*arg4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_24) * x87_r4_26)) + fconvert.t(*edx))
arg4[1] = var_20_1
long double x87_r5_42 = fconvert.t(*arg8)
arg4[2] = fconvert.s(x87_r5_41)
long double x87_r5_43 = fconvert.t(fconvert.s(x87_r5_42))
float var_14_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_22 * x87_r5_43)) + fconvert.t(arg1[1]))
long double x87_r7_44 = fconvert.t(arg1[2]) + fconvert.t(fconvert.s(x87_r5_43 * fconvert.t(var_10)))
*arg3 = fconvert.s(fconvert.t(*arg1) + fconvert.t(fconvert.s(x87_r6_21 * x87_r5_43)))
arg3[1] = var_14_2
arg3[2] = fconvert.s(x87_r7_44)
long double x87_r7_47 = fconvert.t(fconvert.s(fconvert.t(*arg4) - fconvert.t(*arg3)))
long double x87_r6_38 = fconvert.t(fconvert.s(fconvert.t(arg4[1]) - fconvert.t(arg3[1])))
long double x87_r5_48 = fconvert.t(fconvert.s(fconvert.t(arg4[2]) - fconvert.t(arg3[2])))
return fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6_38)) * fconvert.t(fconvert.s(x87_r6_38))
    + fconvert.t(fconvert.s(x87_r7_47)) * fconvert.t(fconvert.s(x87_r7_47))
    + fconvert.t(fconvert.s(x87_r5_48)) * fconvert.t(fconvert.s(x87_r5_48))))
