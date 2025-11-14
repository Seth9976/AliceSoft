// 函数: sub_4be850
// 地址: 0x4be850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_4be9f0(arg1)
int32_t eax_3 = arg1[8]

if (eax_3 != 0)
    int32_t var_28_1 = eax_3
    sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
void* var_14 = &arg1[4]
var_4.b = 3
int32_t*** eax_4 = arg1[5]
void var_10
sub_4365a0(&arg1[4], &var_10, *eax_4, eax_4)
int32_t var_28_3 = arg1[5]
sub_6b4d5b()
int32_t var_4_1 = 0xffffffff
int32_t result = sub_4bf0f0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
