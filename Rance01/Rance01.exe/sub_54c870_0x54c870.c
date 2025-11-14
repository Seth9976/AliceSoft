// 函数: sub_54c870
// 地址: 0x54c870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72620b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1ec
int32_t eax_2 = data_78c474 ^ &var_1ec
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg4 + 0x28c)
int32_t ebx = *eax_5
*(arg4 + 0x28c) = &eax_5[1]
int32_t esi = eax_5[1]
*(arg4 + 0x28c) = &eax_5[2]
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x2aaaaaab, *(arg4 + 0xfc) - *(arg4 + 0xf8))
int32_t edx_1 = edx s>> 3
var_1ec = esi
void* var_1e0
bool cond:0_1

if (ebx u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_13 = ebx * 0x30
    cond:0_1 = eax_13 != neg.d(*(arg4 + 0xf8))
    var_1e0 = eax_13 + *(arg4 + 0xf8)

int32_t* result
int32_t entry_ebx

if (ebx u< (edx_1 u>> 0x1f) + edx_1 && cond:0_1)
    void* eax_16
    int32_t edx_2
    eax_16, edx_2 = sub_537f30(ebx, arg4 + 0x4c, esi)
    
    if (eax_16 != 0)
        int32_t esi_2 = *(eax_16 + 0x28) - *(eax_16 + 0x24)
        int32_t var_1d4 = 0
        int32_t var_1d8 = 0
        int32_t var_1dc = 0
        int32_t esi_3 = esi_2 s>> 2
        void var_1b4
        int32_t var_14c[0x1a]
        int32_t var_e4[0x1a]
        int32_t var_7c[0x1a]
        result = sub_53cb10(arg4, esi_3, eax_16 + 0x24, &var_e4, &var_1d4, &var_14c, &var_1d8, 
            &var_7c, &var_1dc, &var_1b4)
        
        if (result.b != 0)
            if (*(arg4 + 0x1338) != 0)
                sub_52bd90(*(*(arg4 + 0x1308) + ebx * 0x10) + var_1ec * 0x38)
            
            int32_t eax_20 = *(var_1e0 + 0x2c)
            int32_t* result_1
            uint32_t edx_6
            int32_t esi_4
            
            if (eax_20 == 0)
                int32_t eax_24 = *(eax_16 + 0x34)
                
                if (eax_24 != 0)
                    int32_t var_204_5 = eax_24
                    long double x87_r0
                    result, edx_6 = sub_52a710(&var_1b4, eax_16, esi_3, x87_r0)
                    esi_4 = var_1ec
                    result_1 = result
                label_54ca7b:
                    
                    if (*(arg4 + 0x1338) != 0)
                        edx_6 = sub_52be40(*(*(arg4 + 0x1308) + ebx * 0x10) + esi_4 * 0x38)
                        result = result_1
                    
                    int32_t ecx_15 = *(eax_16 + 0x20)
                    
                    if (ecx_15 u> 0x2f)
                    label_54cc43:
                        int32_t var_204_11 = ecx_15
                        sub_53d1c0(result, edx_6, arg4, 0x750dfc)
                        result.b = 0
                    else
                        edx_6 = zx.d(lookup_table_54cc94[ecx_15])
                        
                        switch (edx_6)
                            case 0
                                goto label_54cb7c
                            case 1
                                **(arg4 + 0x2b0) = result
                                *(arg4 + 0x2b0) += 4
                            label_54cb7c:
                                int32_t edi_3 = var_1d4
                                int32_t esi_6 = 0
                                
                                if (edi_3 s<= 0)
                                label_54cbac:
                                    int32_t edi_4 = var_1d8
                                    int32_t esi_7 = 0
                                    
                                    if (edi_4 s<= 0)
                                    label_54cbdc:
                                        int32_t edi_5 = var_1dc
                                        int32_t esi_8 = 0
                                        
                                        if (edi_5 s<= 0)
                                        label_54cc0c:
                                            result.b = 1
                                        else
                                            while (true)
                                                int32_t edx_17
                                                result, edx_17 =
                                                    sub_552880(arg4 + 0x1dc, var_7c[esi_8])
                                                
                                                if (result.b == 0)
                                                    sub_53d1c0(result, edx_17, arg4, 0x750f00)
                                                    break
                                                
                                                esi_8 += 1
                                                
                                                if (esi_8 s>= edi_5)
                                                    goto label_54cc0c
                                            
                                            result.b = 0
                                    else
                                        while (true)
                                            int32_t edx_16
                                            result, edx_16 =
                                                sub_552880(arg4 + 0x1dc, var_14c[esi_7])
                                            
                                            if (result.b == 0)
                                                sub_53d1c0(result, edx_16, arg4, 0x750eb8)
                                                break
                                            
                                            esi_7 += 1
                                            
                                            if (esi_7 s>= edi_4)
                                                goto label_54cbdc
                                        
                                        result.b = 0
                                else
                                    while (true)
                                        int32_t edx_14
                                        result, edx_14 = sub_552880(arg4 + 0x1dc, var_e4[esi_6])
                                        
                                        if (result.b == 0)
                                            sub_53d1c0(result, edx_14, arg4, 0x750e70)
                                            break
                                        
                                        esi_6 += 1
                                        
                                        if (esi_6 s>= edi_3)
                                            goto label_54cbac
                                    
                                    result.b = 0
                            case 2
                                int32_t var_1bc_1 = 0xf
                                int32_t var_1c0_1 = 0
                                char var_1d0 = 0
                                int32_t var_4 = 0
                                
                                if (result != 0)
                                    int128_t* eax_28 =
                                        (**result)(eax_4, arg3, arg2, arg1, entry_ebx)
                                    
                                    if (eax_28 != 0)
                                        sub_401140(&var_1d0, eax_28, &var_1d0)
                                
                                int32_t* eax_29
                                int32_t edx_12
                                eax_29, edx_12 = sub_552d50(arg4 + 0x1dc, &var_1d0, &var_1e0)
                                
                                if (eax_29.b != 0)
                                    **(arg4 + 0x2b0) = var_1e0
                                    *(arg4 + 0x2b0) += 4
                                    int32_t var_4_1 = 0xffffffff
                                    sub_401110(&var_1d0)
                                    goto label_54cb7c
                                
                                sub_53d1c0(eax_29, edx_12, arg4, 0x750dc8)
                                sub_401110(&var_1d0)
                                result.b = 0
                            case 3
                                **(arg4 + 0x2b0) = result & 0xff
                                *(arg4 + 0x2b0) += 4
                                goto label_54cb7c
                            case 4
                                goto label_54cc43
                else
                    sub_53d0e0(arg4, 0x750d9c, eax_4, arg3, arg2, arg1, entry_ebx)
                    result.b = 0
            else
                esi_4 = var_1ec
                char eax_21
                eax_21, edx_6 =
                    eax_20(esi_4, &var_1b4, &result_1, eax_4, arg3, arg2, arg1, entry_ebx)
                
                if (eax_21 != 0)
                    result = result_1
                    goto label_54ca7b
                
                void* eax_23 = eax_16 + 4
                
                if (*(eax_23 + 0x14) u>= 0x10)
                    eax_23 = *eax_23
                
                sub_53d0e0(arg4, 0x750d6c, eax_23)
                result.b = 0
        else
            bool cond:1_1 = *(arg4 + 0x29c) != 0
            *(arg4 + 0x298) = result.b
            *(arg4 + 0x23c) = 0
            
            if (not(cond:1_1))
                *(arg4 + 0x29c) = 1
            
            result.b = 0
    else
        sub_53d1c0(eax_16, edx_2, arg4, 0x750d38)
        result.b = 0
else
    sub_53d0e0(arg4, 0x750d14, eax_4, arg3, arg2, arg1, entry_ebx)
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1ec)
return result
