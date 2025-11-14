// 函数: sub_51a4c0
// 地址: 0x51a4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_51a6c0(arg1)
var_4.b = 1
int32_t result = sub_4b3e80(&arg1[0xf])
var_4.b = 0
int32_t* ecx = arg1[9]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[9] = 0

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc].b = 0
arg1[0xd] = 0
arg1[0xe].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = *arg1

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *arg1 = 0

arg1[8].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
