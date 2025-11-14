// 函数: sub_515f20
// 地址: 0x515f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712b2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1d4
int32_t eax_2 = data_78c474 ^ &var_1d4
int32_t __saved_edi
int32_t var_1e8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_1b4 = fconvert.s(fconvert.t(arg3))
float var_198
sub_51e2a0(arg1 + 0x118, &var_198)
float var_1c0
sub_51e2a0(arg1 + 0x28, &var_1c0)
float var_1bc
long double x87_r7_1 = fconvert.t(var_1bc)
float var_190
long double x87_r5 = fconvert.t(var_190)
float var_1b8
long double x87_r4_1 = fconvert.t(var_1b8)
float var_194
long double x87_r2 = fconvert.t(var_194)
long double x87_r3_3 = fconvert.t(var_198)
long double x87_r1_1 = fconvert.t(var_1c0)
long double x87_r3_5 = fconvert.t(fconvert.s(x87_r1_1 * x87_r2 - x87_r7_1 * x87_r3_3))
long double x87_r1_3 = fconvert.t(fconvert.s(x87_r4_1 * x87_r3_3 - x87_r5 * x87_r1_1))
long double x87_r2_12 = fconvert.t(fconvert.s(x87_r7_1 * x87_r5 - x87_r4_1 * x87_r2))
float var_1c4_1 = fconvert.s(x87_r5 * x87_r2_12 - x87_r3_5 * x87_r3_3)
float var_1cc_1 = fconvert.s(x87_r3_3 * x87_r1_3 - x87_r2 * x87_r2_12)
var_1c0 = fconvert.s(fconvert.t(fconvert.s(x87_r2 * x87_r3_5 - x87_r5 * x87_r1_3)))
float var_1bc_1 = fconvert.s(fconvert.t(var_1c4_1))
float var_1b8_1 = fconvert.s(fconvert.t(var_1cc_1))
float var_130
float* ecx
float* edx
ecx, edx = sub_51e2a0(&var_1c0, &var_130)
float var_1c4_2 = fconvert.s(fconvert.t(*(arg1 + 0x20)) + fconvert.t(var_194))
float var_1cc_2 = fconvert.s(fconvert.t(*(arg1 + 0x24)) + fconvert.t(var_190))
float* var_1ec = &var_130
var_1c0 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x1c)) + fconvert.t(var_198))))
void* var_1f0 = arg1 + 0x1c
float var_1bc_2 = fconvert.s(fconvert.t(var_1c4_2))
float var_1b8_2 = fconvert.s(fconvert.t(var_1cc_2))
float var_114[0x10]
sub_529a90(&var_1c0, edx, &var_114, ecx)
float var_124
sub_516590(&var_124, fconvert.s(fconvert.t(arg2)), fconvert.s(fconvert.t(var_1b4)))
int32_t var_4 = 0
float* result_2 = nullptr
int32_t var_180 = 0
int32_t var_17c = 0
int32_t edx_1 = sub_4addb0(8, &result_2)
float* result_3 = result_2
void* edi_4 = var_124 i- result_3
int32_t i_2 = 8
float var_1b0
float var_174
float var_d4
float var_94[0x10]
float var_54[0x10]
int32_t i

do
    sub_6603e0(&var_54, edx_1, arg1 + 0x34)
    float* eax_9 = &var_d4
    sub_6603e0(eax_9, &var_54, arg1 + 0x74)
    float* eax_10 = sub_4b65f0(eax_9, &var_d4, &var_54, &var_174)
    void* ecx_5 = edi_4 + result_3
    float* eax_12 =
        sub_51e1c0(ecx_5, &var_1b0, sub_4b65f0(eax_10, eax_10, &var_114, &var_94), ecx_5)
    *result_3 = *eax_12
    result_3[1] = eax_12[1]
    edx_1 = eax_12[2]
    result_3[2] = edx_1
    result_3 = &result_3[3]
    i = i_2
    i_2 -= 1
while (i != 1)
long double x87_r7_21 = fconvert.t(3.40282347e+38f)
var_1c0 = fconvert.s(x87_r7_21)
float var_1bc_3 = fconvert.s(x87_r7_21)
float var_1b8_3 = fconvert.s(x87_r7_21)
long double x87_r7_22 = fconvert.t(-3.40282347e+38f)
float var_1a4 = fconvert.s(x87_r7_22)
float var_1a0 = fconvert.s(x87_r7_22)
float var_19c = fconvert.s(x87_r7_22)
int32_t edx_7 = sub_515b70(&result_2, &var_1c0, &var_1a4)
float (* eax_13)[0x10] = &var_94
float (* ecx_8)[0x10] = &var_114
long double x87_r6_4 = fconvert.t(0.5)
var_1b0 = fconvert.s((fconvert.t(var_1a4) + fconvert.t(var_1c0)) * x87_r6_4)
float var_1a8 = fconvert.s(x87_r6_4 * (fconvert.t(var_19c) + fconvert.t(var_1b8_3)))
float var_1c4_3 = fconvert.s(fconvert.t(*(arg1 + 0x264)))
long double x87_r6_8 = fconvert.t(var_1bc_3)
long double x87_r5_4 = fconvert.t(var_1c4_3)
float var_18c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1a0) - x87_r6_8)) + x87_r5_4)
float var_1d0_4 = fconvert.s(fneg(x87_r5_4))
long double x87_r5_6 = float.t(0)
var_1a4 = fconvert.s(fconvert.t(var_1b0) + x87_r5_6)
float var_1a0_1 = fconvert.s(x87_r6_8 + fconvert.t(var_1d0_4))
float var_19c_1 = fconvert.s(x87_r5_6 + fconvert.t(var_1a8))
sub_6603e0(eax_13, edx_7, ecx_8)
float* edx_8 = &var_1c0
float* ecx_9 = sub_51e1c0(ecx_8, edx_8, eax_13, &var_1a4)
float* var_1ec_7 = &var_130
var_1b0 = fconvert.s(fconvert.t(var_1c0) + fconvert.t(var_198))
float* var_1f0_3 = &var_1c0
float var_1ac = fconvert.s(fconvert.t(var_1bc_3) + fconvert.t(var_194))
float var_1a8_1 = fconvert.s(fconvert.t(var_1b8_3) + fconvert.t(var_190))
float* edx_9 = sub_529a90(&var_1b0, edx_8, &var_114, ecx_9)
long double x87_r7_41 = float.t(0)
float ebp = var_124
float var_1b4_1 = fconvert.s(x87_r7_41)
float var_1cc_3 = fconvert.s(x87_r7_41)
float esi_4 = ebp
int32_t i_3 = 8
int32_t i_1

