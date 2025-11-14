// 函数: sub_670490
// 地址: 0x670490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c088
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = data_78c474 ^ &var_78
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = nullptr
char* eax_6 = nullptr
int32_t esi = 0
int32_t i = 0
char* var_74 = nullptr
char* var_70 = nullptr
int32_t var_6c = 0
int32_t var_4 = 0
int32_t ecx_1 = arg1[1] - *arg1
int32_t i_2 = 0

if (ecx_1 s> 0)
    do
        char* edx_1 = *arg1
        int32_t* ecx_2
        ecx_2.b = edx_1[i]
        void* edi_1 = &edx_1[i]
        
        if (ecx_2.b == 0x22)
            if (edi_1 u>= eax_6 || ebx u> edi_1)
                if (eax_6 == esi)
                    void* ecx_6 = eax_6 - ebx
                    
                    if (ecx_6 u> 0xfffffffe)
                    label_6709ed:
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* edx_5 = esi - ebx
                    
                    if (ecx_6 + 1 u> edx_5)
                        uint32_t edx_6 = edx_5 u>> 1
                        uint32_t eax_10
                        
                        if (0xffffffff - edx_6 u>= edx_5)
                            eax_10 = edx_5 + edx_6
                        else
                            eax_10 = 0
                        
                        if (eax_10 u< ecx_6 + 1)
                            eax_10 = ecx_6 + 1
                        
                        sub_424860(&var_74, eax_10)
                        esi = var_6c
                        eax_6 = var_70
                        ebx = var_74
                
                if (eax_6 != 0)
                    ecx_2.b = *edi_1
                    *eax_6 = ecx_2.b
            else
                void* edi_2 = edi_1 - ebx
                
                if (eax_6 == esi)
                    void* ecx_4 = eax_6 - ebx
                    
                    if (ecx_4 u> 0xfffffffe)
                        goto label_6709ed
                    
                    edx_1 = esi - ebx
                    
                    if (ecx_4 + 1 u> edx_1)
                        uint32_t edx_3 = edx_1 u>> 1
                        void* eax_8
                        
                        if (0xffffffff - edx_3 u>= edx_1)
                            eax_8 = &edx_1[edx_3]
                        else
                            eax_8 = nullptr
                        
                        if (eax_8 u< ecx_4 + 1)
                            eax_8 = ecx_4 + 1
                        
                        ecx_2, edx_1 = sub_424860(&var_74, eax_8)
                        esi = var_6c
                        eax_6 = var_70
                        ebx = var_74
                
                if (eax_6 != 0)
                    edx_1.b = *(ebx + edi_2)
                    *eax_6 = edx_1.b
            
            eax_6 = &eax_6[1]
            i += 1
            var_70 = eax_6
            
            for (; i s< ecx_1; i += 1)
                char* edi_4 = *arg1 + i
                
                if (edi_4 u>= eax_6 || ebx u> edi_4)
                    int32_t* edx_11
                    
                    if (eax_6 == esi)
                        void* ecx_10 = eax_6 - ebx
                        
                        if (ecx_10 u> 0xfffffffe)
                            goto label_6709ed
                        
                        edx_11 = esi - ebx
                        
                        if (ecx_10 + 1 u> edx_11)
                            uint32_t edx_12 = edx_11 u>> 1
                            void* eax_14
                            
                            if (0xffffffff - edx_12 u>= edx_11)
                                eax_14 = edx_11 + edx_12
                            else
                                eax_14 = nullptr
                            
                            if (eax_14 u< ecx_10 + 1)
                                eax_14 = ecx_10 + 1
                            
                            sub_424860(&var_74, eax_14)
                            esi = var_6c
                            eax_6 = var_70
                            ebx = var_74
                    
                    if (eax_6 != 0)
                        edx_11.b = *edi_4
                        *eax_6 = edx_11.b
                else
                    void* edi_5 = edi_4 - ebx
                    
                    if (eax_6 == esi)
                        void* ecx_8 = eax_6 - ebx
                        
                        if (ecx_8 u> 0xfffffffe)
                            goto label_6709ed
                        
                        void* edx_8 = esi - ebx
                        
                        if (ecx_8 + 1 u> edx_8)
                            uint32_t edx_9 = edx_8 u>> 1
                            void* eax_12
                            
                            if (0xffffffff - edx_9 u>= edx_8)
                                eax_12 = edx_8 + edx_9
                            else
                                eax_12 = nullptr
                            
                            if (eax_12 u< ecx_8 + 1)
                                eax_12 = ecx_8 + 1
                            
                            sub_424860(&var_74, eax_12)
                            esi = var_6c
                            eax_6 = var_70
                            ebx = var_74
                    
                    if (eax_6 != 0)
                        ecx_2.b = *(edi_5 + ebx)
                        *eax_6 = ecx_2.b
                
                void* edx_13 = *arg1
                ecx_2.b = *(edx_13 + i)
                eax_6 = &eax_6[1]
                var_70 = eax_6
                
                if (ecx_2.b u< 0x81)
                    if (ecx_2.b u< 0xe0)
                        goto label_670731
                    
                    goto label_6706ca
                
                if (ecx_2.b u<= 0x9f || ecx_2.b u>= 0xe0)
                label_6706ca:
                    i += 1
                label_6706cb:
                    void* edi_6 = edx_13 + i
                    
                    if (edi_6 u>= eax_6 || ebx u> edi_6)
                        if (eax_6 == esi)
                            void* ecx_15 = eax_6 - ebx
                            
                            if (ecx_15 u> 0xfffffffe)
                                goto label_6709ed
                            
                            void* edx_17 = esi - ebx
                            
                            if (ecx_15 + 1 u> edx_17)
                                uint32_t edx_18 = edx_17 u>> 1
                                uint32_t eax_18
                                
                                if (0xffffffff - edx_18 u>= edx_17)
                                    eax_18 = edx_17 + edx_18
                                else
                                    eax_18 = 0
                                
                                if (eax_18 u< ecx_15 + 1)
                                    eax_18 = ecx_15 + 1
                                
                                sub_424860(&var_74, eax_18)
                                esi = var_6c
                                eax_6 = var_70
                                ebx = var_74
                        
                        if (eax_6 == 0)
                            eax_6 = &eax_6[1]
                            var_70 = eax_6
                        else
                            ecx_2.b = *edi_6
                            *eax_6 = ecx_2.b
                            eax_6 = &eax_6[1]
                            var_70 = eax_6
                    else
                        char* edi_7 = edi_6 - ebx
                        
                        if (eax_6 == esi)
                            void* ecx_13 = eax_6 - ebx
                            
                            if (ecx_13 u> 0xfffffffe)
                                goto label_6709ed
                            
                            edx_13 = esi - ebx
                            
                            if (ecx_13 + 1 u> edx_13)
                                uint32_t edx_15 = edx_13 u>> 1
                                int32_t* eax_16
                                
                                if (0xffffffff - edx_15 u>= edx_13)
                                    eax_16 = edx_13 + edx_15
                                else
                                    eax_16 = nullptr
                                
                                if (eax_16 u< ecx_13 + 1)
                                    eax_16 = ecx_13 + 1
                                
                                ecx_2, edx_13 = sub_424860(&var_74, eax_16)
                                esi = var_6c
                                eax_6 = var_70
                                ebx = var_74
                        
                        if (eax_6 == 0)
                            eax_6 = &eax_6[1]
                            var_70 = eax_6
                        else
                            edx_13.b = *(edi_7 + ebx)
                            *eax_6 = edx_13.b
                            eax_6 = &eax_6[1]
                            var_70 = eax_6
                else
                label_670731:
                    
                    if (ecx_2.b == 0x5c)
                        i += 1
                        
                        if (i s< ecx_1)
                            goto label_6706cb
                    else if (ecx_2.b == 0x22)
                        break
        else
            char var_75
            int32_t* esi_15
            
            if ((ecx_2.b u< 0x81 || ecx_2.b u> 0x9f) && ecx_2.b u< 0xe0)
                if (ecx_2.b == 0xd)
                    goto label_670914
                
                if (ecx_2.b != 0x2f)
                label_670877:
                    
                    if (ecx_2.b == 0x28 || ecx_2.b == 0x29 || ecx_2.b == 0x5b || ecx_2.b == 0x5d
                            || ecx_2.b == 0x3c || ecx_2.b == 0x3e || ecx_2.b == 0x7b
                            || ecx_2.b == 0x7d || ecx_2.b == 0x2c || ecx_2.b == 0x3b
                            || ecx_2.b == 0xa || ecx_2.b == 0x2a || ecx_2.b == 0x2b
                            || ecx_2.b == 0x2d || ecx_2.b == 0x2f || ecx_2.b == 0x25
                            || ecx_2.b == 0x26 || ecx_2.b == 0x7c || ecx_2.b == 0x7e
                            || ecx_2.b == 0x5e || ecx_2.b == 0x3d)
                        char** esi_16 = &var_74
                        var_75 = 0x20
                        sub_54e400(&var_75, esi_16)
                        sub_54e400(*arg1 + i, esi_16)
                        goto label_670914
                    
                    esi_15 = &var_74
                    
                    if (ecx_2.b == 9)
                        goto label_67091c
                    
                    sub_54e400(edi_1, esi_15)
                    goto label_670926
                
                i = i_2
                
                if (ecx_1 - 1 s> i_2)
                    if (*(edi_1 + 1) != ecx_2.b)
                        goto label_670877
                    
                    if (i s< ecx_1)
                        while (edx_1[i] != 0xa)
                            i += 1
                            
                            if (i s>= ecx_1)
                                goto label_670932
                        
                        if (i s< ecx_1 && edx_1[i] == 0xa)
                            char** esi_14 = &var_74
                            var_75 = 0x20
                            sub_54e400(&var_75, esi_14)
                            var_75 = 0xa
                            sub_54e400(&var_75, esi_14)
                            goto label_670914
            else if (ecx_1 - 1 s> i)
                if (ecx_2.b != 0x81 || *(edi_1 + 1) != 0x40)
                    char** esi_13 = &var_74
                    sub_54e400(edi_1, esi_13)
                    i += 1
                    sub_54e400(*arg1 + i, esi_13)
                    goto label_670926
                
                i += 1
            label_670914:
                esi_15 = &var_74
            label_67091c:
                var_75 = 0x20
                sub_54e400(&var_75, esi_15)
            label_670926:
                esi = var_6c
                eax_6 = var_70
                ebx = var_74
        
    label_670932:
        i += 1
        i_2 = i
    while (i s< ecx_1)

