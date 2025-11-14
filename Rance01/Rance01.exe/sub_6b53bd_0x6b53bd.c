// 函数: sub_6b53bd
// 地址: 0x6b53bd
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_710b30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_6b53c9
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t result = operator new(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b53e1
return result
