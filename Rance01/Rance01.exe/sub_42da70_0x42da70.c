// 函数: sub_42da70
// 地址: 0x42da70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71812b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `IInterface'}
int32_t var_4 = 2
sub_42db50(arg1)
void* var_14 = &arg1[0x13]
var_4.b = 3
int32_t* eax_3 = arg1[0x14]
void var_10
sub_4365a0(&arg1[0x13], &var_10, *eax_3, eax_3)
int32_t var_28_2 = arg1[0x14]
int32_t result = sub_6b4d5b()

if (arg1[0xf] u>= 0x10)
    int32_t var_28_3 = arg1[0xa]
    result = sub_6b4d5b()

arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0

if (arg1[8] u>= 0x10)
    int32_t var_28_4 = arg1[3]
    result = sub_6b4d5b()

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
