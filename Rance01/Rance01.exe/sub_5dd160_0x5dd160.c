// 函数: sub_5dd160
// 地址: 0x5dd160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7245c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t* edx = edi + 8

if (sub_405d70(arg2, edx) == 0)
    int128_t* eax_5 = *(edi + 0x28)
    int128_t* ebx_1 = *(edi + 0x24)
    void* esi_1 = edi + 0x24
    
    if (ebx_1 != eax_5)
        void* edi_2 = 0
        sub_6b49d0(ebx_1, eax_5, edi_2, eax_2)
        *(esi_1 + 4) = edi_2 + ebx_1
        edi = arg1
    
    int32_t eax_6 = *(edi + 0x48)
    int32_t ecx_1 = *(edi + 0x44)
    int32_t edx_1 = *(edi + 0x40)
    int32_t var_28 = 0xffffffff
    int32_t var_20_1 = ecx_1
    int32_t var_1c_1 = eax_6
    int32_t var_c_1 = 0
    
    if (sub_5e7890(&var_28, arg2) == 0)
        int32_t var_c_2 = 0xffffffff
        int32_t edi_4 = var_28
        
        if (edi_4 != 0xffffffff)
            sub_409390(edi_4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t ecx_4 = var_28
    int32_t eax_9
    
    if (edx_1 == 0)
        eax_9 = 0
    else if (ecx_4 != 0xffffffff)
        eax_9 = sub_5f9f40(ecx_4)
        ecx_4 = var_28
    else
        eax_9 = 0
    
    *(edi + 0x38) = eax_9
    int32_t eax_11
    
    if (edx_1 == 0)
        eax_11 = 0
    else if (ecx_4 != 0xffffffff)
        eax_11 = sub_5f9f90(ecx_4)
        ecx_4 = var_28
    else
        eax_11 = 0
    
    *(edi + 0x3c) = eax_11
    *(edi + 0x5c) = 1
    
    if (edx_1 == 0 || ecx_4 == 0xffffffff)
    label_5dd373:
        sub_401180(edx, 0xffffffff, arg2, 0)
        int32_t var_c_4 = 0xffffffff
        int32_t edi_7 = var_28
        
        if (edi_7 != 0xffffffff)
            sub_409390(edi_7)
    else
        int32_t* eax_14 = sub_5f9dd0(ecx_4)
        
        if (eax_14 == 0)
            goto label_5dd373
        
        if ((*(*eax_14 + 0x28))(eax_2) == 0)
            goto label_5dd373
        
        sub_404fc0(esi_1)
        int32_t i_1 = 0
        
        if (*(edi + 0x3c) s> 0)
            int32_t i
            
            do
                int32_t j = 0
                
                if (*(edi + 0x38) s> 0)
                    do
                        void* eax_18
                        int32_t ecx_7
                        int32_t edx_5
                        eax_18, edx_5, ecx_7 = (*(*eax_14 + 8))(j, i_1)
                        int32_t eax_19 = *(esi_1 + 4)
                        
                        if (eax_18 + 3 u< eax_19)
                            ecx_7 = *esi_1
                        
                        if (eax_18 + 3 u>= eax_19 || ecx_7 u> eax_18 + 3)
                            if (eax_19 == *(esi_1 + 8))
                                sub_4247b0(esi_1, edx_5, 1)
                            
                            char* eax_23 = *(esi_1 + 4)
                            
                            if (eax_23 != 0)
                                ecx_7.b = *(eax_18 + 3)
                                *eax_23 = ecx_7.b
                        else
                            if (eax_19 == *(esi_1 + 8))
                                sub_4247b0(esi_1, edx_5, 1)
                            
                            char* ecx_8 = *(esi_1 + 4)
                            
                            if (ecx_8 != 0)
                                char* eax_21
                                eax_21.b = *(*esi_1 + eax_18 + 3 - ecx_7)
                                *ecx_8 = eax_21.b
                        
                        *(esi_1 + 4) += 1
                        j += 1
                    while (j s< *(arg1 + 0x38))
                    
                    edi = arg1
                
                i = i_1 + 1
                i_1 = i
            while (i s< *(edi + 0x3c))
        
        sub_401180(edx, 0xffffffff, arg2, 0)
        int32_t var_c_3 = 0xffffffff
        sub_409390(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
return 1
