// 函数: sub_596850
// 地址: 0x596850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg2)(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
int32_t var_4 = 0
int128_t* eax_8 = (**arg1)()
char* ecx_4 = eax_8
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i_1

do
    i_1 = *ecx_4
    ecx_4 = &ecx_4[1]
while (i_1 != 0)
sub_401270(&var_48, ecx_4 - &ecx_4[1], eax_8)
char* lpNewFileName = var_48.d

if (var_34 u< 0x10)
    lpNewFileName = &var_48

char* lpExistingFileName = var_2c.d

if (var_18 u< 0x10)
    lpExistingFileName = &var_2c

bool var_49 = CopyFileA(lpExistingFileName, lpNewFileName, 0) == 1

if (var_34 u>= 0x10)
    int32_t var_64_2 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_18 u>= 0x10)
    int32_t var_64_3 = var_2c.d
    sub_6b4d5b()

BOOL result
result.b = var_49
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
