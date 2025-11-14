// 函数: sub_5fd370
// 地址: 0x5fd370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_727e60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_48 = edi

if (*(edi + 0x44) != 0)
    int32_t* eax_5 = *(edi + 0x40)
    int32_t* esi_1 = *eax_5
    int32_t* var_50 = esi_1
    int32_t var_40
    int32_t* var_38
    
    if (esi_1 != eax_5)
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = esi_1[2] + 0x38
            result_1 = result_2
            void* eax_7 = sub_405360(result_2, &(*U"\\n\n\n\n\n\n\n\n")[6], 1)
            
            if (eax_7 != 0xffffffff)
                char* eax_13 = sub_401ec0(result_1, &var_38, eax_7 + 1, 0xffffffff)
                int32_t var_c_1 = 0
                sub_401ef0(result_1, eax_13)
                int32_t var_c_2 = 0xffffffff
                int32_t var_24
                
                if (var_24 u>= 0x10)
                    int32_t* var_68_4 = var_38
                    sub_6b4d5b()
                
                if (result_1[4] == 0)
                    int32_t* edi_2 = var_50
                    void* esi_4 = edi_2[2]
                    
                    if (esi_4 != 0)
                        sub_5fc580(esi_4)
                    
                    sub_5feeb0(var_48 + 0x40, &var_40, edi_2)
                
                edi = var_48
                break
            
            void* eax_8 = esi_1[2]
            
            if (eax_8 != 0)
                if (*(eax_8 + 0x4c) u>= 0x10)
                    int32_t var_68_1 = *(eax_8 + 0x38)
                    sub_6b4d5b()
                
                *(eax_8 + 0x4c) = 0xf
                *(eax_8 + 0x48) = 0
                void* var_68_2 = eax_8
                *(eax_8 + 0x38) = 0
                sub_6b4d5b()
            
            int32_t* eax_11 = *esi_1
            
            if (esi_1 != *(edi + 0x40))
                *esi_1[1] = eax_11
                int32_t* var_68_3 = esi_1
                *(*esi_1 + 4) = esi_1[1]
                sub_6b4d5b()
                *(edi + 0x44) -= 1
            
            var_50 = eax_11
            
            if (eax_11 == *(edi + 0x40))
                break
            
            esi_1 = var_50
    
    sub_5fc4a0(edi)
    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_3 = *(edi + 0x40)
    result = *ecx_3
    result_1 = result
    
    if (result != ecx_3)
        while (true)
            var_38 = nullptr
            int32_t var_34_1 = 0
            int32_t var_30_1 = 0
            int32_t var_c_3 = 1
            sub_5fd800(&result[2][7], edi, &var_38)
            int32_t* esi_7 = var_38
            int32_t eax_18 = (var_34_1 - esi_7) s/ 0x1c
            int32_t var_4c_3 = 0
            var_40 = eax_18
            
            if (eax_18 s> 0)
                void* esi_8 = edi + 0x6c
                int32_t* var_44_1 = var_38
                int32_t eax_32
                
                do
                    int32_t* eax_20 = operator new(0x84)
                    int32_t* edi_4
                    
                    if (eax_20 == 0)
                        edi_4 = nullptr
                    else
                        int32_t edx_5 = *(edi + 0x80)
                        long double x87_r7_1 = float.t(0)
                        int32_t ecx_11 = *(edi + 0x7c)
                        eax_20[5] = 0xf
                        eax_20[4] = 0
                        *eax_20 = 0
                        eax_20[7] = 0
                        eax_20[8] = 0
                        __builtin_memcpy(&eax_20[9], 
                            "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x"
                        "00\x00", 
                            0x14)
                        eax_20[0xe] = fconvert.s(x87_r7_1)
                        eax_20[0xf] = fconvert.s(x87_r7_1)
                        eax_20[0x13] = 0xff
                        eax_20[0x10] = 0
                        eax_20[0x11] = 0
                        eax_20[0x12] = 0
                        eax_20[0x14] = 0
                        eax_20[0x15] = 0
                        eax_20[0x16] = 0
                        eax_20[0x18] = ecx_11
                        eax_20[0x19] = 0
                        eax_20[0x1a] = 0
                        eax_20[0x1b] = 0
                        eax_20[0x1d] = 0xffffffff
                        eax_20[0x1e] = ecx_11
                        eax_20[0x1f] = 0
                        eax_20[0x20] = edx_5
                        edi_4 = eax_20
                    
                    int32_t* ecx_13 = result_1[2]
                    int32_t eax_21 = ecx_13[0xc]
                    var_50 = edi_4
                    sub_5fade0(ecx_13, edi_4, eax_21)
                    sub_5fa6b0(edi_4, var_44_1)
                    int32_t eax_22 = *(esi_8 + 4)
                    int32_t edx_7
                    
                    if (&var_50 u< eax_22)
                        edx_7 = *esi_8
                    
                    void* ecx_10
                    
                    if (&var_50 u>= eax_22 || edx_7 u> &var_50)
                        ecx_10 = *(esi_8 + 8)
                        
                        if (eax_22 == ecx_10)
                            int32_t edx_11 = *esi_8
                            int32_t eax_28 = (eax_22 - edx_11) s>> 2
                            
                            if (eax_28 u> 0x3ffffffe)
                                sub_6b47bf("vector<T> too long")
                                noreturn
                            
                            ecx_10 = (ecx_10 - edx_11) s>> 2
                            
                            if (eax_28 + 1 u> ecx_10)
                                uint32_t edx_13 = ecx_10 u>> 1
                                void* ecx_18
                                
                                if (0x3fffffff - edx_13 u>= ecx_10)
                                    ecx_18 = ecx_10 + edx_13
                                else
                                    ecx_18 = nullptr
                                
                                if (ecx_18 u< eax_28 + 1)
                                    ecx_18 = eax_28 + 1
                                
                                esi_8 = var_48 + 0x6c
                                sub_6b0560(esi_8, ecx_18)
                        
                        int32_t** eax_30 = *(esi_8 + 4)
                        
                        if (eax_30 != 0)
                            *eax_30 = edi_4
                    else
                        ecx_10 = *(esi_8 + 8)
                        
                        if (eax_22 == ecx_10)
                            int32_t eax_24 = (eax_22 - edx_7) s>> 2
                            
                            if (eax_24 u> 0x3ffffffe)
                                sub_6b47bf("vector<T> too long")
                                noreturn
                            
                            ecx_10 = (ecx_10 - edx_7) s>> 2
                            
                            if (eax_24 + 1 u> ecx_10)
                                uint32_t edx_9 = ecx_10 u>> 1
                                void* ecx_16
                                
                                if (0x3fffffff - edx_9 u>= ecx_10)
                                    ecx_16 = ecx_10 + edx_9
                                else
                                    ecx_16 = nullptr
                                
                                if (ecx_16 u< eax_24 + 1)
                                    ecx_16 = eax_24 + 1
                                
                                sub_6b0560(esi_8, ecx_16)
                        
                        void** eax_26 = *(esi_8 + 4)
                        
                        if (eax_26 != 0)
                            *eax_26 = *(*esi_8 + ((&var_50 - edx_7) s>> 2 << 2))
                    *(esi_8 + 4) += 4
                    var_44_1 = &var_44_1[7]
                    edi = var_48
                    eax_32 = var_4c_3 + 1
                    var_4c_3 = eax_32
                while (eax_32 s< var_40)
                esi_7 = var_38
            
            int32_t var_c_4 = 0xffffffff
            
            if (esi_7 != 0)
                if (var_38 != var_34_1)
                    do
                        if (esi_7[5] u>= 0x10)
                            int32_t var_68_11 = *esi_7
                            sub_6b4d5b()
                        
                        esi_7[5] = 0xf
                        esi_7[4] = 0
                        *esi_7 = 0
                        esi_7 = &esi_7[7]
                    while (esi_7 != var_34_1)
                
                int32_t* var_68_12 = var_38
                sub_6b4d5b()
            
            result = *result_1
            var_38 = nullptr
            int32_t var_34_2 = 0
            int32_t var_30_2 = 0
            result_1 = result
            
            if (result == *(edi + 0x40))
                break
            
            result = result_1
    
    *(edi + 0x95) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