struct _EXCEPTION_REGISTRATION_RECORD** result = eax_6 - ebx
int32_t i_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (result s> 0)
    do
        result.b = ebx[i_1]
        char var_48
        int32_t var_34_1
        
        if ((result.b u< 0x81 || result.b u> 0x9f) && result.b u< 0xe0)
            result.b = ebx[i_1]
            
            if (result.b == 0xa)
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                sub_401270(&var_48, 1, 0x7300c4)
                var_4.b = 2
                result = sub_405220(&var_48, arg2)
                var_4.b = 0
                
                if (var_34_2 u>= 0x10)
                    int32_t var_90_9 = var_48.d
                    result = sub_6b4d5b()
            else if (result.b != 0x20)
                if (result.b == 0x22)
                    var_34_1 = 0xf
                    int32_t var_38_3 = 0
                    var_48 = 0
                    sub_401270(&var_48, 1, 0x7300c8)
                    i_1 += 1
                    var_4.b = 3
                    
                    for (; i_1 s< result_1; i_1 += 1)
                        sub_401f60(&var_48, ebx[i_1])
                        char eax_33 = ebx[i_1]
                        
                        if (eax_33 u< 0x81)
                            if (eax_33 u< 0xe0)
                                goto label_670ad3
                            
                            goto label_670ac4
                        
                        if (eax_33 u<= 0x9f || eax_33 u>= 0xe0)
                        label_670ac4:
                            char ecx_21 = ebx[i_1 + 1]
                            i_1 += 1
                            sub_401f60(&var_48, ecx_21)
                        else
                        label_670ad3:
                            
                            if (eax_33 == 0x22)
                                break
                            
                            if (eax_33 == 0xa)
                                break
                            
                            if (eax_33 == 0x5c)
                                i_1 += 1
                                
                                if (result_1 s<= i_1)
                                    break
                                
                                eax_33 = ebx[i_1]
                                
                                if (eax_33 != 0x6e)
                                    sub_401f60(&var_48, eax_33)
                                else
                                    char* eax_34 = var_48.d
                                    
                                    if (var_34_1 u< 0x10)
                                        eax_34 = &var_48
                                    
                                    eax_34[var_38_3 - 1] = 0xa
                    
                    goto label_6709c6
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                sub_401270(&var_2c, nullptr, 0x72d39f)
                var_4.b = 4
                
                for (; i_1 s< result_1; i_1 += 1)
                    char eax_35 = ebx[i_1]
                    
                    if (eax_35 == 0x20)
                        break
                    
                    sub_401f60(&var_2c, eax_35)
                
                result = sub_405220(&var_2c, arg2)
                var_4.b = 0
                
                if (var_18_1 u>= 0x10)
                    int32_t var_90_13 = var_2c.d
                    result = sub_6b4d5b()
        else
            var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            sub_401270(&var_48, nullptr, 0x72d383)
            var_4.b = 1
            
            for (; i_1 s< result_1; i_1 += 1)
                char eax_30 = ebx[i_1]
                
                if (eax_30 == 0x20)
                    break
                
                i_2.b = eax_30
                sub_401f60(&var_48, i_2.b)
            
        label_6709c6:
            result = sub_405220(&var_48, arg2)
            var_4.b = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_90_8 = var_48.d
                result = sub_6b4d5b()
        i_1 += 1
    while (i_1 s< result_1)

if (ebx != 0)
    char* var_90_14 = ebx
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_78)
return result
