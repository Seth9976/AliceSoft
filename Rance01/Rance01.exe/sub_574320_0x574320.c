// 函数: sub_574320
// 地址: 0x574320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a07a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1

if (result[4] s>= result[5])
    int32_t ecx_1 = 0
    int32_t* result_5 = nullptr
    int32_t* edi_1 = nullptr
    int32_t* result_2 = nullptr
    int32_t* var_2c_1 = nullptr
    int32_t var_28_1 = 0
    int32_t var_4 = 0
    int32_t* eax_3 = result[1]
    int32_t* i = *eax_3
    int32_t* i_2 = i
    
    if (i != eax_3)
        while (true)
            if (&i_2 u>= edi_1 || result_5 u> &i_2)
                if (edi_1 == ecx_1)
                    sub_574e40(&result_2)
                    edi_1 = var_2c_1
                    result_5 = result_2
                
                if (edi_1 != 0)
                    *edi_1 = i
            else
                int32_t ebp_2 = (&i_2 - result_5) s>> 2
                
                if (edi_1 == ecx_1)
                    sub_574e40(&result_2)
                    edi_1 = var_2c_1
                    result_5 = result_2
                
                if (edi_1 != 0)
                    *edi_1 = result_5[ebp_2]
            
            edi_1 = &edi_1[1]
            var_2c_1 = edi_1
            
            if (*(i + 0x45) == 0)
                int32_t* i_4 = i[2]
                
                if (*(i_4 + 0x45) != 0)
                    int32_t* i_6 = i[1]
                    
                    if (*(i_6 + 0x45) == 0)
                        while (i == i_6[2])
                            i = i_6
                            i_6 = i_6[1]
                            
                            if (*(i_6 + 0x45) != 0)
                                break
                    
                    i = i_6
                else
                    i = i_4
                    int32_t* i_5 = *i
                    
                    while (*(i_5 + 0x45) == 0)
                        i = i_5
                        i_5 = *i
                
                i_2 = i
            
            if (i == arg1[1])
                break
            
            ecx_1 = var_28_1
    
    i_2.b = 0
    int32_t* i_7 = i_2
    sub_575550(result_5, edi_1, (edi_1 - result_5) s>> 2)
    int32_t* i_1 = nullptr
    void* var_20 = nullptr
    int32_t* i_3 = nullptr
    int32_t var_18_1 = 0
    var_4.b = 1
    
    if (result_5 != edi_1)
        int32_t* eax_30
        int32_t* result_4
        
        do
            int32_t* result_3 = result_2
            int32_t edi_4 = (var_2c_1 - result_3) s>> 2
            int32_t* esi_1 = *(result_3[edi_4 - 1] + 0x40)
            (***esi_1)(eax_2)
            int32_t* esi_2 = *esi_1
            int32_t ebx_4 = (*(*esi_2 + 0x14))() * (*(*esi_2 + 0x10))() * 2
            (*(*esi_2 + 4))()
            arg1[4] -= ebx_4 * 2
            void* edi_5 = var_20
            int32_t* esi_4 = result_2[edi_4 - 1] + 0xc
            int32_t* var_60_2
            int32_t ecx_22
            
            if (esi_4 u>= i_1 || edi_5 u> esi_4)
                if (i_1 == var_18_1)
                    int32_t ecx_27 = (i_1 - edi_5) s/ 0x34
                    
                    if (ecx_27 u> 0x4ec4ec3)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t eax_26 = (var_18_1 - edi_5) s/ 0x34
                    
                    if (ecx_27 + 1 u> eax_26)
                        uint32_t edx_26 = eax_26 u>> 1
                        int32_t eax_27
                        
                        if (0x4ec4ec4 - edx_26 u>= eax_26)
                            eax_27 = eax_26 + edx_26
                        else
                            eax_27 = 0
                        
                        if (eax_27 u< ecx_27 + 1)
                            eax_27 = ecx_27 + 1
                        
                        sub_575060(&var_20, eax_27)
                        i_1 = i_3
                
                var_4.b = 3
                
                if (i_1 != 0)
                    *i_1 = *esi_4
                    i_1[1] = esi_4[1]
                    i_1[2] = esi_4[2]
                    i_1[3] = esi_4[3]
                    i_1[4] = esi_4[4]
                    ecx_22 = esi_4[5]
                    int32_t var_5c_4 = 0
                    var_60_2 = &esi_4[6]
                label_574634:
                    i_1[5] = ecx_22
                    i_1[0xb] = 0xf
                    i_1[0xa] = 0
                    i_1[6].b = 0
                    sub_401180(&i_1[6], 0xffffffff, var_60_2, 0)
            else
                int32_t eax_13
                int32_t edx_6
                edx_6:eax_13 = muls.dp.d(0x4ec4ec4f, esi_4 - edi_5)
                int32_t edx_7 = edx_6 s>> 4
                
                if (i_1 == var_18_1)
                    int32_t ecx_17 = (i_1 - edi_5) s/ 0x34
                    
                    if (ecx_17 u> 0x4ec4ec3)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t eax_18 = (var_18_1 - edi_5) s/ 0x34
                    
                    if (ecx_17 + 1 u> eax_18)
                        uint32_t edx_15 = eax_18 u>> 1
                        int32_t eax_19
                        
                        if (0x4ec4ec4 - edx_15 u>= eax_18)
                            eax_19 = eax_18 + edx_15
                        else
                            eax_19 = 0
                        
                        if (eax_19 u< ecx_17 + 1)
                            eax_19 = ecx_17 + 1
                        
                        sub_575060(&var_20, eax_19)
                        i_1 = i_3
                        edi_5 = var_20
                
                int32_t* eax_20 = edi_5 + ((edx_7 u>> 0x1f) + edx_7) * 0x34
                var_4.b = 2
                
                if (i_1 != 0)
                    *i_1 = *eax_20
                    i_1[1] = eax_20[1]
                    i_1[2] = eax_20[2]
                    i_1[3] = eax_20[3]
                    i_1[4] = eax_20[4]
                    ecx_22 = eax_20[5]
                    int32_t var_5c_2 = 0
                    var_60_2 = &eax_20[6]
                    goto label_574634
            var_4.b = 1
            result_4 = result_2
            eax_30 = var_2c_1
            i_1 = &i_1[0xd]
            i_3 = i_1
            
            if (result_4 != eax_30)
                eax_30 -= 4
                var_2c_1 = eax_30
            
            if (arg1[4] s< arg1[6])
                break
        while (result_4 != eax_30)
    
    void* edi_12 = var_20
    
    if (edi_12 != i_1)
        int32_t* ebx_8 = arg1
        i_2 = edi_12 + 0x28
        void* i_8
        
        do
            void* esi_13 = &i_2[-0xa]
            int32_t* eax_32 = sub_574f50(ebx_8, esi_13)
            int32_t* var_3c = eax_32
            int32_t** eax_39
            
            if (eax_32 == ebx_8[1])
            label_574745:
                ebx_8 = arg1
                int32_t* var_38 = ebx_8[1]
                eax_39 = &var_38
            else
                if (sub_575ee0(&eax_32[3], esi_13) != 0)
                    goto label_574745
                
                if (sub_575f80(&eax_32[3], esi_13) != 0)
                    eax_39 = &var_3c
                else
                    int32_t edx_30 = eax_32[0xd]
                    int32_t* ecx_33
                    
                    if (eax_32[0xe] u< 0x10)
                        ecx_33 = &eax_32[9]
                    else
                        ecx_33 = eax_32[9]
                    
                    int32_t* i_9 = i_2
                    int32_t esi_14 = *i_9
                    int32_t eax_35 = esi_14
                    
                    if (esi_14 u>= edx_30)
                        eax_35 = edx_30
                    
                    int32_t* edx_31
                    void* edi_10
                    
                    if (i_9[1] u< 0x10)
                        edi_10 = &i_9[-4]
                        edx_31 = edi_10
                    else
                        edx_31 = i_9[-4]
                        edi_10 = &i_9[-4]
                    
                    int32_t eax_36 = sub_402320(eax_35, edx_31, ecx_33, eax_35)
                    bool cond:2_1 = eax_36 s< 0
                    
                    if (eax_36 == 0)
                        if (esi_14 u< eax_32[0xd])
                            goto label_574745
                        
                        eax_36.b = esi_14 != eax_32[0xd]
                        cond:2_1 = eax_36 s< 0
                    
                    if (cond:2_1)
                        goto label_574745
                    
                    sub_405dd0(edi_10, &eax_32[9])
                    ebx_8 = arg1
                    eax_39 = &var_3c
            
            int32_t* edi_11 = *eax_39
            
            if (edi_11 != ebx_8[1])
                int32_t* esi_15 = edi_11[0x10]
                
                if (esi_15 != 0)
                    int32_t* ecx_34 = *esi_15
                    
                    if (ecx_34 != 0)
                        (*(*ecx_34 + 4))(eax_2)
                        *esi_15 = 0
                    
                    int32_t* var_5c_9 = esi_15
                    sub_6b4d5b()
                
                void var_34
                sub_574b00(ebx_8, &var_34, edi_11)
            
            i_8 = &i_2[0xd]
            i_2 = i_8
        while (i_8 - 0x28 != i_1)
        edi_12 = var_20
    
    if (edi_12 != 0)
        if (edi_12 != i_1)
            void* esi_16 = edi_12 + 0x2c
            
            do
                if (*esi_16 u>= 0x10)
                    int32_t var_5c_11 = *(esi_16 - 0x14)
                    sub_6b4d5b()
                
                *esi_16 = 0xf
                *(esi_16 - 4) = 0
                *(esi_16 - 0x14) = 0
                esi_16 += 0x34
            while (esi_16 - 0x2c != i_1)
        
        void* var_5c_12 = edi_12
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t* result_1 = result
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
