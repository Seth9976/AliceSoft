// 函数: sub_51bfa0
// 地址: 0x51bfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7129a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t __saved_edi
int32_t var_b8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_74 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
sub_51c5e0(arg1)
float var_54
int32_t var_bc_1 = sub_4b6990(&var_54, arg2)
sub_51a3f0(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x50)) * fconvert.t(0.5)
    * fconvert.t(3.1415927410125732) / fconvert.t(180.0)))))
long double x87_r6 = float.t(1)
float var_60 = fconvert.s(x87_r6 / x87_r6)
float var_74_2 = fconvert.s(float.t(*(arg3 + 0x40)) / float.t(*(arg3 + 0x44)))
float var_a0 = fconvert.s(fconvert.t(var_60))
float var_9c = fconvert.s(float.t(0))
float var_98 = fconvert.s(float.t(1))
float var_84
float* eax_6 = sub_51e2a0(&var_a0, &var_84)
float var_50
float var_40
float var_30
float var_8c = fconvert.s(fconvert.t(var_50) * fconvert.t(*eax_6)
    + fconvert.t(var_40) * fconvert.t(eax_6[1]) + fconvert.t(var_30) * fconvert.t(eax_6[2]))
float var_4c
float var_3c
float var_2c
float var_88 = fconvert.s(fconvert.t(var_4c) * fconvert.t(*eax_6)
    + fconvert.t(var_3c) * fconvert.t(eax_6[1]) + fconvert.t(var_2c) * fconvert.t(eax_6[2]))
float var_44
float var_34
long double x87_r7_24 = fconvert.t(fconvert.s(fconvert.t(var_44) * fconvert.t(eax_6[1])
    + fconvert.t(*eax_6) * fconvert.t(var_54) + fconvert.t(var_34) * fconvert.t(eax_6[2])))
var_a0 = fconvert.s(x87_r7_24)
long double x87_r6_13 = fconvert.t(var_8c)
float var_9c_1 = fconvert.s(x87_r6_13)
long double x87_r5 = fconvert.t(var_88)
float var_98_1 = fconvert.s(x87_r5)
long double x87_r6_15 = fneg(x87_r7_24) * fconvert.t(*arg2) - x87_r6_13 * fconvert.t(arg2[1])
int32_t* eax_7 = *arg1
long double x87_r7_26 = x87_r5 * fconvert.t(arg2[2])
*eax_7 = var_a0
eax_7[1] = var_9c_1
eax_7[2] = var_98_1
float var_58 = fconvert.s(fneg(fconvert.t(var_60)))
eax_7[3] = fconvert.s(x87_r6_15 - x87_r7_26)
var_a0 = fconvert.s(fconvert.t(var_58))
float var_9c_2 = fconvert.s(float.t(0))
float var_98_2 = fconvert.s(float.t(1))
float* eax_8 = sub_51e2a0(&var_a0, &var_84)
float var_8c_1 = fconvert.s(fconvert.t(var_50) * fconvert.t(*eax_8)
    + fconvert.t(var_40) * fconvert.t(eax_8[1]) + fconvert.t(eax_8[2]) * fconvert.t(var_30))
void* eax_9 = *arg1
float var_88_1 = fconvert.s(fconvert.t(var_4c) * fconvert.t(*eax_8)
    + fconvert.t(var_3c) * fconvert.t(eax_8[1]) + fconvert.t(eax_8[2]) * fconvert.t(var_2c))
long double x87_r7_45 = fconvert.t(fconvert.s(fconvert.t(var_44) * fconvert.t(eax_8[1])
    + fconvert.t(var_54) * fconvert.t(*eax_8) + fconvert.t(eax_8[2]) * fconvert.t(var_34)))
