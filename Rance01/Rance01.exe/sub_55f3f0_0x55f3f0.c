// 函数: sub_55f3f0
// 地址: 0x55f3f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723020
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg1
var_4c = arg2
int128_t* eax_7 = (*edx)(eax_4)
void* eax_9

if (eax_7 != 0)
    char* ecx = eax_7
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    sub_401270(&var_48, ecx - &ecx[1], eax_7)
    int32_t var_4 = 0
    void** ecx_2 = arg1[1]
    char* var_64_2 = &var_48
    char ecx_3
    eax_9, ecx_3 = sub_537e90(ecx_2, *(ecx_2[5] + 4) + 0x4c)
    int32_t var_4_1 = 0xffffffff
    
    if (var_34_1 u>= 0x10)
        int32_t var_64_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

int32_t result

if (eax_7 == 0 || eax_9 == 0)
    result = 0xffffffff
else
    int128_t* esi_5 = var_4c
    int32_t var_18_1 = 0xf
    char* eax_11 = esi_5
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *eax_11
        eax_11 = &eax_11[1]
    while (i_1 != 0)
    sub_401270(&var_2c, eax_11 - &eax_11[1], esi_5)
    int32_t var_4_2 = 1
    int32_t result_1 = sub_55b020(eax_9, &var_2c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_64_5 = var_2c.d
        sub_6b4d5b()
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
