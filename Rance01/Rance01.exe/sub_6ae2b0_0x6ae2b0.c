// 函数: sub_6ae2b0
// 地址: 0x6ae2b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg3 - 0x20)
int32_t var_34 = *(arg3 - 0x24)
int32_t var_38 = *(arg3 - 0x28)
int32_t var_30 = edx
int32_t var_2c = *(arg3 - 0x1c)
int128_t* var_28
sub_6b05e0(&var_28, arg3 - 0x18)
char var_18 = *(arg3 - 8)
int32_t var_14 = *(arg3 - 4)
int32_t var_4 = 0
*(arg3 - 0x28) = *arg4
*(arg3 - 0x24) = arg4[1]
*(arg3 - 0x20) = arg4[2]
*(arg3 - 0x1c) = arg4[3]
sub_4b55f0(arg3 - 0x18, &arg4[4])
void* eax_7
eax_7.b = arg4[8].b
*(arg3 - 8) = eax_7.b
*(arg3 - 4) = arg4[9]
int32_t eax_8
int32_t edx_5
edx_5:eax_8 = muls.dp.d(0x66666667, arg3 - arg4 - 0x28)
sub_6ad9a0(eax_8, edx_5 s>> 4, 0, arg4, (arg3 - arg4 - 0x28) s/ 0x28, &var_38, arg5)
int128_t* esi_3 = var_28
int128_t* result_1
int128_t* result = result_1

if (esi_3 != result)
    result = sub_6b49d0(esi_3, result, nullptr, eax_2)

if (esi_3 != 0)
    int128_t* var_4c_3 = esi_3
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
