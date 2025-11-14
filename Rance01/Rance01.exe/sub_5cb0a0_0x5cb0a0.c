// 函数: sub_5cb0a0
// 地址: 0x5cb0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = data_797d80
char result = sub_5cadb0(esi)

if (result != 0)
    result = sub_5cb150(esi)
    
    if (result != 0)
        sub_5cb210(&var_2c, esi)
        int32_t var_4 = 0
        int32_t* eax_5 = var_2c
        int32_t var_18
        
        if (var_18 u< 0x10)
            eax_5 = &var_2c
        
        result = (*(**(esi + 0x2c) + 4))(eax_5)
        
        if (var_18 u>= 0x10)
            int32_t* var_38_4 = var_2c
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
