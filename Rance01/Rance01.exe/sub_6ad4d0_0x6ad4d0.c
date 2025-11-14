// 函数: sub_6ad4d0
// 地址: 0x6ad4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3 = *arg2
int32_t edx = arg2[2]
int32_t eax_4 = arg2[3]
int128_t* var_24
sub_6b05e0(&var_24, &arg2[4])
char edx_1 = arg2[8].b
int32_t eax_5 = arg2[9]
int32_t var_4 = 0
*arg2 = *arg1
arg2[1] = arg1[1]
arg2[2] = arg1[2]
arg2[3] = arg1[3]
sub_4b55f0(&arg2[4], &arg1[4])
arg2[8].b = arg1[8].b
arg2[9] = arg1[9]
arg1[1] = ecx
*arg1 = eax_3
arg1[2] = edx
arg1[3] = eax_4
sub_4b55f0(&arg1[4], &var_24)
int32_t* eax_10
eax_10.b = edx_1
arg1[8].b = eax_10.b
int128_t* result_1
int128_t* result = result_1
arg1[9] = eax_5
int128_t* esi_1 = var_24

if (esi_1 != result)
    result = sub_6b49d0(esi_1, result, nullptr, eax_2)

if (esi_1 != 0)
    int128_t* var_48_3 = esi_1
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
