// 函数: sub_5e4c80
// 地址: 0x5e4c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725db0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t ExceptionRecord = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x18) == 0xffffffff)
    result.b = 0
else
    int32_t var_3c
    int32_t edx
    sub_5e6a60(&var_3c, edx, arg2)
    int32_t ebx_1 = *(arg1 + 0x1c)
    int32_t eax_3 = *(arg2 + 0x50)
    int32_t ecx_2 = *(arg2 + 0x54)
    int32_t var_74_1
    
    if (ebx_1 != 0)
        var_74_1 = sub_5f9f40(*(arg1 + 0x18))
    else
        var_74_1 = 0
    
    int32_t var_7c_1
    
    if (ebx_1 != 0)
        var_7c_1 = sub_5f9f90(*(arg1 + 0x18))
    else
        var_7c_1 = 0
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_6c = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_4 = 0
    sub_5e3ec0(&var_6c, arg2 + 0x88)
    int32_t* edx_1 = *(arg1 + 8)
    void* var_94_1 = *(arg2 + 0x1c)
    int32_t var_88_1 = *(arg2 + 0x20)
    int32_t var_5c_1 = 0xffffffff
    int32_t* var_58_1 = edx_1
    int32_t var_54_1 = *(arg1 + 0xc)
    int32_t var_50_1 = *(arg1 + 0x10)
    var_4.b = 1
    void* ecx_5 = data_797d2c
    
    if (edx_1 != 0)
        *(*(ecx_5 + 0x30) + 0x17c) = var_3c
        int32_t var_38
        *(*(ecx_5 + 0x30) + 0x180) = var_38
        void* eax_13 = *(ecx_5 + 0x30)
        int32_t var_9c
        char var_1c
        var_9c.b = var_1c
        float var_20
        *(eax_13 + 0x18c) = fconvert.s(fconvert.t(var_20))
        char var_18
        var_9c:1.b = var_18
        char var_14
        var_9c:2.b = var_14
        var_9c:3.b = 0xff
        *(eax_13 + 0x190) = var_9c
        char var_34
        var_9c.b = var_34
        char var_30
        var_9c:1.b = var_30
        char var_2c
        var_9c:2.b = var_2c
        var_9c:3.b = 0xff
        *(*(ecx_5 + 0x30) + 0x184) = var_9c
        float var_24
        *(*(ecx_5 + 0x30) + 0x188) = fconvert.s(fconvert.t(var_24))
    
    result = (var_68_1 - var_6c) s/ 0x1c
    char var_95_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
    
    if (result s<= 0)
    label_5e5344:
        var_4.b = 0
        
        if (var_5c_1 != 0xffffffff)
            sub_409390(var_5c_1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** ebp_7 = var_6c
        
        if (ebp_7 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_15 = ebp_7
            
            if (ebp_7 != var_68_1)
                do
                    if (esi_15[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_b8_17 = *esi_15
                        sub_6b4d5b()
                    
                    esi_15[5] = 0xf
                    esi_15[4] = 0
                    *esi_15 = nullptr
                    esi_15 = &esi_15[7]
                while (esi_15 != var_68_1)
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_b8_18 = ebp_7
            sub_6b4d5b()
        
        result.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** ecx_9 = var_6c
            void* eax_22 = result_1 * 7
            int32_t edi_1 = ecx_9[eax_22 + 4]
            void* esi_2 = &ecx_9[eax_22]
            int32_t eax_23 = edi_1
            
            if (edi_1 u>= 1)
                eax_23 = 1
            
            int32_t* edx_11
            
            if (*(esi_2 + 0x14) u< 0x10)
                edx_11 = esi_2
            else
                edx_11 = *esi_2
            
            int32_t eax_24
            int32_t edx_12
            eax_24, edx_12 = sub_402320(eax_23, edx_11, 0x73579c, eax_23)
            bool cond:0_1 = eax_24 == 0
            
            if (eax_24 == 0)
                if (edi_1 u>= 1)
                    eax_24.b = edi_1 != 1
                else
                    eax_24 = 0xffffffff
                
                cond:0_1 = eax_24 == 0
            
            eax_24.b = cond:0_1
            
            if (eax_24.b != 0)
                var_88_1 += sub_5e01a0(&var_3c) + ecx_2
                var_94_1 = *(arg2 + 0x1c)
            else
                int32_t* var_90
                int32_t* var_84
                int32_t* var_80
                
                if (*(esi_2 + 0x10) != 2)
                label_5e5165:
                    int32_t ebp_5 = var_5c_1
                    
                    if (edx_1 != 0)
                        if (ebp_5 == 0xffffffff)
                            int32_t* ecx_32 = data_797d2c
                            int32_t var_b8_10 = *edx_1
                            ebp_5 = sub_40d040(ecx_32[0xc] + 0x28c, edx_12, ecx_32)
                            var_5c_1 = ebp_5
                        
                        sub_5f9fe0(ebp_5, esi_2)
                    
                    int32_t* var_8c_2
                    
                    if (edx_1 != 0 && ebp_5 != 0xffffffff)
                        var_8c_2 = sub_5f9f40(ebp_5)
                    else
                        var_8c_2 = nullptr
                    
                    var_90 = var_8c_2
                    int32_t* eax_68
                    
                    if (edx_1 == 0)
                        eax_68 = nullptr
                    else if (ebp_5 != 0xffffffff)
                        eax_68 = sub_5f9f90(ebp_5)
                    else
                        eax_68 = nullptr
                    
                    void* ecx_34 = var_74_1 - var_94_1
                    var_80 = eax_68
                    var_84 = ecx_34
                    int32_t** ecx_35 = &var_90
                    
                    if (var_8c_2 s>= ecx_34)
                        ecx_35 = &var_84
                    
                    int32_t* edi_9 = *ecx_35
                    int32_t* ecx_37 = var_7c_1 - var_88_1
                    var_90 = ecx_37
                    int32_t** eax_70 = &var_80
                    
                    if (eax_68 s>= ecx_37)
                        eax_70 = &var_90
                    
                    int32_t* esi_13 = *eax_70
                    
                    if (*(arg1 + 0x1c) == 0)
                    label_5e5250:
                        int32_t* var_b8_13 = esi_13
                        int32_t* var_bc_7 = edi_9
                        int32_t var_c0_5 = sub_5f9dd0(ebp_5)
                        int32_t var_c4_5 = var_88_1
                        sub_5e90c0(arg1 + 0x18, var_94_1)
                    else
                        int32_t eax_71 = *(arg1 + 0x18)
                        
                        if (eax_71 == 0xffffffff)
                            goto label_5e5250
                        
                        int32_t* eax_72 = sub_5f9dd0(eax_71)
                        
                        if (eax_72 == 0)
                            goto label_5e5250
                        
                        if ((*(*eax_72 + 0x28))(ExceptionRecord) == 0)
                            goto label_5e5250
                        
                        int32_t* var_b8_12 = esi_13
                        int32_t* var_bc_6 = edi_9
                        int32_t var_c0_4 = sub_5f9dd0(ebp_5)
                        int32_t var_c4_4 = var_88_1
                        sub_5e9020(arg1 + 0x18, var_94_1)
                    
                    var_94_1 += var_8c_2 + eax_3
                else
                    int32_t ecx_10 = *(esi_2 + 0x14)
                    void* eax_28
                    
                    if (ecx_10 u< 0x10)
                        eax_28 = esi_2
                    else
                        eax_28 = *esi_2
                    
                    if (*eax_28 != 0x81)
                        goto label_5e5165
                    
                    void* eax_29
                    
                    if (ecx_10 u< 0x10)
                        eax_29 = esi_2
                    else
                        eax_29 = *esi_2
                    
                    if (*(eax_29 + 1) != 0x5c)
                        goto label_5e5165
                    
                    void* result_3 = result_1 + 1
                    void* ebx_2 = 1
                    result_1 = result_3
                    
                    if (result_3 s< result_2)
                        void* eax_30 = &var_6c[result_3 * 7]
                        
                        while (true)
                            if (*(eax_30 + 0x10) != 2)
                            label_5e4f68:
                                result_1 = result_3
                                
                                if (result_3 s>= result_2)
                                    break
                                
                                result_3 -= 1
                            else
                                int32_t edx_15 = *(eax_30 + 0x14)
                                char* ecx_13
                                
                                if (edx_15 u< 0x10)
                                    ecx_13 = eax_30
                                else
                                    ecx_13 = *eax_30
                                
                                if (*ecx_13 != 0x81)
                                    goto label_5e4f68
                                
                                void* ecx_14
                                
                                if (edx_15 u< 0x10)
                                    ecx_14 = eax_30
                                else
                                    ecx_14 = *eax_30
                                
                                if (*(ecx_14 + 1) != 0x5c)
                                    goto label_5e4f68
                                
                                result_3 += 1
                                ebx_2 += 1
                                eax_30 += 0x1c
                                
                                if (result_3 s< result_2)
                                    continue
                            
                            result_1 = result_3
                            break
                    
                    int32_t* ecx_15 = **(arg1 + 8)
                    void* edx_16 = data_797d2c
                    int32_t* var_b8_3 = ecx_15
                    int32_t* eax_35 = sub_40d040(*(edx_16 + 0x30) + 0x28c, edx_16, ecx_15)
                    var_80 = nullptr
                    var_84 = ebx_2 - 1
                    int32_t** ebp_2 = &var_80
                    
                    if (ebx_2 - 1 s>= 0)
                        ebp_2 = &var_84
                    
                    int32_t* esi_5 = &var_3c
                    int32_t* edi_4 = sub_5e01a0(esi_5) * ebx_2 + *ebp_2 * eax_3
                    var_84 = edi_4
                    int32_t* eax_40 = sub_5e01a0(esi_5)
                    void* ecx_17 = var_74_1 - var_94_1
                    var_90 = eax_40
                    var_80 = ecx_17
                    int32_t** ecx_18 = &var_84
                    
                    if (edi_4 s>= ecx_17)
                        ecx_18 = &var_80
                    
                    int32_t* ebp_3 = *ecx_18
                    int32_t* ecx_20 = var_7c_1 - var_88_1
                    var_84 = ecx_20
                    int32_t** ecx_21 = &var_90
                    
                    if (eax_40 s>= ecx_20)
                        ecx_21 = &var_84
                    
                    int32_t* ebx_3 = *ecx_21
                    void* esi_6 = *(data_797d2c + 0x30)
                    int32_t edx_18
                    result, edx_18 = sub_570c50(esi_6 + 0x194, edi_4, eax_40, esi_6 + 0x17c)
                    
                    if (result == 0)
                        var_95_1 = 1
                        break
                    
                    int32_t* var_b8_5 = eax_35
                    void* eax_43 = sub_40c350(esi_6 + 0x274, edx_18, eax_35)
                    char eax_44
                    
                    if (eax_43 != 0)
                        eax_44 = sub_40c700(eax_43, result)
                    
                    if (eax_43 == 0 || eax_44 == 0)
                        (*result)->Handler(ExceptionRecord)
                        var_95_1 = 1
                        break
                    
                    (*result)->Handler(ExceptionRecord)
                    
                    if (*(arg1 + 0x1c) == 0)
                    label_5e50f0:
                        void* esi_10 = *(data_797d2c + 0x30)
                        var_90 = eax_35
                        int32_t* var_44
                        sub_42e070(esi_10 + 0x294, &var_44, &var_90)
                        int32_t* eax_57 = var_44
                        void* eax_58
                        
                        if (eax_57 != *(esi_10 + 0x298))
                            eax_58 = eax_57[4]
                        
                        int32_t eax_59
                        
                        if (eax_57 != *(esi_10 + 0x298) && eax_58 != 0)
                            eax_59 = *(eax_58 + 0xcc)
                        else
                            eax_59 = 0
                        
                        int32_t* var_b8_9 = ebx_3
                        int32_t* var_bc_4 = ebp_3
                        int32_t var_c0_3 = eax_59
                        int32_t var_c4_3 = var_88_1
                        sub_5e90c0(arg1 + 0x18, var_94_1)
                    else
                        int32_t eax_46 = *(arg1 + 0x18)
                        
                        if (eax_46 == 0xffffffff)
                            goto label_5e50f0
                        
                        int32_t* eax_47 = sub_5f9dd0(eax_46)
                        
                        if (eax_47 == 0)
                            goto label_5e50f0
                        
                        if ((*(*eax_47 + 0x28))() == 0)
                            goto label_5e50f0
                        
                        void* esi_8 = *(data_797d2c + 0x30)
                        var_90 = eax_35
                        int32_t* var_48
                        sub_42e070(esi_8 + 0x294, &var_48, &var_90)
                        int32_t* eax_51 = var_48
                        void* eax_52
                        
                        if (eax_51 != *(esi_8 + 0x298))
                            eax_52 = eax_51[4]
                        
                        int32_t eax_53
                        
                        if (eax_51 != *(esi_8 + 0x298) && eax_52 != 0)
                            eax_53 = *(eax_52 + 0xcc)
                        else
                            eax_53 = 0
                        
                        int32_t* var_b8_7 = ebx_3
                        int32_t* var_bc_3 = ebp_3
                        int32_t var_c0_2 = eax_53
                        int32_t var_c4_2 = var_88_1
                        sub_5e9020(arg1 + 0x18, var_94_1)
                    
                    if (sub_409390(eax_35).b == 0)
                        var_95_1 = 1
                        break
                    
                    var_94_1 += ebp_3 + eax_3
            
            result = result_1 + 1
            result_1 = result
            
            if (result s>= result_2)
                break
        
        int32_t edi_10 = var_5c_1
        
        if (edi_10 != 0xffffffff)
            sub_409390(edi_10)
            edi_10 = 0xffffffff
            var_5c_1 = 0xffffffff
        
        if (var_95_1 == 0)
            goto label_5e5344
        
        void* edx_26 = arg2 + 0x88
        
        if (*(arg2 + 0x9c) u>= 0x10)
            edx_26 = *edx_26
        
        void* var_b8_14 = edx_26
        int32_t var_bc_8 = *(arg2 + 0x20)
        int32_t var_c0_6 = *(arg2 + 0x1c)
        sub_40da60(0x735b70)
        var_4.b = 0
        
        if (edi_10 != 0xffffffff)
            sub_409390(edi_10)
        
        struct _EXCEPTION_REGISTRATION_RECORD** ebp_6 = var_6c
        
        if (ebp_6 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_14 = ebp_6
            
            if (ebp_6 != var_68_1)
                do
                    if (esi_14[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_b8_15 = *esi_14
                        sub_6b4d5b()
                    
                    esi_14[5] = 0xf
                    esi_14[4] = 0
                    *esi_14 = nullptr
                    esi_14 = &esi_14[7]
                while (esi_14 != var_68_1)
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_b8_16 = ebp_6
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
