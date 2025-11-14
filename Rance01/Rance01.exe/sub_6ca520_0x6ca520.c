// 函数: sub_6ca520
// 地址: 0x6ca520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79a82c
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
int32_t* var_1c = &var_34
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD* result
result.b = 0x20
__builtin_strncpy(&data_797c78, "            ", 0xd)
var_34 = 0xc
__builtin_memset(&data_797c60, 0, 0x18)
int32_t* var_38 = &var_34
int32_t ecx
sub_6f2880(result, 0, ecx, &data_797c60)
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
