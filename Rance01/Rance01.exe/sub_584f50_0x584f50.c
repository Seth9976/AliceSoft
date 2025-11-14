// 函数: sub_584f50
// 地址: 0x584f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_b0
int32_t eax_1 = data_78c474 ^ &var_b0
int32_t i = arg14

while (i != 0)
    var_b0 = sub_6b5a79() & 0x7f
    float var_a8_1 =
        fconvert.s((float.t(var_b0) - fconvert.t(64.0)) / fconvert.t(255.0) + fconvert.t(0.5))
    var_b0 = sub_6b5a79() & 0x7f
    float var_ac_1 =
        fconvert.s((float.t(var_b0) - fconvert.t(64.0)) / fconvert.t(255.0) + fconvert.t(0.5))
    var_b0 = sub_6b5a79() & 0x7f
    float var_a4_1 =
        fconvert.s((float.t(var_b0) - fconvert.t(64.0)) / fconvert.t(255.0) + fconvert.t(0.5))
    long double x87_r7_13 = fconvert.t(arg6)
    long double x87_r5_1 = fconvert.t(arg2)
    long double x87_r4_2 = fconvert.t(var_a8_1)
    var_b0 = fconvert.s((x87_r7_13 - x87_r5_1) * x87_r4_2 + x87_r5_1)
    long double x87_r4_4 = fconvert.t(arg7)
    long double x87_r2_1 = fconvert.t(arg3)
    float var_a8_2 = fconvert.s((x87_r4_4 - x87_r2_1) * x87_r4_2 + x87_r2_1)
    long double x87_r3_7 = fconvert.t(arg8)
    long double x87_r1_3 = fconvert.t(arg4)
    float var_98_1 = fconvert.s((x87_r3_7 - x87_r1_3) * x87_r4_2 + x87_r1_3)
    long double x87_r2_6 = fconvert.t(arg9)
    float var_9c_1 = fconvert.s(x87_r4_2 * (x87_r2_6 - fconvert.t(arg5)) + fconvert.t(arg5))
    long double x87_r2_8 = fconvert.t(arg10)
    float var_84_1 = fconvert.s(x87_r7_13 + (x87_r2_8 - x87_r7_13) * fconvert.t(var_ac_1))
    long double x87_r2_10 = fconvert.t(arg11)
    float var_a0_1 = fconvert.s(x87_r4_4 + (x87_r2_10 - x87_r4_4) * fconvert.t(var_ac_1))
    long double x87_r2_12 = fconvert.t(arg12)
    i -= 1
    float var_8c_1 = fconvert.s(x87_r3_7 + (x87_r2_12 - x87_r3_7) * fconvert.t(var_ac_1))
    long double x87_r2_14 = fconvert.t(arg13)
    float var_88_1 = fconvert.s(x87_r2_6 + (x87_r2_14 - x87_r2_6) * fconvert.t(var_ac_1))
    long double x87_r1_19 = fconvert.t(var_a4_1)
    float var_a4_2 = fconvert.s(x87_r2_8 + (x87_r5_1 - x87_r2_8) * x87_r1_19)
    long double x87_r2_21 = fconvert.t(arg3)
    float var_94_1 = fconvert.s(x87_r2_10 + (x87_r2_21 - x87_r2_10) * x87_r1_19)
    long double x87_r2_23 = fconvert.t(arg4)
    float var_90_1 = fconvert.s(x87_r2_12 + (x87_r2_23 - x87_r2_12) * x87_r1_19)
    long double x87_r2_25 = fconvert.t(arg5)
    float var_ac_2 = fconvert.s(x87_r2_14 + x87_r1_19 * (x87_r2_25 - x87_r2_14))
    sub_584f50(arg1, fconvert.s(x87_r5_1), fconvert.s(x87_r2_21), fconvert.s(x87_r2_23), 
        fconvert.s(x87_r2_25), fconvert.s(fconvert.t(var_b0)), fconvert.s(fconvert.t(var_a8_2)), 
        fconvert.s(fconvert.t(var_98_1)), fconvert.s(fconvert.t(var_9c_1)), 
        fconvert.s(fconvert.t(var_a4_2)), fconvert.s(fconvert.t(var_94_1)), 
        fconvert.s(fconvert.t(var_90_1)), fconvert.s(fconvert.t(var_ac_2)), i)
    sub_584f50(arg1, fconvert.s(fconvert.t(var_b0)), fconvert.s(fconvert.t(var_a8_2)), 
        fconvert.s(fconvert.t(var_98_1)), fconvert.s(fconvert.t(var_9c_1)), 
        fconvert.s(fconvert.t(arg6)), fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg8)), 
        fconvert.s(fconvert.t(arg9)), fconvert.s(fconvert.t(var_84_1)), 
        fconvert.s(fconvert.t(var_a0_1)), fconvert.s(fconvert.t(var_8c_1)), 
        fconvert.s(fconvert.t(var_88_1)), i)
    sub_584f50(arg1, fconvert.s(fconvert.t(var_84_1)), fconvert.s(fconvert.t(var_a0_1)), 
        fconvert.s(fconvert.t(var_8c_1)), fconvert.s(fconvert.t(var_88_1)), 
        fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg11)), 
        fconvert.s(fconvert.t(arg12)), fconvert.s(fconvert.t(arg13)), 
        fconvert.s(fconvert.t(var_a4_2)), fconvert.s(fconvert.t(var_94_1)), 
        fconvert.s(fconvert.t(var_90_1)), fconvert.s(fconvert.t(var_ac_2)), i)
    arg13 = fconvert.s(fconvert.t(var_ac_2))
    arg12 = fconvert.s(fconvert.t(var_90_1))
    arg11 = fconvert.s(fconvert.t(var_94_1))
    arg10 = fconvert.s(fconvert.t(var_a4_2))
    arg9 = fconvert.s(fconvert.t(var_88_1))
    arg8 = fconvert.s(fconvert.t(var_8c_1))
    arg7 = fconvert.s(fconvert.t(var_a0_1))
    arg6 = fconvert.s(fconvert.t(var_84_1))
    arg5 = fconvert.s(fconvert.t(var_9c_1))
    arg4 = fconvert.s(fconvert.t(var_98_1))
    arg3 = fconvert.s(fconvert.t(var_a8_2))
    arg2 = fconvert.s(fconvert.t(var_b0))

