// 函数: sub_632fc0
// 地址: 0x632fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** j_3
int32_t eax_2 = data_78c474 ^ &j_3
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** result

if (*arg3 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** j_10 = nullptr
    int32_t var_d8_1 = 0
    int32_t var_d4_1 = 0
    int32_t var_c_1 = 0
    int32_t var_94_1 = 0xf
    int32_t var_98_1 = 0
    char var_a8 = 0
    sub_401270(&var_a8, 3, 0x7339e4)
    var_c_1.b = 1
    sub_405220(&var_a8, &j_10)
    var_c_1.b = 0
    
    if (var_94_1 u>= 0x10)
        int32_t var_110_1 = var_a8.d
        sub_6b4d5b()
    
    int32_t var_94_2 = 0xf
    int32_t var_98_2 = 0
    var_a8 = 0
    sub_401270(&var_a8, 3, 0x7339e8)
    var_c_1.b = 2
    sub_405220(&var_a8, &j_10)
    var_c_1.b = 0
    
    if (var_94_2 u>= 0x10)
        int32_t var_110_2 = var_a8.d
        sub_6b4d5b()
    
    int32_t var_94_3 = 0xf
    int32_t var_98_3 = 0
    var_a8 = 0
    sub_401270(&var_a8, 3, 0x7339ec)
    var_c_1.b = 3
    sub_405220(&var_a8, &j_10)
    var_c_1.b = 0
    
    if (var_94_3 u>= 0x10)
        int32_t var_110_3 = var_a8.d
        sub_6b4d5b()
    
    struct _EXCEPTION_REGISTRATION_RECORD** j_7 = j_10
    void** edx_1 = *(arg3 + 8)
    int32_t eax_8 = *(arg3 + 0x18)
    j_3 = j_7
    void** var_c8 = edx_1
    bool cond:4_1
    
    if (j_7 != var_d8_1)
        void* j_5
        
        do
            struct _EXCEPTION_REGISTRATION_RECORD** j_4 = j_3
            
            if (j_4[5] u>= 0x10)
                j_4 = *j_4
            
            struct _EXCEPTION_REGISTRATION_RECORD** j_8 = j_4
            int32_t var_114_1 = sub_401170(arg1)
            var_c_1.b = 4
            int32_t* var_70
            sub_401c00(&var_70, sub_4104a0("%s.%s"))
            var_c_1.b = 6
            char var_54
            int32_t var_40
            
            if (var_40 u>= 0x10)
                int32_t var_110_4 = var_54.d
                sub_6b4d5b()
            
            var_40 = 0xf
            int32_t var_44_1 = 0
            var_54 = 0
            void** result_3 = sub_5cdae0(&arg3[4], &var_70)
            void** esi_5 = *(arg3 + 8)
            void** result_1 = result_3
            int32_t var_5c
            int32_t eax_14
            
            if (result_3 != esi_5)
                int32_t edi_4 = result_3[7]
                void* eax_13 = &result_3[3]
                
                if (*(eax_13 + 0x14) u>= 0x10)
                    eax_13 = *eax_13
                
                int32_t var_60
                int32_t esi_6 = var_60
                
                if (var_60 u>= edi_4)
                    esi_6 = edi_4
                
                int32_t* edx_3 = var_70
                
                if (var_5c u< 0x10)
                    edx_3 = &var_70
                
                eax_14 = sub_402320(eax_13, edx_3, eax_13, esi_6)
                bool cond:1_1 = eax_14 s< 0
                
                if (eax_14 == 0)
                    if (var_60 u>= edi_4)
                        eax_14.b = var_60 != edi_4
                    else
                        eax_14 = 0xffffffff
                    
                    cond:1_1 = eax_14 s< 0
                
                eax_14.b = cond:1_1
            
            void** var_ec
            void*** eax_15
            
            if (result_3 == esi_5 || eax_14.b != 0)
                var_ec = esi_5
                eax_15 = &var_ec
            else
                eax_15 = &result_1
            
            if (*eax_15 != var_c8)
                var_c_1.b = 7
                char var_38
                sub_401c00(&var_a8, sub_405c90(&var_38, arg1, ".bmp"))
                var_c_1.b = 9
                int32_t var_24
                
                if (var_24 u>= 0x10)
                    int32_t var_110_8 = var_38.d
                    sub_6b4d5b()
                
                int32_t var_24_1 = 0xf
                int32_t var_28_1 = 0
                var_38 = 0
                void** eax_21 = sub_5cdae0(&arg3[0x14], &var_a8)
                void** esi_8 = *(arg3 + 0x18)
                var_c8 = eax_21
                var_ec = esi_8
                int32_t eax_23
                
                if (eax_21 != esi_8)
                    int32_t esi_9 = eax_21[7]
                    void* eax_22 = &eax_21[3]
                    
                    if (*(eax_22 + 0x14) u>= 0x10)
                        eax_22 = *eax_22
                    
                    int32_t edi_6 = var_98_3
                    
                    if (var_98_3 u>= esi_9)
                        edi_6 = esi_9
                    
                    int32_t* edx_5 = var_a8.d
                    
                    if (var_94_3 u< 0x10)
                        edx_5 = &var_a8
                    
                    eax_23 = sub_402320(eax_22, edx_5, eax_22, edi_6)
                    bool cond:3_1 = eax_23 s< 0
                    
                    if (eax_23 == 0)
                        if (var_98_3 u>= esi_9)
                            eax_23.b = var_98_3 != esi_9
                        else
                            eax_23 = 0xffffffff
                        
                        cond:3_1 = eax_23 s< 0
                    
                    eax_23.b = cond:3_1
                
                void*** eax_24
                
                if (eax_21 == esi_8 || eax_23.b != 0)
                    var_ec = var_ec
                    eax_24 = &var_ec
                else
                    eax_24 = &var_c8
                
                bool cond:5_1 = *eax_24 != eax_8
                char var_8c
                sub_632880(&var_8c)
                var_c_1.b = 0xa
                sub_5870d0(&var_8c)
                sub_402000(&var_8c, &var_70, 0, 0xffffffff)
                var_38.d = 0
                int32_t var_34_1 = 0
                int32_t var_30_1 = 0
                int32_t var_b4 = 0xffffffff
                int32_t var_b0_1 = 0
                int32_t var_ac_1 = 0
                char* var_110_12 = &var_38
                var_c_1.b = 0xc
                char eax_27 = sub_601f80(&var_8c)
                int32_t esi_11 = var_38.d
                int32_t var_78
                
                if (eax_27 == 0 || esi_11 == var_34_1)
                    if (esi_11 != 0)
                        int32_t var_110_21 = esi_11
                        sub_6b4d5b()
                    
                    if (var_78 u>= 0x10)
                        int32_t var_110_22 = var_8c.d
                        sub_6b4d5b()
                    
                    int32_t var_78_2 = 0xf
                    int32_t var_7c_2 = 0
                    var_8c = 0
                    
                    if (var_94_3 u>= 0x10)
                        int32_t var_110_23 = var_a8.d
                        sub_6b4d5b()
                    
                    int32_t var_94_5 = 0xf
                    int32_t var_98_5 = 0
                    var_a8 = 0
                    
                    if (var_5c u>= 0x10)
                        int32_t* var_110_24 = var_70
                        sub_6b4d5b()
                    
                    int32_t var_5c_2 = 0xf
                    j_7 = j_10
                    int32_t var_60_2 = 0
                    var_70.b = 0
                    cond:4_1 = j_7 == 0
                    goto label_6332ac
                
                void** result_2 = (*(*arg2 + 8))(esi_11, var_34_1 - esi_11)
                
                if (result_2 == 0)
                    if (esi_11 != 0)
                        int32_t var_110_14 = esi_11
                        sub_6b4d5b()
                    
                    if (var_78 u>= 0x10)
                        int32_t var_110_15 = var_8c.d
                        sub_6b4d5b()
                    
                    int32_t var_78_1 = 0xf
                    int32_t var_7c_1 = 0
                    var_8c = 0
                    
                    if (var_94_3 u>= 0x10)
                        int32_t var_110_16 = var_a8.d
                        sub_6b4d5b()
                    
                    int32_t var_94_4 = 0xf
                    int32_t var_98_4 = 0
                    var_a8 = 0
                    
                    if (var_5c u>= 0x10)
                        int32_t* var_110_17 = var_70
                        sub_6b4d5b()
                    
                    int32_t var_5c_1 = 0xf
                    int32_t var_60_1 = 0
                    var_70.b = 0
                    sub_4054e0(&j_10)
                    goto label_6332c2
                
                if (cond:5_1 == 0)
                    sub_65ab60(&var_38)
                    sub_4c1cf0(&var_8c)
                    sub_401110(&var_a8)
                    sub_401110(&var_70)
                    sub_4054e0(&j_10)
                    result = result_2
                    goto label_6332cb
                
                var_c_1.b = 0xd
                sub_401180(&var_8c, 0xffffffff, sub_632880(&var_54), 0)
                var_c_1.b = 0xc
                sub_4c1cf0(&var_54)
                sub_402be0(&var_54, 0x733a00)
                var_c_1.b = 0xe
                sub_5870d0(&var_8c)
                int32_t* esi_17 = &var_8c
                sub_402000(esi_17, &var_54, 0, 0xffffffff)
                var_c_1.b = 0xc
                sub_401110(&var_54)
                sub_5870d0(&var_8c)
                sub_402000(esi_17, &var_a8, 0, 0xffffffff)
                var_54.d = 0
                int32_t var_50_1 = 0
                int32_t var_4c_1 = 0
                int32_t var_c0 = 0xffffffff
                int32_t var_bc_1 = 0
                int32_t var_b8_1 = 0
                char* var_110_19 = &var_54
                var_c_1.b = 0x10
                char eax_36 = sub_601f80(&var_8c)
                int32_t ecx_22
                
                if (eax_36 != 0)
                    ecx_22 = var_54.d
                
                if (eax_36 == 0 || ecx_22 == var_50_1)
                    (*(*result_2 + 4))(eax_4)
                    sub_65ab60(&var_54)
                else
                    int32_t* eax_40 = (*(*arg2 + 8))(ecx_22, var_50_1 - ecx_22)
                    void* edx_9 = *result_2
                    
                    if (eax_40 == 0)
                        (*(edx_9 + 4))(eax_4)
                    else if ((*(edx_9 + 0x18))(eax_4) != 0x20)
                        (*(*eax_40 + 4))()
                        (*(*result_2 + 4))()
                    else if ((*(*eax_40 + 0x18))() != 0x20)
                        (*(*eax_40 + 4))()
                        (*(*result_2 + 4))()
                    else if ((*(*result_2 + 0x24))() == 0)
                        (*(*eax_40 + 4))()
                        (*(*result_2 + 4))()
                    else if ((*(*eax_40 + 0x28))() == 0)
                        (*(*eax_40 + 4))()
                        (*(*result_2 + 4))()
                    else
                        int32_t eax_50 = (*(*eax_40 + 0x10))()
                        
                        if ((*(*result_2 + 0x10))() != eax_50)
                            (*(*eax_40 + 4))()
                            (*(*result_2 + 4))()
                        else
                            int32_t eax_54 = (*(*eax_40 + 0x14))()
                            
                            if ((*(*result_2 + 0x14))() != eax_54)
                                (*(*eax_40 + 4))()
                                (*(*result_2 + 4))()
                            else
                                struct _EXCEPTION_REGISTRATION_RECORD** j_6 =
                                    (*(*result_2 + 0x10))()
                                int32_t eax_58 = *(*result_2 + 0x14)
                                j_3 = j_6
                                int32_t i_2 = eax_58()
                                void** result_4 = (*(*arg4 + 8))(j_6, i_2, 0x20)
                                result_1 = result_4
                                
                                if (result_4 != 0)
                                    void** result_5 = result_1
                                    char* esi_25 = (*(*result_5 + 8))(0, 0)
                                    int32_t eax_66 = (*(*result_5 + 0x1c))() - (j_3 << 2)
                                    char* edi_11 = (*(*result_2 + 8))(0, 0)
                                    int32_t eax_70 = (*(*result_2 + 0x1c))()
                                    int32_t ecx_45 = j_3 * 2
                                    void* eax_73 = (*(*eax_40 + 8))(0, 0)
                                    int32_t eax_75 = (*(*eax_40 + 0x1c))()
                                    int32_t ecx_50 = j_3 * 2
                                    
                                    if (i_2 s> 0)
                                        int32_t i_1 = i_2
                                        void* ecx_53 = eax_73
                                        int32_t i
                                        
                                        do
                                            struct _EXCEPTION_REGISTRATION_RECORD** j_2 = j_3
                                            
                                            if (j_2 s> 0)
                                                struct _EXCEPTION_REGISTRATION_RECORD** j_1 = j_2
                                                struct _EXCEPTION_REGISTRATION_RECORD** j
                                                
                                                do
                                                    *esi_25 = *edi_11
                                                    esi_25[1] = edi_11[1]
                                                    esi_25[2] = edi_11[2]
                                                    esi_25[3] = *(ecx_53 + 3)
                                                    esi_25 = &esi_25[4]
                                                    edi_11 = &edi_11[4]
                                                    ecx_53 += 4
                                                    j = j_1
                                                    j_1 -= 1
                                                while (j != 1)
                                            
                                            esi_25 = &esi_25[eax_66]
                                            edi_11 = &edi_11[eax_70 - ecx_45 * 2]
                                            ecx_53 += eax_75 - ecx_50 * 2
                                            i = i_1
                                            i_1 -= 1
                                        while (i != 1)
                                    
                                    (*(*eax_40 + 4))()
                                    (*(*result_2 + 4))()
                                    sub_601e80(&var_c0)
                                    sub_65ab60(&var_54)
                                    sub_601e80(&var_b4)
                                    sub_65ab60(&var_38)
                                    sub_4c1cf0(&var_8c)
                                    sub_401110(&var_a8)
                                    sub_401110(&var_70)
                                    sub_4054e0(&j_10)
                                    result = result_1
                                    goto label_6332cb
                                
                                (*(*eax_40 + 4))()
                                (*(*result_2 + 4))(eax_4)
                    
                    sub_601e80(&var_c0)
                    sub_65ab60(&var_54)
                    sub_601e80(&var_b4)
                
                sub_65ab60(&var_38)
                sub_4c1cf0(&var_8c)
                sub_401110(&var_a8)
                sub_401110(&var_70)
                sub_4054e0(&j_10)
                goto label_6332c2
            
            var_c_1.b = 0
            
            if (var_5c u>= 0x10)
                int32_t* var_110_7 = var_70
                sub_6b4d5b()
            
            j_5 = &j_3[7]
            j_3 = j_5
        while (j_5 != var_d8_1)
        j_7 = j_10
    
    cond:4_1 = j_7 == 0
label_6332ac:
    
    if (not(cond:4_1))
        sub_405780(j_7, var_d8_1)
        struct _EXCEPTION_REGISTRATION_RECORD** j_9 = j_7
        sub_6b4d5b()

label_6332c2:
result = nullptr
label_6332cb:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &j_3)
return result
