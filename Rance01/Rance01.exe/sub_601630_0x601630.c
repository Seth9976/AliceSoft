// 函数: sub_601630
// 地址: 0x601630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg3)(data_78c474 ^ &__saved_edi)
char* ecx = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
int128_t* esi_2 = (**arg5)()
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char* ecx_4 = esi_2
int128_t* eax_8

do
    eax_8.b = *ecx_4
    ecx_4 = &ecx_4[1]
while (eax_8.b != 0)
sub_401270(&var_48, ecx_4 - (esi_2 + 1), esi_2)
var_4.b = 1
void* result = sub_5f7370(*data_797da0, arg4)
char var_49

if (result != 0)
    var_49 = sub_5f43a0(&var_2c, result, &var_48, arg6, arg7, arg9).b
else
    var_49 = 0

if (var_34 u>= 0x10)
    int32_t var_68_3 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_18 u>= 0x10)
    int32_t var_68_4 = var_2c.d
    sub_6b4d5b()

result.b = var_49
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
