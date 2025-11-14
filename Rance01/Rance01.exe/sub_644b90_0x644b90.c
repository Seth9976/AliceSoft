// 函数: sub_644b90
// 地址: 0x644b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c8a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = arg2
int32_t var_68 = 0
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
sub_401270(&var_64, nullptr, &data_75adcc)
int32_t var_4 = 0
int32_t eax_6 = arg1[8]
void* const var_84
void* edi

if (eax_6 u> 3)
    var_84 = &data_75adf0
    edi = 3
else
    switch (eax_6)
        case 0
            var_84 = &data_75add0
            edi = 4
        case 1
            var_84 = &data_75add8
            edi = 4
        case 2
            var_84 = &data_75ade0
            edi = 4
        case 3
            var_84 = &data_75ade8
            edi = 5

sub_401270(&var_64, edi, var_84)
void* const edx = &data_75adf4

if (arg1[9].b == 0)
    edx = &data_75adf8

void* const eax_7 = edx
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* esi_2 = eax_7 + 1
char i

do
    i = *eax_7
    eax_7 += 1
while (i != 0)
sub_401270(&var_2c, eax_7 - esi_2, edx)
var_4.b = 1
void* const edx_1 = &data_75adf4

if (*(arg1 + 0x25) == 0)
    edx_1 = &data_75adf8

void* const eax_9 = edx_1
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
void* esi_4 = eax_9 + 1
char i_1

do
    i_1 = *eax_9
    eax_9 += 1
while (i_1 != 0)
sub_401270(&var_48, eax_9 - esi_4, edx_1)
var_4.b = 2
char* edx_2 = var_48.d

if (var_34 u< 0x10)
    edx_2 = &var_48

char* ecx_1 = var_2c.d

if (var_18 u< 0x10)
    ecx_1 = &var_2c

char* eax_11 = var_64.d

if (var_50 u< 0x10)
    eax_11 = &var_64

int32_t var_84_3 = arg1[7]
int32_t result = result_1
char* var_88 = edx_2
char* var_8c = ecx_1
char* var_90 = eax_11
int32_t var_94 = arg1[6]
int32_t var_98 = arg1[5]
int32_t var_9c = arg1[4]
int32_t var_a0 = arg1[3]
int32_t var_a4 = arg1[2]
int32_t var_a8 = arg1[1]
int32_t var_ac = *arg1
sub_4104a0("  %10d (%5d,%5d) [%5dx%5d] %3d %10d %5s %4s %4s%d")

if (var_34 u>= 0x10)
    int32_t var_84_4 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_18 u>= 0x10)
    int32_t var_84_5 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_50 u>= 0x10)
    int32_t var_84_6 = var_64.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
