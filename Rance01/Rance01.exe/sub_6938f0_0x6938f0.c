// 函数: sub_6938f0
// 地址: 0x6938f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x6c) != 0)
    for (int32_t* i = *(arg1 + 0x74); i != *(arg1 + 0x78); i = &i[1])
        (*(**i + 0x38))(*(arg1 + 0x84), arg2)
    
    result = sub_695bc0()
    
    if (result.b != 0)
        *(arg1 + 0x20) = 1
    else if (*(arg1 + 0x20) == result.b)
        int32_t ebx_1 = *(arg1 + 0x40)
        result = *(arg1 + 0x5c)
        void var_48
        
        if (arg2 != 0x25)
            if (arg2 == 0x27)
                if (result s> 0)
                    int32_t var_4_1 = 2
                    sub_402000(arg1 + 0x30, sub_695e90(arg1 + 0x4c, &var_48), 0, 0xffffffff)
                    goto label_6939cb
                
                *(arg1 + 0x28) = 0
            else if (arg2 == 8)
                int32_t eax_11 = *(arg1 + 0x24)
                
                if (eax_11 != 0xffffffff)
                    int32_t var_98_7 = ebx_1
                    int32_t var_9c_5 = eax_11
                    result = sub_695630(*(arg1 + 0x6c), arg1 - 4)
                    *(arg1 + 0x24) = 0xffffffff
                    *(arg1 + 0x28) = 0
                else
                    sub_695c80(&var_80, arg1 + 0x30)
                    int32_t var_4_2 = 3
                    sub_402000(arg1 + 0x30, &var_80, 0, 0xffffffff)
                    int32_t var_70
                    int32_t var_98_6 = ebx_1 - var_70
                    int32_t var_9c_4 = ebx_1
                    sub_695630(*(arg1 + 0x6c), arg1 - 4)
                    result = sub_401110(&var_80)
                    *(arg1 + 0x24) = 0xffffffff
                    *(arg1 + 0x28) = 0
            else if (arg2 == 0x2e)
                int32_t eax_13 = *(arg1 + 0x24)
                
                if (eax_13 != 0xffffffff)
                    int32_t var_98_11 = ebx_1
                    int32_t var_9c_8 = eax_13
                    result = sub_695630(*(arg1 + 0x6c), arg1 - 4)
                    *(arg1 + 0x24) = 0xffffffff
                else
                    void var_64
                    sub_695e90(arg1 + 0x4c, &var_64)
                    int32_t var_4_3 = 4
                    var_4_3.b = 5
                    void var_2c
                    sub_401ef0(arg1 + 0x4c, sub_426250(&var_2c, &var_64, arg1 + 0x4c))
                    var_4_3.b = 4
                    sub_401110(&var_2c)
                    int32_t var_54
                    int32_t var_98_10 = var_54 + ebx_1
                    int32_t var_9c_7 = ebx_1
                    sub_695630(*(arg1 + 0x6c), arg1 - 4)
                    result = sub_401110(&var_64)
                    *(arg1 + 0x24) = 0xffffffff
        else if (ebx_1 s<= 0)
            *(arg1 + 0x28) = 0
        else
            char* eax_7
            int32_t edx_2
            eax_7, edx_2 = sub_695c80(&var_48, arg1 + 0x30)
            int32_t var_4 = 0
            var_4.b = 1
            sub_401ef0(arg1 + 0x4c, sub_4c1d70(arg1 + 0x4c, edx_2, eax_7, &var_80))
            sub_401110(&var_80)
        label_6939cb:
            result = sub_401110(&var_48)
            
            if (*(arg1 + 0x21) == 0)
                *(arg1 + 0x24) = 0xffffffff
            
            *(arg1 + 0x28) = 0
    else
        *(arg1 + 0x20) = result.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return result
