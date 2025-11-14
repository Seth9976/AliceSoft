// 函数: sub_6b0390
// 地址: 0x6b0390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7137e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_64 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = *(arg3 + 4)
void** eax_3 = ecx[1]
void** esi = ecx

while (*(eax_3 + 0x31) == 0)
    if (eax_3[3] u>= *arg2)
        esi = eax_3
        eax_3 = *eax_3
    else
        eax_3 = eax_3[2]

if (esi == *(arg3 + 4) || *arg2 u< esi[3])
    int32_t var_50 = 0
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_40 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_4 = 0
    int32_t var_30 = *arg2
    int32_t var_2c
    int32_t* var_54 = &var_2c
    sub_6b05e0(&var_2c, &var_50)
    var_4.b = 1
    int32_t var_1c
    sub_6b05e0(&var_1c, &var_40)
    int32_t* var_68_3 = &var_30
    var_4.b = 2
    sub_6b0a40(arg3, &var_54, esi, sub_6b0b70(arg3))
    int32_t eax_7 = var_1c
    esi = var_54
    
    if (eax_7 != 0)
        int32_t var_68_5 = eax_7
        sub_6b4d5b()
    
    int32_t eax_8 = var_2c
    var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    
    if (eax_8 != 0)
        int32_t var_68_6 = eax_8
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[4]
