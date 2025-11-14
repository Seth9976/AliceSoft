// 函数: sub_646000
// 地址: 0x646000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2
int32_t ecx_2 = (result[1] - *result) s>> 2
int32_t ebp = 0

if (ecx_2 s> 0)
    while (true)
        void* esi_1 = *(data_797d2c + 0x30)
        void** edi_1 = *(*result + (ebp << 2))
        void** ecx_4 = *(esi_1 + 0x298)
        void** eax_1 = ecx_4[1]
        void** var_2c = edi_1
        
        while (*(eax_1 + 0x15) == 0)
            if (eax_1[3] s>= edi_1)
                ecx_4 = eax_1
                eax_1 = *eax_1
            else
                eax_1 = eax_1[2]
        
        void** eax_2 = *(esi_1 + 0x298)
        void** var_58 = ecx_4
        void*** eax_3
        
        if (ecx_4 == eax_2 || edi_1 s< ecx_4[3])
            void** var_54 = eax_2
            eax_3 = &var_54
        else
            eax_3 = &var_58
        
        void** eax_4 = *eax_3
        
        if (eax_4 == *(esi_1 + 0x298))
            eax_4.b = 0
        else
            eax_4 = eax_4[4]
            
            if (eax_4 != 0)
                eax_4.b = *(eax_4 + 0x2a)
            else
                eax_4.b = 0
        
        void** ecx_5 = *(esi_1 + 0x298)
        void** eax_5 = ecx_5[1]
        int32_t edx_1
        edx_1.b = eax_4.b != 0
        int32_t var_10_1 = edx_1
        
        while (*(eax_5 + 0x15) == 0)
            if (eax_5[3] s>= edi_1)
                ecx_5 = eax_5
                eax_5 = *eax_5
            else
                eax_5 = eax_5[2]
        
        void** eax_6 = *(esi_1 + 0x298)
        var_58 = ecx_5
        void*** eax_7
        
        if (ecx_5 == eax_6 || edi_1 s< ecx_5[3])
            void** var_50 = eax_6
            eax_7 = &var_50
        else
            eax_7 = &var_58
        
        void** eax_8 = *eax_7
        void* eax_9
        
        if (eax_8 != *(esi_1 + 0x298))
            eax_9 = eax_8[4]
        
        int32_t eax_10
        
        if (eax_8 != *(esi_1 + 0x298) && eax_9 != 0)
            eax_10 = *(eax_9 + 8)
        else
            eax_10 = 0
        
        void** ecx_6 = *(esi_1 + 0x298)
        int32_t var_28_1 = eax_10
        void** eax_11 = ecx_6[1]
        
        while (*(eax_11 + 0x15) == 0)
            if (eax_11[3] s>= edi_1)
                ecx_6 = eax_11
                eax_11 = *eax_11
            else
                eax_11 = eax_11[2]
        
        void** eax_12 = *(esi_1 + 0x298)
        var_58 = ecx_6
        void*** eax_13
        
        if (ecx_6 == eax_12 || edi_1 s< ecx_6[3])
            void** var_4c = eax_12
            eax_13 = &var_4c
        else
            eax_13 = &var_58
        
        void** eax_14 = *eax_13
        void* eax_15
        
        if (eax_14 != *(esi_1 + 0x298))
            eax_15 = eax_14[4]
        
        int32_t eax_16
        
        if (eax_14 != *(esi_1 + 0x298) && eax_15 != 0)
            eax_16 = *(eax_15 + 0xc)
        else
            eax_16 = 0
        
        void** ecx_7 = *(esi_1 + 0x298)
        int32_t var_24_1 = eax_16
        void** eax_17 = ecx_7[1]
        
        while (*(eax_17 + 0x15) == 0)
            if (eax_17[3] s>= edi_1)
                ecx_7 = eax_17
                eax_17 = *eax_17
            else
                eax_17 = eax_17[2]
        
        void** eax_18 = *(esi_1 + 0x298)
        var_58 = ecx_7
        void*** eax_19
        
        if (ecx_7 == eax_18 || edi_1 s< ecx_7[3])
            void** var_48 = eax_18
            eax_19 = &var_48
        else
            eax_19 = &var_58
        
        void** eax_20 = *eax_19
        void* eax_21
        
        if (eax_20 != *(esi_1 + 0x298))
            eax_21 = eax_20[4]
        
        int32_t eax_22
        
        if (eax_20 != *(esi_1 + 0x298) && eax_21 != 0)
            eax_22 = *(eax_21 + 0x10)
        else
            eax_22 = 0
        
        void** ecx_8 = *(esi_1 + 0x298)
        int32_t var_14_1 = eax_22
        void** eax_23 = ecx_8[1]
        
        while (*(eax_23 + 0x15) == 0)
            if (eax_23[3] s>= edi_1)
                ecx_8 = eax_23
                eax_23 = *eax_23
            else
                eax_23 = eax_23[2]
        
        void** eax_24 = *(esi_1 + 0x298)
        var_58 = ecx_8
        void*** eax_25
        
        if (ecx_8 == eax_24 || edi_1 s< ecx_8[3])
            void** var_44 = eax_24
            eax_25 = &var_44
        else
            eax_25 = &var_58
        
        void** eax_26 = *eax_25
        void* eax_27
        
        if (eax_26 != *(esi_1 + 0x298))
            eax_27 = eax_26[4]
        
        int32_t eax_28
        
        if (eax_26 != *(esi_1 + 0x298) && eax_27 != 0)
            eax_28 = *(eax_27 + 0x14)
        else
            eax_28 = 0
        
        void** ecx_9 = *(esi_1 + 0x298)
        int32_t var_20_1 = eax_28
        void** eax_29 = ecx_9[1]
        
        while (*(eax_29 + 0x15) == 0)
            if (eax_29[3] s>= edi_1)
                ecx_9 = eax_29
                eax_29 = *eax_29
            else
                eax_29 = eax_29[2]
        
        void** eax_30 = *(esi_1 + 0x298)
        var_58 = ecx_9
        void*** eax_31
        
        if (ecx_9 == eax_30 || edi_1 s< ecx_9[3])
            void** var_40 = eax_30
            eax_31 = &var_40
        else
            eax_31 = &var_58
        
        void** eax_32 = *eax_31
        void* eax_33
        
        if (eax_32 != *(esi_1 + 0x298))
            eax_33 = eax_32[4]
        
        int32_t eax_34
        
        if (eax_32 != *(esi_1 + 0x298) && eax_33 != 0)
            eax_34 = *(eax_33 + 0x18)
        else
            eax_34 = 0
        
        void** ecx_10 = *(esi_1 + 0x298)
        int32_t var_1c_1 = eax_34
        void** eax_35 = ecx_10[1]
        
        while (*(eax_35 + 0x15) == 0)
            if (eax_35[3] s>= edi_1)
                ecx_10 = eax_35
                eax_35 = *eax_35
            else
                eax_35 = eax_35[2]
        
        void** eax_36 = *(esi_1 + 0x298)
        var_58 = ecx_10
        void*** eax_37
        
        if (ecx_10 == eax_36 || edi_1 s< ecx_10[3])
            void** var_3c = eax_36
            eax_37 = &var_3c
        else
            eax_37 = &var_58
        
        void** eax_38 = *eax_37
        void* eax_39
        
        if (eax_38 != *(esi_1 + 0x298))
            eax_39 = eax_38[4]
        
        int32_t eax_40
        
        if (eax_38 != *(esi_1 + 0x298) && eax_39 != 0)
            eax_40 = *(eax_39 + 0x1c)
        else
            eax_40 = 0
        
        int32_t var_18_1 = eax_40
        var_58 = edi_1
        int32_t* var_38
        sub_42e070(esi_1 + 0x294, &var_38, &var_58)
        int32_t* eax_42 = var_38
        void* eax_43
        
        if (eax_42 != *(esi_1 + 0x298))
            eax_43 = eax_42[4]
        
        int32_t eax_44
        
        if (eax_42 != *(esi_1 + 0x298) && eax_43 != 0)
            eax_44 = *(eax_43 + 0x20)
        else
            eax_44 = 0
        
        int32_t var_c_1 = eax_44
        int16_t var_8_1 = 0
        var_58 = edi_1
        int32_t* var_34
        sub_42e070(esi_1 + 0x294, &var_34, &var_58)
        int32_t* eax_46 = var_34
        
        if (eax_46 != *(esi_1 + 0x298))
            void* eax_47 = eax_46[4]
            
            if (eax_47 != 0)
                int32_t* eax_48 = *(eax_47 + 0xcc)
                
                if (eax_48 != 0)
                    var_8_1:1.b = (*(*eax_48 + 0x28))()
        
        result = sub_646c10(&var_2c, arg1)
        ebp += 1
        
        if (ebp s>= ecx_2)
            break
        
        result = arg2

return result
