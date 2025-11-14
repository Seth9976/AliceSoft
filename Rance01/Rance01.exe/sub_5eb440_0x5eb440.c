// 函数: sub_5eb440
// 地址: 0x5eb440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    do
        void* eax_5 = arg1 + 0x18
        
        if (*(arg1 + 0x2c) u>= 0x10)
            eax_5 = *eax_5
        
        int32_t var_40_1 = *(arg1 + 0x34) + i
        int32_t var_4 = 0
        result = sub_405150(sub_4104a0(eax_5), arg2)
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_40_3 = var_2c
            result = sub_6b4d5b()
        
        i += 1
    while (i s< *(arg1 + 0x38))

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
