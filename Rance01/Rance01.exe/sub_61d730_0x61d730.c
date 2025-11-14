// 函数: sub_61d730
// 地址: 0x61d730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_4 = 0
int128_t* esi = (***(arg1 + 0xc60))((*(**(arg1 + 0xc5c) + 0x18))((*(**(arg1 + 0xc5c) + 8))(eax_4)))

if (esi != 0)
    char* ecx_3 = esi
    int128_t* eax_10
    
    do
        eax_10.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_10.b != 0)
    sub_401270(&var_48, ecx_3 - &ecx_3[1], esi)

*(arg1 + 0xc1c) = sub_6251e0(arg1 + 0xc58)
sub_401180(arg1 + 0xc20, 0xffffffff, &var_48, 0)
var_4.b = 1
int32_t var_2c
sub_401180(arg1 + 0xc3c, 0xffffffff, sub_62a230(arg1 + 0x388, &var_2c), 0)
var_4.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_4 = var_2c
    sub_6b4d5b()

LRESULT result = sub_61fb20(arg1 + 0xbf4)

if (var_34 u>= 0x10)
    int32_t var_60_6 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
