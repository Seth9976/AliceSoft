// 函数: sub_4baf50
// 地址: 0x4baf50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711c3c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_e8
int32_t eax_2 = data_78c474 ^ &var_e8
int32_t __saved_edi
int32_t var_fc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = fconvert.t(arg3)
long double x87_r5 = fconvert.t(0.5)
float var_70
int32_t* esi = &var_70
int32_t i_1 = 8
long double x87_r5_2 = fconvert.t(fconvert.s(fneg(x87_r7) * x87_r5))
var_70 = fconvert.s(x87_r5_2)
float var_6c = fconvert.s(x87_r5_2)
float var_68 = fconvert.s(x87_r5_2)
long double x87_r6_5 = fconvert.t(fconvert.s(x87_r5 * x87_r7))
float var_64 = fconvert.s(x87_r6_5)
float var_54 = fconvert.s(x87_r6_5)
float var_4c = fconvert.s(x87_r6_5)
float var_48 = fconvert.s(x87_r6_5)
float var_38 = fconvert.s(x87_r6_5)
float var_34 = fconvert.s(x87_r6_5)
float var_2c = fconvert.s(x87_r6_5)
float var_24 = fconvert.s(x87_r6_5)
float var_20 = fconvert.s(x87_r6_5)
float var_1c = fconvert.s(x87_r6_5)
float var_18 = fconvert.s(x87_r6_5)
float var_14 = fconvert.s(x87_r6_5)
float var_60 = fconvert.s(x87_r5_2)
float var_5c = fconvert.s(x87_r5_2)
float var_58 = fconvert.s(x87_r5_2)
float var_50 = fconvert.s(x87_r5_2)
float var_44 = fconvert.s(x87_r5_2)
float var_40 = fconvert.s(x87_r5_2)
float var_3c = fconvert.s(x87_r5_2)
float var_30 = fconvert.s(x87_r5_2)
float var_28 = fconvert.s(x87_r5_2)
float var_d4
float var_b0
int32_t i

do
    float* eax_6 = &var_b0
    float edx
    sub_660a50(eax_6, edx, arg5)
    float* eax_7 = sub_51e1c0(arg5, &var_d4, eax_6, esi)
    esi = &esi[3]
    i = i_1
    i_1 -= 1
    float var_b4_1 = fconvert.s(fconvert.t(eax_7[1]) + fconvert.t(arg2[1]))
    float var_bc_1 = fconvert.s(fconvert.t(eax_7[2]) + fconvert.t(arg2[2]))
    var_e8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2) + fconvert.t(*eax_7))))
    esi[-3] = var_e8
    edx = fconvert.s(fconvert.t(var_b4_1))
    esi[-2] = edx
    esi[-1] = fconvert.s(fconvert.t(var_bc_1))