var_a0 = fconvert.s(x87_r7_45)
long double x87_r6_28 = fconvert.t(var_8c_1)
float var_9c_3 = fconvert.s(x87_r6_28)
long double x87_r5_5 = fconvert.t(var_88_1)
float var_98_3 = fconvert.s(x87_r5_5)
long double x87_r6_30 = fneg(x87_r7_45) * fconvert.t(*arg2) - x87_r6_28 * fconvert.t(arg2[1])
long double x87_r5_9 = fconvert.t(arg2[2])
*(eax_9 + 0x10) = var_a0
*(eax_9 + 0x14) = var_9c_3
*(eax_9 + 0x18) = var_98_3
*(eax_9 + 0x1c) = fconvert.s(x87_r6_30 - x87_r5_5 * x87_r5_9)
var_a0 = fconvert.s(float.t(0))
float var_9c_4 = fconvert.s(fconvert.t(var_58) * fconvert.t(var_74_2))
float var_98_4 = fconvert.s(float.t(1))
float* eax_10 = sub_51e2a0(&var_a0, &var_84)
float var_8c_2 = fconvert.s(fconvert.t(*eax_10) * fconvert.t(var_50)
    + fconvert.t(eax_10[1]) * fconvert.t(var_40) + fconvert.t(var_30) * fconvert.t(eax_10[2]))
void* eax_11 = *arg1
float var_88_2 = fconvert.s(fconvert.t(*eax_10) * fconvert.t(var_4c)
    + fconvert.t(eax_10[1]) * fconvert.t(var_3c) + fconvert.t(var_2c) * fconvert.t(eax_10[2]))
long double x87_r7_65 = fconvert.t(fconvert.s(fconvert.t(*eax_10) * fconvert.t(var_54)
    + fconvert.t(eax_10[1]) * fconvert.t(var_44) + fconvert.t(var_34) * fconvert.t(eax_10[2])))
var_a0 = fconvert.s(x87_r7_65)
long double x87_r6_43 = fconvert.t(var_8c_2)
float var_9c_5 = fconvert.s(x87_r6_43)
long double x87_r5_10 = fconvert.t(var_88_2)
float var_98_5 = fconvert.s(x87_r5_10)
long double x87_r6_45 = fneg(x87_r7_65) * fconvert.t(*arg2) - x87_r6_43 * fconvert.t(arg2[1])
long double x87_r5_14 = fconvert.t(arg2[2])
*(eax_11 + 0x20) = var_a0
*(eax_11 + 0x24) = var_9c_5
*(eax_11 + 0x28) = var_98_5
*(eax_11 + 0x2c) = fconvert.s(x87_r6_45 - x87_r5_10 * x87_r5_14)
var_a0 = fconvert.s(float.t(0))
float var_9c_6 = fconvert.s(fconvert.t(var_74_2) * fconvert.t(var_60))
float var_98_6 = fconvert.s(float.t(1))
float* eax_12 = sub_51e2a0(&var_a0, &var_84)
long double x87_r6_46 = fconvert.t(var_44)
long double x87_r4_3 = fconvert.t(var_54)
long double x87_r4_5 = fconvert.t(var_34)
long double x87_r3_5 = fconvert.t(var_30)
float var_70 = fconvert.s(fconvert.t(*eax_12) * fconvert.t(var_50)
    + fconvert.t(eax_12[1]) * fconvert.t(var_40) + x87_r3_5 * fconvert.t(eax_12[2]))
long double x87_r2_4 = fconvert.t(var_2c)
void* eax_13 = *arg1
float var_6c = fconvert.s(fconvert.t(*eax_12) * fconvert.t(var_4c)
    + fconvert.t(eax_12[1]) * fconvert.t(var_3c) + x87_r2_4 * fconvert.t(eax_12[2]))
long double x87_r2_6 = fconvert.t(fconvert.s(fconvert.t(*eax_12) * x87_r4_3
    + fconvert.t(eax_12[1]) * x87_r6_46 + x87_r4_5 * fconvert.t(eax_12[2])))
