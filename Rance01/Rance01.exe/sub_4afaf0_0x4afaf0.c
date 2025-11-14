// 函数: sub_4afaf0
// 地址: 0x4afaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724e53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = data_78c474 ^ &result_1
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) != 0)
    result.b = 1
else
    int32_t __saved_edi
    result = (*(**(arg1 + 0xc) + 8))(data_78c474 ^ &__saved_edi)
    
    if (result == 0)
        result.b = 0
    else
        int32_t eax_7 = (*result)->Next(0x756860)
        result = (*result)->Next(0x756850)
        result_1 = result
        
        if (result == 0)
            result.b = 0
        else
            result = (*(**(arg1 + 0xc) + 0xc))(0x756890)
            
            if (result == 0)
                result.b = 0
            else
                int32_t eax_11 = (*(**(arg1 + 0xc) + 0xc))(0x756820)
                
                if (eax_11 != 0)
                    int32_t eax_14 = (*(**(arg1 + 0xc) + 0xc))(0x756840)
                    
                    if (eax_14 == 0)
                        (*result)->Handler()
                        result.b = 0
                    else if ((*(**(arg1 + 0xc) + 0xc))(0x756880) == 0)
                        (*result)->Handler()
                        result.b = 0
                    else
                        void var_2c
                        sub_402be0(&var_2c, (*result_1)->Next())
                        int32_t var_4 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = operator new(0x94)
                        result_1 = result_2
                        var_4.b = 1
                        char* eax_20
                        
                        if (result_2 == 0)
                            eax_20 = nullptr
                        else
                            eax_20 = sub_50a9e0(eax_14, eax_11, result_2, result, eax_7)
                        
                        var_4.b = 0
                        *(arg1 + 0x14) = eax_20
                        bool cond:0_1 = sub_50ab70(eax_20, &var_2c) != 0
                        EXCEPTION_ROUTINE* Handler = (*result)->Handler
                        
                        if (cond:0_1)
                            Handler()
                            sub_401110(&var_2c)
                            result.b = 1
                        else
                            Handler()
                            void* edi_3 = *(arg1 + 0x14)
                            
                            if (edi_3 != 0)
                                sub_50aaa0(edi_3)
                                void* var_48_4 = edi_3
                                sub_6b4d5b()
                            
                            *(arg1 + 0x14) = 0
                            sub_401110(&var_2c)
                            result.b = 0
                else
                    (*result)->Handler()
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
