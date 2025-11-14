// 函数: sub_40c2d0
// 地址: 0x40c2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7156ca
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_40cd10(arg1 + 0x18)
var_4.b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_40c4b0(sub_40c4b0(sub_40cd10(arg1 + 0x38), arg1 + 0x30), arg1 + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return result
