// 函数: sub_51c9a0
// 地址: 0x51c9a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae5d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t ecx
int32_t edx
sub_51ca40(arg1, edx, ecx)
void* var_14 = &arg1[4]
var_4.b = 2
int32_t* eax_4 = arg1[5]
void var_10
sub_51d230(&arg1[4], &var_10, *eax_4, eax_4)
int32_t var_28_1 = arg1[5]
sub_6b4d5b()
void* result = *arg1

if (result != 0)
    int32_t edx_1 = arg1[1]
    int32_t* var_28_2 = arg1
    int32_t var_2c_1 = edx_1
    sub_51dce0(result, edx_1)
    int32_t var_30_1 = *arg1
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
