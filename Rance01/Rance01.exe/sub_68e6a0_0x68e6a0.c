// 函数: sub_68e6a0
// 地址: 0x68e6a0
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
        (*(**i + 0x34))(*(arg1 + 0xac), arg3)
    
    result = sub_6926d0(arg1 - 4)
    
    if (result.b == 0)
        if (arg3 == 1)
            result = *(*(arg1 + 0x1c) + 8)
            
            if (arg2 != result && arg2 != *(*(arg1 + 0x20) + 8))
                var_38 = 0
                int32_t var_34 = 0
                sub_41d600(&var_38, &var_34)
                void var_2c
                sub_426250(&var_2c, arg1 + 0x5c, arg1 + 0x78)
                int32_t var_4 = 0
                int32_t* edi_1 = *(arg1 + 0x94)
                int32_t eax_9 = (*(*edi_1 + 0x28))(eax_4)
                int32_t eax_11 = (*(*edi_1 + 0x24))(var_34 - *(arg1 + 0x44) - eax_9)
                sub_6909f0(&var_2c, arg1 - 4, *(arg1 + 0x94), var_38 - *(arg1 + 0x44) - eax_11)
                *(arg1 + 0x4a) = 1
                result = sub_401110(&var_2c)
        else if (arg3 == 0x10)
            if (*(arg1 + 0x4c) == 0xffffffff)
                result = sub_695c40(arg1 + 0x5c)
                *(arg1 + 0x4c) = result
            
            *(arg1 + 0x48) = 1
        else if (arg3 == 0x11)
            *(arg1 + 0x49) = 1
        else if (arg3 == 0x25 || arg3 == 0x27 || arg3 == 8 || arg3 == 0x26 || arg3 == 0x28
                || arg3 == 0x2e || arg3 == 0xd)
            *(arg1 + 0x54) = 0
            *(arg1 + 0x4a) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
