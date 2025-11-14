// 函数: sub_58b0d0
// 地址: 0x58b0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719f62
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg1[1]
void** eax_3 = ebp[1]
int32_t* arg_4

while (*(eax_3 + 0x21) == 0)
    if (eax_3[3] u>= *arg_4)
        ebp = eax_3
        eax_3 = *eax_3
    else
        eax_3 = eax_3[2]

if (ebp != arg1[1] && *arg_4 u>= ebp[3])
    fsbase->NtTib.ExceptionList = ExceptionList
    return &ebp[4]

int32_t var_2c = 0
int32_t*** eax_5 = sub_4ecfc0(1)
*eax_5 = eax_5
eax_5[1] = eax_5
eax_5[2] = eax_5
eax_5[5].b = 1
*(eax_5 + 0x15) = 1
int32_t var_4 = 0
int32_t var_24 = *arg_4
void var_34
void var_20
sub_58c2f0(&var_34, &var_20)
var_4.b = 1
sub_58c4d0(sub_58d2a0(arg1, &var_24), &arg_4, arg1, ebp)
int32_t* edi_1 = arg_4
arg_4 = &var_20
var_4.b = 2
void var_38
int32_t* var_1c
sub_4365a0(&var_20, &var_38, *var_1c, var_1c)
int32_t* var_4c_4 = var_1c
sub_6b4d5b()
int32_t var_4_1 = 3
sub_4365a0(&var_34, &arg_4, *eax_5, eax_5)
int32_t*** var_4c_6 = eax_5
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return &edi_1[4]
