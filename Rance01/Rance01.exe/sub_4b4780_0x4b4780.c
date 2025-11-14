// 函数: sub_4b4780
// 地址: 0x4b4780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*arg1)
long double x87_r6 = fconvert.t(*(arg2 + 0x54))
x87_r6 - x87_r7

if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    fconvert.t(*(arg2 + 0x60)) - fconvert.t(*arg1)
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        *arg1 = fconvert.s(fconvert.t(*(arg2 + 0x60)))
else
    *arg1 = fconvert.s(fconvert.t(*(arg2 + 0x54)))

long double x87_r7_3 = fconvert.t(arg1[1])
long double x87_r6_2 = fconvert.t(*(arg2 + 0x58))
x87_r6_2 - x87_r7_3

if ((((x87_r6_2 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    fconvert.t(*(arg2 + 0x64)) - fconvert.t(arg1[1])
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        arg1[1] = fconvert.s(fconvert.t(*(arg2 + 0x64)))
else
    arg1[1] = fconvert.s(fconvert.t(*(arg2 + 0x58)))

long double x87_r7_6 = fconvert.t(arg1[2])
long double x87_r6_4 = fconvert.t(*(arg2 + 0x5c))
x87_r6_4 - x87_r7_6
int16_t result = (x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe

if ((result:1.b & 0x41) == 0)
    arg1[2] = fconvert.s(fconvert.t(*(arg2 + 0x5c)))
    return result

long double x87_r7_8 = fconvert.t(arg1[2])
long double x87_r6_5 = fconvert.t(*(arg2 + 0x68))
x87_r6_5 - x87_r7_8
bool p_3 = unimplemented  {test ah, 0x5}

if (not(p_3))
    arg1[2] = fconvert.s(fconvert.t(*(arg2 + 0x68)))

return (x87_r6_5 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_8) ? 1 : 0) << 0xa
    | (x87_r6_5 == x87_r7_8 ? 1 : 0) << 0xe
