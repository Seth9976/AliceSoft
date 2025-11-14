// 函数: sub_64cfd0
// 地址: 0x64cfd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723123
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x9c) == 0)
    int32_t* eax_5 = operator new(0xb8)
    var_30 = eax_5
    int32_t var_4 = 0
    int32_t* eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_6ae3b0(eax_5)
    
    int32_t var_4_1 = 0xffffffff
    *(arg1 + 0x9c) = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, 0x13, "DPSpriteSplitWindow")
    int32_t var_4_2 = 1
    sub_658360(&var_2c, *(arg1 + 0x9c), arg2, *(arg1 + 0x18), *(arg1 + 0x60), *(arg1 + 0x64), 
        *(arg1 + 0x68), *(arg1 + 0x7c))
    int32_t var_4_3 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0xa0) != 0)
    sub_658d70(*(arg1 + 0x9c), *(arg1 + 0xa4), 0, 0)
    sub_658d70(*(arg1 + 0x9c), *(arg1 + 0xa0), 0, 1)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
