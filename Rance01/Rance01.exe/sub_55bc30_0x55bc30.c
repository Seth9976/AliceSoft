// 函数: sub_55bc30
// 地址: 0x55bc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg2 + 0x24) != 4
var_38 = arg3
void*** result

if (cond:0)
    result.b = 0
else
    char* eax_5 = arg1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    sub_401270(&var_2c, eax_5 - &eax_5[1], arg1)
    int32_t var_4 = 0
    void** eax_8 = sub_429b30(arg2 + 0x10, &var_2c)
    void** var_34 = eax_8
    void** var_30
    
    if (eax_8 == *(arg2 + 0x14))
        var_30 = *(arg2 + 0x14)
        result = &var_30
    else if (sub_405dd0(&eax_8[3], &var_2c) != 0)
        var_30 = *(arg2 + 0x14)
        result = &var_30
    else
        result = &var_34
    void** esi_3 = *result
    
    if (var_18_1 u>= 0x10)
        int32_t var_50_3 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (esi_3 == *(arg2 + 0x14))
        void** ebp_1 = *(arg2 + 0x20)
        
        if (ebp_1 == 0xffffffff)
            result.b = 0
        else
            *var_38 = ebp_1
            result.b = 1
    else
        *var_38 = esi_3[0xa]
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
