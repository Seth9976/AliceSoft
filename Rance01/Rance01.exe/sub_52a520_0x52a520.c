// 函数: sub_52a520
// 地址: 0x52a520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_4 = fconvert.t(*arg1) * fconvert.t(*arg2)
    + fconvert.t(arg1[1]) * fconvert.t(arg2[1]) + fconvert.t(arg1[2]) * fconvert.t(arg2[2])
    + fconvert.t(arg1[3]) * fconvert.t(arg2[3])
long double x87_r7_5 = float.t(0)
long double x87_r6_6 = fconvert.t(fconvert.s(x87_r7_4))
x87_r6_6 - x87_r7_5
int32_t eax
eax.w = (x87_r6_6 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_6, x87_r7_5) ? 1 : 0) << 0xa
    | (x87_r6_6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}
float var_38
float* var_34
float eax_2
float edx

if (p)
    float* eax_3 = arg1[1]
    var_38 = *arg1
    edx = arg1[2]
    var_34 = eax_3
    eax_2 = arg1[3]
else
    long double x87_r6_7 = fconvert.t(-1.0)
    long double x87_r6_9 = fconvert.t(arg1[1])
    var_38 = fconvert.s(fconvert.t(*arg1) * x87_r6_7)
    edx = fconvert.s(fconvert.t(arg1[2]) * x87_r6_7)
    long double x87_r7_10 = x87_r6_7 * fconvert.t(arg1[3])
    arg1 = fconvert.s(x87_r6_9 * x87_r6_7)
    var_34 = arg1
    eax_2 = fconvert.s(x87_r7_10)
    x87_r7_5 = fconvert.t(fconvert.s(fneg(x87_r7_5)))

long double temp1 = fconvert.t(0.94999998807907104)
x87_r7_5 - temp1
float var_2c = eax_2
eax_2.w = (x87_r7_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1) ? 1 : 0) << 0xa
    | (x87_r7_5 == temp1 ? 1 : 0) << 0xe | 0x3800
bool p_1 = unimplemented  {test ah, 0x5}

if (p_1)
    float* var_4c_4 = arg1
    sub_52a490(arg1, &var_38, arg3, arg2, fconvert.s(fconvert.t(arg4)))
    return arg3

int32_t ecx
int32_t mxcsr
int16_t x87control
long double st0
st0, ecx = sub_70d5b0(mxcsr, x87control, x87_r7_5)
int32_t var_4c = ecx
float var_44_3 = fconvert.s(fconvert.t(fconvert.s(st0)))
long double x87_r6_14 = fconvert.t(fconvert.s(sub_4ed890(fconvert.s(fconvert.t(fconvert.s(
    fconvert.t(var_44_3) * fconvert.t(arg4)))))))
float var_14 = fconvert.s(fconvert.t(var_34) * x87_r6_14)
float var_10 = fconvert.s(fconvert.t(edx) * x87_r6_14)
float var_c = fconvert.s(x87_r6_14 * fconvert.t(var_2c))
long double x87_r6_20 = fconvert.t(fconvert.s(sub_4ed890(fconvert.s(fconvert.t(fconvert.s((
    float.t(1) - fconvert.t(arg4)) * fconvert.t(var_44_3)))))))
float var_24_2 = fconvert.s(x87_r6_20 * fconvert.t(arg2[1]))
float var_20_2 = fconvert.s(fconvert.t(arg2[2]) * x87_r6_20)
float var_1c_2 = fconvert.s(x87_r6_20 * fconvert.t(arg2[3]))
var_38 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6_20))
    + fconvert.t(fconvert.s(fconvert.t(var_38) * x87_r6_14)))
float var_34_1 = fconvert.s(fconvert.t(var_24_2) + fconvert.t(var_14))
float var_30_1 = fconvert.s(fconvert.t(var_20_2) + fconvert.t(var_10))
float var_2c_1 = fconvert.s(fconvert.t(var_1c_2) + fconvert.t(var_c))
sub_4ed890(fconvert.s(fconvert.t(var_44_3)))
long double x87_r6_26 = float.t(1)
long double x87_r6_27 = fconvert.t(fconvert.s(x87_r6_26 / x87_r6_26))
*arg3 = fconvert.s(fconvert.t(var_38) * x87_r6_27)
arg3[1] = fconvert.s(fconvert.t(var_34_1) * x87_r6_27)
arg3[2] = fconvert.s(fconvert.t(var_30_1) * x87_r6_27)
arg3[3] = fconvert.s(x87_r6_27 * fconvert.t(var_2c_1))
return arg3
