// 函数: sub_6324e0
// 地址: 0x6324e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result
char ecx_2
result, ecx_2 = (*(*(*(**(arg1 + 0x10) + 0x10))(2) + 0xc))(arg2)

if (result == 0)
    char* eax_8 = arg2
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char i
    
    do
        i = *eax_8
        eax_8 = &eax_8[1]
    while (i != 0)
    sub_401270(&var_2c, eax_8 - &eax_8[1], arg2)
    int32_t var_4 = 0
    result = sub_632c90(arg1 + 0x24, &var_2c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_3 = var_2c.d
        sub_6b4d5b()
    
    result = result != 0
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