do
    sub_6603e0(&var_94, edx_9, arg1 + 0x34)
    float* eax_16 = &var_54
    sub_6603e0(eax_16, &var_94, arg1 + 0x74)
    float* eax_17 = sub_4b65f0(eax_16, &var_54, &var_94, &var_d4)
    float* ecx_13 = &var_114
    edx_9 = &var_1b0
    sub_51e1c0(ecx_13, edx_9, sub_4b65f0(eax_17, eax_17, ecx_13, &var_174), esi_4)
    long double x87_r6_18 = fconvert.t(var_1ac)
    long double x87_r7_49 = fconvert.t(var_1b4_1)
    long double x87_r6_23 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fabs(fconvert.t(fconvert.s(
        fconvert.t(var_1b0) / x87_r6_18)))))))
    x87_r6_23 - x87_r7_49
    
    if ((((x87_r6_23 < x87_r7_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_23, x87_r7_49) ? 1 : 0) << 0xa
            | (x87_r6_23 == x87_r7_49 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
        var_1b4_1 = fconvert.s(x87_r7_49)
    
    long double x87_r7_50 = fconvert.t(var_1cc_3)
    long double x87_r6_24 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fabs(fconvert.t(fconvert.s(
        fconvert.t(var_1a8_1) / x87_r6_18)))))))
    x87_r6_24 - x87_r7_50
    
    if ((((x87_r6_24 < x87_r7_50 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_24, x87_r7_50) ? 1 : 0) << 0xa
            | (x87_r6_24 == x87_r7_50 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
        var_1cc_3 = fconvert.s(x87_r7_50)
    
    esi_4 += 0xc
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
long double x87_r7_51 = float.t(1)
var_174 = fconvert.s(x87_r7_51)
long double x87_r6_25 = float.t(0)
float var_170 = fconvert.s(x87_r6_25)
float var_16c = fconvert.s(x87_r6_25)
float var_168 = fconvert.s(x87_r6_25)
float var_164 = fconvert.s(x87_r6_25)
float var_160 = fconvert.s(fconvert.t(2f))
float var_15c = fconvert.s(x87_r6_25)
float var_158 = fconvert.s(x87_r6_25)
float var_154 = fconvert.s(x87_r6_25)
float var_150 = fconvert.s(x87_r6_25)
long double x87_r5_11 = fconvert.t(0.5f)
float var_14c = fconvert.s(x87_r5_11)
float var_148 = fconvert.s(x87_r6_25)
float var_144 = fconvert.s(x87_r6_25)
float var_140 = fconvert.s(fconvert.t(-1f))
float var_13c = fconvert.s(x87_r5_11)
float var_138 = fconvert.s(x87_r7_51)
long double x87_r4_12 = float.t(1)
var_d4 = fconvert.s(x87_r4_12 / x87_r4_12)
float var_d0 = fconvert.s(x87_r6_25)
float var_cc = fconvert.s(x87_r6_25)
float var_c8 = fconvert.s(x87_r6_25)
float var_c4 = fconvert.s(x87_r6_25)
long double x87_r4_14 = fconvert.t(var_18c)
float var_c0 = fconvert.s(x87_r4_14 / (x87_r4_14 - fconvert.t(var_1c4_3)))
float var_bc = fconvert.s(x87_r6_25)
float var_b4 = fconvert.s(x87_r6_25)
float var_b0 = fconvert.s(x87_r6_25)
float var_b8 = fconvert.s(x87_r7_51)
float var_ac = fconvert.s(x87_r4_12 / fconvert.t(var_1cc_3))
float var_a8 = fconvert.s(x87_r6_25)
float var_a4 = fconvert.s(x87_r6_25)
long double x87_r7_56 = x87_r4_14 * fconvert.t(var_1d0_4)
float var_a0 = fconvert.s(x87_r7_56 / x87_r7_56)
float var_9c = fconvert.s(x87_r6_25)
float var_98 = fconvert.s(x87_r6_25)
float* eax_23 = sub_5155c0(arg1, &var_d4, 
    sub_4b65f0(sub_4b65f0(&var_54, &var_d4, &var_174, &var_54), &var_114, &var_54, &var_94))
__builtin_memcpy(arg1 + 0x15c, &var_114, 0x40)
__builtin_memcpy(arg1 + 0x19c, &var_54, 0x40)
__builtin_memcpy(arg1 + 0x1dc, sub_4b65f0(eax_23, arg1 + 0x15c, arg1 + 0x19c, &var_94), 0x40)
float* eax_26 = sub_4b65f0(&var_94, arg1 + 0x1dc, arg1 + 0xd8, &var_94)
float* result = result_2
__builtin_memcpy(arg1 + 0x21c, eax_26, 0x40)

if (result != 0)
    float* result_1 = result
    result = sub_6b4d5b()

if (ebp != 0)
    float var_1ec_16 = ebp
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1d4)
return result