long double x87_r6_15 = fconvert.t(0.3333333432674408)
var_b0 = fconvert.s((fconvert.t(arg2) + fconvert.t(arg6) + fconvert.t(arg10)) * x87_r6_15)
float var_a8_3 = fconvert.s(x87_r6_15 * (fconvert.t(arg3) + fconvert.t(arg7) + fconvert.t(arg11)))
float var_80
sub_57af30(&var_80)
int32_t var_10 = 0
long double x87_r6_20 = fconvert.t(var_b0)
float var_70 = fconvert.s(fconvert.t(arg2) - x87_r6_20)
long double x87_r5_4 = fconvert.t(var_a8_3)
float var_6c = fconvert.s(fconvert.t(arg3) - x87_r5_4)
long double x87_r5_6 = float.t(0)
float var_68 = fconvert.s(x87_r5_6)
float var_58 = fconvert.s(fconvert.t(arg4))
float var_54 = fconvert.s(fconvert.t(arg5))
float var_50 = fconvert.s(fconvert.t(arg6) - x87_r6_20)
float var_4c = fconvert.s(fconvert.t(arg7) - x87_r5_4)
float var_48 = fconvert.s(x87_r5_6)
float var_38 = fconvert.s(fconvert.t(arg8))
float var_34 = fconvert.s(fconvert.t(arg9))
float var_30 = fconvert.s(fconvert.t(arg10) - x87_r6_20)
float var_2c = fconvert.s(fconvert.t(arg11) - x87_r5_4)
float var_28 = fconvert.s(x87_r5_6)
float var_18 = fconvert.s(fconvert.t(arg12))
float var_14 = fconvert.s(fconvert.t(arg13))
var_80 = fconvert.s(x87_r6_20)
float var_7c = fconvert.s(x87_r5_4)
float var_78 = fconvert.s(x87_r5_6)
int32_t var_c = (0xb4 - mods.dp.d(sx.q(sub_6b5a79()), 0x168)) * 4
int32_t var_8 = (0xb4 - mods.dp.d(sx.q(sub_6b5a79()), 0x168)) * 4
int32_t var_74 = 0xfffffc18 - mods.dp.d(sx.q(sub_6b5a79()), 0x7d0)
int32_t result = sub_5854b0(&var_80, arg1)
sub_6b4885(eax_1 ^ &var_b0)
return result
