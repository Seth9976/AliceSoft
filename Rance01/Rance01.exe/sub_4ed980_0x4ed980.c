// 函数: sub_4ed980
// 地址: 0x4ed980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724d5a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_4db690(&arg1[0x91])
sub_4db630(&arg1[0x91])
arg1[0xa2] = 0xffffffff
void** esi = arg1[0xa7]

if (esi != 0)
    sub_5028f0(esi)
    arg1[0xa7] = 0

int32_t* esi_1 = arg1[0xa6]

if (esi_1 != 0)
    sub_4f8480(esi_1)
    arg1[0xa6] = 0

arg1[0x83].b = 0
*arg1 = 0
var_4.b = 0
sub_4db0a0(&arg1[0x91])
int32_t* result = sub_4ba0b0(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
