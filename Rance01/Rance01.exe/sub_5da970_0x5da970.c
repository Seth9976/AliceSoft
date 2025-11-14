// 函数: sub_5da970
// 地址: 0x5da970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_719918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t i
int32_t eax_2 = data_78c474 ^ &i
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_8 = nullptr
int128_t* result_2 = nullptr
char* result_10 = nullptr
int32_t var_48 = 0
int32_t var_c_1 = 0
i = 0
int128_t* result

if (arg2[4] s> 0)
    int32_t* edi_1 = arg1
    char var_38
    
    do
        int32_t* esi_3 = arg2
        int32_t ecx_1 = esi_3[5]
        int32_t i_1 = i
        char* eax_5
        
        if (ecx_1 u< 0x10)
            eax_5 = esi_3
        else
            eax_5 = *esi_3
        
        char* eax_6
        
        if (eax_5[i_1] u>= 0x81)
            if (ecx_1 u< 0x10)
                eax_6 = esi_3
            else
                eax_6 = *esi_3
        
        char* eax_7
        
        if (eax_5[i_1] u< 0x81 || eax_6[i_1] u> 0x9f)
            if (ecx_1 u< 0x10)
                eax_7 = esi_3
            else
                eax_7 = *esi_3
        
        if ((eax_5[i_1] u< 0x81 || eax_6[i_1] u> 0x9f) && eax_7[i_1] u< 0xe0)
            char* eax_18
            
            if (ecx_1 u< 0x10)
                eax_18 = esi_3
            else
                eax_18 = *esi_3
            
            if (eax_18[i_1] != 0xa)
                if (ecx_1 u>= 0x10)
                    esi_3 = *esi_3
                
                void* esi_16 = esi_3 + i_1
                int128_t* result_4
                
                if (esi_16 u< result_8)
                    result_4 = result_2
                
                if (esi_16 u>= result_8 || result_4 u> esi_16)
                    if (result_8 == var_48)
                        sub_4247b0(&result_2, i_1, 1)
                        result_8 = result_10
                        i_1 = i
                    
                    if (result_8 != 0)
                        ecx_1.b = *esi_16
                        *result_8 = ecx_1.b
                else
                    char* esi_17 = esi_16 - result_4
                    
                    if (result_8 == var_48)
                        sub_4247b0(&result_2, i_1, 1)
                        result_8 = result_10
                        result_4 = result_2
                        i_1 = i
                    
                    if (result_8 != 0)
                        result_4.b = *(esi_17 + result_4)
                        *result_8 = result_4.b
                
                result_8 = &result_8[1]
                i = i_1 + 1
                result_10 = result_8
            else
                if (result_2 != result_8)
                    int128_t* result_3 = result_2
                    int32_t var_24_1 = 0xf
                    int32_t var_28_1 = 0
                    var_38 = 0
                    sub_401270(&var_38, result_8 - result_3, result_3)
                    var_c_1.b = 1
                    sub_402000(*(*(arg1 + 4) - 4), &var_38, 0, 0xffffffff)
                    var_c_1.b = 0
                    
                    if (var_24_1 u>= 0x10)
                        int32_t var_68_6 = var_38.d
                        sub_6b4d5b()
                    
                    int32_t eax_23 = *(*(*(arg1 + 4) - 4) + 0x10)
                    
                    if (arg1[1].d s< eax_23)
                        arg1[1].d = eax_23
                    
                    char* result_9 = result_8
                    result_8 = result_2
                    sub_6b49d0(result_8, result_9, nullptr, eax_4)
                    edi_1 = arg1
                    result_10 = result_8
                
                char* eax_24 = operator new(0x1c)
                char* esi_12
                
                if (eax_24 == 0)
                    esi_12 = nullptr
                else
                    *(eax_24 + 0x14) = 0xf
                    *(eax_24 + 0x10) = 0
                    *eax_24 = 0
                    esi_12 = eax_24
                
                int32_t eax_25 = edi_1[1]
                char* var_3c = esi_12
                int32_t ecx_17
                
                if (&var_3c u< eax_25)
                    ecx_17 = *edi_1
                
                if (&var_3c u>= eax_25 || ecx_17 u> &var_3c)
                    if (eax_25 == edi_1[2])
                        sub_4307a0(edi_1)
                    
                    void** eax_30 = edi_1[1]
                    
                    if (eax_30 != 0)
                        *eax_30 = esi_12
                    
                    edi_1[1] += 4
                    i += 1
                else
                    if (eax_25 == edi_1[2])
                        sub_4307a0(edi_1)
                    
                    int32_t* eax_28 = edi_1[1]
                    
                    if (eax_28 == 0)
                        edi_1[1] += 4
                        i += 1
                    else
                        *eax_28 = *(*edi_1 + ((&var_3c - ecx_17) s>> 2 << 2))
                        edi_1[1] += 4
                        i += 1
        else
            uint32_t eax_8
            
            if (ecx_1 u< 0x10)
                eax_8 = esi_3
            else
                eax_8 = *esi_3
            
            char* edi_2 = eax_8 + i_1
            int128_t* result_6 = result_2
            
            if (edi_2 u>= result_8 || result_6 u> edi_2)
                if (result_8 == var_48)
                    void* eax_12 = result_8 - result_6
                    
                    if (eax_12 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* ecx_6 = var_48 - result_6
                    
                    if (eax_12 + 1 u> ecx_6)
                        uint32_t edx_4 = ecx_6 u>> 1
                        void* ecx_7
                        
                        if (0xffffffff - edx_4 u>= ecx_6)
                            ecx_7 = ecx_6 + edx_4
                        else
                            ecx_7 = nullptr
                        
                        if (ecx_7 u< eax_12 + 1)
                            ecx_7 = eax_12 + 1
                        
                        sub_424860(&result_2, ecx_7)
                        result_8 = result_10
                        esi_3 = arg2
                
                if (result_8 != 0)
                    eax_8.b = *edi_2
                    *result_8 = eax_8.b
            else
                char* edi_3 = edi_2 - result_6
                
                if (result_8 == var_48)
                    void* eax_10 = result_8 - result_6
                    
                    if (eax_10 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* ecx_3 = var_48 - result_6
                    
                    if (eax_10 + 1 u> ecx_3)
                        uint32_t edx_2 = ecx_3 u>> 1
                        uint32_t ecx_4
                        
                        if (0xffffffff - edx_2 u>= ecx_3)
                            ecx_4 = ecx_3 + edx_2
                        else
                            ecx_4 = 0
                        
                        if (ecx_4 u< eax_10 + 1)
                            ecx_4 = eax_10 + 1
                        
                        sub_424860(&result_2, ecx_4)
                        result_8 = result_10
                        result_6 = result_2
                        esi_3 = arg2
                
                if (result_8 != 0)
                    result_6.b = *(edi_3 + result_6)
                    *result_8 = result_6.b
            
            void* ebx = &result_8[1]
            int32_t* edi_4
            
            if (esi_3[5] u< 0x10)
                edi_4 = esi_3
            else
                edi_4 = *esi_3
            
            int128_t* result_7 = result_2
            void* edi_5 = edi_4 + i + 1
            
            if (edi_5 u>= ebx || result_7 u> edi_5)
                if (ebx == var_48)
                    int32_t eax_17 = ebx - result_7
                    
                    if (eax_17 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* ecx_13 = var_48 - result_7
                    
                    if (eax_17 + 1 u> ecx_13)
                        uint32_t edx_8 = ecx_13 u>> 1
                        uint32_t ecx_14
                        
                        if (0xffffffff - edx_8 u>= ecx_13)
                            ecx_14 = ecx_13 + edx_8
                        else
                            ecx_14 = 0
                        
                        if (ecx_14 u< eax_17 + 1)
                            ecx_14 = eax_17 + 1
                        
                        sub_424860(&result_2, ecx_14)
                
                if (ebx == 0)
                    goto label_5daba3
                
                eax_8.b = *edi_5
                *ebx = eax_8.b
            label_5daba3:
                edi_1 = arg1
                result_8 = ebx + 1
                i += 2
            else
                void* edi_6 = edi_5 - result_7
                
                if (ebx == var_48)
                    void* eax_14 = ebx - result_7
                    
                    if (eax_14 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* ecx_10 = var_48 - result_7
                    
                    if (eax_14 + 1 u> ecx_10)
                        uint32_t edx_6 = ecx_10 u>> 1
                        void* ecx_11
                        
                        if (0xffffffff - edx_6 u>= ecx_10)
                            ecx_11 = ecx_10 + edx_6
                        else
                            ecx_11 = nullptr
                        
                        if (ecx_11 u< eax_14 + 1)
                            ecx_11 = eax_14 + 1
                        
                        sub_424860(&result_2, ecx_11)
                        result_7 = result_2
                
                if (ebx == 0)
                    goto label_5daba3
                
                result_7.b = *(edi_6 + result_7)
                edi_1 = arg1
                *ebx = result_7.b
                result_8 = ebx + 1
                i += 2
            
            result_10 = result_8
    while (i s< arg2[4])
    
    if (result_2 != result_8)
        int128_t* result_5 = result_2
        int32_t var_24_2 = 0xf
        int32_t var_28_2 = 0
        var_38 = 0
        sub_401270(&var_38, result_8 - result_5, result_5)
        var_c_1.b = 2
        sub_402000(*(*(arg1 + 4) - 4), &var_38, 0, 0xffffffff)
        
        if (var_24_2 u>= 0x10)
            int32_t var_68_8 = var_38.d
            sub_6b4d5b()
        
        int32_t eax_37 = *(*(*(arg1 + 4) - 4) + 0x10)
        
        if (arg1[1].d s< eax_37)
            arg1[1].d = eax_37
    
    result = result_2
    
    if (result != 0)
        int128_t* result_1 = result
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i)
return result
