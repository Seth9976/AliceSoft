// 函数: sub_514290
// 地址: 0x514290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710f93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_514400(arg1)
var_4.b = 1
int32_t result = sub_4b3e80(&arg1[0x48])
var_4.b = 0
int32_t* ecx = *(arg1 + 0x24)

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    *(arg1 + 0x24) = 0

arg1[0x44] = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0xc) = 0

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
arg1[0x18] = 0
*(arg1 + 0x1c) = 0
arg1[0x20] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
