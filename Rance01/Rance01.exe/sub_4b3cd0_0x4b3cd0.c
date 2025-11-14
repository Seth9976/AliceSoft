// 函数: sub_4b3cd0
// 地址: 0x4b3cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711dce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_4b3dc0(&arg2[0xf], &var_10, arg2[0xf], arg2[0x10])
int32_t* ecx_1 = arg2[6]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg2[6] = 0

arg2[0xe].b = 0
int32_t* ecx_2 = *arg2

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *arg2 = 0

arg2[1] = 0
arg2[2] = 0
arg2[3].b = 0
arg2[4] = 0
arg2[5].b = 0
var_4.b = 1
int32_t result = sub_4b3e30(&arg2[0xf])
var_4.b = 0
int32_t* ecx_3 = arg2[6]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))(eax_2)
    arg2[6] = 0

arg2[0xe].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_4 = *arg2

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))(eax_2)
    *arg2 = 0

arg2[1] = 0
arg2[2] = 0
arg2[3].b = 0
arg2[4] = 0
arg2[5].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
