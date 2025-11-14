// 函数: sub_549a50
// 地址: 0x549a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726410
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t edi
int32_t var_5c = edi
int32_t eax_4 = data_78c474 ^ &var_5c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_54d120(arg1, 0xf, edi, arg1, &var_2c, "system.DeleteSaveFile") != 0)
    int128_t* eax_6 = (*(**(arg1 + 0x34) + 8))(eax_4)
    char* ecx_3 = eax_6
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char i
    
    do
        i = *ecx_3
        ecx_3 = &ecx_3[1]
    while (i != 0)
    sub_401270(&var_48, ecx_3 - &ecx_3[1], eax_6)
    var_4.b = 1
    int128_t* eax_8 = (*(**(arg1 + 0x38) + 0x24))()
    char* ecx_6 = eax_8
    char i_1
    
    do
        i_1 = *ecx_6
        ecx_6 = &ecx_6[1]
    while (i_1 != 0)
    sub_402cb0(&var_48, eax_8, ecx_6 - &ecx_6[1])
    int32_t ecx_9
    ecx_9.b = sub_559f50(arg1 + 0x25c, &var_48, &var_2c) != 0
    **(arg1 + 0x2b0) = ecx_9
    *(arg1 + 0x2b0) += 4
    
    if (var_34_1 u>= 0x10)
        int32_t var_64_5 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_64_6 = var_2c.d
        sub_6b4d5b()
    
    result = 1
else
    if (var_18 u>= 0x10)
        int32_t var_64_1 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
