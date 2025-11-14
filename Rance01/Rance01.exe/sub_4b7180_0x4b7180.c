// 函数: sub_4b7180
// 地址: 0x4b7180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

fconvert.t(*arg1) - fconvert.t(*arg2)
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    *arg2 = fconvert.s(fconvert.t(*arg1))

long double x87_r7_2 = fconvert.t(arg2[1])
long double x87_r6_1 = fconvert.t(*arg1)
x87_r6_1 - x87_r7_2

if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
    arg2[1] = fconvert.s(fconvert.t(*arg1))

fconvert.t(arg1[1]) - fconvert.t(arg2[2])
bool p_1 = unimplemented  {test ah, 0x5}

if (not(p_1))
    arg2[2] = fconvert.s(fconvert.t(arg1[1]))

long double x87_r7_6 = fconvert.t(arg2[3])
long double x87_r6_3 = fconvert.t(arg1[1])
x87_r6_3 - x87_r7_6

if ((((x87_r6_3 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
    arg2[3] = fconvert.s(fconvert.t(arg1[1]))

fconvert.t(arg1[2]) - fconvert.t(arg2[4])
bool p_2 = unimplemented  {test ah, 0x5}

if (not(p_2))
    arg2[4] = fconvert.s(fconvert.t(arg1[2]))

long double x87_r7_10 = fconvert.t(arg2[5])
long double x87_r6_5 = fconvert.t(arg1[2])
x87_r6_5 - x87_r7_10
int16_t result = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe

if ((result:1.b & 0x41) == 0)
    arg2[5] = fconvert.s(fconvert.t(arg1[2]))

return result
