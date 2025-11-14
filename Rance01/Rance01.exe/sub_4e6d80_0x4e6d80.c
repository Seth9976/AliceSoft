// 函数: sub_4e6d80
// 地址: 0x4e6d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_6 = arg2 + 0xa4

if (eax_6[5] u>= 0x10)
    eax_6 = *eax_6

int32_t* var_44 = eax_6
char* eax_7 = sub_4104a0(0x755a90)
int32_t var_4 = 0
int32_t ecx = *(eax_7 + 0x14)
int32_t edi = *(eax_7 + 0x10)
char* ebx

if (ecx u< 0x10)
    ebx = eax_7
else
    ebx = *eax_7

if (ecx u>= 0x10)
    eax_7 = *eax_7

int32_t var_44_1 = var_30
sub_4102d0(arg1 + 4, *(arg1 + 8), eax_7, &ebx[edi])
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_44_2 = var_2c
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
