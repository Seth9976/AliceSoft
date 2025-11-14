// 函数: sub_515c70
// 地址: 0x515c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_f0
sub_51e2a0(arg1 + 0x28, &var_f0)
float var_ec
long double x87_r6 = fconvert.t(var_ec)
float var_e8
long double x87_r5_1 = fconvert.t(var_e8)
float var_fc =
    fconvert.s(fconvert.t(*(arg1 + 0x120)) * x87_r6 - x87_r5_1 * fconvert.t(*(arg1 + 0x11c)))
long double x87_r4_2 = fconvert.t(var_f0)
float var_f8 =
    fconvert.s(x87_r5_1 * fconvert.t(*(arg1 + 0x118)) - fconvert.t(*(arg1 + 0x120)) * x87_r4_2)
float var_f4 =
    fconvert.s(x87_r4_2 * fconvert.t(*(arg1 + 0x11c)) - x87_r6 * fconvert.t(*(arg1 + 0x118)))
float var_90
float* eax = sub_51e2a0(&var_fc, &var_90)
var_fc = fconvert.s(fconvert.t(eax[2]) * fconvert.t(*(arg1 + 0x11c))
    - fconvert.t(eax[1]) * fconvert.t(*(arg1 + 0x120)))
float var_f8_1 = fconvert.s(fconvert.t(*(arg1 + 0x120)) * fconvert.t(*eax)
    - fconvert.t(eax[2]) * fconvert.t(*(arg1 + 0x118)))
float var_f4_1 = fconvert.s(fconvert.t(eax[1]) * fconvert.t(*(arg1 + 0x118))
    - fconvert.t(*eax) * fconvert.t(*(arg1 + 0x11c)))
sub_51e2a0(&var_fc, &var_90)
float var_a0
float* ecx
float* edx
int80_t st0
st0, ecx, edx = sub_5195f0(arg2, &var_a0)
float var_94
long double x87_r7_17 = fconvert.t(var_94)
float var_100 = fconvert.s(x87_r7_17)
long double x87_r6_8 = float.t(0)
x87_r6_8 - x87_r7_17

if ((((x87_r6_8 < x87_r7_17 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_8, x87_r7_17) ? 1 : 0) << 0xa
        | (x87_r6_8 == x87_r7_17 ? 1 : 0) << 0xe):1.b & 1) == 0)
    var_100 = fconvert.s(fconvert.t(0.100000001f))

long double x87_r6_9 = fconvert.t(var_100)
float* var_110_1 = &var_90
float* var_114 = &var_fc
float var_44[0x11]
float (* var_118)[0x11] = &var_44
var_f0 = fconvert.s(fconvert.t(*(arg1 + 0x118)) * x87_r6_9)
float var_ec_1 = fconvert.s(x87_r6_9 * fconvert.t(*(arg1 + 0x11c)))
float var_e8_1 = fconvert.s(x87_r6_9 * fconvert.t(*(arg1 + 0x120)))
var_fc = fconvert.s(fconvert.t(var_a0) - fconvert.t(var_f0))
float var_9c
float var_f8_2 = fconvert.s(fconvert.t(var_9c) - fconvert.t(var_ec_1))
float var_98
float var_f4_2 = fconvert.s(fconvert.t(var_98) - fconvert.t(var_e8_1))
float* eax_4 = sub_529a90(&var_a0, edx, var_118, ecx)
long double x87_r7_29 = fconvert.t(var_100)
long double x87_r5_9 = float.t(1)
float var_84[0x10]
float* var_110_2 = &var_84
long double x87_r5_11 = fconvert.t(fconvert.s(x87_r5_9 / x87_r5_9))
float var_e4 = fconvert.s(x87_r5_11)
long double x87_r4_5 = float.t(0)
float var_e0 = fconvert.s(x87_r4_5)
float var_dc = fconvert.s(x87_r4_5)
float var_d8 = fconvert.s(x87_r4_5)
float var_d4 = fconvert.s(x87_r4_5)
float var_cc = fconvert.s(x87_r4_5)
float var_c8 = fconvert.s(x87_r4_5)
float var_c4 = fconvert.s(x87_r4_5)
float var_c0 = fconvert.s(x87_r4_5)
float var_d0 = fconvert.s(x87_r5_11)
float var_bc = fconvert.s(x87_r5_9 / (x87_r7_29 + x87_r7_29))
float var_b8 = fconvert.s(x87_r4_5)
float var_b4 = fconvert.s(x87_r4_5)
float var_b0 = fconvert.s(x87_r4_5)
float var_ac = fconvert.s(x87_r4_5)
float var_a8 = fconvert.s(float.t(1))
float* eax_5 = sub_4b65f0(eax_4, &var_44, &var_e4, var_110_2)
long double x87_r7_32 = float.t(1)
var_e4 = fconvert.s(x87_r7_32)
long double x87_r6_17 = float.t(0)
float var_e0_1 = fconvert.s(x87_r6_17)
float var_dc_1 = fconvert.s(x87_r6_17)
float var_d8_1 = fconvert.s(x87_r6_17)
__builtin_memcpy(arg1 + 0x15c, eax_5, 0x40)
float var_d4_1 = fconvert.s(x87_r6_17)
float var_cc_1 = fconvert.s(x87_r6_17)
float var_c8_1 = fconvert.s(x87_r6_17)
float var_c4_1 = fconvert.s(x87_r6_17)
float var_c0_1 = fconvert.s(x87_r6_17)
float var_b8_1 = fconvert.s(x87_r6_17)
float var_b4_1 = fconvert.s(x87_r6_17)
float var_b0_1 = fconvert.s(x87_r6_17)
float var_ac_1 = fconvert.s(x87_r6_17)
float var_d0_1 = fconvert.s(x87_r7_32)
float var_bc_1 = fconvert.s(x87_r7_32)
float var_a8_1 = fconvert.s(x87_r7_32)
__builtin_memcpy(arg1 + 0x19c, &var_e4, 0x40)
__builtin_memcpy(arg1 + 0x1dc, sub_4b65f0(eax_5, arg1 + 0x15c, arg1 + 0x19c, &var_84), 0x40)
float* result = sub_4b65f0(&var_84, arg1 + 0x1dc, arg1 + 0xd8, &var_84)
__builtin_memcpy(arg1 + 0x21c, result, 0x40)
return result
