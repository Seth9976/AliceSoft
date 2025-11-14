// 函数: sub_540930
// 地址: 0x540930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723c38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t var_64 = **(arg1 + 0x2b0)
void var_24
_swprintf(&var_24, 0x10, 0x74dd4c)
void* eax_7 = &var_24
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
char i

do
    i = *eax_7
    eax_7 += 1
while (i != 0)
void var_23
sub_401270(&var_40, eax_7 - &var_23, &var_24)
int32_t var_4 = 0
int32_t var_44
int32_t* eax_9
int32_t edx
eax_9, edx = sub_552d50(arg1 + 0x1dc, &var_40, &var_44)
bool var_45 = eax_9.b == 0
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    int32_t var_64_3 = var_40.d
    eax_9, edx = sub_6b4d5b()

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0
int32_t* result

if (var_45 == 0)
    **(arg1 + 0x2b0) = var_44
    *(arg1 + 0x2b0) += 4
    result.b = 1
else
    sub_53d1c0(eax_9, edx, arg1, 0x74dd50)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
