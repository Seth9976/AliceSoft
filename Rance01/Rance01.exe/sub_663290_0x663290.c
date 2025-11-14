// 函数: sub_663290
// 地址: 0x663290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713996
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
char* result_1 = result
*result = *arg2
arg1.b = arg2[1]
result[1] = arg1.b
sub_663350(&result[4], &arg2[4])
int32_t var_4 = 0
*(result + 0x14) = *(arg2 + 0x14)
*(result + 0x2c) = 0xf
*(result + 0x28) = 0
result[0x18] = 0
sub_401180(&result[0x18], 0xffffffff, &arg2[0x18], 0)
var_4.b = 1
*(result + 0x34) = *(arg2 + 0x34)
*(result + 0x38) = fconvert.s(fconvert.t(*(arg2 + 0x38)))
*(result + 0x50) = 0xf
*(result + 0x4c) = 0
result[0x3c] = 0
sub_401180(&result[0x3c], 0xffffffff, &arg2[0x3c], 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
