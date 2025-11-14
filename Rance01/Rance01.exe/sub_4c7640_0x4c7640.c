// 函数: sub_4c7640
// 地址: 0x4c7640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7130b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPoint::VTable* const var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = *arg4
int32_t esi_1 = arg4[1]
int32_t var_44 = arg4[2]
struct sealengine::CPoint::VTable* const var_50 = &sealengine::CPoint::`vftable'
int32_t var_48 = esi_1
int32_t var_40 = arg5
int32_t var_4 = 0
int32_t eax_8 = arg1[1]
var_64 = &sealengine::CPoint::`vftable'
int32_t var_60 = *arg1
int32_t var_5c = eax_8
int32_t var_58 = arg1[2]
int32_t var_54 = arg3
var_4.b = 1
var_4.b = 2
struct sealengine::CLine::VTable* var_3c
sub_4bc940(sub_4cc010(&var_3c, &var_64, &var_50), arg2 + 0x274)
var_4.b = 1
var_3c = &sealengine::CLine::`vftable'
void var_38
int32_t result = sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
