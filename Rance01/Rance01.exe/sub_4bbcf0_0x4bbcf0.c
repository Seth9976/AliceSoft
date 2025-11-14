// 函数: sub_4bbcf0
// 地址: 0x4bbcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = data_78c474 ^ &var_f4
int32_t __saved_edi
int32_t var_108 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_114 = arg1
float edx = sub_4baf50(arg1, arg3, fconvert.s(fconvert.t(arg4)), arg2, arg5)
long double x87_r7_1 = fconvert.t(arg4)
float var_74
int32_t* ebx = &var_74
long double x87_r6_2 = fconvert.t(fconvert.s(fneg(x87_r7_1)))
long double x87_r4 = fconvert.t(0.5)
long double x87_r4_2 = fconvert.t(fconvert.s(x87_r6_2 * x87_r4))
var_74 = fconvert.s(x87_r4_2)
float var_70 = fconvert.s(x87_r4_2)
long double x87_r4_4 = fconvert.t(fconvert.s(x87_r4 * x87_r7_1))
float var_6c = fconvert.s(x87_r4_4)
float var_68 = fconvert.s(x87_r4_4)
float var_60 = fconvert.s(x87_r4_4)
float var_58 = fconvert.s(x87_r4_4)
float var_54 = fconvert.s(x87_r4_4)
float var_50 = fconvert.s(x87_r4_4)
float var_4c = fconvert.s(x87_r4_4)
float var_48 = fconvert.s(x87_r4_4)
float var_64 = fconvert.s(x87_r4_2)
float var_5c = fconvert.s(x87_r4_2)
long double x87_r5_5 = fconvert.t(0.75)
long double x87_r5_7 = fconvert.t(fconvert.s(x87_r6_2 * x87_r5_5))
float var_44 = fconvert.s(x87_r5_7)
float var_40 = fconvert.s(x87_r5_7)
long double x87_r6_6 = fconvert.t(fconvert.s(x87_r5_5 * x87_r7_1))
int32_t i_1 = 8
float var_3c = fconvert.s(x87_r6_6)
float var_38 = fconvert.s(x87_r6_6)
float var_30 = fconvert.s(x87_r6_6)
float var_28 = fconvert.s(x87_r6_6)
float var_24 = fconvert.s(x87_r6_6)
float var_20 = fconvert.s(x87_r6_6)
float var_1c = fconvert.s(x87_r6_6)
float var_18 = fconvert.s(x87_r6_6)
float var_34 = fconvert.s(x87_r5_7)
float var_2c = fconvert.s(x87_r5_7)
float var_d8
float var_b4
int32_t i

do
    float* eax_6 = &var_b4
    sub_660a50(eax_6, edx, arg5)
    float* eax_7 = sub_51e1c0(arg5, &var_d8, eax_6, ebx)
    ebx = &ebx[3]
    i = i_1
    i_1 -= 1
    float var_c4_1 = fconvert.s(fconvert.t(eax_7[2]) + fconvert.t(arg3[2]))
    long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(eax_7[1]) + fconvert.t(arg3[1])))
    ebx[-3] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg3) + fconvert.t(*eax_7))))
    ebx[-2] = fconvert.s(x87_r7_10)
    edx = fconvert.s(fconvert.t(var_c4_1))
    ebx[-1] = edx
