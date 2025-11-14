// 函数: sub_6232d0
// 地址: 0x6232d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t __saved_edi

if ((*(**(arg1 + 8) + 8))((*(**(arg1 + 4) + 0x18))((*(**(arg1 + 4) + 8))(data_78c474
        ^ &__saved_edi))) s> 0)
    int32_t edi_1 = 0
    int32_t eax_17
    
    do
        int32_t var_18_1 = 0xf
        int32_t result_1 = 0
        var_2c = 0
        int32_t var_4 = 0
        sub_623570(arg1, edi_1, &var_2c)
        
        if (result s< result_1)
            result = result_1
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_44_3 = var_2c.d
            sub_6b4d5b()
        
        int32_t edx_4 = *(**(arg1 + 4) + 8)
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        edi_1 += 1
        eax_17 = (*(**(arg1 + 8) + 8))((*(**(arg1 + 4) + 0x18))(edx_4()))
    while (edi_1 s< eax_17)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
