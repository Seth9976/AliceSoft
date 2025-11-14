// 函数: sub_545420
// 地址: 0x545420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_1c
int32_t eax_1 = data_78c474 ^ &var_1c
*(arg1 + 0x2b0) -= 4
int32_t ecx = **(arg1 + 0x2b0)
void var_18
void* i = &var_18
var_1c = ecx
int32_t __saved_edi

if (&var_18 u< &(&__saved_edi)[ecx + 5])
    int32_t* ecx_1 = *(arg1 + 0x2b0)
    
    do
        ecx_1 -= 4
        *(arg1 + 0x2b0) = ecx_1
        *i = *ecx_1
        i += 4
    while (i u< &(&__saved_edi)[ecx + 5])

*(arg1 + 0x2b0) -= 4
int32_t edx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_5 = **(arg1 + 0x2b0)

if (eax_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t ebx_2 = *(arg1 + 0x1e4)
    int32_t* ecx_5 = *(ebx_2 + (eax_5 << 2))
    
    if (ecx_5 != 0)
        int32_t esi = ecx_5[1]
        
        if (edx_1 u< esi u>> 2)
            int32_t ecx_6
            
            if (esi != 0)
                ecx_6 = *ecx_5
            else
                ecx_6 = 0
            
            int32_t eax_6 = *(ecx_6 + (edx_1 << 2))
            int32_t edx_4 = (*(arg1 + 0x1e8) - ebx_2) s>> 2
            
            if (eax_6 u< edx_4)
                int32_t esi_1 = *(ebx_2 + (eax_6 << 2))
                
                if (esi_1 != 0)
                    if (*(esi_1 + 0x40) != 0)
                        if (eax_6 u>= (*(arg1 + 0x1e8) - ebx_2) s>> 2 || esi_1 == 0)
                        label_54554c:
                            eax_6.b = 0
                            sub_6b4885(eax_1 ^ &var_1c)
                            return eax_6
                        
                        if (sub_5514f0(esi_1).b == 0)
                            goto label_54554c
                    
                    uint32_t eax_11
                    int32_t edx_5
                    eax_11, edx_5 = sub_550ca0(esi_1, var_1c, &var_18, 1)
                    
                    if (eax_11.b != 0)
                        eax_11.b = 1
                        sub_6b4885(eax_1 ^ &var_1c)
                        return eax_11
                    
                    int32_t* eax_12 = sub_53d1c0(eax_11, edx_5, arg1, 0x74f2c4)
                    sub_6b4885(eax_1 ^ &var_1c)
                    return eax_12
            
            int32_t* eax_7 = sub_53d1c0(eax_6, edx_4, arg1, "array.Alloc()\n")
            sub_6b4885(eax_1 ^ &var_1c)
            return eax_7

int32_t eax_8 = sub_53d0e0(arg1, 0x74f248, eax_5, edx_1, arg4, arg3, arg2)
sub_6b4885(eax_1 ^ &var_1c)
return eax_8
