// 函数: sub_408420
// 地址: 0x408420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t edi
int32_t var_50 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_6 = (**arg1)(data_78c474 ^ &var_50)
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
char eax_8 = sub_40bfe0(&var_2c, &var_44)

if (var_18 u>= 0x10)
    int32_t var_58_1 = var_2c.d
    sub_6b4d5b()

uint32_t eax_10 = zx.d(eax_8)
int32_t eax_11 = neg.d(eax_10)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
int32_t var_40
return sbb.d(eax_11, eax_11, eax_10 != 0) & var_40
