// 函数: sub_4ef4a0
// 地址: 0x4ef4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
long double x87_r7 = fconvert.t(*(arg1 + 0x8c))
long double x87_r6 = float.t(0)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
long double x87_r6_1 = fconvert.t(arg2)
bool p = unimplemented  {test ah, 0x44}

if (p)
    long double x87_r5_1 = fconvert.t(*(arg1 + 0x8c))
    x87_r5_1 - x87_r6_1
    eax.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000

long double x87_r6_2

if (not(p) || (eax:1.b & 0x41) != 0)
    long double x87_r5_2 = fconvert.t(*(arg1 + 0x90))
    x87_r7 - x87_r5_2
    eax.w = (x87_r7 < x87_r5_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, x87_r5_2) ? 1 : 0) << 0xa
        | (x87_r7 == x87_r5_2 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x44}
    long double x87_r5_4
    bool p_4
    
    if (p_3)
        x87_r5_4 = fconvert.t(fconvert.s(float.t(*(arg1 + 0x38))))
        long double x87_r4_3 = x87_r5_4 - fconvert.t(*(arg1 + 0x90))
        x87_r4_3 - x87_r6_1
        eax.w = (x87_r4_3 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_3, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r4_3 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        p_4 = unimplemented  {test ah, 0x41}
    
    if (not(p_3) || p_4)
        return fconvert.t(fconvert.s(float.t(1)))
    
    x87_r6_2 = (x87_r5_4 - x87_r6_1) / fconvert.t(*(arg1 + 0x90))
else
    x87_r6_2 = x87_r6_1 / fconvert.t(*(arg1 + 0x8c))

long double x87_r6_3 = fconvert.t(fconvert.s(x87_r6_2))
x87_r6_3 - x87_r7
eax.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_1 = unimplemented  {test ah, 0x5}

if (p_1)
    x87_r6_3 = float.t(1)
    x87_r6_3 - x87_r7
    eax.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        return x87_r7

return x87_r6_3
