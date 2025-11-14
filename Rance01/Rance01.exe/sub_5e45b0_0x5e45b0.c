// 函数: sub_5e45b0
// 地址: 0x5e45b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725df0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0x18) == 0xffffffff)
    result.b = 0
else
    int32_t var_3c
    int32_t edx
    sub_5e6a60(&var_3c, edx, arg2)
    int32_t ebx_1 = *(arg1 + 0x1c)
    int32_t eax_4 = *(arg2 + 0x50)
    int32_t ecx_2 = *(arg2 + 0x54)
    int32_t var_7c_1
    
    if (ebx_1 != 0)
        var_7c_1 = sub_5f9f40(*(arg1 + 0x18))
    else
        var_7c_1 = 0
    
    int32_t var_78_1
    
    if (ebx_1 != 0)
        var_78_1 = sub_5f9f90(*(arg1 + 0x18))
    else
        var_78_1 = 0
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_68 = nullptr
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    int32_t var_4 = 0
    sub_5e3ec0(&var_68, arg2 + 0x88)
    int32_t* edx_1 = *(arg1 + 8)
    int32_t var_84_1 = *(arg2 + 0x1c)
    int32_t var_80_1 = *(arg2 + 0x20)
    int32_t var_58_1 = 0xffffffff
    int32_t* var_54_1 = edx_1
    int32_t var_50_1 = *(arg1 + 0xc)
    int32_t var_4c_1 = *(arg1 + 0x10)
    var_4.b = 1
    void* ebx_2 = data_797d2c
    char var_98
    
    if (edx_1 != 0)
        *(*(ebx_2 + 0x30) + 0x17c) = var_3c
        int32_t var_38
        *(*(ebx_2 + 0x30) + 0x180) = var_38
        char var_18
        int32_t ecx_5
        ecx_5.b = var_18
        void* eax_14 = *(ebx_2 + 0x30)
        char var_1c
        var_98 = var_1c
        float var_20
        *(eax_14 + 0x18c) = fconvert.s(fconvert.t(var_20))
        char var_97_1 = ecx_5.b
        char var_14
        char var_96_1 = var_14
        char var_95_1 = 0xff
        *(eax_14 + 0x190) = var_98.d
        char var_34
        var_98 = var_34
        char var_2c
        char var_96_2 = var_2c
        char var_30
        char var_97_2 = var_30
        char var_95_2 = 0xff
        *(*(ebx_2 + 0x30) + 0x184) = var_98.d
        float var_24
        *(*(ebx_2 + 0x30) + 0x188) = fconvert.s(fconvert.t(var_24))
    
    result = (var_64_1 - var_68) s/ 0x1c
    char var_91_1 = 0
    int32_t result_1 = 0
    int32_t result_2 = result
    
    if (result s<= 0)
    label_5e4c07:
        var_4.b = 0
        
        if (var_58_1 != 0xffffffff)
            sub_409390(var_58_1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** ebp_7 = var_68
        
        if (ebp_7 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_14 = ebp_7
            
            if (ebp_7 != var_64_1)
                do
                    if (esi_14[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_b0_15 = *esi_14
                        sub_6b4d5b()
                    
                    esi_14[5] = 0xf
                    esi_14[4] = 0
                    *esi_14 = nullptr
                    esi_14 = &esi_14[7]
                while (esi_14 != var_64_1)
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_b0_16 = ebp_7
            sub_6b4d5b()
        
        result.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_22 = var_68
            int32_t edx_11 = result_1 * 7
            int32_t edi_1 = eax_22[edx_11 + 4]
            void* esi_1 = &eax_22[edx_11]
            int32_t eax_23 = edi_1
            
            if (edi_1 u>= 1)
                eax_23 = 1
            
            int32_t* edx_12
            
            if (*(esi_1 + 0x14) u< 0x10)
                edx_12 = esi_1
            else
                edx_12 = *esi_1
            
            int32_t eax_24
            int32_t* ecx_9
            eax_24, ecx_9 = sub_402320(eax_23, edx_12, 0x73570c, eax_23)
            bool cond:0_1 = eax_24 == 0
            
            if (eax_24 == 0)
                if (edi_1 u>= 1)
                    eax_24.b = edi_1 != 1
                else
                    eax_24 = 0xffffffff
                
                cond:0_1 = eax_24 == 0
            
            eax_24.b = cond:0_1
            
            if (eax_24.b != 0)
                var_80_1 += sub_5e01a0(&var_3c) + ecx_2
                var_84_1 = *(arg2 + 0x1c)
            else
                int32_t var_90
                int32_t var_8c
                
                if (*(esi_1 + 0x10) != 2)
                label_5e4a31:
                    int32_t edi_8
                    
                    if (edx_1 != 0)
                        edi_8 = var_58_1
                        
                        if (edi_8 == 0xffffffff)
                            int32_t edx_23 = *edx_1
                            int32_t var_b0_8 = edx_23
                            edi_8 = sub_40d040(*(ebx_2 + 0x30) + 0x28c, edx_23, ecx_9)
                            var_58_1 = edi_8
                        
                        sub_5f9fe0(edi_8, esi_1)
                    
                    int32_t ebp_4
                    
                    if (edx_1 != 0 && edi_8 != 0xffffffff)
                        ebp_4 = sub_5f9f40(var_58_1)
                    else
                        ebp_4 = 0
                    
                    var_90 = ebp_4
                    int32_t eax_58
                    
                    if (edx_1 == 0)
                        eax_58 = 0
                    else if (var_58_1 != 0xffffffff)
                        eax_58 = sub_5f9f90(var_58_1)
                    else
                        eax_58 = 0
                    
                    int32_t ecx_27 = var_7c_1 - var_84_1
                    var_8c = ecx_27
                    var_98.d = eax_58
                    int32_t* ecx_28 = &var_90
                    
                    if (ebp_4 s>= ecx_27)
                        ecx_28 = &var_8c
                    
                    var_8c = *ecx_28
                    int32_t ecx_31 = var_78_1 - var_80_1
                    var_90 = ecx_31
                    char* eax_60 = &var_98
                    
                    if (eax_58 s>= ecx_31)
                        eax_60 = &var_90
                    
                    int32_t edi_9 = *eax_60
                    void* esi_11 = *(data_797d2c + 0x30)
                    var_90 = var_58_1
                    int32_t* var_48
                    sub_42e070(esi_11 + 0x294, &var_48, &var_90)
                    int32_t* eax_63 = var_48
                    void* eax_64
                    
                    if (eax_63 != *(esi_11 + 0x298))
                        eax_64 = eax_63[4]
                    
                    int32_t eax_65
                    
                    if (eax_63 != *(esi_11 + 0x298) && eax_64 != 0)
                        eax_65 = *(eax_64 + 0xcc)
                    else
                        eax_65 = 0
                    
                    int32_t var_b0_11 = edi_9
                    int32_t var_b4_5 = var_8c
                    int32_t var_b8_3 = eax_65
                    int32_t var_bc_3 = var_80_1
                    sub_5e8f80(arg1 + 0x18, var_84_1)
                    var_84_1 += ebp_4 + eax_4
                else
                    ecx_9 = *(esi_1 + 0x14)
                    void* eax_27
                    
                    if (ecx_9 u< 0x10)
                        eax_27 = esi_1
                    else
                        eax_27 = *esi_1
                    
                    if (*eax_27 != 0x81)
                        goto label_5e4a31
                    
                    void* eax_28
                    
                    if (ecx_9 u< 0x10)
                        eax_28 = esi_1
                    else
                        eax_28 = *esi_1
                    
                    if (*(eax_28 + 1) != 0x5c)
                        goto label_5e4a31
                    
                    int32_t result_3 = result_1 + 1
                    int32_t esi_3 = 1
                    var_98.d = 1
                    result_1 = result_3
                    
                    if (result_3 s< result_2)
                        void* eax_31 = &var_68[result_3 * 7]
                        
                        while (true)
                            if (*(eax_31 + 0x10) != 2)
                            label_5e49d3:
                                result_1 = result_3
                                var_98.d = esi_3
                                
                                if (result_3 s>= result_2)
                                    break
                                
                                result_3 -= 1
                            else
                                int32_t edx_14 = *(eax_31 + 0x14)
                                char* ecx_12
                                
                                if (edx_14 u< 0x10)
                                    ecx_12 = eax_31
                                else
                                    ecx_12 = *eax_31
                                
                                if (*ecx_12 != 0x81)
                                    goto label_5e49d3
                                
                                void* ecx_13
                                
                                if (edx_14 u< 0x10)
                                    ecx_13 = eax_31
                                else
                                    ecx_13 = *eax_31
                                
                                if (*(ecx_13 + 1) != 0x5c)
                                    goto label_5e49d3
                                
                                result_3 += 1
                                esi_3 += 1
                                eax_31 += 0x1c
                                
                                if (result_3 s< result_2)
                                    continue
                                else
                                    var_98.d = esi_3
                            
                            result_1 = result_3
                            break
                    
                    int32_t* ecx_14 = data_797d2c
                    int32_t var_b0_3 = **(arg1 + 8)
                    int32_t eax_36 = sub_40d040(ecx_14[0xc] + 0x28c, arg1, ecx_14)
                    var_8c = 0
                    var_90 = esi_3 - 1
                    int32_t* ebp_2 = &var_8c
                    
                    if (esi_3 - 1 s>= 0)
                        ebp_2 = &var_90
                    
                    int32_t* esi_4 = &var_3c
                    int32_t edi_5 = sub_5e01a0(esi_4) * var_98.d + *ebp_2 * eax_4
                    var_90 = edi_5
                    int32_t eax_39 = sub_5e01a0(esi_4)
                    int32_t ecx_16 = var_7c_1 - var_84_1
                    var_98.d = eax_39
                    var_8c = ecx_16
                    int32_t* ecx_17 = &var_90
                    
                    if (edi_5 s>= ecx_16)
                        ecx_17 = &var_8c
                    
                    var_8c = *ecx_17
                    int32_t ecx_20 = var_78_1 - var_80_1
                    var_90 = ecx_20
                    char* ecx_21 = &var_98
                    
                    if (eax_39 s>= ecx_20)
                        ecx_21 = &var_90
                    
                    void* esi_5 = *(data_797d2c + 0x30)
                    int32_t ebp_3 = *ecx_21
                    int32_t* ecx_23
                    int32_t edx_20
                    result, ecx_23, edx_20 = sub_570c50(esi_5 + 0x194, edi_5, eax_39, esi_5 + 0x17c)
                    
                    if (result == 0)
                        var_91_1 = 1
                        break
                    
                    int32_t var_b0_5 = eax_36
                    void* eax_41 = sub_40c350(esi_5 + 0x274, edx_20, ecx_23)
                    char eax_42
                    
                    if (eax_41 != 0)
                        eax_42 = sub_40c700(eax_41, result)
                    
                    if (eax_41 == 0 || eax_42 == 0)
                        (*(*result + 4))(eax_2)
                        var_91_1 = 1
                        break
                    
                    (*(*result + 4))(eax_2)
                    void* esi_7 = *(data_797d2c + 0x30)
                    var_90 = eax_36
                    int32_t* var_40
                    sub_42e070(esi_7 + 0x294, &var_40, &var_90)
                    int32_t* eax_46 = var_40
                    void* eax_47
                    
                    if (eax_46 != *(esi_7 + 0x298))
                        eax_47 = eax_46[4]
                    
                    int32_t eax_48
                    
                    if (eax_46 != *(esi_7 + 0x298) && eax_47 != 0)
                        eax_48 = *(eax_47 + 0xcc)
                    else
                        eax_48 = 0
                    
                    int32_t esi_9 = var_8c
                    int32_t var_b0_7 = ebp_3
                    int32_t var_b4_3 = esi_9
                    int32_t var_b8_2 = eax_48
                    int32_t var_bc_2 = var_80_1
                    sub_5e8f80(arg1 + 0x18, var_84_1)
                    
                    if (sub_409390(eax_36).b == 0)
                        var_91_1 = 1
                        break
                    
                    var_84_1 += esi_9 + eax_4
            
            result = result_1 + 1
            result_1 = result
            
            if (result s>= result_2)
                break
            
            ebx_2 = data_797d2c
        
        int32_t edi_10 = var_58_1
        
        if (edi_10 != 0xffffffff)
            sub_409390(edi_10)
            edi_10 = 0xffffffff
            var_58_1 = 0xffffffff
        
        if (var_91_1 == 0)
            goto label_5e4c07
        
        void* edx_27 = arg2 + 0x88
        
        if (*(arg2 + 0x9c) u>= 0x10)
            edx_27 = *edx_27
        
        void* var_b0_12 = edx_27
        int32_t var_b4_6 = *(arg2 + 0x20)
        int32_t var_b8_4 = *(arg2 + 0x1c)
        sub_40da60(0x735b28)
        var_4.b = 0
        
        if (edi_10 != 0xffffffff)
            sub_409390(edi_10)
        
        struct _EXCEPTION_REGISTRATION_RECORD** ebp_6 = var_68
        
        if (ebp_6 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_13 = ebp_6
            
            if (ebp_6 != var_64_1)
                do
                    if (esi_13[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_b0_13 = *esi_13
                        sub_6b4d5b()
                    
                    esi_13[5] = 0xf
                    esi_13[4] = 0
                    *esi_13 = nullptr
                    esi_13 = &esi_13[7]
                while (esi_13 != var_64_1)
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_b0_14 = ebp_6
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
