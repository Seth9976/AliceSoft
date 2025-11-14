// 函数: sub_68e840
// 地址: 0x68e840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_10 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x94) != 0)
    for (int32_t* i = *(arg1 + 0x9c); i != *(arg1 + 0xa0); i = &i[1])
        (*(**i + 0x38))(*(arg1 + 0xac), arg3)
    
    var_6c = arg1 - 4
    result = sub_6926d0(arg1 - 4)
    
    if (result.b == 0)
        int32_t eax_7 = sub_695c40(arg1 + 0x5c)
        int32_t eax_8 = sub_695c40(arg1 + 0x78)
        void var_64
        void var_48
        
        if (arg3 == 0x25)
            if (eax_7 s> 0)
                int32_t var_4 = 0
                var_4.b = 1
                sub_401ef0(arg1 + 0x78, 
                    sub_4c1d70(arg1 + 0x78, &var_64, sub_692730(&var_48, arg1 + 0x5c), &var_64))
                sub_401110(&var_64)
                int32_t var_4_1 = 0xffffffff
                sub_401110(&var_48)
                
                if (*(arg1 + 0x48) == 0)
                    *(arg1 + 0x4c) = 0xffffffff
            
            result = sub_692000(var_6c)
        else if (arg3 == 0x27)
            if (eax_8 s> 0)
                int32_t var_4_2 = 2
                sub_402000(arg1 + 0x5c, sub_692940(arg1 + 0x78, &var_48), 0, 0xffffffff)
                int32_t var_4_3 = 0xffffffff
                sub_401110(&var_48)
                
                if (*(arg1 + 0x48) == 0)
                    *(arg1 + 0x4c) = 0xffffffff
            
            result = sub_692000(var_6c)
        else if (arg3 != 0x26)
            if (arg3 == 0x28)
                if (eax_8 s> 0)
                    sub_691b80(var_6c)
                    goto label_68e9c0
                
                result = sub_692000(var_6c)
            else if (arg3 == 8)
                int32_t eax_14 = *(arg1 + 0x4c)
                
                if (eax_14 != 0xffffffff)
                    int32_t var_84_8 = eax_7
                    int32_t var_88_5 = eax_14
                    sub_690d30(var_6c, *(arg1 + 0x94))
                    *(arg1 + 0x4c) = 0xffffffff
                else
                    sub_692730(&var_64, arg1 + 0x5c)
                    int32_t var_4_4 = 3
                    sub_402000(arg1 + 0x5c, &var_64, 0, 0xffffffff)
                    int32_t var_84_7 = eax_7 - sub_695c40(&var_64)
                    int32_t var_88_4 = eax_7
                    sub_690d30(var_6c, *(arg1 + 0x94))
                    int32_t var_4_5 = 0xffffffff
                    sub_401110(&var_64)
                    *(arg1 + 0x4c) = 0xffffffff
                
                result = sub_692000(var_6c)
            else if (arg3 == 0x2e)
                int32_t eax_18 = *(arg1 + 0x4c)
                
                if (eax_18 != 0xffffffff)
                    int32_t var_84_12 = eax_7
                    int32_t var_88_8 = eax_18
                    sub_690d30(var_6c, *(arg1 + 0x94))
                else
                    sub_692940(arg1 + 0x78, &var_64)
                    int32_t var_4_6 = 4
                    var_4_6.b = 5
                    sub_401ef0(arg1 + 0x78, sub_426250(&var_48, &var_64, arg1 + 0x78))
                    var_4_6.b = 4
                    sub_401110(&var_48)
                    int32_t var_84_11 = sub_695c40(&var_64) + eax_7
                    int32_t var_88_7 = eax_7
                    sub_690d30(var_6c, *(arg1 + 0x94))
                    int32_t var_4_7 = 0xffffffff
                    sub_401110(&var_64)
                
                *(arg1 + 0x4c) = 0xffffffff
                result = sub_692000(var_6c)
            else if (arg3 == 0xd)
                void var_2c
                sub_402be0(&var_2c, 0x72fbfc)
                int32_t var_4_8 = 6
                sub_691220(var_6c, *(arg1 + 0x94), &var_2c)
                int32_t var_4_9 = 0xffffffff
                sub_401110(&var_2c)
                result = sub_692000(var_6c)
            else if (arg3 == 0x43)
                if (*(arg1 + 0x49) != 0)
                    sub_6924b0(var_6c)
                
                result = sub_692000(var_6c)
            else if (arg3 == 0x58)
                if (*(arg1 + 0x49) != 0)
                    sub_6925b0(var_6c, *(arg1 + 0x94))
                
                result = sub_692000(var_6c)
            else if (arg3 == 0x56)
                if (*(arg1 + 0x49) != 0)
                    sub_692600(var_6c, *(arg1 + 0x94))
                
                result = sub_692000(var_6c)
            else if (arg3 == 0x41)
                if (*(arg1 + 0x49) != 0)
                    *(arg1 + 0x4c) = 0
                    sub_401140(sub_402000(arg1 + 0x5c, arg1 + 0x78, 0, 0xffffffff), 0x72cf1b, 
                        arg1 + 0x78)
                    sub_68d670(*(arg1 + 0x94), arg1 + 0x5c)
                
                result = sub_692000(var_6c)
            else if (arg3 != 1)
                result = sub_692000(var_6c)
            else
                result = arg2
                
                if (result != *(*(arg1 + 0x1c) + 8) && result != *(*(arg1 + 0x20) + 8))
                    *(arg1 + 0x54) = 0
        else if (eax_7 s<= 0)
            result = sub_692000(var_6c)
        else
            sub_6916a0(var_6c)
        label_68e9c0:
            
            if (*(arg1 + 0x48) != 0)
                result = sub_692000(var_6c)
            else
                *(arg1 + 0x4c) = 0xffffffff
                result = sub_692000(var_6c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
