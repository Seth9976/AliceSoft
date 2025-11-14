// 函数: sub_660960
// 地址: 0x660960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg2[1])
long double x87_r6 = fconvert.t(*arg2)
long double x87_r5 = fconvert.t(arg2[2])
long double x87_r7_4 = float.t(0)
long double x87_r6_4 = fconvert.t(fconvert.s(x87_r7 * x87_r7 + x87_r6 * x87_r6 + x87_r5 * x87_r5))
x87_r6_4 - x87_r7_4
int32_t eax
eax.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x41}

if (not(p))
    *arg1 = fconvert.s(x87_r6_4)
    arg1[1] = fconvert.s(x87_r6_4)
    arg1[2] = fconvert.s(x87_r6_4)
    arg1[3] = fconvert.s(x87_r6_4)
    return arg1

int32_t ecx
int32_t var_2c = ecx
sub_4d9250(fconvert.s(x87_r7_4))
long double x87_r6_5 = float.t(1)
float var_24_1 = fconvert.s(fconvert.t(arg3) * fconvert.t(0.5))
long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5 / x87_r6_5))
long double x87_r6_10 = fconvert.t(fconvert.s(sub_4ed890(fconvert.s(fconvert.t(var_24_1)))))
float var_8 = fconvert.s(fconvert.t(fconvert.s(x87_r6_6 * fconvert.t(arg2[1]))) * x87_r6_10)
float var_4 = fconvert.s(x87_r6_10 * fconvert.t(fconvert.s(x87_r6_6 * fconvert.t(arg2[2]))))
*arg1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6_6))
    * x87_r6_10)))
arg1[1] = fconvert.s(fconvert.t(var_8))
arg1[2] = fconvert.s(fconvert.t(var_4))
arg1[3] = fconvert.s(sub_42a880(fconvert.s(fconvert.t(var_24_1))))
return arg1
