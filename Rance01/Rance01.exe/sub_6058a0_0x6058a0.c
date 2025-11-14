// 函数: sub_6058a0
// 地址: 0x6058a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7195d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *arg2
data_797dbc = arg1 + 0x7e8
int32_t* esi = (*(edx + 4))(0x735340)
int32_t* result

if (esi != 0)
    result = (**esi)(0x735350)

if (esi == 0 || result == 0)
    result.b = 0
else
    *(arg1 + 0xc8) = (**esi)("|.Pd")
    int128_t* esi_1 = (*(*result + 0x14))(eax_4)
    char* ecx_4 = esi_1
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    int128_t* eax_11
    
    do
        eax_11.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_11.b != 0)
    int32_t var_4 = 0
    char var_64
    sub_401940(&var_64, sub_401270(&var_80, ecx_4 - &ecx_4[1], esi_1), &var_80)
    char* var_a0_2 = &var_64
    var_4.b = 1
    char var_48
    sub_402c60(&var_48, ".DebugA", nullptr)
    var_4.b = 2
    sub_401ef0(arg1 + 0xac, &var_48)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_a0_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_a0_4 = var_64.d
        sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_6c_1 u>= 0x10)
        int32_t var_a0_5 = var_80.d
        sub_6b4d5b()
    
    int128_t* esi_5 = (*(*result + 0x18))()
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    char* ecx_10 = esi_5
    int128_t* eax_16
    
    do
        eax_16.b = *ecx_10
        ecx_10 = &ecx_10[1]
    while (eax_16.b != 0)
    sub_401270(&var_80, ecx_10 - (esi_5 + 1), esi_5)
    int32_t var_4_2 = 3
    sub_401180(arg1 + 0xa8c, 0xffffffff, &var_80, 0)
    int32_t var_4_3 = 0xffffffff
    
    if (var_6c_2 u>= 0x10)
        int32_t var_a0_7 = var_80.d
        sub_6b4d5b()
    
    int128_t* esi_7 = (*(*result + 0x18))()
    char* ecx_15 = esi_7
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int128_t* eax_18
    
    do
        eax_18.b = *ecx_15
        ecx_15 = &ecx_15[1]
    while (eax_18.b != 0)
    void* var_a0_9 = arg1 + 0xcc
    int32_t var_4_4 = 4
    result.b = sub_60e0f0(sub_401270(&var_2c, ecx_15 - &ecx_15[1], esi_7)).b != 0
    bool var_85_1 = result.b == 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_a0_10 = var_2c.d
        sub_6b4d5b()
    
    result.b = var_85_1 == 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
