// 函数: sub_5ce430
// 地址: 0x5ce430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719b83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct commonsystemdata::CCommonSystemData::VTable** var_18 = arg1
*arg1 = &commonsystemdata::CCommonSystemData::`vftable'
int32_t var_4 = 0
void* var_14 = &arg1[8]
var_4.b = 1
int32_t* eax_3 = arg1[9]
void var_10
sub_5d04a0(&arg1[8], &var_10, *eax_3, eax_3)
int32_t var_2c_1 = arg1[9]
int32_t result = sub_6b4d5b()

if (arg1[6] u>= 0x10)
    int32_t var_2c_2 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
