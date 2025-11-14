// 函数: sub_565740
// 地址: 0x565740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7249d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_90
int32_t eax_2 = data_78c474 ^ &var_90
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_7 = (*(*(arg1 + 0x14) + 4))(data_78c474 ^ &__saved_edi)
int32_t eax_9 = (*(*(arg1 + 0x14) + 8))()
void* eax_10 = *(arg1 + 0x394)

if (eax_10 != 0)
    *(eax_10 + 0xc) = *(arg1 + 0x108)

*(arg1 + 0x4c8) = arg1
*(arg1 + 0x4c0) = arg1
int128_t* esi = (*(*(arg1 + 0x14) + 0x24))()
char* ecx_4 = esi
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
int128_t* eax_12

do
    eax_12.b = *ecx_4
    ecx_4 = &ecx_4[1]
while (eax_12.b != 0)
int32_t var_4 = 0
var_4.b = 1
char var_2c
int128_t* eax_15
int32_t* ecx_8
eax_15, ecx_8 = (*(*(arg1 + 0x4fc) + 8))(sub_401800(sub_401270(&var_80, ecx_4 - &ecx_4[1], esi), 
    &var_80, &var_2c))
char var_64
sub_567130(&var_64, eax_15, ecx_8)
var_4.b = 2
var_4.b = 3
char var_48
void* ebx
ebx.b = sub_567870(&var_64, arg1 + 0x110, arg2, eax_7, eax_9, sub_567100(&var_48, arg1)) == 0
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_a8_4 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_a8_5 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_a8_6 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (var_6c u>= 0x10)
    int32_t var_a8_7 = var_80.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_90)
return ebx.b == 0
