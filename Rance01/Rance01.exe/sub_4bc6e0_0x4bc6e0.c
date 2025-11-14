// 函数: sub_4bc6e0
// 地址: 0x4bc6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711a88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPoint::VTable* const var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = sub_51e370(arg1)
int32_t edx = arg4[1]
int32_t var_4c = *arg4
int32_t ecx_1 = arg4[2]
struct sealengine::CPoint::VTable* const var_50 = &sealengine::CPoint::`vftable'
int32_t var_48 = edx
int32_t var_44 = ecx_1
int32_t var_40 = eax_5
int32_t var_4 = 0
int32_t eax_6 = sub_51e370(arg1)
int32_t ecx_2 = arg3[1]
int32_t var_60 = *arg3
int32_t edx_2 = arg3[2]
var_64 = &sealengine::CPoint::`vftable'
int32_t var_5c = ecx_2
int32_t var_58 = edx_2
int32_t var_54 = eax_6
var_4.b = 1
var_4.b = 2
struct sealengine::CLine::VTable* var_3c
sub_4bc940(sub_4cc010(&var_3c, &var_64, &var_50), arg2)
var_4.b = 1
var_3c = &sealengine::CLine::`vftable'
void var_38
int32_t result = sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
