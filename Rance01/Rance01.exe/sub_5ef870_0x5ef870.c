// 函数: sub_5ef870
// 地址: 0x5ef870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ddbe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e8
int32_t eax_2 = data_78c474 ^ &var_e8
int32_t __saved_esi
int32_t var_f8 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1[2]

if (result s< arg2[2])
    sub_5ee970(arg1, &var_e8)
    int32_t var_4 = 0
    sub_5eea40(arg2, arg1)
    sub_5eea40(&var_e8, arg2)
    int32_t var_4_1 = 0xffffffff
    result = sub_4329b0(&var_e8)

if (arg3[2] s< arg1[2])
    sub_5ee970(arg3, &var_e8)
    int32_t var_4_2 = 1
    sub_5eea40(arg1, arg3)
    sub_5eea40(&var_e8, arg1)
    int32_t var_4_3 = 0xffffffff
    result = sub_4329b0(&var_e8)

if (arg1[2] s< arg2[2])
    void var_7c
    sub_5ee970(arg1, &var_7c)
    int32_t var_4_4 = 2
    sub_5eea40(arg2, arg1)
    sub_5eea40(&var_7c, arg2)
    result = sub_4329b0(&var_7c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_e8)
return result
