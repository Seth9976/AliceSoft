// 函数: sub_4dc300
// 地址: 0x4dc300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712e8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_a0
int32_t eax_2 = data_78c474 ^ &var_a0
int32_t __saved_edi
int32_t var_b4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* eax_5 = *(arg1 + 0xc)
int32_t ecx = *(arg1 + 0x1c)
float var_98 = fconvert.s(fconvert.t(*eax_5))
float var_9c = fconvert.s(fconvert.t(eax_5[1]))
var_a0 = fconvert.s(fconvert.t(eax_5[2]))
float var_60 = fconvert.s(fconvert.t(var_98))
float var_5c = fconvert.s(fconvert.t(var_9c))
float var_58 = fconvert.s(fconvert.t(var_a0))
var_a0 = fconvert.s(fconvert.t(eax_5[ecx]))
float var_6c = fconvert.s(fconvert.t(var_a0))
float var_68 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx + 1]))))
float var_64 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx + 2]))))
var_a0 = fconvert.s(fconvert.t(eax_5[ecx * 2]))
int32_t ecx_1 = ecx * 2
float var_48 = fconvert.s(fconvert.t(var_a0))
float var_44 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx * 2 + 1]))))
float var_40 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx * 2 + 2]))))
var_a0 = fconvert.s(fconvert.t(eax_5[ecx_1 * 2]))
float var_54 = fconvert.s(fconvert.t(var_a0))
float var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx_1 * 2 + 1]))))
float var_4c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_5[ecx_1 * 2 + 2]))))
long double x87_r7_24 = float.t(1)
float var_94 = fconvert.s(x87_r7_24)
float var_90 = fconvert.s(x87_r7_24)
float var_8c = fconvert.s(x87_r7_24)
float var_88 = fconvert.s(x87_r7_24)
int32_t eax_6 = sub_51e370(&var_94)
var_94 = &sealengine::CPoint::`vftable'
float var_90_1 = var_6c
float var_8c_1 = var_68
float var_88_1 = var_64
int32_t var_84 = eax_6
int32_t var_4 = 0
struct sealengine::CPoint::VTable* const var_80 = &sealengine::CPoint::`vftable'
float var_7c = var_60
float var_78 = var_5c
float var_74 = var_58
int32_t var_70 = eax_6
var_4.b = 1
var_4.b = 2
struct sealengine::CLine::VTable* var_3c
sub_4bc940(sub_4cc010(&var_3c, &var_80, &var_94), arg2)
var_4.b = 1
var_3c = &sealengine::CLine::`vftable'
void var_38
sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
var_80 = &sealengine::CPoint::`vftable'
float var_7c_1 = var_48
float var_78_1 = var_44
float var_74_1 = var_40
int32_t var_70_1 = eax_6
int32_t var_4_1 = 3
var_94 = &sealengine::CPoint::`vftable'
float var_90_2 = var_60
float var_8c_2 = var_5c
float var_88_2 = var_58
int32_t var_84_1 = eax_6
var_4_1.b = 4
var_4_1.b = 5
sub_4bc940(sub_4cc010(&var_3c, &var_94, &var_80), arg2)
var_4_1.b = 4
var_3c = &sealengine::CLine::`vftable'
sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
var_80 = &sealengine::CPoint::`vftable'
float var_7c_2 = var_54
float var_78_2 = var_50
float var_74_2 = var_4c
int32_t var_70_2 = eax_6
int32_t var_4_2 = 6
var_94 = &sealengine::CPoint::`vftable'
float var_90_3 = var_6c
float var_8c_3 = var_68
float var_88_3 = var_64
int32_t var_84_2 = eax_6
var_4_2.b = 7
var_4_2.b = 8
sub_4bc940(sub_4cc010(&var_3c, &var_94, &var_80), arg2)
var_4_2.b = 7
var_3c = &sealengine::CLine::`vftable'
sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
var_80 = &sealengine::CPoint::`vftable'
float var_7c_3 = var_54
float var_78_3 = var_50
float var_74_3 = var_4c
int32_t var_70_3 = eax_6
int32_t var_4_3 = 9
var_94 = &sealengine::CPoint::`vftable'
float var_90_4 = var_48
float var_8c_4 = var_44
float var_88_4 = var_40
int32_t var_84_3 = eax_6
var_4_3.b = 0xa
var_4_3.b = 0xb
sub_4bc940(sub_4cc010(&var_3c, &var_94, &var_80), arg2)
var_4_3.b = 0xa
var_3c = &sealengine::CLine::`vftable'
sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a0)
return result
