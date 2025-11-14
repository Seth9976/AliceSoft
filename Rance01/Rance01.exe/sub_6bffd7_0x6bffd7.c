// 函数: sub_6bffd7
// 地址: 0x6bffd7
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xc
int32_t var_8 = 0x7712e8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t eax_3 = data_78c474
int32_t var_8_2 = 0x7712e8 ^ eax_3
int32_t var_30 = eax_3 ^ &var_4
int32_t* var_1c = &var_30
void* const var_34 = &data_6bffe3
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg3
int32_t var_20 = 1
int32_t entry_ebx
return sub_6c0010(&var_4, arg2, arg1, entry_ebx) __tailcall
