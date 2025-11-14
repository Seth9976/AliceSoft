// 函数: sub_54d5a0
// 地址: 0x54d5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_818
int32_t eax_1 = data_78c474 ^ &var_818
int32_t* eax_2 = *(arg4 + 0x28c)
int32_t ecx = *eax_2
*(arg4 + 0x28c) = &eax_2[1]
int32_t edx = eax_2[1]
*(arg4 + 0x28c) = &eax_2[2]
void* result
int32_t entry_ebx

if (ecx s< 0)
    sub_53d0e0(arg4, "delegate", ecx, arg3, arg2, arg1, entry_ebx)
    result.b = 0
else
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x6bca1af3, *(arg4 + 0xdc) - *(arg4 + 0xd8))
    int32_t edx_4 = edx_3 s>> 5
    
    if (ecx s>= (edx_4 u>> 0x1f) + edx_4)
        sub_53d0e0(arg4, "delegate", ecx, arg3, arg2, arg1, entry_ebx)
        result.b = 0
    else
        int32_t esi_1 = ecx * 0x4c
        void* esi_2 = esi_1 + *(arg4 + 0xd8)
        
        if (esi_1 != neg.d(*(arg4 + 0xd8)))
            switch (*(esi_2 + 0x20))
                case 0
                    goto label_54d65e
                case 0xa, 0xb, 0x1b, 0x2f
                    *(arg4 + 0x2b0) -= 4
                    int32_t var_80c = **(arg4 + 0x2b0)
                label_54d65e:
                    *(arg4 + 0x2b0) -= 4
                    int32_t ebp = **(arg4 + 0x2b0)
                    *(arg4 + 0x2b0) -= 4
                    int32_t eax_14 = **(arg4 + 0x2b0)
                    int32_t* ecx_5
                    
                    if (eax_14 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
                        ecx_5 = *(*(arg4 + 0x1e4) + (eax_14 << 2))
                        var_818 = ecx_5
                    
                    if (eax_14 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2 && ecx_5 != 0)
                        int32_t eax_15
                        int32_t edx_7
                        edx_7:eax_15 = muls.dp.d(0x55555556, ecx_5[1] u>> 2)
                        int32_t ecx_10 = *(esi_2 + 0x28)
                        void var_808
                        int32_t* eax_19 = &var_808
                        
                        if (ebp s< (edx_7 u>> 0x1f) + edx_7)
                            sub_55ed50(arg4 + 0x2a4, eax_19, ecx_10)
                            void var_408
                            char eax_24
                            int32_t ecx_16
                            eax_24, ecx_16 = sub_54e250(&var_808, &var_408, arg4, esi_2)
                            
                            if (eax_24 != 0)
                                sub_55ed20(ecx_16, *(esi_2 + 0x28), arg4 + 0x2a4, &var_408)
                                **(arg4 + 0x2b0) = eax_14
                                *(arg4 + 0x2b0) += 4
                                **(arg4 + 0x2b0) = ebp + 1
                                *(arg4 + 0x2b0) += 4
                                int32_t* eax_27 = var_818
                                int32_t eax_28
                                
                                if (eax_27[1] != 0)
                                    eax_28 = *eax_27
                                else
                                    eax_28 = 0
                                
                                int32_t edx_11 = ebp * 3
                                int32_t edi_6 = *(eax_28 + (edx_11 << 2) + 4)
                                var_818 = *(eax_28 + (edx_11 << 2))
                                int32_t* eax_30 = sub_537d90(arg4 + 0x4c, edi_6)
                                
                                if (eax_30 != 0)
                                    if (*(arg4 + 0x1338) != 0)
                                        sub_52bd90(*(arg4 + 0x12f8) + edi_6 * 0x38)
                                    
                                    int32_t* edi_8 = var_818
                                    
                                    if (sub_552a70(arg4 + 0x1dc, &var_818, eax_30, edi_8).b == 0)
                                        result.b = 0
                                    else if (sub_53ada0(arg4, var_818).b == 0)
                                        result.b = 0
                                    else
                                        void* ecx_25 = arg4
                                        
                                        if (sub_53ae90(ecx_25, edi_8).b == 0)
                                            result.b = 0
                                        else
                                            int32_t eax_33 = eax_30[0xa]
                                            char eax_34
                                            
                                            if (eax_33 s> 0)
                                                eax_34, ecx_25 =
                                                    sub_5501a0(eax_33, *(arg4 + 0x12c4), &var_808)
                                            
                                            if (eax_33 s<= 0 || eax_34 != 0)
                                                sub_53cad0(ecx_25, 2, arg4, 
                                                    *(arg4 + 0x28c) - *(arg4 + 0x290), *eax_30)
                                                result.b = 1
                                            else
                                                sub_53d0e0(arg4, 0x751500, arg3, arg2, arg1, 
                                                    entry_ebx, var_818)
                                                result.b = 0
                                else
                                    sub_53d0e0(arg4, 0x7514cc, edi_6, arg3, arg2, arg1, entry_ebx)
                                    result.b = 0
                            else
                                sub_53d0e0(arg4, 0x7514a8, arg3, arg2, arg1, entry_ebx, var_818)
                                result.b = 0
                        else
                            sub_55ed50(arg4 + 0x2a4, eax_19, ecx_10)
                            
                            if (sub_54e350(arg4, &var_808, esi_2) != 0)
                                switch (*(esi_2 + 0x20))
                                    case 0
                                        *(arg4 + 0x28c) = *(arg4 + 0x290) + edx
                                        result.b = 1
                                    case 0xa, 0xb, 0x1b, 0x2f
                                        **(arg4 + 0x2b0) = var_80c
                                        *(arg4 + 0x2b0) += 4
                                        *(arg4 + 0x28c) = *(arg4 + 0x290) + edx
                                        result.b = 1
                                    default
                                        sub_53d0e0(arg4, 0x751480, arg3, arg2, arg1, entry_ebx, 
                                            var_818)
                                        result.b = 0
                            else
                                sub_53d0e0(arg4, 0x75145c, arg3, arg2, arg1, entry_ebx, var_818)
                                result.b = 0
                    else
                        sub_53d0e0(arg4, 0x751430, eax_14, arg3, arg2, arg1, entry_ebx)
                        result.b = 0
                default
                    sub_53d0e0(arg4, 0x751408, arg3, arg2, arg1, entry_ebx, var_818)
                    result.b = 0
        else
            sub_53d0e0(arg4, "delegate", ecx, arg3, arg2, arg1, entry_ebx)
            result.b = 0
sub_6b4885(eax_1 ^ &var_818)
return result
