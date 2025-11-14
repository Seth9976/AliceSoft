// 函数: sub_5598d0
// 地址: 0x5598d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a66d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_55a740(*(arg1[8] + 4))
void* eax_4 = arg1[8]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[8]
*eax_5 = eax_5
void* eax_6 = arg1[8]
*(eax_6 + 8) = eax_6
arg1[9] = 0
void* var_14 = &arg1[7]
var_4.b = 2
int32_t* eax_7 = arg1[8]
void var_10
sub_55a7b0(&arg1[7], &var_10, *eax_7, eax_7)
int32_t var_28_2 = arg1[8]
int32_t result = sub_6b4d5b()

if (arg1[5] u>= 0x10)
    int32_t var_28_3 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
