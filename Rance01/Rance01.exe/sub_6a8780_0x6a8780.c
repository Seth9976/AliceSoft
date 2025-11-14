// 函数: sub_6a8780
// 地址: 0x6a8780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727d50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* arg_8
int32_t* edi = arg_8
void* eax_3 = edi[1]
int32_t* ecx = *edi

if (ecx != eax_3)
    int32_t* edx_1 = arg_8
    int32_t* var_6c_1 = edx_1
    int32_t* eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_6a8f00(eax_3, edx_1, ecx, eax_3)
    int32_t* var_74_1 = arg_8
    int32_t var_78_1 = edi[1]
    sub_6a8f60(eax_4, edx_2)
    edi[1] = eax_4

void* eax_7 = ebx[1]
int32_t* ecx_2 = *ebx

if (ecx_2 != eax_7)
    int32_t* edx_3 = arg_8
    int32_t* var_6c_2 = edx_3
    int32_t* eax_8
    int32_t edx_4
    eax_8, edx_4 = sub_6a8f00(eax_7, edx_3, ecx_2, eax_7)
    int32_t* var_74_2 = arg_8
    int32_t var_78_2 = ebx[1]
    sub_6a8f60(eax_8, edx_4)
    ebx[1] = eax_8

int32_t* eax_11 = *arg1
int32_t* ecx_4 = arg1[1]
int32_t* var_54 = eax_11
int32_t* var_40 = ecx_4
int32_t* var_50
int32_t* var_4c
int32_t* var_48
int32_t* var_44
int32_t var_38

if (eax_11 != ecx_4)
    void* eax_32
    
    do
        char* eax_12 = data_797d94
        int32_t* edi_1 = *var_54
        
        if (sub_5d57f0(eax_12) != 0)
            void* esi_4 = *(eax_12 + 0x38)
            bool cond:0_1 = *(esi_4 + 4) == 0
            var_50 = edi_1
            int32_t* eax_18
            
            if (cond:0_1)
                eax_18 = nullptr
            else
                sub_42e070(esi_4 + 0x14, &var_4c, &var_50)
                int32_t* eax_15 = var_4c
                
                if (eax_15 == *(esi_4 + 0x18))
                    eax_18 = nullptr
                else
                    int32_t* eax_16 = eax_15[4]
                    
                    if (eax_16 != 0)
                        eax_18 = (*(**eax_16 + 0x20))(eax_2)
                    else
                        eax_18 = nullptr
            
            ebx = eax_18
        else
            ebx = nullptr
        
        char* eax_19 = data_797d94
        int32_t ebp_1
        
        if (sub_5d57f0(eax_19) != 0)
            void* esi_7 = *(eax_19 + 0x38)
            bool cond:1_1 = *(esi_7 + 4) == 0
            var_50 = edi_1
            int32_t eax_25
            
            if (cond:1_1)
                eax_25 = 0
            else
                sub_42e070(esi_7 + 0x14, &var_48, &var_50)
                int32_t* eax_22 = var_48
                
                if (eax_22 == *(esi_7 + 0x18))
                    eax_25 = 0
                else
                    int32_t* eax_23 = eax_22[4]
                    
                    if (eax_23 != 0)
                        eax_25 = (*(**eax_23 + 0x24))(eax_2)
                    else
                        eax_25 = 0
            
            ebp_1 = eax_25
        else
            ebp_1 = 0
        
        char* eax_26 = data_797d94
        char* eax_27 = sub_5d57f0(eax_26)
        
        if (eax_27.b != 0)
            void* esi_10 = *(eax_26 + 0x38)
            bool cond:2_1 = *(esi_10 + 4) == 0
            var_50 = edi_1
            
            if (cond:2_1)
                eax_27.b = 0
            else
                sub_42e070(esi_10 + 0x14, &var_44, &var_50)
                eax_27 = var_44
                
                if (eax_27 == *(esi_10 + 0x18))
                    eax_27.b = 0
                else
                    eax_27 = *(eax_27 + 0x10)
                    
                    if (eax_27 != 0)
                        eax_27 = (*(**eax_27 + 0x1c))(eax_2)
                    else
                        eax_27.b = 0
        
        var_38 = 0
        int32_t* var_34_1 = edi_1
        int32_t* var_30_1 = ebx
        int32_t var_2c_1 = 1
        int128_t* var_28_1 = nullptr
        int128_t* var_24_1 = nullptr
        int32_t var_20_1 = 0
        bool var_18_1 = eax_27.b != 0
        int32_t var_14_1 = ebp_1
        int32_t var_4 = 0
        sub_6a7ac0(&var_38)
        sub_6a8c80(&var_38, arg_8)
        int32_t var_4_1 = 0xffffffff
        
        if (var_28_1 != var_24_1)
            sub_6b49d0(var_28_1, var_24_1, nullptr, eax_2)
        
        if (var_28_1 != 0)
            int128_t* var_6c_7 = var_28_1
            sub_6b4d5b()
        
        eax_32 = &var_54[1]
        var_54 = eax_32
    while (eax_32 != var_40)

