// 函数: sub_435660
// 地址: 0x435660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71555d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_4356f0(arg2)
int32_t eax_3 = arg2[4]

if (eax_3 != 0)
    int32_t var_20_1 = eax_3
    sub_6b4d5b()

arg2[4] = 0
arg2[5] = 0
arg2[6] = 0
int32_t var_4_1 = 2
int32_t*** eax_4 = arg2[1]
sub_4365a0(arg2, &var_10, *eax_4, eax_4)
int32_t var_20_3 = arg2[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
