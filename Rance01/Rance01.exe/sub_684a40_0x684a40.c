// 函数: sub_684a40
// 地址: 0x684a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bed3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_edi
int32_t var_b0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_9c = data_797ddc
int32_t var_84 = 0xf
int32_t var_88 = 0
char var_98 = 0
sub_401270(&var_98, nullptr, 0x72d133)
int32_t var_4 = 0
var_4.b = 1
void var_7c
sub_5ee3e0(sub_5edbc0(arg1, arg2, &var_7c, arg1, arg2, &var_98), var_9c + 0x58)
int32_t result = sub_4329b0(&var_7c)

if (var_84 u>= 0x10)
    int32_t var_b4_1 = var_98.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
