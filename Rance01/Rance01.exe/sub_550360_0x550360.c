// 函数: sub_550360
// 地址: 0x550360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_4 = 0
sub_55cab0(&var_20, arg2)
char eax_4 = sub_54fda0(arg1, &var_20, arg3, 1)
int32_t* esi_1 = var_20
int32_t ebx
ebx.b = eax_4

if (esi_1 != 0)
    sub_52f330(esi_1, var_1c)
    int32_t* var_3c_1 = esi_1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