while (i != 1)
int32_t eax_9 = sub_51e370(arg2)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4 = var_44
float var_d0 = var_40
float var_cc = var_3c
int32_t var_c8 = eax_9
int32_t var_4 = 0
struct sealengine::CPoint::VTable* const var_ec_2 = &sealengine::CPoint::`vftable'
float var_e8_2 = var_74
float var_e4_2 = var_70
float var_e0 = var_6c
int32_t var_dc = eax_9
int32_t (__fastcall* var_10c_2)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4.b = 1
var_b4 = &sealengine::CLine::`vftable'
void var_b0
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac = var_74
float var_a8 = var_70
float var_a4 = var_6c
int32_t var_a0 = eax_9
float var_98 = var_44
float var_94 = var_40
float var_90 = var_3c
int32_t var_8c = eax_9
var_4.b = 2
sub_4bc940(&var_b4, arg1)
var_4.b = 1
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_1 = var_38
float var_d0_1 = var_34
float var_cc_1 = var_30
int32_t var_c8_1 = eax_9
int32_t var_4_1 = 3
struct sealengine::CPoint::VTable* const var_ec_3 = &sealengine::CPoint::`vftable'
float var_e8_3 = var_68
float var_e4_3 = var_64
float var_e0_1 = var_60
int32_t var_dc_1 = eax_9
int32_t (__fastcall* var_10c_3)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_1.b = 4
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_1 = var_68
float var_a8_1 = var_64
float var_a4_1 = var_60
int32_t var_a0_1 = eax_9
float var_98_1 = var_38
float var_94_1 = var_34
float var_90_1 = var_30
int32_t var_8c_1 = eax_9
var_4_1.b = 5
sub_4bc940(&var_b4, arg1)
var_4_1.b = 4
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_2 = var_2c
float var_d0_2 = var_28
float var_cc_2 = var_24
int32_t var_c8_2 = eax_9
int32_t var_4_2 = 6
struct sealengine::CPoint::VTable* const var_ec_4 = &sealengine::CPoint::`vftable'
float var_e8_4 = var_5c
float var_e4_4 = var_58
float var_e0_2 = var_54
int32_t var_dc_2 = eax_9
int32_t (__fastcall* var_10c_4)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_2.b = 7
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_2 = var_5c
float var_a8_2 = var_58
float var_a4_2 = var_54
int32_t var_a0_2 = eax_9
float var_98_2 = var_2c
float var_94_2 = var_28
float var_90_2 = var_24
int32_t var_8c_2 = eax_9
var_4_2.b = 8
sub_4bc940(&var_b4, arg1)
var_4_2.b = 7
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_3 = var_20
float var_d0_3 = var_1c
float var_cc_3 = var_18
int32_t var_c8_3 = eax_9
int32_t var_4_3 = 9
struct sealengine::CPoint::VTable* const var_ec_5 = &sealengine::CPoint::`vftable'
float var_e8_5 = var_50
float var_e4_5 = var_4c
float var_e0_3 = var_48
int32_t var_dc_3 = eax_9
int32_t (__fastcall* var_10c_5)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_3.b = 0xa
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_3 = var_50
float var_a8_3 = var_4c
float var_a4_3 = var_48
int32_t var_a0_3 = eax_9
float var_98_3 = var_20
float var_94_3 = var_1c
float var_90_3 = var_18
int32_t var_8c_3 = eax_9
var_4_3.b = 0xb
sub_4bc940(&var_b4, arg1)
var_4_3.b = 0xa
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_4 = var_38
float var_d0_4 = var_34
float var_cc_4 = var_30
int32_t var_c8_4 = eax_9
int32_t var_4_4 = 0xc
struct sealengine::CPoint::VTable* const var_ec_6 = &sealengine::CPoint::`vftable'
float var_e8_6 = var_44
float var_e4_6 = var_40
float var_e0_4 = var_3c
int32_t var_dc_4 = eax_9
int32_t (__fastcall* var_10c_6)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_4.b = 0xd
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_4 = var_44
float var_a8_4 = var_40
float var_a4_4 = var_3c
int32_t var_a0_4 = eax_9
float var_98_4 = var_38
float var_94_4 = var_34
float var_90_4 = var_30
int32_t var_8c_4 = eax_9
var_4_4.b = 0xe
sub_4bc940(&var_b4, arg1)
var_4_4.b = 0xd
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_5 = var_20
float var_d0_5 = var_1c
float var_cc_5 = var_18
int32_t var_c8_5 = eax_9
int32_t var_4_5 = 0xf
struct sealengine::CPoint::VTable* const var_ec_7 = &sealengine::CPoint::`vftable'
float var_e8_7 = var_2c
float var_e4_7 = var_28
float var_e0_5 = var_24
int32_t var_dc_5 = eax_9
int32_t (__fastcall* var_10c_7)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_5.b = 0x10
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_5 = var_2c
float var_a8_5 = var_28
float var_a4_5 = var_24
int32_t var_a0_5 = eax_9
float var_98_5 = var_20
float var_94_5 = var_1c
float var_90_5 = var_18
int32_t var_8c_5 = eax_9
var_4_5.b = 0x11
sub_4bc940(&var_b4, arg1)
var_4_5.b = 0x10
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_6 = var_2c
float var_d0_6 = var_28
float var_cc_6 = var_24
int32_t var_c8_6 = eax_9
int32_t var_4_6 = 0x12
struct sealengine::CPoint::VTable* const var_ec_8 = &sealengine::CPoint::`vftable'
float var_e8_8 = var_44
float var_e4_8 = var_40
float var_e0_6 = var_3c
int32_t var_dc_6 = eax_9
int32_t (__fastcall* var_10c_8)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_6.b = 0x13
var_b4 = &sealengine::CLine::`vftable'
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_6 = var_44
float var_a8_6 = var_40
float var_a4_6 = var_3c
int32_t var_a0_6 = eax_9
float var_98_6 = var_2c
float var_94_6 = var_28
float var_90_6 = var_24
int32_t var_8c_6 = eax_9
var_4_6.b = 0x14
sub_4bc940(&var_b4, arg1)
var_4_6.b = 0x13
var_b4 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
var_d8 = &sealengine::CPoint::`vftable'
float var_d4_7 = var_20
float var_d0_7 = var_1c
float var_cc_7 = var_18
int32_t var_c8_7 = eax_9
int32_t var_4_7 = 0x15
struct sealengine::CPoint::VTable* const var_ec_9 = &sealengine::CPoint::`vftable'
float var_e8_9 = var_38
float var_e4_9 = var_34
float var_e0_7 = var_30
int32_t var_dc_7 = eax_9
var_4_7.b = 0x16
var_b4 = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_10c_9)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
sub_6b5516(&var_b0, 0x14, 2, sub_4f2b70)
float var_ac_7 = var_38
float var_a8_7 = var_34
float var_a4_7 = var_30
int32_t var_a0_7 = eax_9
float var_98_7 = var_20
float var_94_7 = var_1c
float var_90_7 = var_18
int32_t var_8c_7 = eax_9
var_4_7.b = 0x17
sub_4bc940(&var_b4, arg1)
var_4_7.b = 0x16
var_b4 = &sealengine::CLine::`vftable'
int32_t result = sub_6b54b3(&var_b0, 0x14, 2, sub_4f2b90)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_f4)
return result
