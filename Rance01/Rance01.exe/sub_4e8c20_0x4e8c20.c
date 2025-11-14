// 函数: sub_4e8c20
// 地址: 0x4e8c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x17, 0x755cf8)
int32_t var_4 = 0
char* ecx = var_48.d
char* esi_1 = ecx

if (var_34 u< 0x10)
    esi_1 = &var_48
    ecx = &var_48

void* var_64 = var_4c
sub_4102d0(arg1 + 4, *(arg1 + 8), ecx, &esi_1[var_38])
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_1 = var_48.d
    sub_6b4d5b()

int32_t var_64_2 = *(var_4c + 0x68)
char* eax_9 = sub_4104a0("\t\t%d")
int32_t var_4_2 = 1
int32_t ecx_2 = *(eax_9 + 0x14)
int32_t esi_4 = *(eax_9 + 0x10)
char* edi

if (ecx_2 u< 0x10)
    edi = eax_9
else
    edi = *eax_9

if (ecx_2 u>= 0x10)
    eax_9 = *eax_9

void* var_64_3 = var_4c
sub_4102d0(arg1 + 4, *(arg1 + 8), eax_9, &edi[esi_4])
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_4 = var_48.d
    sub_6b4d5b()

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 2, 0x755d18)
int32_t var_4_4 = 2
char* eax_10 = var_2c.d
char* edx_4 = eax_10

if (var_18 u< 0x10)
    edx_4 = &var_2c
    eax_10 = &var_2c

void* var_64_5 = var_4c
sub_4102d0(arg1 + 4, *(arg1 + 8), eax_10, &edx_4[var_1c])

if (var_18 u>= 0x10)
    int32_t var_64_6 = var_2c.d
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
