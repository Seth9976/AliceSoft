// 函数: sub_417c30
// 地址: 0x417c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1

if (*(ebx + 0x5c) != 0)
    void** var_28 = nullptr
    void* var_24_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_c_1 = 0
    sub_61b5a0(ebx + 0x40, &var_28)
    
    for (int32_t* i = *(ebx + 0x28); i != *(ebx + 0x2c); i = &i[1])
        sub_4136b0(*i, &var_28)
    
    for (int32_t* i_1 = var_28; i_1 != var_24_1; i_1 = &i_1[1])
        void* eax_4 = *i_1
        *(eax_4 + 0x34) += arg2
        *(eax_4 + 0x48) += arg2
    
    char* eax_5 = data_797d44
    *(ebx + 0x44) = 0
    int32_t var_58 = 0
    int32_t var_54 = 0
    bool eax_6 = sub_424db0(eax_5)
    
    if (eax_6 != 0)
        eax_6 = (***(eax_5 + 8))(&var_58, &var_54)
    
    eax_6 = eax_6 == 1
    int32_t eax_7
    int32_t ecx_3
    
    if (eax_6 != 0)
        eax_7 = var_58
        ecx_3 = var_54
    else
        eax_7 = *(ebx + 0x48)
        ecx_3 = *(ebx + 0x4c)
        var_58 = eax_7
        var_54 = ecx_3
    
    int32_t eax_8 = eax_7 - *(ebx + 0x48)
    int32_t ecx_4 = ecx_3 - *(ebx + 0x4c)
    char* eax_9 = data_797d44
    bool edx_3
    
    if (sub_424db0(eax_9) != 0)
        if ((***(eax_9 + 0x18))(eax_2) != 0)
            void var_30
            void var_2c
            
            if ((0x8000 & GetKeyState(1)) != 0)
                edx_3 = (***(eax_9 + 8))(&var_2c, &var_30) != 0
            else
                edx_3 = false
        else
            edx_3 = false
    else
        edx_3 = false
    
    char var_5f_1
    
    if (*(ebx + 0x50) == 0)
        var_5f_1 = 1
    
    if (*(ebx + 0x50) != 0 || edx_3 == 0)
        var_5f_1 = 0
    
    bool cond:0_1 = var_5f_1 != 0
    int32_t* eax_15 = *(ebx + 0x70)
    *(ebx + 0x50) = edx_3
    int32_t var_4c_1
    
    if (eax_15 == *(ebx + 0x74))
    label_417db2:
        var_4c_1 = 0
    else
        while (true)
            void* ecx_7 = *eax_15
            
            if (*(ecx_7 + 0x38) != 0)
                var_4c_1 = *(ecx_7 + 4)
                break
            
            eax_15 = &eax_15[1]
            
            if (eax_15 == *(ebx + 0x74))
                goto label_417db2
    
    int32_t esi_1 = var_4c_1
    int32_t ecx_8 = *(ebx + 0x54)
    int32_t var_5c_1 = esi_1
    void* eax_20
    
    if (eax_6 == 0 || *(ebx + 0x51) == 0)
        if (ecx_8 == esi_1)
            void** eax_66 = var_28
            void* edx_35
            
            if (eax_66 == var_24_1)
            label_418333:
                edx_35 = *(ebx + 0x40)
            else
                while (true)
                    edx_35 = *eax_66
                    
                    if (*(edx_35 + 4) == ecx_8)
                        break
                    
                    eax_66 = &eax_66[1]
                    
                    if (eax_66 == var_24_1)
                        goto label_418333
            
            sub_41db00(edx_35)
        
        eax_20 = var_24_1
    else
        if (cond:0_1 != 0 || var_5f_1 != 0)
            *(ebx + 0x54) = 0
            var_5c_1 = 0
            eax_20 = var_24_1
            void* var_50_1 = eax_20
            
            if (eax_20 != var_28)
                do
                    void* esi_5 = *(eax_20 - 4)
                    void* eax_22 = sub_5f7370(*data_797da0, *(esi_5 + 4))
                    void* eax_23
                    
                    if (eax_22 == 0 || *(*(eax_22 + 0xc) + 0x4c) == 0)
                        eax_23 = sub_5f7370(*data_797da0, *(esi_5 + 4))
                    
                    if ((eax_22 != 0 && *(*(eax_22 + 0xc) + 0x4c) != 0) || eax_23 == 0
                            || *(*(eax_23 + 0xc) + 0x4d) == 0)
                        int32_t ecx_13 = var_54
                        int32_t edx_9 = var_58
                        void* eax_26 = sub_5f7370(*data_797da0, *(esi_5 + 4))
                        
                        if (eax_26 != 0 && *(*(eax_26 + 0xc) + 0x24) != 0)
                            void* eax_27 = sub_5f7370(*data_797da0, *(esi_5 + 4))
                            
                            if (eax_27 != 0 && *(*(eax_27 + 0xc) + 0x24) != 0
                                    && sub_5f4cc0(eax_27, edx_9, ecx_13, 1) != 0)
                                if (var_5f_1 != 0)
                                    *(ebx + 0x54) = *(esi_5 + 4)
                                
                                if (cond:0_1 != 0)
                                    var_5c_1 = *(esi_5 + 4)
                                
                                break
                    
                    eax_20 = var_50_1 - 4
                    var_50_1 = eax_20
                while (eax_20 != var_28)
                
                eax_20 = var_24_1
            
            if (var_4c_1 != var_5c_1)
                void** ecx_21 = var_28
                void* edi_9
                
                if (ecx_21 == eax_20)
                label_417f52:
                    edi_9 = *(ebx + 0x40)
                else
                    while (true)
                        edi_9 = *ecx_21
                        
                        if (*(edi_9 + 4) == var_5c_1)
                            break
                        
                        ecx_21 = &ecx_21[1]
                        
                        if (ecx_21 == eax_20)
                            goto label_417f52
                
                for (int32_t* i_2 = *(edi_9 + 0x58); i_2 != *(edi_9 + 0x5c); i_2 = &i_2[1])
                    (*(**i_2 + 0x40))(*(edi_9 + 0x68))
                
                *(edi_9 + 0x38) = 1
                eax_20 = var_24_1
        else
            if (edx_3 == 0)
                sub_41dc90(sub_418350(&var_28, ecx_8, ebx))
                sub_41dd20(sub_418350(&var_28, *(ebx + 0x58), ebx), *(ebx + 0x54))
                *(ebx + 0x54) = 0
                *(ebx + 0x58) = 0
            
            eax_20 = var_24_1
        
        void** ecx_24 = var_28
        int32_t edi_10 = *(ebx + 0x54)
        void* var_50_2
        void* esi_7
        
        if (ecx_24 == eax_20)
        label_417f96:
            void* ecx_25 = *(ebx + 0x40)
            var_50_2 = ecx_25
            esi_7 = ecx_25
        else
            while (true)
                void* edx_17 = *ecx_24
                
                if (*(edx_17 + 4) == edi_10)
                    esi_7 = edx_17
                    var_50_2 = esi_7
                    break
                
                ecx_24 = &ecx_24[1]
                
                if (ecx_24 == eax_20)
                    goto label_417f96
        
        if (esi_7 != *(ebx + 0x40) && edi_10 == var_5c_1)
            void* eax_32 = sub_5f7370(*data_797da0, *(esi_7 + 4))
            
            if (eax_32 != 0)
                eax_32.b = *(*(eax_32 + 0xc) + 0x4e)
            else
                eax_32.b = 0
            
            if (eax_8 != 0)
                if (eax_32.b != 0)
                    goto label_417ffd
                
                eax_20 = var_24_1
            else if (ecx_4 == 0 || eax_32.b == 0)
                eax_20 = var_24_1
            else
            label_417ffd:
                void* eax_33 = sub_5f7370(*data_797da0, *(esi_7 + 4))
                int32_t esi_8
                
                if (eax_33 != 0)
                    void* eax_34 = *(eax_33 + 0xc)
                    esi_8 = *(eax_34 + 0x19c) + *(eax_34 + 0x18)
                else
                    esi_8 = 0
                
                void* eax_36 = sub_5f7370(*data_797da0, *(var_50_2 + 4))
                
                if (eax_36 != 0)
                    void* ecx_30 = *(eax_36 + 0xc)
                    eax_36 = *(ecx_30 + 0x198) + *(ecx_30 + 0x14)
                
                int32_t esi_10 = esi_8 + ecx_4
                void* esi_11 = eax_36 + eax_8
                void* eax_39 = sub_5f7370(*data_797da0, *(var_50_2 + 4))
                
                if (eax_39 != 0)
                    void* eax_40 = *(eax_39 + 0xc)
                    
                    if (*(eax_40 + 0x14) != esi_11 || *(eax_40 + 0x18) != esi_10)
                        *(eax_40 + 0x14) = esi_11
                        *(eax_40 + 0x18) = esi_10
                        *(eax_40 + 0xc) = 1
                
                sub_41dbe0(var_50_2)
                eax_20 = var_24_1
                *(ebx + 0x58) = 0
                char var_5e_2 = 0
                void* var_48_2 = eax_20
                
                if (eax_20 != var_28)
                    void* eax_50
                    
                    do
                        void* edi_15 = *(var_48_2 - 4)
                        
                        if (edi_15 != var_50_2)
                            if (sub_41d990(edi_15, var_58, var_54) == 0 || var_5e_2 != 0)
                                sub_41db00(edi_15)
                                int32_t eax_46 = *(ebx + 0x54)
                                
                                if (*(edi_15 + 0x45) != 0)
                                    for (int32_t* i_3 = *(edi_15 + 0x58); i_3 != *(edi_15 + 0x5c); 
                                            i_3 = &i_3[1])
                                        (*(**i_3 + 0x2c))(*(edi_15 + 0x68), eax_46)
                                
                                *(edi_15 + 0x45) = 0
                            else
                                sub_41d9f0(edi_15)
                                sub_41dce0(edi_15, *(ebx + 0x54))
                                int32_t* ecx_35 = data_797da0
                                *(ebx + 0x58) = *(edi_15 + 4)
                                void* eax_45 = sub_5f7370(*ecx_35, *(edi_15 + 4))
                                
                                if (eax_45 == 0 || *(*(eax_45 + 0xc) + 0x4d) == 0)
                                    var_5e_2 = 1
                        
                        eax_50 = var_48_2 - 4
                        var_48_2 = eax_50
                    while (eax_50 != var_28)
                    eax_20 = var_24_1
        
        char var_5e_3 = 0
        void* var_48_3 = eax_20
        
        if (eax_20 != var_28)
            void* eax_60
            
            do
                void* ebx_1 = *(var_48_3 - 4)
                
                if (var_5e_3 != 0)
                label_418217:
                    
                    if (ecx_8 != 0)
                        if (*(ebx_1 + 0x45) != 0)
                            for (int32_t* i_4 = *(ebx_1 + 0x58); i_4 != *(ebx_1 + 0x5c); 
                                    i_4 = &i_4[1])
                                (*(**i_4 + 0x2c))(*(ebx_1 + 0x68), ecx_8)
                        
                        *(ebx_1 + 0x45) = 0
                    
                    sub_41db00(ebx_1)
                else
                    int32_t ecx_38 = var_58
                    int32_t esi_14 = var_54
                    void* eax_52 = sub_5f7370(*data_797da0, *(ebx_1 + 4))
                    
                    if (eax_52 == 0 || *(*(eax_52 + 0xc) + 0x24) == 0)
                        goto label_418217
                    
                    void* eax_54 = sub_5f7370(*data_797da0, *(ebx_1 + 4))
                    
                    if (eax_54 == 0 || *(*(eax_54 + 0xc) + 0x24) == 0)
                        goto label_418217
                    
                    if (sub_5f4cc0(eax_54, ecx_38, esi_14, 1) == 0)
                        goto label_418217
                    
                    sub_41d9f0(ebx_1)
                    void* eax_56 = sub_5f7370(*data_797da0, *(ebx_1 + 4))
                    
                    if (eax_56 == 0 || *(*(eax_56 + 0xc) + 0x4d) == 0)
                        var_5e_3 = 1
                
                eax_60 = var_48_3 - 4
                var_48_3 = eax_60
            while (eax_60 != var_28)
            eax_20 = var_24_1
            ebx = arg1
        
        esi_1 = var_5c_1
    
    void** ecx_45 = var_28
    void* edi_22
    
    if (ecx_45 == eax_20)
    label_418282:
        edi_22 = *(ebx + 0x40)
    else
        while (true)
            void* edx_32 = *ecx_45
            
            if (*(edx_32 + 4) == esi_1)
                edi_22 = edx_32
                break
            
            ecx_45 = &ecx_45[1]
            
            if (ecx_45 == eax_20)
                goto label_418282
    
    sub_41dd60(edi_22)
    sub_41db80(edi_22)
    
    if (var_4c_1 != esi_1)
        void** eax_63 = var_28
        void* ecx_46
        
        if (eax_63 == var_24_1)
        label_4182b5:
            ecx_46 = *(ebx + 0x40)
        else
            while (true)
                ecx_46 = *eax_63
                
                if (*(ecx_46 + 4) == var_4c_1)
                    break
                
                eax_63 = &eax_63[1]
                
                if (eax_63 == var_24_1)
                    goto label_4182b5
        
        sub_41def0(ecx_46)
    
    if (eax_6 != 0 && *(ebx + 0x51) != 0)
        int32_t edx_34 = var_54
        *(ebx + 0x48) = var_58
        *(ebx + 0x4c) = edx_34
    
    *(ebx + 0x51) = eax_6
    *(ebx + 0x68) += arg2
    int32_t eax_65 = *(ebx + 0x64)
    
    if (eax_65 s< *(ebx + 0x68))
        *(ebx + 0x68) = eax_65
    
    result = var_28
    
    if (result != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
