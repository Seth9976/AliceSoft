// 函数: sub_66ff30
// 地址: 0x66ff30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718903
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t edx = sub_401270(arg1, nullptr, 0x72d35b)
arg1[0xb] = 0
void* ecx = arg1[8]
void* eax_3 = arg1[7]

if (eax_3 != ecx)
    int32_t* eax_4 = sub_66fbe0(eax_3, edx, ecx, ecx)
    sub_668ba0(eax_4, arg1[8])
    arg1[8] = eax_4

int32_t* result = arg1[7]

if (result != 0)
    sub_668ba0(result, arg1[8])
    int32_t var_24_2 = arg1[7]
    result = sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0

if (arg1[5] u>= 0x10)
    int32_t var_24_3 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
