// 函数: sub_591020
// 地址: 0x591020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71434a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengine::CTextureManager::VTable** var_18 = arg1
*arg1 = &graphengine::CTextureManager::`vftable'
int32_t var_4 = 1
sub_5910d0(arg1)
void* var_14 = &arg1[6]
var_4.b = 2
int32_t* eax_4 = arg1[7]
void* var_10
sub_58bc40(&arg1[6], &var_10, *eax_4, eax_4)
int32_t var_2c_1 = arg1[7]
sub_6b4d5b()
var_10 = &arg1[1]
int32_t var_4_1 = 3
int32_t* eax_6 = arg1[2]
sub_4365a0(&arg1[1], &var_14, *eax_6, eax_6)
int32_t var_2c_3 = arg1[2]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
