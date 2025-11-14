// 函数: sub_517f50
// 地址: 0x517f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* var_28 = arg3
float var_1c = fconvert.s(fconvert.t(arg3[1]) * fconvert.t(arg1[2])
    - fconvert.t(arg3[2]) * fconvert.t(arg1[1]))
float var_18 =
    fconvert.s(fconvert.t(*arg1) * fconvert.t(arg3[2]) - fconvert.t(*arg3) * fconvert.t(arg1[2]))
float var_14 =
    fconvert.s(fconvert.t(*arg3) * fconvert.t(arg1[1]) - fconvert.t(*arg1) * fconvert.t(arg3[1]))
long double x87_r7_14 = fconvert.t(fconvert.s(fconvert.t(arg1[1]) * fconvert.t(arg3[1])
    + fconvert.t(*arg3) * fconvert.t(*arg1) + fconvert.t(arg3[2]) * fconvert.t(arg1[2])))
    + fconvert.t(1.0)
int32_t eax
long double st0
st0, eax = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_14 + x87_r7_14))))
long double x87_r7_18 = fconvert.t(fconvert.s(st0))
long double x87_r5 = float.t(0)
x87_r5 - x87_r7_18
eax.w = (x87_r5 < x87_r7_18 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_18) ? 1 : 0) << 0xa
    | (x87_r5 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    eax.b = 0
    return eax

*arg4 = fconvert.s(fconvert.t(var_1c) / x87_r7_18)
arg4[1] = fconvert.s(fconvert.t(var_18) / x87_r7_18)
arg4[2] = fconvert.s(fconvert.t(var_14) / x87_r7_18)
arg4[3] = fconvert.s(x87_r7_18 * fconvert.t(0.5))
float eax_2
eax_2.b = 1
return eax_2
