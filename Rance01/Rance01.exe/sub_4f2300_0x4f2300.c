// 函数: sub_4f2300
// 地址: 0x4f2300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(arg6)
long double x87_r7 = fconvert.t(arg8) - x87_r6
long double x87_r5_2 = fconvert.t(arg3) - fconvert.t(arg1)
long double x87_r4_1 = fconvert.t(arg7) - fconvert.t(arg5)
long double x87_r3_1 = fconvert.t(arg4) - fconvert.t(arg2)
long double x87_r2_3 = fconvert.t(fconvert.s(x87_r5_2 * x87_r7 - x87_r3_1 * x87_r4_1))
float.t(0) - x87_r2_3
bool p = unimplemented  {test ah, 0x44}
int16_t result

if (not(p))
    result.b = 0
    return result

long double x87_r6_2 = fconvert.t(arg2) - x87_r6
long double x87_r1_5 = fconvert.t(arg1) - fconvert.t(arg5)
long double x87_r6_6 = float.t(0)
x87_r6_6 - x87_r2_3
long double x87_r5_4 = fconvert.t(fconvert.s(x87_r4_1 * x87_r6_2 - x87_r7 * x87_r1_5))
long double x87_r4_4 = float.t(0)
bool p_1 = unimplemented  {test ah, 0x5}
long double x87_r5_7

if (p_1)
label_4f23a9:
    x87_r2_3 - x87_r6_6
    bool p_4 = unimplemented  {test ah, 0x5}
    bool p_5
    
    if (not(p_4))
        x87_r2_3 - x87_r5_4
        p_5 = unimplemented  {test ah, 0x41}
    
    if (p_4 || p_5)
        result.b = 0
        return result
    
    x87_r5_4 - x87_r6_6
    bool p_6 = unimplemented  {test ah, 0x41}
    
    if (not(p_6))
        x87_r5_7 = x87_r4_4
        goto label_4f23ca
else
    x87_r4_4 - x87_r5_4
    bool p_2 = unimplemented  {test ah, 0x41}
    
    if (p_2)
        goto label_4f23a9
    
    x87_r5_4 - x87_r2_3
    bool p_3 = unimplemented  {test ah, 0x41}
    
    if (p_3)
        goto label_4f23a9
    
    x87_r5_7 = x87_r5_4
label_4f23ca:
    x87_r2_3 - x87_r6_6
    long double x87_r4_7 = fconvert.t(fconvert.s(x87_r5_2 * x87_r6_2 - x87_r3_1 * x87_r1_5))
    
    if ((((x87_r2_3 < x87_r6_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_3, x87_r6_6) ? 1 : 0) << 0xa
            | (x87_r2_3 == x87_r6_6 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
        x87_r4_7 - x87_r5_7
        
        if ((((x87_r4_7 < x87_r5_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_7, x87_r5_7) ? 1 : 0) << 0xa
                | (x87_r4_7 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000):1.b & 1) == 0)
            x87_r2_3 - x87_r5_7
            
            if ((((x87_r2_3 < x87_r5_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_3, x87_r5_7) ? 1 : 0) << 0xa
                    | (x87_r2_3 == x87_r5_7 ? 1 : 0) << 0xe | 0x2800):1.b & 1) == 0)
                result.b = 1
                return result
    
    x87_r2_3 - x87_r6_6
    bool p_7 = unimplemented  {test ah, 0x5}
    
    if (p_7)
        result.b = 0
        return result
    
    x87_r2_3 - x87_r5_7
    bool p_8 = unimplemented  {test ah, 0x41}
    
    if (not(p_8))
        x87_r6_6 - x87_r5_7
        
        if ((((x87_r6_6 < x87_r5_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_6, x87_r5_7) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r5_7 ? 1 : 0) << 0xe):1.b & 1) == 0)
            result.b = 1
            return result
result.b = 0
return result
