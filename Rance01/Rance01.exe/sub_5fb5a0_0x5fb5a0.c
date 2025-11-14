// 函数: sub_5fb5a0
// 地址: 0x5fb5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx_19 = arg4
int32_t* i = edx_19[2]

if (i s> 0)
    int32_t ecx_1 = edx_19[3]
    
    if (ecx_1 s> 0)
        void* esi_1 = *edx_19
        void* edx = edx_19[1]
        void* esi_2 = esi_1 + i
        i = arg1[0x14]
        void* edx_1 = edx + ecx_1
        int32_t* i_1 = i
        void* var_38
        void* var_20
        void* var_1c
        void* var_18
        void* var_14
        
        while (i != arg1[0x15])
            int32_t* edi_2 = *i_1
            void* ebx_1 = data_797d2c
            int32_t var_48_1
            int32_t ebp_1
            
            if (edi_2[1] != 0)
                void* eax_2 = *edi_2
                
                if (eax_2 != 0xffffffff)
                    void* esi_3 = *(ebx_1 + 0x30)
                    var_38 = eax_2
                    int32_t* var_34
                    sub_42e070(esi_3 + 0x294, &var_34, &var_38)
                    int32_t* eax_4 = var_34
                    void* eax_5
                    
                    if (eax_4 != *(esi_3 + 0x298))
                        eax_5 = eax_4[4]
                    
                    int32_t eax_6
                    
                    if (eax_4 != *(esi_3 + 0x298) && eax_5 != 0)
                        eax_6 = *(eax_5 + 8)
                    else
                        eax_6 = 0
                    
                    ebp_1 = eax_6
                    var_48_1 = eax_6
                else
                    ebp_1 = 0
                    var_48_1 = 0
            else
                ebp_1 = 0
                var_48_1 = 0
            
            int32_t var_40_1
            int32_t edi_3
            
            if (edi_2[1] != 0)
                void* eax_7 = *edi_2
                
                if (eax_7 != 0xffffffff)
                    void* esi_4 = *(ebx_1 + 0x30)
                    var_38 = eax_7
                    int32_t* var_30
                    sub_42e070(esi_4 + 0x294, &var_30, &var_38)
                    int32_t* eax_9 = var_30
                    void* eax_10
                    
                    if (eax_9 != *(esi_4 + 0x298))
                        eax_10 = eax_9[4]
                    
                    int32_t eax_11
                    
                    if (eax_9 != *(esi_4 + 0x298) && eax_10 != 0)
                        eax_11 = *(eax_10 + 0xc)
                    else
                        eax_11 = 0
                    
                    edi_3 = eax_11
                    var_40_1 = eax_11
                else
                    edi_3 = 0
                    var_40_1 = 0
            else
                edi_3 = 0
                var_40_1 = 0
            
            int32_t eax_13
            
            if (edi_2[1] != 0)
                void* eax_14 = *edi_2
                
                if (eax_14 != 0xffffffff)
                    void* esi_5 = *(ebx_1 + 0x30)
                    var_38 = eax_14
                    int32_t* var_2c
                    sub_42e070(esi_5 + 0x294, &var_2c, &var_38)
                    int32_t* eax_16 = var_2c
                    void* eax_17
                    
                    if (eax_16 != *(esi_5 + 0x298))
                        eax_17 = eax_16[4]
                    
                    if (eax_16 != *(esi_5 + 0x298) && eax_17 != 0)
                        eax_13 = *(eax_17 + 0x14)
                    else
                        eax_13 = 0
                else
                    eax_13 = 0
            else
                eax_13 = 0
            
            int32_t ebp_2 = ebp_1 + eax_13
            int32_t eax_18 = edi_2[1]
            
            if (eax_18 != 0)
                void* eax_19 = *edi_2
                
                if (eax_19 != 0xffffffff)
                    void* esi_6 = *(ebx_1 + 0x30)
                    var_38 = eax_19
                    int32_t* var_28
                    sub_42e070(esi_6 + 0x294, &var_28, &var_38)
                    int32_t* eax_21 = var_28
                    void* eax_22
                    
                    if (eax_21 != *(esi_6 + 0x298))
                        eax_22 = eax_21[4]
                    
                    if (eax_21 != *(esi_6 + 0x298) && eax_22 != 0)
                        eax_18 = *(eax_22 + 0x18)
                    else
                        eax_18 = 0
                else
                    eax_18 = 0
            
            int32_t edx_2 = var_48_1
            int32_t esi_7 = eax_18 + edi_3
            ebx_1.b = edx_2 s< esi_2
            
            if (edi_2[1] != 0 && *edi_2 != 0xffffffff)
                sub_5f9e50(0, 0, 0, 0)
                edx_2 = var_48_1
            
            if (ebx_1.b != 0 && edi_3 s< edx_1 && esi_1 s< ebp_2 && edx s< esi_7)
                if (esi_1 s>= edx_2 || edx s>= edi_3 || ebp_2 s>= esi_2 || esi_7 s>= edx_1)
                    void* eax_26 = ebp_2 - esi_1
                    int32_t edi_5 = neg.d(var_48_1)
                    void* ecx_9 = edi_5 + esi_2
                    var_38 = eax_26
                    void* var_24 = ecx_9
                    int32_t* eax_27 = &var_38
                    
                    if (eax_26 s>= ecx_9)
                        eax_27 = &var_24
                    
                    var_38 = *eax_27
                    int32_t ecx_11 = neg.d(var_40_1)
                    void* eax_30 = esi_7 - edx
                    void* edx_5 = edx_1 + ecx_11
                    var_24 = eax_30
                    var_20 = edx_5
                    int32_t* eax_31 = &var_24
                    
                    if (eax_30 s>= edx_5)
                        eax_31 = &var_20
                    
                    var_20 = *eax_31
                    
                    if (var_48_1 s< esi_1 && esi_2 s< ebp_2)
                        var_38 = arg4[2]
                    
                    void* ebp_3
                    
                    if (edx s>= var_40_1 || esi_7 s>= edx_1)
                        ebp_3 = var_20
                    else
                        ebp_3 = arg4[3]
                    
                    void* eax_36 = ecx_11 + edx
                    void* edi_6 = edi_5 + esi_1
                    var_20 = eax_36
                    var_24 = nullptr
                    var_1c = edi_6
                    var_18 = nullptr
                    int32_t* ecx_12 = &var_20
                    
                    if (eax_36 s<= 0)
                        ecx_12 = &var_24
                    
                    int32_t* eax_37 = &var_1c
                    
                    if (edi_6 s<= 0)
                        eax_37 = &var_18
                    
                    void* edx_7 = *eax_37
                    int32_t var_10_1 = *ecx_12
                    void* var_c_1 = var_38
                    var_14 = edx_7
                    void* var_8_1 = ebp_3
                    sub_5e8270(&var_14, edx_7, edi_2)
                    edi_3 = var_40_1
                    edx_2 = var_48_1
                
                void* edx_8
                
                if (edx_2 s>= esi_1)
                    edx_8 = edx_2 - esi_1 + arg2
                else
                    edx_8 = arg2
                
                void* edi_7
                
                if (edi_3 s>= edx)
                    edi_7 = edi_3 - edx + arg3
                else
                    edi_7 = arg3
                
                if (edi_2[1] != 0)
                    int32_t* ecx_16 = *edi_2
                    
                    if (ecx_16 != 0xffffffff)
                        sub_409460(ecx_16, edx_8, edi_7)
            else if (edi_2[1] != 0 && *edi_2 != 0xffffffff)
                sub_5f9e50(ebp_2 + 1, esi_7 + 1, 1, 1)
            
            i = &i_1[1]
            i_1 = i
        
        void* ebx_4 = &arg1[0x1d]
        arg1 = ebx_4
        
        if (*ebx_4 != 0xffffffff)
            int32_t ebp_4 = *(ebx_4 + 4)
            int32_t esi_9
            
            if (ebp_4 != 0)
                int32_t eax_45 = *ebx_4
                
                if (eax_45 != 0xffffffff)
                    esi_9 = sub_5f9ea0(eax_45)
                else
                    esi_9 = 0
            else
                esi_9 = 0
            
            int32_t edi_9
            
            if (ebp_4 != 0)
                int32_t eax_47 = *ebx_4
                
                if (eax_47 != 0xffffffff)
                    edi_9 = sub_5f9ef0(eax_47)
                else
                    edi_9 = 0
            else
                edi_9 = 0
            
            void* const eax_49
            
            if (ebp_4 != 0)
                int32_t eax_50 = *ebx_4
                
                if (eax_50 != 0xffffffff)
                    eax_49 = sub_5f9f40(eax_50)
                else
                    eax_49 = nullptr
            else
                eax_49 = nullptr
            
            void* ebp_5 = eax_49 + esi_9
            void* eax_51 = *(ebx_4 + 4)
            
            if (eax_51 != 0)
                int32_t eax_52 = *ebx_4
                
                if (eax_52 != 0xffffffff)
                    eax_51 = sub_5f9f90(eax_52)
                else
                    eax_51 = nullptr
            
            void* edx_12 = eax_51 + edi_9
            
            if (esi_9 s>= esi_2 || edi_9 s>= edx_1 || esi_1 s>= ebp_5 || edx s>= edx_12)
                i = ebp_5 + 1
                
                if (arg1[1] != 0 && *arg1 != 0xffffffff)
                    arg4 = 1
                    return sub_5f9e50(i, edx_12 + 1, 1, arg4) __tailcall
            else
                void* eax_53
                
                if (esi_1 s< esi_9)
                    eax_53 = edx
                
                if (esi_1 s>= esi_9 || eax_53 s>= edi_9 || ebp_5 s>= esi_2 || edx_12 s>= edx_1)
                    void* eax_55 = ebp_5 - esi_1
                    void* ecx_20 = esi_2 - esi_9
                    var_18 = eax_55
                    var_1c = ecx_20
                    void** eax_56 = &var_18
                    
                    if (eax_55 s>= ecx_20)
                        eax_56 = &var_1c
                    
                    var_38 = *eax_56
                    void* eax_59 = edx_12 - edx
                    void* ecx_22 = edx_1 - edi_9
                    var_18 = eax_59
                    var_1c = ecx_22
                    void** eax_60 = &var_18
                    
                    if (eax_59 s>= ecx_22)
                        eax_60 = &var_1c
                    
                    void* var_3c_1 = *eax_60
                    
                    if (esi_9 s< esi_1 && esi_2 s< ebp_5)
                        var_38 = arg4[2]
                    
                    if (edx s< edi_9 && edx_12 s< edx_1)
                        var_3c_1 = arg4[3]
                    
                    int32_t* eax_64 = edx - edi_9
                    void* ecx_26 = esi_1 - esi_9
                    arg4 = eax_64
                    var_18 = nullptr
                    var_1c = ecx_26
                    var_20 = nullptr
                    void** edx_14 = &arg4
                    
                    if (eax_64 s<= 0)
                        edx_14 = &var_18
                    
                    void** eax_65 = &var_1c
                    
                    if (ecx_26 s<= 0)
                        eax_65 = &var_20
                    
                    void* eax_66 = var_38
                    void* edx_15 = *edx_14
                    var_14 = *eax_65
                    void* var_c_2 = eax_66
                    void* var_8_2 = var_3c_1
                    void* var_10_2 = edx_15
                    sub_5e8270(&var_14, edx_15, arg1)
                    eax_53 = edx
                
                void* esi_10
                
                if (esi_9 s>= esi_1)
                    esi_10 = esi_9 - esi_1 + arg2
                else
                    esi_10 = arg2
                
                void* edi_10
                
                if (edi_9 s>= eax_53)
                    edi_10 = edi_9 - eax_53 + arg3
                else
                    edi_10 = arg3
                
                i = arg1
                
                if (i[1] != 0)
                    int32_t* ecx_30 = *i
                    
                    if (ecx_30 != 0xffffffff)
                        return sub_409460(ecx_30, esi_10, edi_10)

return i
