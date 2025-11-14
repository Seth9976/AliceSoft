// 函数: __callthreadstartex
// 地址: 0x6b565a
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xc
int32_t var_8 = 0x770f90
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t eax_2 = data_78c474
int32_t var_8_2 = 0x770f90 ^ eax_2
int32_t var_30 = eax_2 ^ &var_4
int32_t* var_1c = &var_30
void* const var_34_1 = &data_6b5666
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* eax = __getptd()
int32_t var_8_1 = 0
sub_6b563b(eax[0x15](eax[0x16]))
noreturn
