// 函数: sub_68e540
// 地址: 0x68e540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x94) != 0)
    for (int32_t* i = *(arg1 + 0x9c); i != *(arg1 + 0xa0); i = &i[1])
        (*(**i + 0x30))(*(arg1 + 0xac), arg3)
    
    result = sub_6926d0(arg1 - 4)
    
    if (result.b == 0 && arg3 == 1 && *(arg1 + 0x48) == result.b)
        result = *(*(arg1 + 0x1c) + 8)
        
        if (arg2 != result && arg2 != *(*(arg1 + 0x20) + 8))
            var_38 = 0
            int32_t var_34 = 0
            sub_41d600(&var_38, &var_34)
            void var_2c
            sub_426250(&var_2c, arg1 + 0x5c, arg1 + 0x78)
            int32_t var_4 = 0
            int32_t* ebx_2 = *(arg1 + 0x94)
            int32_t eax_8 = (*(*ebx_2 + 0x28))(eax_4)
            int32_t eax_10 = (*(*ebx_2 + 0x24))(var_34 - *(arg1 + 0x44) - eax_8)
            sub_6909f0(&var_2c, arg1 - 4, *(arg1 + 0x94), var_38 - *(arg1 + 0x44) - eax_10)
            *(arg1 + 0x4c) = sub_695c40(arg1 + 0x5c)
            result = sub_401110(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
