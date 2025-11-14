// 函数: sub_4dac10
// 地址: 0x4dac10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1

if (eax == 0)
    return 

arg1[1] = fconvert.s(float.t(arg2) * fconvert.t(arg3) / fconvert.t(1000.0) + fconvert.t(arg1[1]))
int80_t st0_1

if (eax == 2)
    st0_1, eax = sub_4dac80(arg1, &arg1[1])
long double x87_r7_5 = fconvert.t(arg1[1])
long double x87_r6_1 = fconvert.t(arg1[2])
x87_r6_1 - x87_r7_5
eax.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe

if ((eax:1.b & 0x41) != 0)
    long double x87_r7_7 = fconvert.t(arg1[1])
    long double x87_r6_2 = fconvert.t(arg1[3])
    x87_r6_2 - x87_r7_7
    eax.w = (x87_r6_2 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        arg1[1] = fconvert.s(fconvert.t(arg1[3]))
else
    arg1[1] = fconvert.s(fconvert.t(arg1[2]))

if (*arg1 != 1)
    return 

long double x87_r7_8 = fconvert.t(arg1[1])
long double x87_r6_3 = fconvert.t(arg1[3])
x87_r6_3 - x87_r7_8
eax.w = (x87_r6_3 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_8) ? 1 : 0) << 0xa
    | (x87_r6_3 == x87_r7_8 ? 1 : 0) << 0xe
bool p_2 = unimplemented  {test ah, 0x41}

if (not(p_2))
    *arg1 = 0
