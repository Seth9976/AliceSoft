// 函数: sub_4b1300
// 地址: 0x4b1300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b3ff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 5
sub_4b2480(&arg2[0x10], &var_10, arg2[0x10], arg2[0x11])
sub_4b25d0(&arg2[0x14], &var_10, arg2[0x14], arg2[0x15])
sub_4b1590(arg2)
sub_4b1420(arg2)
int32_t eax_6 = arg2[0x14]

if (eax_6 != 0)
    int32_t var_28_3 = eax_6
    sub_6b4d5b()

arg2[0x14] = 0
arg2[0x15] = 0
arg2[0x16] = 0
var_4.b = 3
sub_4b2580(&arg2[0x10])
int32_t eax_7 = arg2[0xc]

if (eax_7 != 0)
    int32_t var_28_5 = eax_7
    sub_6b4d5b()

arg2[0xc] = 0
arg2[0xd] = 0
arg2[0xe] = 0
int32_t eax_8 = arg2[8]

if (eax_8 != 0)
    int32_t var_28_6 = eax_8
    sub_6b4d5b()

arg2[8] = 0
arg2[9] = 0
arg2[0xa] = 0
int32_t* eax_9 = arg2[4]

if (eax_9 != 0)
    sub_405780(eax_9, arg2[5])
    int32_t var_28_7 = arg2[4]
    sub_6b4d5b()

arg2[4] = 0
arg2[5] = 0
arg2[6] = 0
int32_t result = *arg2

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg2 = 0
arg2[1] = 0
arg2[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
