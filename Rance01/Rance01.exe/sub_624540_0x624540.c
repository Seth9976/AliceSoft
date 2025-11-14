// 函数: sub_624540
// 地址: 0x624540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t esi = 0
int32_t __saved_esi

if ((*(**(arg1 + 4) + 0x2c))(data_78c474 ^ &__saved_esi) - 1 s> 0)
    int32_t eax_12
    
    do
        int32_t var_18_1 = 0xf
        int32_t result_1 = 0
        var_2c = 0
        int32_t var_4 = 0
        sub_624480(arg1, &var_2c, esi)
        
        if (result s< result_1)
            result = result_1
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_40_2 = var_2c.d
            sub_6b4d5b()
        
        int32_t eax_10 = *(**(arg1 + 4) + 0x2c)
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        esi += 1
        eax_12 = eax_10() - 1
    while (esi s< eax_12)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
