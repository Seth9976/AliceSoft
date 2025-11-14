// 函数: sub_52a3a0
// 地址: 0x52a3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_48
float* ecx
int32_t edx
sub_660a50(&var_48, edx, ecx)
float var_40
int32_t ecx_1
int32_t mxcsr
int16_t x87control
long double st0
st0, ecx_1 = sub_70d330(mxcsr, x87control, fneg(fconvert.t(var_40)))
int32_t var_5c = ecx_1
float var_50_1 = fconvert.s(fconvert.t(fconvert.s(st0)))
int32_t eax_1
long double st0_1
st0_1, eax_1 = sub_42a880(fconvert.s(fconvert.t(var_50_1)))
float var_54 = fconvert.s(st0_1)
long double x87_r7_6 = fconvert.t(var_54)
long double x87_r5 = float.t(0)
x87_r5 - x87_r7_6
eax_1.w = (x87_r5 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_6) ? 1 : 0) << 0xa
    | (x87_r5 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    var_54 = fconvert.s(fconvert.t(9.99999975e-05f))

float var_20
long double x87_r5_1 = fconvert.t(var_20)
sub_70d6ca()
long double x87_r5_2 = fconvert.t(180.0)
*arg1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_1 / x87_r5_1)))) * x87_r5_2
    / fconvert.t(3.1415927410125732))
long double x87_r5_3 = x87_r5_2 * fconvert.t(var_50_1)
arg1[1] = fconvert.s(x87_r5_3 / x87_r5_3)
long double x87_r4_3 = fconvert.t(var_48)
sub_70d6ca()
arg1[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_3 / x87_r4_3))))
    * fconvert.t(180.0) / fconvert.t(3.1415927410125732))
float var_44
return fconvert.t(fconvert.s(fconvert.t(var_44) / fconvert.t(var_54)))
