// 函数: sub_4371f0
// 地址: 0x4371f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711e6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
var_4.b = 2
sub_404f60(0x200, arg1)

for (char* i = nullptr; i s< 0x100; i = &i[1])
    i[*arg1] = i.b

sub_6bc670(*arg1 + 0x100, 0xff, 0x100)
sub_4372f0(arg1)
sub_437370(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
