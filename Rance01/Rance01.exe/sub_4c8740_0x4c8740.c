// 函数: sub_4c8740
// 地址: 0x4c8740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7119f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t* eax_3 = sub_64dc30(4)
int32_t var_8_1 = 0
int32_t* var_28 = arg1
*arg1 = eax_3
arg1[1] = eax_3
arg1[2] = &eax_3[0xc]
int32_t* result = sub_4c8ac0(&eax_3[0xc], arg2, 4, eax_3)
arg1[1] = &eax_3[0xc]
fsbase->NtTib.ExceptionList = ExceptionList
return result