int32_t** result_3 = arg1[4]
void* result = arg1[5]
int32_t** result_1 = result_3
void* result_2 = result

if (result_3 != result)
    while (true)
        int32_t* ebp_3 = *result_3
        char* eax_34 = data_797d94
        arg1 = ebp_3
        
        if (sub_5d57f0(eax_34) != 0)
            void* edx_10 = *(eax_34 + 0x3c)
            int32_t* eax_42
            
            if (*(edx_10 + 4) == 0)
                eax_42 = nullptr
            else
                void** ecx_12 = *(edx_10 + 0x1c)
                void** eax_36 = ecx_12[1]
                
                while (*(eax_36 + 0x15) == 0)
                    if (eax_36[3] s>= ebp_3)
                        ecx_12 = eax_36
                        eax_36 = *eax_36
                    else
                        eax_36 = eax_36[2]
                
                int32_t* eax_37 = *(edx_10 + 0x1c)
                arg_8 = ecx_12
                int32_t** eax_38
                
                if (ecx_12 == eax_37 || ebp_3 s< ecx_12[3])
                    var_40 = eax_37
                    eax_38 = &var_40
                else
                    eax_38 = &arg_8
                
                int32_t* eax_39 = *eax_38
                
                if (eax_39 == *(edx_10 + 0x1c))
                    eax_42 = nullptr
                else
                    int32_t* eax_40 = eax_39[4]
                    
                    if (eax_40 != 0)
                        eax_42 = (*(**eax_40 + 0x20))(eax_2)
                    else
                        eax_42 = nullptr
            
            arg_8 = eax_42
        else
            arg_8 = nullptr
        
        char* eax_43 = data_797d94
        int32_t edi_3
        
        if (sub_5d57f0(eax_43) != 0)
            void* edx_12 = *(eax_43 + 0x3c)
            int32_t eax_51
            
            if (*(edx_12 + 4) == 0)
                eax_51 = 0
            else
                void** ecx_14 = *(edx_12 + 0x1c)
                void** eax_45 = ecx_14[1]
                
                while (*(eax_45 + 0x15) == 0)
                    if (eax_45[3] s>= ebp_3)
                        ecx_14 = eax_45
                        eax_45 = *eax_45
                    else
                        eax_45 = eax_45[2]
                
                int32_t* eax_46 = *(edx_12 + 0x1c)
                var_44 = ecx_14
                int32_t** eax_47
                
                if (ecx_14 == eax_46 || ebp_3 s< ecx_14[3])
                    var_48 = eax_46
                    eax_47 = &var_48
                else
                    eax_47 = &var_44
                
                int32_t* eax_48 = *eax_47
                
                if (eax_48 == *(edx_12 + 0x1c))
                    eax_51 = 0
                else
                    int32_t* eax_49 = eax_48[4]
                    
                    if (eax_49 != 0)
                        eax_51 = (*(**eax_49 + 0x24))(eax_2)
                    else
                        eax_51 = 0
            
            edi_3 = eax_51
        else
            edi_3 = 0
        
        char* eax_52 = data_797d94
        
        if (sub_5d57f0(eax_52).b != 0)
            void* edx_14 = *(eax_52 + 0x3c)
            char* eax_53
            
            if (*(edx_14 + 4) == 0)
                eax_53.b = 0
            else
                int32_t* ecx_16 = *(edx_14 + 0x1c)
                int32_t* eax_54 = ecx_16[1]
                
                while (*(eax_54 + 0x15) == 0)
                    if (eax_54[3] s>= ebp_3)
                        ecx_16 = eax_54
                        eax_54 = *eax_54
                    else
                        eax_54 = eax_54[2]
                
                int32_t* eax_55 = *(edx_14 + 0x1c)
                var_44 = ecx_16
                char** eax_56
                
                if (ecx_16 == eax_55 || ebp_3 s< ecx_16[3])
                    var_4c = eax_55
                    eax_56 = &var_4c
                else
                    eax_56 = &var_44
                
                eax_53 = *eax_56
                
                if (eax_53 == *(edx_14 + 0x1c))
                    eax_53.b = 0
                else
                    eax_53 = *(eax_53 + 0x10)
                    
                    if (eax_53 != 0)
                        eax_53 = (*(**eax_53 + 0x1c))(eax_2)
                    else
                        eax_53.b = 0
            
            ebx.b = eax_53.b
        else
            ebx.b = 0
        
        char* eax_58 = data_797d94
        int32_t eax_60
        
        if (sub_5d57f0(eax_58) != 0)
            void* esi_17 = *(eax_58 + 0x3c)
            void* edx_16 = *(esi_17 + 0xc)
            
            if (edx_16 == 0)
                eax_60 = *(esi_17 + 0x40)
            else
                void** ecx_18 = *(edx_16 + 0xc)
                void** eax_61 = ecx_18[1]
                
                if (*(eax_61 + 0x15) == 0)
                    do
                        if (eax_61[3] s>= arg_8)
                            ecx_18 = eax_61
                            eax_61 = *eax_61
                        else
                            eax_61 = eax_61[2]
                    while (*(eax_61 + 0x15) == 0)
                    
                    ebp_3 = arg1
                
                int32_t* eax_62 = *(edx_16 + 0xc)
                var_44 = ecx_18
                
                if (ecx_18 != eax_62)
                    ebp_3 = arg1
                
                int32_t** eax_63
                
                if (ecx_18 == eax_62 || arg_8 s< ecx_18[3])
                    var_50 = eax_62
                    eax_63 = &var_50
                else
                    eax_63 = &var_44
                
                int32_t* eax_64 = *eax_63
                
                if (eax_64 == *(edx_16 + 0xc))
                    eax_60 = *(esi_17 + 0x40)
                else
                    void* eax_65 = eax_64[4]
                    
                    if (eax_65 == 0)
                        eax_60 = *(esi_17 + 0x40)
                    else
                        eax_60 = *(eax_65 + 0xc)
                        
                        if (eax_60 == 0xffffffff)
                            eax_60 = *(esi_17 + 0x40)
        else
            eax_60 = 0
        
        int32_t* edx_17 = arg_8
        int32_t var_2c_2 = eax_60
        int128_t* var_28_2 = nullptr
        int128_t* var_24_2 = nullptr
        int32_t var_20_2 = 0
        var_38 = 1
        int32_t* var_34_2 = ebp_3
        int32_t* var_30_2 = edx_17
        bool var_18_2 = ebx.b != 0
        int32_t var_14_2 = edi_3
        int32_t var_4_2 = 1
        sub_6a7ac0(&var_38)
        sub_6a8c80(&var_38, arg2)
        int32_t var_4_3 = 0xffffffff
        
        if (var_28_2 != var_24_2)
            sub_6b49d0(var_28_2, var_24_2, nullptr, eax_2)
        
        if (var_28_2 != 0)
            int128_t* var_6c_9 = var_28_2
            sub_6b4d5b()
        
        result = &result_1[1]
        result_1 = result
        
        if (result == result_2)
            break
        
        result_3 = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
