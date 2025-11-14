// 函数: sub_4edb50
// 地址: 0x4edb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_108
int32_t eax_1 = data_78c474 ^ &var_108
long double x87_r7

if (arg3 s> 1)
    x87_r7 = float.t(arg2) / float.t(arg3 - 1)
else
    x87_r7 = float.t(0)

float var_f4_2 = fconvert.s(x87_r7)
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x38e38e39, *(arg1 + 0xd4) - *(arg1 + 0xd0))
int32_t edx_1 = edx s>> 3
int32_t var_104

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    var_104 = **(arg1 + 0xd0)
else
    var_104 = 0

int32_t ecx_4 = *(arg1 + 0xd4) - *(arg1 + 0xd0)
var_108 = fconvert.s(float.t(var_104))
int32_t var_104_1

if (ecx_4 s/ 0x24 s> 0)
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = muls.dp.d(0x38e38e39, *(arg1 + 0xd4) - *(arg1 + 0xd0))
    int32_t edx_6 = edx_5 s>> 3
    ecx_4 = ((edx_6 u>> 0x1f) + edx_6) * 9
    var_104_1 = *(*(arg1 + 0xd0) + (ecx_4 << 2) - 0x24)
else
    var_104_1 = 0

int32_t var_11c = ecx_4
long double x87_r6 = fconvert.t(var_108)
var_108 = fconvert.s((float.t(var_104_1) - x87_r6) * fconvert.t(var_f4_2) + x87_r6)
long double x87_r7_7 = fconvert.t(var_108)
*(arg1 + 0x228) = fconvert.s(x87_r7_7)
*(arg1 + 0x22c) = fconvert.s(float.t(*(arg1 + 0x38)) + x87_r7_7)
void var_f0
int32_t var_11c_2 = sub_4ba9e0(arg1 + 4, &var_f0, fconvert.s(x87_r7_7))
float var_48 = 0f
int32_t var_44
__builtin_memset(&var_44, 0, 0x3c)
float var_dc
sub_660260(&var_48, fconvert.s(fconvert.t(var_dc)))
float var_e0
float var_100 = fconvert.s(fconvert.t(var_e0))
long double x87_r7_10 = float.t(0)
float var_fc = fconvert.s(x87_r7_10)
float var_f8 = fconvert.s(x87_r7_10)
float var_d8
float* eax_18 = sub_51e1c0(&var_100, &var_d8, &var_48, &var_100)
*(arg1 + 0x21c) = *eax_18
int32_t ecx_10 = eax_18[1]
*(arg1 + 0x220) = ecx_10
int32_t eax_19 = *(arg1 + 0x2c)
*(arg1 + 0x224) = eax_18[2]
float* eax_22

if (eax_19 == 1)
    int32_t var_11c_7 = ecx_10
    var_108 = fconvert.s(fconvert.t(*(arg1 + 0x30)))
    int80_t st0_2
    st0_2, eax_22 = sub_4ef640(arg5, &var_100, fconvert.s(fconvert.t(var_108)))
label_4edd7c:
    *(arg1 + 0x21c) = fconvert.s(fconvert.t(*eax_22) + fconvert.t(*(arg1 + 0x21c)))
    *(arg1 + 0x220) = fconvert.s(fconvert.t(eax_22[1]) + fconvert.t(*(arg1 + 0x220)))
    *(arg1 + 0x224) = fconvert.s(fconvert.t(eax_22[2]) + fconvert.t(*(arg1 + 0x224)))
else if (eax_19 == 2)
    int32_t var_11c_5 = ecx_10
    var_108 = fconvert.s(fconvert.t(*(arg1 + 0x30)))
    int80_t st0_1
    st0_1, eax_22 = sub_4ef7a0(arg5, &var_d8, fconvert.s(fconvert.t(var_108)))
    goto label_4edd7c
