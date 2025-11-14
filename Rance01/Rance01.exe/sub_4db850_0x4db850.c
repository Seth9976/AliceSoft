// 函数: sub_4db850
// 地址: 0x4db850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_16c
int32_t eax_1 = data_78c474 ^ &var_16c
long double x87_r6 = fconvert.t(arg8)
float var_140 = fconvert.s(fneg(fconvert.t(arg10)) * x87_r6)
int32_t ecx
int32_t var_17c = ecx
long double x87_r5_1 = fconvert.t(arg9)
float var_78 = 0f
int32_t var_74
__builtin_memset(&var_74, 0, 0x3c)
float var_150 = fconvert.s(fneg(fconvert.t(arg11)) * x87_r5_1)
long double x87_r5_3 = fconvert.t(var_140)
long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_3 - x87_r6))
float var_34 = fconvert.s(x87_r4_3)
long double x87_r3 = fconvert.t(var_150)
long double x87_r2_2 = fconvert.t(fconvert.s(x87_r3 + x87_r5_1))
float var_30 = fconvert.s(x87_r2_2)
long double x87_r1 = float.t(0)
float var_2c = fconvert.s(x87_r1)
long double x87_r2_4 = fconvert.t(fconvert.s(x87_r6 + x87_r5_3))
float var_28 = fconvert.s(x87_r2_4)
float var_24 = fconvert.s(x87_r2_2)
float var_20 = fconvert.s(x87_r1)
float var_1c = fconvert.s(x87_r4_3)
long double x87_r5_8 = fconvert.t(fconvert.s(x87_r3 - x87_r5_1))
float var_18 = fconvert.s(x87_r5_8)
float var_c = fconvert.s(x87_r5_8)
float var_14 = fconvert.s(x87_r1)
float var_8 = fconvert.s(x87_r1)
float var_10 = fconvert.s(x87_r2_4)
int32_t ecx_1 = sub_660260(&var_78, fconvert.s(fconvert.t(arg13)))
float var_b8 = 0f
int32_t var_17c_2 = ecx_1
int32_t var_b4
__builtin_memset(&var_b4, 0, 0x3c)
int32_t var_17c_4 = sub_529c30(&var_b8, fconvert.s(fconvert.t(arg12)))
float var_f8 = 0f
int32_t var_f4
__builtin_memset(&var_f4, 0, 0x3c)
float var_138[0x10]
float* eax_4 =
    sub_4b65f0(sub_6602e0(&var_f8, fconvert.s(fconvert.t(arg14))), &var_f8, &var_b8, &var_138)
sub_4b65f0(eax_4, eax_4, &var_78, &var_f8)
float* ecx_5 = &var_34
int32_t i_2 = 4
int32_t i

do
    sub_51e0e0(&var_f8, i_2, ecx_5)
    ecx_5 = &ecx_5[3]
    i = i_2
    i_2 -= 1
while (i != 1)

