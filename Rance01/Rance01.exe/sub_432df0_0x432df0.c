// 函数: sub_432df0
// 地址: 0x432df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bf39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_12c
int32_t eax_2 = data_78c474 ^ &var_12c
int32_t __saved_edi
int32_t var_140 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_12c = arg2
int32_t var_10c = 0xf
int32_t var_110 = 0
char var_120 = 0
sub_401270(&var_120, nullptr, 0x72da25)
int32_t var_4 = 0
var_4.b = 1
void var_e8
sub_5ee3e0(sub_5edbc0(0, arg5, &var_e8, arg4, var_12c, &var_120), arg3 + 0x178)
sub_4329b0(&var_e8)
int32_t var_4_1 = 0xffffffff

if (var_10c u>= 0x10)
    int32_t var_144_1 = var_120.d
    sub_6b4d5b()

int32_t var_f0 = 0xf
int32_t var_f4 = 0
char var_104 = 0
sub_401270(&var_104, nullptr, 0x72da26)
int32_t var_4_2 = 2
var_4_2.b = 3
void var_7c
sub_5ee3e0(sub_5edbc0(0, arg5, &var_7c, arg1, var_12c, &var_104), arg3 + 0x188)
int32_t result = sub_4329b0(&var_7c)

if (var_f0 u>= 0x10)
    int32_t var_144_3 = var_104.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_12c)
return result