var_a0 = fconvert.s(x87_r2_6)
long double x87_r1_2 = fconvert.t(var_70)
float var_9c_7 = fconvert.s(x87_r1_2)
float var_98_7 = fconvert.s(fconvert.t(var_6c))
long double x87_r2_9 = fneg(x87_r2_6) * fconvert.t(*arg2) - x87_r1_2 * fconvert.t(arg2[1])
long double x87_r1_7 = fconvert.t(var_6c) * fconvert.t(arg2[2])
*(eax_13 + 0x30) = var_a0
*(eax_13 + 0x34) = var_9c_7
*(eax_13 + 0x38) = var_98_7
long double x87_r2_11 = float.t(0)
*(eax_13 + 0x3c) = fconvert.s(x87_r2_9 - x87_r1_7)
long double x87_r7_77 = x87_r4_3 * x87_r2_11 + x87_r6_46 * x87_r2_11
float var_90_3 = fconvert.s(x87_r4_5 + x87_r7_77)
long double x87_r2_17 = fconvert.t(var_50) * x87_r2_11 + fconvert.t(var_40) * x87_r2_11
float var_8c_3 = fconvert.s(x87_r3_5 + x87_r2_17)
long double x87_r6_50 = x87_r2_11 * fconvert.t(var_3c) + fconvert.t(var_4c) * x87_r2_11
float var_74_3
var_74_3.q = fconvert.d(x87_r6_50)
float var_88_3 = fconvert.s(x87_r6_50 + x87_r2_4)
long double x87_r2_21 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x48))))
void* eax_14 = *arg1
var_84 = fconvert.s(x87_r2_21 * x87_r4_5 + x87_r7_77)
float var_80 = fconvert.s(x87_r2_21 * x87_r3_5 + x87_r2_17)
float var_7c = fconvert.s(x87_r2_21 * x87_r2_4 + fconvert.t(var_74_3.q))
var_a0 = fconvert.s(fconvert.t(*arg2) + fconvert.t(var_84))
float var_9c_8 = fconvert.s(fconvert.t(var_80) + fconvert.t(arg2[1]))
float var_98_9 = fconvert.s(fconvert.t(var_7c) + fconvert.t(arg2[2]))
long double x87_r2_30 = fconvert.t(var_90_3)
var_84 = fconvert.s(x87_r2_30)
long double x87_r1_20 = fconvert.t(var_8c_3)
*(eax_14 + 0x40) = var_84
*(eax_14 + 0x44) = fconvert.s(x87_r1_20)
*(eax_14 + 0x48) = fconvert.s(fconvert.t(var_88_3))
*(eax_14 + 0x4c) = fconvert.s(fneg(x87_r2_30) * fconvert.t(var_a0)
    - x87_r1_20 * fconvert.t(var_9c_8) - fconvert.t(var_98_9) * fconvert.t(var_88_3))
long double x87_r1_26 = float.t(1)
var_84 = fconvert.s(x87_r7_77 - x87_r4_5 * x87_r1_26)
float var_80_2 = fconvert.s(x87_r2_17 - x87_r3_5 * x87_r1_26)
long double x87_r1_31 = fconvert.t(var_74_3.q)
float var_7c_2 = fconvert.s(x87_r1_31 - x87_r1_26 * x87_r2_4)
long double x87_r1_34 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x4c))))
var_a0 = fconvert.s(x87_r7_77 + x87_r4_5 * x87_r1_34)
float var_90_4 = fconvert.s(fconvert.t(*arg2) + fconvert.t(var_a0))
void* eax_15 = *arg1
float var_8c_4 =
    fconvert.s(fconvert.t(fconvert.s(x87_r2_17 + x87_r3_5 * x87_r1_34)) + fconvert.t(arg2[1]))
float var_88_4 =
    fconvert.s(fconvert.t(fconvert.s(x87_r1_31 + x87_r2_4 * x87_r1_34)) + fconvert.t(arg2[2]))
long double x87_r7_87 = fconvert.t(var_84)
var_a0 = fconvert.s(x87_r7_87)
long double x87_r6_55 = fconvert.t(var_80_2)
*(eax_15 + 0x50) = var_a0
long double x87_r5_23 = fconvert.t(var_7c_2)
*(eax_15 + 0x54) = fconvert.s(x87_r6_55)
*(eax_15 + 0x58) = fconvert.s(x87_r5_23)
*(eax_15 + 0x5c) = fconvert.s(fneg(x87_r7_87) * fconvert.t(var_90_4)
    - x87_r6_55 * fconvert.t(var_8c_4) - x87_r5_23 * fconvert.t(var_88_4))
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return arg1
