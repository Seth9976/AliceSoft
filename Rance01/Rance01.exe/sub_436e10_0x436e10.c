// 函数: sub_436e10
// 地址: 0x436e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717f3a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_4356f0(&arg1[0xc])
sub_4356f0(&arg1[0x44])
int32_t* ecx = *(arg1 + 0x7c)

if (ecx != 0)
    ecx = (*(*ecx + 4))(eax_2)
    *(arg1 + 0x7c) = 0

*arg1 = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
var_4.b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_435660(sub_435660(ecx, &arg1[0x44]), &arg1[0xc])
fsbase->NtTib.ExceptionList = ExceptionList
return result
