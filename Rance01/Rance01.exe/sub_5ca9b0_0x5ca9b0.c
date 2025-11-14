// 函数: sub_5ca9b0
// 地址: 0x5ca9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714156
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_5ca700(arg1)

if (arg1[0xc] u>= 0x10)
    int32_t var_1c_1 = arg1[7]
    sub_6b4d5b()

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
int32_t eax_4 = arg1[1]

if (eax_4 != 0)
    int32_t var_1c_2 = eax_4
    sub_6b4d5b()

int32_t* var_1c_3 = arg1
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
