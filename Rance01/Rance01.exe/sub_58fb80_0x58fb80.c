// 函数: sub_58fb80
// 地址: 0x58fb80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7169c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengine::CSpriteShader::VTable** var_18 = arg1
*arg1 = &graphengine::CSpriteShader::`vftable'
int32_t var_4 = 2
sub_58fd40(arg1)
void* var_14 = &arg1[0x18]
var_4.b = 3
int32_t* eax_3 = arg1[0x19]
void* var_10
sub_4365a0(&arg1[0x18], &var_10, *eax_3, eax_3)
int32_t var_2c_2 = arg1[0x19]
sub_6b4d5b()
var_10 = &arg1[0x14]
var_4.b = 4
int32_t* eax_5 = arg1[0x15]
sub_4365a0(&arg1[0x14], &var_14, *eax_5, eax_5)
int32_t var_2c_4 = arg1[0x15]
sub_6b4d5b()
int32_t var_4_1 = 0xffffffff
int32_t result = sub_58eb60(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
