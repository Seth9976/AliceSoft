// 函数: sub_55f100
// 地址: 0x55f100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_50
int32_t eax_2 = data_78c474 ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_7 = (**arg1)(data_78c474 ^ &__saved_edi)
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
    char* var_68_2 = &var_48
    eax_9 = sub_537e90(ecx_2, *(ecx_2[5] + 4) + 0x4c)
    int32_t var_4_1 = 0xffffffff
    var_50 = eax_9
    
    if (var_34_1 u>= 0x10)
        int32_t var_68_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

int32_t result

if (eax_7 == 0 || eax_9 == 0)
    result = 0
else
    int32_t var_18_1 = 0xf
    char* eax_11 = arg2
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *eax_11
        eax_11 = &eax_11[1]
    while (i_1 != 0)
    sub_401270(&var_2c, eax_11 - &eax_11[1], arg2)
    int32_t var_4_2 = 1
    int32_t eax_13 = sub_55b020(var_50, &var_2c)
    int32_t var_4_3 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_68_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t eax_14 = *(*arg1 + 0xc)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    result = eax_14(eax_13)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
