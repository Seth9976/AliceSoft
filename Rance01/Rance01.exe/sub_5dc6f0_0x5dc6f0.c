// 函数: sub_5dc6f0
// 地址: 0x5dc6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
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
void* esi_2 = data_797d9c
char* ecx_3 = var_2c.d

if (var_18 u< 0x10)
    ecx_3 = &var_2c

int32_t edi_1 = *(esi_2 + 0x30)
int32_t eax_7 = edi_1

if (edi_1 u>= var_1c)
    eax_7 = var_1c

int32_t* edx_1

if (*(esi_2 + 0x34) u< 0x10)
    edx_1 = esi_2 + 0x20
else
    edx_1 = *(esi_2 + 0x20)

int32_t* result

if (sub_402320(eax_7, edx_1, ecx_3, eax_7) != 0 || edi_1 u< var_1c)
    result = sub_401180(esi_2 + 0x20, 0xffffffff, &var_2c, 0)
else
    result.b = edi_1 != var_1c
    
    if (result != 0)
        result = sub_401180(esi_2 + 0x20, 0xffffffff, &var_2c, 0)

if (var_18 u>= 0x10)
    int32_t var_40_2 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
