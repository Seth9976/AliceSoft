// 函数: sub_59b770
// 地址: 0x59b770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 != 0)
    int32_t __saved_edi
    eax_3 = (*(*arg2 + 8))(data_78c474 ^ &__saved_edi)
    
    if (eax_3 s> 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_28 = nullptr
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        sub_65a090(&var_28, eax_3)
        int32_t esi_2 = 0
        int32_t var_c_1 = 0
        
        if (eax_3 s<= 0)
        label_59b7fd:
            struct _EXCEPTION_REGISTRATION_RECORD** esi_5 = var_28
            
            if (*esi_5 != 0x41 || esi_5[1] != 0x44 || esi_5[2] != 0x53 || esi_5[3] != 0
                    || esi_5[4] != 3)
                struct _EXCEPTION_REGISTRATION_RECORD** var_50_3 = esi_5
                sub_6b4d5b()
                int32_t eax_8
                eax_8.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
            
            int32_t edx_3 = esi_5[5]
            int32_t var_30 = 6
            sub_59b460(arg1)
            int32_t var_38 = 0
            
            if (edx_3 s> 0)
                int32_t eax_14
                
                do
                    int32_t* eax_9 = operator new(0x64)
                    int32_t* edi_3
                    
                    if (eax_9 == 0)
                        edi_3 = nullptr
                    else
                        *eax_9 = 0
                        eax_9[6] = 0xf
                        eax_9[5] = 0
                        eax_9[1].b = 0
                        eax_9[8] = 0
                        eax_9[9] = 0
                        eax_9[0xa] = 0
                        __builtin_memset(&eax_9[0xc], 0, 0x20)
                        eax_9[0x15] = 0
                        eax_9[0x16] = 0
                        eax_9[0x17] = 0
                        edi_3 = eax_9
                    
                    int32_t* var_2c = edi_3
                    
                    if (sub_59a980(&var_30, &var_28, edi_3) == 0)
                        if (edi_3 != 0)
                            sub_59a220(edi_3)
                            int32_t* var_50_8 = edi_3
                            sub_6b4d5b()
                        
                        struct _EXCEPTION_REGISTRATION_RECORD** var_50_9 = var_28
                        sub_6b4d5b()
                        int32_t eax_16
                        eax_16.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_16
                    
                    void* esi_4 = *arg1
                    int32_t* eax_12 = sub_576850(esi_4, *(esi_4 + 4), &var_2c)
                    int32_t ecx_8 = arg1[1]
                    
                    if (0x3ffffffe - ecx_8 u< 1)
                        sub_6b47bf("list<T> too long")
                        noreturn
                    
                    arg1[1] = ecx_8 + 1
                    *(esi_4 + 4) = eax_12
                    *eax_12[1] = eax_12
                    eax_14 = var_38 + 1
                    var_38 = eax_14
                while (eax_14 s< edx_3)
                esi_5 = var_28
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_50_7 = esi_5
            sub_6b4d5b()
            int32_t eax_15
            eax_15.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        
        while (true)
            int32_t* eax_6 = (*(*arg2 + 0x10))(esi_2)
            
            if (eax_6 == 0)
                eax_3 = var_28
                
                if (eax_3 != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_50_4 = eax_3
                    sub_6b4d5b()
                
                break
            
            var_28[esi_2] = *eax_6
            esi_2 += 1
            
            if (esi_2 s>= eax_3)
                goto label_59b7fd

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