while (i != 1)
int32_t eax_9 = sub_51e370(arg4)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0 = var_64
float var_cc = var_60
float var_c8 = var_5c
int32_t var_c4 = eax_9
int32_t i_2 = i_1
float ecx_3 = var_70
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_2 = ecx_3
float var_e0_2 = var_6c
float var_dc = var_68
int32_t var_d8 = eax_9
int32_t (__fastcall* var_100_2)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
i_2.b = 1
var_b0 = &sealengine::CLine::`vftable'
void var_ac
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8 = var_70
float var_a4 = var_6c
float var_a0 = var_68
int32_t var_9c = eax_9
float var_94 = var_64
float var_90 = var_60
float var_8c = var_5c
int32_t var_88 = eax_9
i_2.b = 2
sub_4bc940(&var_b0, arg1)
i_2.b = 1
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_1 = var_4c
float var_cc_1 = var_48
float var_c8_1 = var_44
int32_t var_c4_1 = eax_9
int32_t var_4 = 3
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_3 = var_58
float var_e0_3 = var_54
float var_dc_1 = var_50
int32_t var_d8_1 = eax_9
var_4.b = 4
var_b0 = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_100_3)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_1 = var_58
float var_a4_1 = var_54
float var_a0_1 = var_50
int32_t var_9c_1 = eax_9
float var_94_1 = var_4c
float var_90_1 = var_48
float var_8c_1 = var_44
int32_t var_88_1 = eax_9
var_4.b = 5
sub_4bc940(&var_b0, arg1)
var_4.b = 4
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_2 = var_34
float var_cc_2 = var_30
float var_c8_2 = var_2c
int32_t var_c4_2 = eax_9
int32_t var_4_1 = 6
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_4 = var_40
float var_e0_4 = var_3c
float var_dc_2 = var_38
int32_t var_d8_2 = eax_9
int32_t (__fastcall* var_100_4)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_1.b = 7
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_2 = var_40
float var_a4_2 = var_3c
float var_a0_2 = var_38
int32_t var_9c_2 = eax_9
float var_94_2 = var_34
float var_90_2 = var_30
float var_8c_2 = var_2c
int32_t var_88_2 = eax_9
var_4_1.b = 8
sub_4bc940(&var_b0, arg1)
var_4_1.b = 7
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_3 = var_1c
float var_cc_3 = var_18
float var_c8_3 = var_14
int32_t var_c4_3 = eax_9
int32_t var_4_2 = 9
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_5 = var_28
float var_e0_5 = var_24
float var_dc_3 = var_20
int32_t var_d8_3 = eax_9
int32_t (__fastcall* var_100_5)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_2.b = 0xa
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_3 = var_28
float var_a4_3 = var_24
float var_a0_3 = var_20
int32_t var_9c_3 = eax_9
float var_94_3 = var_1c
float var_90_3 = var_18
float var_8c_3 = var_14
int32_t var_88_3 = eax_9
var_4_2.b = 0xb
sub_4bc940(&var_b0, arg1)
var_4_2.b = 0xa
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_4 = var_58
float var_cc_4 = var_54
float var_c8_4 = var_50
int32_t var_c4_4 = eax_9
int32_t var_4_3 = 0xc
float eax_31 = var_70
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_6 = eax_31
float var_e0_6 = var_6c
float var_dc_4 = var_68
int32_t var_d8_4 = eax_9
var_4_3.b = 0xd
var_b0 = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_100_6)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_4 = var_70
float var_a4_4 = var_6c
float var_a0_4 = var_68
int32_t var_9c_4 = eax_9
float var_94_4 = var_58
float var_90_4 = var_54
float var_8c_4 = var_50
int32_t var_88_4 = eax_9
var_4_3.b = 0xe
sub_4bc940(&var_b0, arg1)
var_4_3.b = 0xd
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_5 = var_4c
float var_cc_5 = var_48
float var_c8_5 = var_44
int32_t var_c4_5 = eax_9
int32_t var_4_4 = 0xf
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_7 = var_64
float var_e0_7 = var_60
float var_dc_5 = var_5c
int32_t var_d8_5 = eax_9
int32_t (__fastcall* var_100_7)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_4.b = 0x10
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_5 = var_64
float var_a4_5 = var_60
float var_a0_5 = var_5c
int32_t var_9c_5 = eax_9
float var_94_5 = var_4c
float var_90_5 = var_48
float var_8c_5 = var_44
int32_t var_88_5 = eax_9
var_4_4.b = 0x11
sub_4bc940(&var_b0, arg1)
var_4_4.b = 0x10
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_6 = var_28
float var_cc_6 = var_24
float var_c8_6 = var_20
int32_t var_c4_6 = eax_9
int32_t var_4_5 = 0x12
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_8 = var_40
float var_e0_8 = var_3c
float var_dc_6 = var_38
int32_t var_d8_6 = eax_9
int32_t (__fastcall* var_100_8)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_5.b = 0x13
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_6 = var_40
float var_a4_6 = var_3c
float var_a0_6 = var_38
int32_t var_9c_6 = eax_9
float var_94_6 = var_28
float var_90_6 = var_24
float var_8c_6 = var_20
int32_t var_88_6 = eax_9
var_4_5.b = 0x14
sub_4bc940(&var_b0, arg1)
var_4_5.b = 0x13
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_7 = var_1c
float var_cc_7 = var_18
float var_c8_7 = var_14
int32_t var_c4_7 = eax_9
int32_t var_4_6 = 0x15
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_9 = var_34
float var_e0_9 = var_30
float var_dc_7 = var_2c
int32_t var_d8_7 = eax_9
var_4_6.b = 0x16
var_b0 = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_100_9)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_7 = var_34
float var_a4_7 = var_30
float var_a0_7 = var_2c
int32_t var_9c_7 = eax_9
float var_94_7 = var_1c
float var_90_7 = var_18
float var_8c_7 = var_14
int32_t var_88_7 = eax_9
var_4_6.b = 0x17
sub_4bc940(&var_b0, arg1)
var_4_6.b = 0x16
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_8 = var_40
float var_cc_8 = var_3c
float var_c8_8 = var_38
int32_t var_c4_8 = eax_9
int32_t var_4_7 = 0x18
float edx_35 = var_70
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_10 = edx_35
float var_e0_10 = var_6c
float var_dc_8 = var_68
int32_t var_d8_8 = eax_9
int32_t (__fastcall* var_100_10)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_7.b = 0x19
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_8 = var_70
float var_a4_8 = var_6c
float var_a0_8 = var_68
int32_t var_9c_8 = eax_9
float var_94_8 = var_40
float var_90_8 = var_3c
float var_8c_8 = var_38
int32_t var_88_8 = eax_9
var_4_7.b = 0x1a
sub_4bc940(&var_b0, arg1)
var_4_7.b = 0x19
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_9 = var_34
float var_cc_9 = var_30
float var_c8_9 = var_2c
int32_t var_c4_9 = eax_9
int32_t var_4_8 = 0x1b
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_11 = var_64
float var_e0_11 = var_60
float var_dc_9 = var_5c
int32_t var_d8_9 = eax_9
int32_t (__fastcall* var_100_11)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_8.b = 0x1c
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_9 = var_64
float var_a4_9 = var_60
float var_a0_9 = var_5c
int32_t var_9c_9 = eax_9
float var_94_9 = var_34
float var_90_9 = var_30
float var_8c_9 = var_2c
int32_t var_88_9 = eax_9
var_4_8.b = 0x1d
sub_4bc940(&var_b0, arg1)
var_4_8.b = 0x1c
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_10 = var_28
float var_cc_10 = var_24
float var_c8_10 = var_20
int32_t var_c4_10 = eax_9
int32_t var_4_9 = 0x1e
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_12 = var_58
float var_e0_12 = var_54
float var_dc_10 = var_50
int32_t var_d8_10 = eax_9
var_4_9.b = 0x1f
var_b0 = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_100_12)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_10 = var_58
float var_a4_10 = var_54
float var_a0_10 = var_50
int32_t var_9c_10 = eax_9
float var_94_10 = var_28
float var_90_10 = var_24
float var_8c_10 = var_20
int32_t var_88_10 = eax_9
var_4_9.b = 0x20
sub_4bc940(&var_b0, arg1)
var_4_9.b = 0x1f
var_b0 = &sealengine::CLine::`vftable'
sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
var_d4 = &sealengine::CPoint::`vftable'
float var_d0_11 = var_1c
float var_cc_11 = var_18
float var_c8_11 = var_14
int32_t var_c4_11 = eax_9
int32_t var_4_10 = 0x21
var_e8 = &sealengine::CPoint::`vftable'
float var_e4_13 = var_4c
float var_e0_13 = var_48
float var_dc_11 = var_44
int32_t var_d8_11 = eax_9
int32_t (__fastcall* var_100_13)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
var_4_10.b = 0x22
var_b0 = &sealengine::CLine::`vftable'
sub_6b5516(&var_ac, 0x14, 2, sub_4f2b70)
float var_a8_11 = var_4c
float var_a4_11 = var_48
float var_a0_11 = var_44
int32_t var_9c_11 = eax_9
float var_94_11 = var_1c
float var_90_11 = var_18
float var_8c_11 = var_14
int32_t var_88_11 = eax_9
var_4_10.b = 0x23
sub_4bc940(&var_b0, arg1)
var_4_10.b = 0x22
var_b0 = &sealengine::CLine::`vftable'
int32_t result = sub_6b54b3(&var_ac, 0x14, 2, sub_4f2b90)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_e8)
return result
