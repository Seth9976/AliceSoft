// 函数: sub_539cf0
// 地址: 0x539cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg2[0xd]

if (eax_3 != 0)
    sub_52f330(eax_3, arg2[0xe])
    int32_t var_24_1 = arg2[0xd]
    sub_6b4d5b()

arg2[0xd] = 0
arg2[0xe] = 0
arg2[0xf] = 0

if (arg2[9] u>= 0x10)
    int32_t var_24_2 = arg2[4]
    sub_6b4d5b()

arg2[9] = 0xf
arg2[8] = 0
arg2[4].b = 0
int32_t var_4 = 0
int32_t** eax_6 = arg2[1]
sub_429bc0(arg2, &var_10, *eax_6, eax_6)
int32_t var_24_4 = arg2[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
