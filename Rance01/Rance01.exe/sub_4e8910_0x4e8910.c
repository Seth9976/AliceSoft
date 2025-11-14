// 函数: sub_4e8910
// 地址: 0x4e8910
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
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 9, 0x755c94)
int32_t var_4 = 0
char* ecx = var_48.d
int128_t* eax_5 = *(arg1 + 8)
char* edi = ecx

if (var_34 u< 0x10)
    edi = &var_48
    ecx = &var_48

var_4c = arg1 + 4
void* var_64 = var_4c
sub_4102d0(arg1 + 4, eax_5, ecx, &edi[var_38])
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_1 = var_48.d
    sub_6b4d5b()

uint32_t var_68
var_68.q = fconvert.d(fconvert.t(*(arg2 + 0x5c)))
int128_t* var_70
var_70.q = fconvert.d(fconvert.t(*(arg2 + 0x58)))
double var_78 = fconvert.d(fconvert.t(*(arg2 + 0x54)))
char* eax_7 = sub_4104a0("\t\t%f, %f, %f")
int32_t var_4_2 = 1
int32_t ecx_1 = *(eax_7 + 0x14)
int32_t ebx_1 = *(eax_7 + 0x10)
char* edi_2

if (ecx_1 u< 0x10)
    edi_2 = eax_7
else
    edi_2 = *eax_7

if (ecx_1 u>= 0x10)
    eax_7 = *eax_7

void* var_64_2 = var_4c
sub_4102d0(arg1 + 4, *(arg1 + 8), eax_7, &edi_2[ebx_1])
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_3 = var_48.d
    sub_6b4d5b()

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 2, 0x755cb0)
int32_t var_4_4 = 2
int128_t* eax_8 = var_2c.d
int128_t* edx_4 = eax_8

if (var_18 u< 0x10)
    edx_4 = &var_2c
    eax_8 = &var_2c

void* var_64_4 = var_4c
sub_4102d0(var_4c, *(arg1 + 8), eax_8, edx_4 + var_1c)

if (var_18 u>= 0x10)
    int32_t var_64_5 = var_2c.d
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
