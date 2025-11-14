// 函数: sub_598860
// 地址: 0x598860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725f90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 != 0)
    int32_t __saved_esi
    eax_3 = (*(*arg2 + 8))(data_78c474 ^ &__saved_esi)
    
    if (eax_3 s> 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_48 = nullptr
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        sub_65a090(&var_48, eax_3)
        int32_t esi_2 = 0
        int32_t var_c_1 = 0
        
        if (eax_3 s<= 0)
        label_5988ef:
            struct _EXCEPTION_REGISTRATION_RECORD** esi_6 = var_48
            
            if (*esi_6 != 0x41 || esi_6[1] != 0x44 || esi_6[2] != 0x4c || esi_6[3] != 0
                    || esi_6[4] != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** var_68_3 = esi_6
                sub_6b4d5b()
                int32_t eax_8
                eax_8.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
            
            int32_t edx_3 = esi_6[5]
            int32_t var_4c = 6
            sub_598bf0(arg1)
            int32_t* var_68_6 = arg1
            int32_t ecx_9
            int32_t edx_4
            ecx_9, edx_4 = sub_598b20()
            arg1[5].b = 1
            int32_t var_54_2 = 0
            
            if (edx_3 s> 0)
                int32_t eax_16
                
                do
                    int32_t* var_38 = nullptr
                    int32_t var_34_1 = 0
                    int32_t var_30_1 = 0
                    sub_4bc7e0(1, edx_4, ecx_9, &var_38)
                    int32_t var_28_1 = 0
                    int32_t var_24_1 = 0
                    int32_t var_20_1 = 0
                    var_c_1.b = 1
                    int32_t* esi_4 = *arg1
                    int32_t* eax_9 = sub_598dd0(esi_4, esi_4[1], &var_38)
                    int32_t ecx_11 = arg1[1]
                    
                    if (0x7fffffe - ecx_11 u< 1)
                        sub_6b47bf("list<T> too long")
                        noreturn
                    
                    arg1[1] = ecx_11 + 1
                    esi_4[1] = eax_9
                    *eax_9[1] = eax_9
                    var_c_1.b = 0
                    int32_t* eax_10 = var_38
                    
                    if (eax_10 != 0)
                        int32_t* esi_5 = eax_10
                        
                        if (eax_10 != var_34_1)
                            do
                                if (esi_5[5] u>= 0x10)
                                    int32_t var_68_8 = *esi_5
                                    sub_6b4d5b()
                                    eax_10 = var_38
                                
                                esi_5[5] = 0xf
                                esi_5[4] = 0
                                *esi_5 = 0
                                esi_5 = &esi_5[7]
                            while (esi_5 != var_34_1)
                        
                        int32_t* var_68_9 = eax_10
                        sub_6b4d5b()
                    
                    char eax_14
                    eax_14, ecx_9, edx_4 = sub_598170(*(*arg1 + 4) + 8, &var_48, &var_4c)
                    
                    if (eax_14 == 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** var_68_12 = var_48
                        sub_6b4d5b()
                        int32_t eax_19
                        eax_19.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_19
                    
                    eax_16 = var_54_2 + 1
                    var_54_2 = eax_16
                while (eax_16 s< edx_3)
                esi_6 = var_48
            
            int32_t eax_17 = var_4c
            struct _EXCEPTION_REGISTRATION_RECORD** var_68_11 = esi_6
            ecx_9.b = esi_6[eax_17] != 0
            arg1[5].b = ecx_9.b
            arg1[6] = esi_6[eax_17 + 1]
            sub_6b4d5b()
            int32_t eax_18
            eax_18.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_18
        
        while (true)
            int32_t* eax_6 = (*(*arg2 + 0x10))(esi_2)
            
            if (eax_6 == 0)
                eax_3 = var_48
                
                if (eax_3 != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_68_4 = eax_3
                    sub_6b4d5b()
                
                break
            
            var_48[esi_2] = *eax_6
            esi_2 += 1
            
            if (esi_2 s>= eax_3)
                goto label_5988ef

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