if (arg5 != i_2.b)
    long double x87_r6_8 = fconvert.t(var_30)
    float var_148_1 = fconvert.s(x87_r6_8 * fconvert.t(arg6[1]))
    float var_144_1 = fconvert.s(x87_r6_8 * fconvert.t(arg6[2]))
    long double x87_r6_12 = fconvert.t(var_34)
    float var_154_1 = fconvert.s(x87_r6_12 * fconvert.t(arg7[2]))
    long double x87_r7_20 = fconvert.t(fconvert.s(x87_r6_12 * fconvert.t(arg7[1])))
    var_34 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg7) * x87_r6_12))
        + fconvert.t(fconvert.s(fconvert.t(*arg6) * x87_r6_8)))
    var_30 = fconvert.s(x87_r7_20 + fconvert.t(var_148_1))
    var_2c = fconvert.s(fconvert.t(var_154_1) + fconvert.t(var_144_1))
    long double x87_r6_16 = fconvert.t(var_24)
    long double x87_r6_20 = fconvert.t(var_28)
    var_28 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg7) * x87_r6_20))
        + fconvert.t(fconvert.s(fconvert.t(*arg6) * x87_r6_16)))
    var_24 = fconvert.s(fconvert.t(fconvert.s(x87_r6_20 * fconvert.t(arg7[1])))
        + fconvert.t(fconvert.s(x87_r6_16 * fconvert.t(arg6[1]))))
    long double x87_r7_38 = fconvert.t(var_18)
    var_20 = fconvert.s(fconvert.t(fconvert.s(x87_r6_20 * fconvert.t(arg7[2])))
        + fconvert.t(fconvert.s(x87_r6_16 * fconvert.t(arg6[2]))))
    long double x87_r7_40 = fconvert.t(var_1c)
    var_1c = fconvert.s(fconvert.t(fconvert.s(x87_r7_40 * fconvert.t(*arg7)))
        + fconvert.t(fconvert.s(x87_r7_38 * fconvert.t(*arg6))))
    var_18 = fconvert.s(fconvert.t(fconvert.s(x87_r7_40 * fconvert.t(arg7[1])))
        + fconvert.t(fconvert.s(x87_r7_38 * fconvert.t(arg6[1]))))
    long double x87_r7_48 = fconvert.t(var_c)
    var_14 = fconvert.s(fconvert.t(fconvert.s(x87_r7_40 * fconvert.t(arg7[2])))
        + fconvert.t(fconvert.s(x87_r7_38 * fconvert.t(arg6[2]))))
    long double x87_r7_50 = fconvert.t(var_10)
    var_10 = fconvert.s(fconvert.t(fconvert.s(x87_r7_50 * fconvert.t(*arg7)))
        + fconvert.t(fconvert.s(x87_r7_48 * fconvert.t(*arg6))))
    var_c = fconvert.s(fconvert.t(fconvert.s(x87_r7_50 * fconvert.t(arg7[1])))
        + fconvert.t(fconvert.s(x87_r7_48 * fconvert.t(arg6[1]))))
    var_8 = fconvert.s(fconvert.t(fconvert.s(x87_r7_50 * fconvert.t(arg7[2])))
        + fconvert.t(fconvert.s(x87_r7_48 * fconvert.t(arg6[2]))))
else
    float* ecx_6 = &var_34
    int32_t i_3 = 4
    int32_t i_1
    
    do
        sub_51e0e0(arg4, i_3, ecx_6)
        ecx_6 = &ecx_6[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

var_34 = fconvert.s(fconvert.t(var_34) + fconvert.t(*arg3))
float var_30_1 = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(var_30))
float var_2c_1 = fconvert.s(fconvert.t(var_2c) + fconvert.t(arg3[2]))
float var_28_1 = fconvert.s(fconvert.t(var_28) + fconvert.t(*arg3))
float var_24_1 = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(var_24))
float var_20_1 = fconvert.s(fconvert.t(var_20) + fconvert.t(arg3[2]))
float var_1c_1 = fconvert.s(fconvert.t(var_1c) + fconvert.t(*arg3))
float var_18_1 = fconvert.s(fconvert.t(var_18) + fconvert.t(arg3[1]))
float var_14_1 = fconvert.s(fconvert.t(var_14) + fconvert.t(arg3[2]))
float var_10_1 = fconvert.s(fconvert.t(var_10) + fconvert.t(*arg3))
float var_c_1 = fconvert.s(fconvert.t(var_c) + fconvert.t(arg3[1]))
float var_8_1 = fconvert.s(fconvert.t(var_8) + fconvert.t(arg3[2]))
int32_t eax_12 = sub_70c710(fconvert.t(arg15) * fconvert.t(255.0))

if (eax_12 s< 0)
    eax_12 = 0
else if (eax_12 s> 0xff)
    eax_12 = 0xff

int32_t ecx_11

if (arg16 == 0)
    ecx_11 = ((eax_12 << 8 | eax_12) << 8 | eax_12) << 8 | eax_12
