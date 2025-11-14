// 函数: sub_635210
// 地址: 0x635210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t var_30 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
char* result

if (sub_634ee0(arg1).b != 0)
    char* eax_7 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_7 = &var_2c
    
    int32_t esi
    int32_t var_34_2 = esi
    
    if (sub_6b51b5(eax_7, 0x757588) == 1)
        if (var_18 u>= 0x10)
            int32_t var_34_4 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_34_3 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
    if (var_18 u>= 0x10)
        int32_t var_34_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
