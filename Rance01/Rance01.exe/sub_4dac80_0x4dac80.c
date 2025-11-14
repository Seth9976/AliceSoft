// 函数: sub_4dac80
// 地址: 0x4dac80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_4 = arg1
long double x87_r7 = fconvert.t(*(arg1 i+ 0x10))
long double x87_r6 = fconvert.t(*(arg1 i+ 0x14))
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *arg2 = fconvert.s(fconvert.t(*(arg1 i+ 0x10)))
    return 

for (int32_t i = 0; i s< 0x10000; )
    long double x87_r7_2 = fconvert.t(*arg2)
    long double x87_r6_1 = fconvert.t(*(arg1 i+ 0x14))
    x87_r6_1 - x87_r7_2
    eax.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (p_1)
        return 
    
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*(arg1 i+ 0x14))
        + fconvert.t(*(arg1 i+ 0x10))))
    *arg2 = fconvert.s(x87_r7_6)
    long double x87_r6_2 = fconvert.t(*(arg1 i+ 0x14))
    x87_r6_2 - x87_r7_6
    eax.w = (x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
    bool p_2 = unimplemented  {test ah, 0x41}
    
    if (p_2)
        return 
    
    x87_r7_6 =
        fconvert.t(fconvert.s(x87_r7_6 - fconvert.t(*(arg1 i+ 0x14)) + fconvert.t(*(arg1 i+ 0x10))))
    *arg2 = fconvert.s(x87_r7_6)
    long double x87_r6_3 = fconvert.t(*(arg1 i+ 0x14))
    x87_r6_3 - x87_r7_6
    eax.w = (x87_r6_3 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
    bool p_3 = unimplemented  {test ah, 0x41}
    
    if (p_3)
        return 
    
    x87_r7_6 =
        fconvert.t(fconvert.s(x87_r7_6 - fconvert.t(*(arg1 i+ 0x14)) + fconvert.t(*(arg1 i+ 0x10))))
    *arg2 = fconvert.s(x87_r7_6)
    long double x87_r6_4 = fconvert.t(*(arg1 i+ 0x14))
    x87_r6_4 - x87_r7_6
    eax.w = (x87_r6_4 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
    bool p_4 = unimplemented  {test ah, 0x41}
    
    if (p_4)
        return 
    
    i += 4
    *arg2 = fconvert.s(x87_r7_6 - fconvert.t(*(arg1 i+ 0x14)) + fconvert.t(*(arg1 i+ 0x10)))
