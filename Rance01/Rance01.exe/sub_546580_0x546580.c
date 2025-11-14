// 函数: sub_546580
// 地址: 0x546580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_18
int32_t eax_1 = data_78c474 ^ &var_18
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_4 = **(arg1 + 0x2b0)

if (eax_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t esi_1 = *(arg1 + 0x1e4)
    int32_t* eax_5 = *(esi_1 + (eax_4 << 2))
    
    if (eax_5 != 0)
        int32_t ecx_6 = eax_5[1]
        
        if (edx u>= ecx_6 u>> 2)
            int32_t eax_10 = sub_53d0e0(arg1, 0x74fcf0)
            sub_6b4885(eax_1 ^ &var_18)
            return eax_10
        
        int32_t eax_7
        
        if (ecx_6 != 0)
            eax_7 = *eax_5
        else
            eax_7 = 0
        
        int32_t eax_8 = *(eax_7 + (edx << 2))
        
        if (eax_8 u< (*(arg1 + 0x1e8) - esi_1) s>> 2)
            int32_t* ecx_7 = *(esi_1 + (eax_8 << 2))
            
            if (ecx_7 != 0)
                int32_t* eax_11
                
                if (ecx_7[0x10].b != 0)
                    if (sub_551170(ecx_7, &var_18) == 0)
                        int32_t eax_13 = sub_53d0e0(arg1, 0x74fd44)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_13
                    
                    eax_11.b = var_18 == 0
                    **(arg1 + 0x2b0) = eax_11
                else
                    **(arg1 + 0x2b0) = 1
                
                *(arg1 + 0x2b0) += 4
                eax_11.b = 1
                sub_6b4885(eax_1 ^ &var_18)
                return eax_11
        
        int32_t eax_9 = sub_53d0e0(arg1, 0x74fd18)
        sub_6b4885(eax_1 ^ &var_18)
        return eax_9

int32_t eax_6 = sub_53d0e0(arg1, 0x74fcc8)
sub_6b4885(eax_1 ^ &var_18)
return eax_6
