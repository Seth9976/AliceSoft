// 函数: sub_4078a0
// 地址: 0x4078a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg3)(data_78c474 ^ &__saved_edi)
char* ecx = eax_6
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_30, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
int32_t var_3c = arg6
int32_t var_40
int32_t* var_5c_1 = &var_40
int32_t var_38 = arg7
int32_t var_34 = arg8
int32_t* eax_8 = *(data_797d2c + 0x30)
var_40 = arg5
char result = sub_40b370(&var_30, eax_8, arg4)

if (var_1c u>= 0x10)
    int32_t var_5c_2 = var_30.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
