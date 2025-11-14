// 函数: sub_407fe0
// 地址: 0x407fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg1)(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
int32_t var_4 = 0
int32_t eax_7

if (*(data_797d2c + 0x30) != 0)
    char* eax_8 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_8 = &var_2c
    
    eax_7 = (*(*data_797dd0 + 0x14))(eax_8)
else
    eax_7.b = 0

int32_t result
result.b = eax_7.b != 0

if (var_18 u>= 0x10)
    int32_t var_3c_2 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