else
    ecx_11 = eax_12 << 0x18 | 0xffffff

float* result = *(arg2 + 0xc)
*result = fconvert.s(fconvert.t(var_34))
result[1] = fconvert.s(fconvert.t(var_30_1))
result[2] = fconvert.s(fconvert.t(var_2c_1))
result[3] = fconvert.s(fconvert.t(*arg1))
result[4] = fconvert.s(fconvert.t(arg1[1]))
result[5] = fconvert.s(fconvert.t(arg1[2]))
result[6] = ecx_11
long double x87_r7_90 = float.t(0)
result[7] = fconvert.s(x87_r7_90)
result[8] = fconvert.s(x87_r7_90)
long double x87_r6_40 = fconvert.t(var_28_1)
result[9] = fconvert.s(x87_r6_40)
long double x87_r5_13 = fconvert.t(var_24_1)
result[0xa] = fconvert.s(x87_r5_13)
long double x87_r4_6 = fconvert.t(var_20_1)
result[0xb] = fconvert.s(x87_r4_6)
result[0xc] = fconvert.s(fconvert.t(*arg1))
result[0xd] = fconvert.s(fconvert.t(arg1[1]))
result[0xe] = fconvert.s(fconvert.t(arg1[2]))
long double x87_r3_6 = float.t(1)
result[0xf] = ecx_11
result[0x10] = fconvert.s(x87_r3_6)
result[0x11] = fconvert.s(x87_r7_90)
long double x87_r2_6 = fconvert.t(var_1c_1)
result[0x12] = fconvert.s(x87_r2_6)
long double x87_r1_2 = fconvert.t(var_18_1)
result[0x13] = fconvert.s(x87_r1_2)
result[0x14] = fconvert.s(fconvert.t(var_14_1))
result[0x15] = fconvert.s(fconvert.t(*arg1))
result[0x16] = fconvert.s(fconvert.t(arg1[1]))
result[0x17] = fconvert.s(fconvert.t(arg1[2]))
result[0x18] = ecx_11
result[0x19] = fconvert.s(x87_r7_90)
result[0x1a] = fconvert.s(x87_r3_6)
result[0x1b] = fconvert.s(x87_r6_40)
result[0x1c] = fconvert.s(x87_r5_13)
result[0x1d] = fconvert.s(x87_r4_6)
result[0x1e] = fconvert.s(fconvert.t(*arg1))
result[0x1f] = fconvert.s(fconvert.t(arg1[1]))
result[0x20] = fconvert.s(fconvert.t(arg1[2]))
result[0x21] = ecx_11
result[0x22] = fconvert.s(x87_r3_6)
result[0x23] = fconvert.s(x87_r7_90)
result[0x24] = fconvert.s(fconvert.t(var_10_1))
result[0x25] = fconvert.s(fconvert.t(var_c_1))
result[0x26] = fconvert.s(fconvert.t(var_8_1))
result[0x27] = fconvert.s(fconvert.t(*arg1))
result[0x28] = fconvert.s(fconvert.t(arg1[1]))
result[0x29] = fconvert.s(fconvert.t(arg1[2]))
result[0x2a] = ecx_11
result[0x2b] = fconvert.s(x87_r3_6)
result[0x2c] = fconvert.s(x87_r3_6)
result[0x2d] = fconvert.s(x87_r2_6)
result[0x2e] = fconvert.s(x87_r1_2)
result[0x2f] = fconvert.s(fconvert.t(var_14_1))
result[0x30] = fconvert.s(fconvert.t(*arg1))
result[0x31] = fconvert.s(fconvert.t(arg1[1]))
result[0x32] = fconvert.s(fconvert.t(arg1[2]))
result[0x33] = ecx_11
result[0x34] = fconvert.s(x87_r7_90)
result[0x35] = fconvert.s(x87_r3_6)
sub_6b4885(eax_1 ^ &var_16c)
return result
