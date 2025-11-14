// 函数: sub_58db40
// 地址: 0x58db40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 s<= 0)
    int32_t result
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int128_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
sub_65a090(&var_28, arg4 * 4)
int32_t var_c_1 = 0
int128_t* esi_1 = var_28
sub_6c02a0(esi_1, arg3, ((var_24 - esi_1) s>> 2) * 4, eax_2)
int32_t* var_40_2 = &var_28
void* ebx
ebx.b = sub_58dd10(arg1, arg2)

if (esi_1 != 0)
    int128_t* var_40_3 = esi_1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
