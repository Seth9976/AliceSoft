// 函数: sub_59ba00
// 地址: 0x59ba00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725f60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 0
int32_t* eax_3 = sub_631c00(1)
*arg1 = eax_3
*eax_3 = eax_3
void* eax_4 = *arg1
*(eax_4 + 4) = eax_4
int32_t* var_1c = arg1
int32_t var_4 = 0
sub_598b20()
arg1[3] = 0x3e8
arg1[4] = 0xffffff9d
arg1[5].b = 1
arg1[6] = 0xffffff9d
int32_t var_4_1 = 1
arg1[8] = 0
int32_t* eax_5 = sub_576880(1)
arg1[7] = eax_5
*eax_5 = eax_5
void* eax_6 = arg1[7]
*(eax_6 + 4) = eax_6
arg1[0xa] = 0x1f4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
