// 函数: sub_529cb0
// 地址: 0x529cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_20
int32_t var_4 = data_78c474 ^ &var_20
long double x87_r7_4 = float.t(1)
long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2) + fconvert.t(arg2[5])
    + fconvert.t(arg2[0xa]) + fconvert.t(arg2[0xf])))
x87_r6 - x87_r7_4
int32_t eax_1
eax_1.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000

if ((eax_1:1.b & 1) == 0)
    float* var_30 = arg1
    long double st0 = sub_4d9250(fconvert.s(x87_r7_4))
    long double x87_r6_1 = fconvert.t(fconvert.s(st0 + st0))
    float var_1c_2 = fconvert.s((fconvert.t(arg2[8]) - fconvert.t(arg2[2])) / x87_r6_1)
    var_20 = fconvert.s((fconvert.t(arg2[1]) - fconvert.t(arg2[4])) / x87_r6_1)
    *arg1 = fconvert.s((fconvert.t(arg2[6]) - fconvert.t(arg2[9])) / x87_r6_1)
    arg1[1] = fconvert.s(fconvert.t(var_1c_2))
    arg1[2] = fconvert.s(fconvert.t(var_20))
    arg1[3] = fconvert.s(x87_r6_1 * fconvert.t(0.25))
    sub_6b4885(var_4 ^ &var_20)
    return arg1

long double x87_r7_12 = fconvert.t(*arg2)
long double x87_r6_11 = fconvert.t(arg2[5])
x87_r6_11 - x87_r7_12
eax_1.w = (x87_r6_11 < x87_r7_12 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_11, x87_r7_12) ? 1 : 0) << 0xa
    | (x87_r6_11 == x87_r7_12 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x5}
int32_t edi_1

edi_1 = p ? 1 : 0

long double x87_r7_13 = fconvert.t(arg2[0xa])
long double x87_r6_12 = fconvert.t(arg2[edi_1 * 5])
x87_r6_12 - x87_r7_13
int32_t eax_3
eax_3.w = (x87_r6_12 < x87_r7_13 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_12, x87_r7_13) ? 1 : 0) << 0xa
    | (x87_r6_12 == x87_r7_13 ? 1 : 0) << 0xe
bool p_1 = unimplemented  {test ah, 0x5}

if (not(p_1))
    edi_1 = 2

int32_t temp1 = mods.dp.d(sx.q(edi_1 + 1), 3)
int32_t temp1_1 = mods.dp.d(sx.q(temp1 + 1), 3)
int32_t ecx_2 = temp1_1 * 5
int32_t var_30_2 = ecx_2
var_20 = fconvert.s(fconvert.t(arg2[edi_1 * 5]) - fconvert.t(arg2[temp1 * 5])
    - fconvert.t(arg2[ecx_2]) + fconvert.t(1.0))
long double st0_1 = sub_4d9250(fconvert.s(fconvert.t(var_20)))
var_20 = fconvert.s(st0_1 + st0_1)
long double x87_r7_21 = fconvert.t(var_20)
float var_14
(&var_14)[edi_1] = fconvert.s(fconvert.t(0.25) * x87_r7_21)
(&var_14)[temp1] = fconvert.s((fconvert.t(arg2[edi_1 + (temp1 << 2)])
    + fconvert.t(arg2[temp1 + (edi_1 << 2)])) / x87_r7_21)
(&var_14)[temp1_1] = fconvert.s((fconvert.t(arg2[edi_1 + (temp1_1 << 2)])
    + fconvert.t(arg2[temp1_1 + (edi_1 << 2)])) / x87_r7_21)
long double x87_r6_22 =
    fconvert.t(arg2[temp1_1 + (temp1 << 2)]) - fconvert.t(arg2[temp1 + (temp1_1 << 2)])
float var_8 = fconvert.s(x87_r6_22 / x87_r6_22)
*arg1 = fconvert.s(fconvert.t(var_14))
float var_10
arg1[1] = fconvert.s(fconvert.t(var_10))
float var_c
arg1[2] = fconvert.s(fconvert.t(var_c))
arg1[3] = fconvert.s(fconvert.t(var_8))
sub_6b4885(var_4 ^ &var_20)
return arg1
