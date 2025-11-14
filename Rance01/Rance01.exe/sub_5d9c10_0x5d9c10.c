// 函数: sub_5d9c10
// 地址: 0x5d9c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_5d5880(arg1)
int32_t var_4_1 = 0xffffffff
int32_t* ecx = *(arg1 + 0x2c)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0x2c) = 0

char* var_18 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
