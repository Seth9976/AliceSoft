// 函数: sub_670030
// 地址: 0x670030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = sub_401270(arg1, nullptr, 0x72d35b)
arg1[0xb] = 0
void* ecx = arg1[8]
void* eax_3 = arg1[7]

if (eax_3 != ecx)
    int32_t* eax_4 = sub_66fbe0(eax_3, edx, ecx, ecx)
    sub_668ba0(eax_4, arg1[8])
    arg1[8] = eax_4

sub_401180(arg1, 0xffffffff, arg2, 0)
int32_t var_4 = 0
int32_t var_2c = 0xffffffff
int32_t var_28
__builtin_memset(&var_28, 0, 0x14)
int32_t result_2
int32_t* var_44_2 = &result_2
var_4.b = 1
var_4.b = 0

if (sub_601f80(arg1) != 0)
    sub_670110(arg1, &result_2)

int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