float var_ec
var_100 = fconvert.s(fconvert.t(var_ec) + fconvert.t(*(arg1 + 0x21c)))
float var_e8
float var_fc_1 = fconvert.s(fconvert.t(*(arg1 + 0x220)) + fconvert.t(var_e8))
long double x87_r7_25 = fconvert.t(*(arg1 + 0x224))
*(arg1 + 0x210) = var_100
*(arg1 + 0x214) = var_fc_1
float var_e4
float var_f8_1 = fconvert.s(x87_r7_25 + fconvert.t(var_e4))
*(arg1 + 0x218) = var_f8_1
*(arg1 + 0x230) = fconvert.s(float.t(0))
int32_t eax_24 = *(arg4 + 0x50)
float* eax_26
float var_c0
float var_84
void var_78

if (eax_24 u> 5)
    eax_26 = sub_4ef550(arg5, arg4, &var_78)
else
    switch (eax_24)
        case 0
            eax_26 = sub_4ef550(arg5, arg4, &var_d8)
        case 1
            var_108 = fconvert.s(fconvert.t(*(arg1 + 0x64)))
            float var_120_3 = var_f8_1
            void var_60
            float var_54
            eax_26 = sub_4ef8b0(sub_51e2a0(arg1 + 0x58, &var_54), &var_60, 
                fconvert.s(fconvert.t(var_108)), arg5)
        case 2
            var_108 = fconvert.s(fconvert.t(*(arg1 + 0x64)))
            float var_120_5 = fconvert.s(fconvert.t(var_108))
            void var_b4
            sub_4baa00(&var_b4, arg1 + 4, fconvert.s(fconvert.t(*(arg1 + 0x228))))
            void var_cc
            eax_26 = sub_4ef8b0(&var_b4, &var_cc, var_120_5, arg5)
        case 3
            float var_11c_11 = var_f8_1
            var_108 = fconvert.s(fconvert.t(*(arg1 + 0x64)))
            float var_9c
            float* ecx_13 = sub_4baa00(&var_9c, arg1 + 4, fconvert.s(fconvert.t(*(arg1 + 0x228))))
            var_100 = fconvert.s(fneg(fconvert.t(var_9c)))
            float* var_120_7 = ecx_13
            float var_98
            float var_fc_2 = fconvert.s(fneg(fconvert.t(var_98)))
            float var_94
            float var_f8_2 = fconvert.s(fneg(fconvert.t(var_94)))
            void var_6c
            eax_26 = sub_4ef8b0(&var_100, &var_6c, fconvert.s(fconvert.t(var_108)), arg5)
        case 4
            float var_11c_15 = var_f8_1
            float* eax_32
            int32_t edx_13
            eax_32, edx_13 = sub_4bc8f0(arg1 + 0x110, *(arg1 + 0x28), &var_f0, 
                fconvert.s(fconvert.t(*(arg1 + 0x228))))
            sub_660a50(&var_48, edx_13, eax_32)
            var_108 = &var_48
            float var_a8
            float* eax_34
            int32_t ecx_17
            eax_34, ecx_17 = sub_51e2a0(arg1 + 0x58, &var_a8)
            float var_90
            eax_26 = sub_51e1c0(ecx_17, &var_90, var_108, eax_34)
        case 5
            eax_26 = sub_4ef980(sub_51e2a0(arg1 + 0x58, &var_84), &var_c0)
float ecx_18 = *eax_26
*(arg1 + 0x234) = ecx_18
*(arg1 + 0x238) = eax_26[1]
*(arg1 + 0x23c) = eax_26[2]
*arg5 += 1

if (*arg5 s>= 0x209)
    sub_595240(ecx_18, arg5)
    *arg5 = 0

int32_t ecx_19 = *arg5
long double x87_r7_43 = float.t(arg5[ecx_19 + 1])

if (arg5[ecx_19 + 1] s< 0)
    x87_r7_43 = x87_r7_43 + fconvert.t(4294967296.0)

*(arg1 + 0x240) = fconvert.s(x87_r7_43 / fconvert.t(4294967295.0))
sub_6b4885(eax_1 ^ &var_108)
