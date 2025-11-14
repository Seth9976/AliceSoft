// 函数: sub_5864e0
// 地址: 0x5864e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_4 = arg1
long double x87_r7_1 = fconvert.t(*arg4) - fconvert.t(*arg1)
float* ebx = arg5
long double x87_r6_1 = fconvert.t(*ebx) - fconvert.t(*arg3)
long double x87_r5_4 = fconvert.t(fconvert.s((fconvert.t(ebx[1]) - fconvert.t(arg3[1])) * x87_r7_1
    - (fconvert.t(arg4[1]) - fconvert.t(arg1[1])) * x87_r6_1))
long double x87_r3 = float.t(0)
x87_r3 - x87_r5_4
int32_t eax
eax.w = (x87_r3 < x87_r5_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r3, x87_r5_4) ? 1 : 0) << 0xa
    | (x87_r3 == x87_r5_4 ? 1 : 0) << 0xe | 0x1800
bool p = unimplemented  {test ah, 0x44}

if (p)
    long double x87_r3_2 = fconvert.t(arg1[1]) - fconvert.t(arg3[1])
    long double x87_r2_2 = fconvert.t(*arg1) - fconvert.t(*arg3)
    long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6_1 * x87_r3_2
        - (fconvert.t(ebx[1]) - fconvert.t(arg3[1])) * x87_r2_2)) / x87_r3))
    x87_r5_7 - x87_r5_4
    eax.w = (x87_r5_7 < x87_r5_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_7, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r5_7 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r4_5
    bool p_2
    
    if (p_1)
        x87_r4_5 = float.t(1)
        x87_r4_5 - x87_r5_7
        eax.w = (x87_r4_5 < x87_r5_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_5, x87_r5_7) ? 1 : 0) << 0xa
            | (x87_r4_5 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
        p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_1) || not(p_2))
        int32_t ecx_3 = arg1[1]
        *arg2 = *arg1
        arg2[1] = ecx_3
        return 
    
    long double x87_r3_4 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r3_2 * x87_r7_1
        - x87_r2_2 * (fconvert.t(arg4[1]) - fconvert.t(arg1[1])))) / x87_r3))
    x87_r3_4 - x87_r5_4
    eax.w = (x87_r3_4 < x87_r5_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_4, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r3_4 == x87_r5_4 ? 1 : 0) << 0xe | 0x1800
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        x87_r4_5 - x87_r5_4
        eax.w = (x87_r4_5 < x87_r5_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_5, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r4_5 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            long double x87_r5_8 = fconvert.t(*arg3)
            long double x87_r4_6 = fconvert.t(*ebx)
            x87_r4_6 - x87_r5_8
            eax.w = (x87_r4_6 < x87_r5_8 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_6, x87_r5_8) ? 1 : 0) << 0xa
                | (x87_r4_6 == x87_r5_8 ? 1 : 0) << 0xe | 0x3000
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (not(p_5))
                *arg2 = fconvert.s(fconvert.t(*arg3))
                arg2[1] = fconvert.s(x87_r5_7 * (fconvert.t(arg4[1]) - fconvert.t(arg1[1]))
                    + fconvert.t(arg1[1]))
                return 
            
            fconvert.t(ebx[1]) - fconvert.t(arg3[1])
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                *arg2 = fconvert.s(x87_r5_7 * x87_r5_4 + fconvert.t(*arg1))
                arg2[1] = fconvert.s(x87_r5_4 * (fconvert.t(arg4[1]) - fconvert.t(arg1[1]))
                    + fconvert.t(arg1[1]))
                return 
            
            *arg2 = fconvert.s(x87_r5_7 * x87_r5_4 + fconvert.t(*arg1))
            arg2[1] = fconvert.s(fconvert.t(arg3[1]))
            return 

int32_t ecx_5 = arg1[1]
*arg2 = *arg1
arg2[1] = ecx_5
