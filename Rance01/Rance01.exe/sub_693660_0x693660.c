// 函数: sub_693660
// 地址: 0x693660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x6c) != 0)
    for (int32_t* i = *(arg1 + 0x74); i != *(arg1 + 0x78); i = &i[1])
        (*(**i + 0x30))(*(arg1 + 0x84), arg2)
    
    result = sub_695bc0()
    
    if (result == 0 && arg2 == 1)
        char* eax_7 = data_797d44
        var_34 = 0
        int32_t var_30 = 0
        
        if (sub_424db0(eax_7) != 0)
            (***(eax_7 + 8))(&var_34, &var_30)
        
        int32_t var_2c
        sub_426250(&var_2c, arg1 + 0x30, arg1 + 0x4c)
        int32_t var_4 = 0
        int32_t eax_11 = (*(**(arg1 + 0x6c) + 0x24))(eax_4)
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = sx.q(*(arg1 + 8))
        result = sub_695460(&var_2c, arg1 - 4, *(arg1 + 0x6c), 
            var_34 - ((eax_13 - edx_5) s>> 1) - eax_11)
        *(arg1 + 0x24) = *(arg1 + 0x40)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_48_6 = var_2c
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
