// 函数: sub_587780
// 地址: 0x587780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719fe9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t var_4 = 4
sub_5878a0(ebx)
void* var_14 = &ebx[0x14]
var_4.b = 5
int32_t* eax_3 = ebx[0x15]
void* var_10
sub_58ba70(&ebx[0x14], &var_10, *eax_3, eax_3)
int32_t var_28_1 = ebx[0x15]
sub_6b4d5b()
var_10 = &ebx[0xd]
var_4.b = 6
int32_t* eax_4 = ebx[0xe]
sub_4365a0(&ebx[0xd], &var_14, *eax_4, eax_4)
int32_t var_28_3 = ebx[0xe]
sub_6b4d5b()
var_10 = &ebx[9]
var_4.b = 7
int32_t* eax_6 = ebx[0xa]
sub_58b9b0(&ebx[9], &var_14, *eax_6, eax_6)
int32_t var_28_5 = ebx[0xa]
sub_6b4d5b()
var_10 = &ebx[5]
var_4.b = 8
int32_t* eax_7 = ebx[6]
sub_58b9b0(&ebx[5], &var_14, *eax_7, eax_7)
int32_t var_28_7 = ebx[6]
sub_6b4d5b()
arg1 = &ebx[1]
int32_t var_4_1 = 9
int32_t* eax_8 = ebx[2]
sub_4365a0(&ebx[1], &var_10, *eax_8, eax_8)
int32_t var_28_9 = ebx[2]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
