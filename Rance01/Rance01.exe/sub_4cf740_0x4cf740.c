// 函数: sub_4cf740
// 地址: 0x4cf740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_410070(arg1, &var_2c) != 0)
    if (sub_402680(0x755f14, &var_2c) == 0)
        goto label_4cf7f4
    
    uint32_t var_30
    
    if (sub_5546f0(arg1, &var_30) == 0)
        goto label_4cf7a0
    
    uint32_t eax_5 = var_30
    
    if (eax_5 != 0)
        uint32_t var_44_3 = eax_5
        sub_51ddc0(0x755f18)
    label_4cf7f4:
        
        if (var_18 u< 0x10)
            result = 0
        else
            int32_t var_44_4 = var_2c.d
            sub_6b4d5b()
            result = 0
    else
        *(arg2 + 4) = eax_5
        sub_401110(&var_2c)
        result = 1
else
label_4cf7a0:
    
    if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_44_1 = var_2c.d
        sub_6b4d5b()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
