// 函数: sub_53cb10
// 地址: 0x53cb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp_1 = arg2 - 1
uint32_t result

if (arg2 - 1 s>= 0)
    while (true)
        int32_t* ecx_1 = arg3
        int32_t edx_1 = 0xfffffffc
        *(arg1 + 0x2b0) -= 4
        int32_t ebx_1 = **(arg1 + 0x2b0)
        result = *(*ecx_1 + (ebp_1 << 2)) - 0xa
        
        if (result u<= 0x2a)
            result = zx.d(lookup_table_53cdc0[result])
            
            switch (result)
                case 0
                    *(arg10 + (ebp_1 << 2)) = ebx_1
                label_53ccf8:
                    int32_t temp2_1 = ebp_1
                    ebp_1 -= 1
                    
                    if (temp2_1 - 1 s< 0)
                        break
                    
                    continue
                case 1
                    int32_t eax_9 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
                    void* esi_4
                    
                    if (ebx_1 u< eax_9)
                        esi_4 = *(*(arg1 + 0x1e4) + (ebx_1 << 2))
                    
                    if (ebx_1 u>= eax_9 || esi_4 == 0)
                        return sub_53d1c0(eax_9, 0xfffffffc, arg1, 0x74d104)
                    
                    *(arg10 + (ebp_1 << 2)) = sub_552210(esi_4)
                    
                    if (*(*arg3 + (ebp_1 << 2)) == 0xc)
                        *(arg4 + (*arg5 << 2)) = ebx_1
                        *arg5 += 1
                    
                    goto label_53ccf8
                case 2
                    int32_t edx_13 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
                    void* esi_3
                    
                    if (ebx_1 u< edx_13)
                        result = *(arg1 + 0x1e4)
                        esi_3 = *(result + (ebx_1 << 2))
                    
                    if (ebx_1 u>= edx_13 || esi_3 == 0)
                        return sub_53d1c0(result, edx_13, arg1, 0x74d0c8)
                    
                    *(arg10 + (ebp_1 << 2)) = sub_5521d0(esi_3)
                    
                    if (*(*arg3 + (ebp_1 << 2)) == 0xd)
                        *(arg6 + (*arg7 << 2)) = ebx_1
                        *arg7 += 1
                    
                    goto label_53ccf8
                case 3
                    void* esi_1
                    
                    if (ebx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                        edx_1 = *(arg1 + 0x1e4)
                        esi_1 = *(edx_1 + (ebx_1 << 2))
                    
                    if (ebx_1 u>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 || esi_1 == 0)
                        return sub_53d1c0(result, edx_1, arg1, 0x74d058)
                    
                    *(arg10 + (ebp_1 << 2)) = sub_552250(esi_1)
                    *(arg8 + (*arg9 << 2)) = ebx_1
                    *arg9 += 1
                    goto label_53ccf8
                case 4
                    *(arg1 + 0x2b0) -= 4
                    void** eax_4 = **(arg1 + 0x2b0)
                    int32_t edx_4 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
                    
                    if (eax_4 u>= edx_4)
                        return sub_53d1c0(eax_4, edx_4, arg1, 0x74d028)
                    
                    eax_4 = *(*(arg1 + 0x1e4) + (eax_4 << 2))
                    
                    if (eax_4 == 0)
                        return sub_53d1c0(eax_4, edx_4, arg1, 0x74d028)
                    
                    int32_t ecx_4 = eax_4[1]
                    uint32_t edx_6 = ecx_4 u>> 2
                    void* ebx_2
                    
                    if (ebx_1 u< edx_6)
                        if (ecx_4 != 0)
                            eax_4 = *eax_4
                        else
                            eax_4 = nullptr
                        
                        ebx_2 = &eax_4[ebx_1]
                    
                    if (ebx_1 u>= edx_6 || ebx_2 == 0)
                        return sub_53d1c0(eax_4, edx_6, arg1, 0x74cfa4)
                    
                    *(arg10 + (ebp_1 << 2)) = ebx_2
                    goto label_53ccf8
                case 5
                    int32_t edx_10 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
                    void* ebx_3
                    
                    if (ebx_1 u< edx_10)
                        result = *(arg1 + 0x1e4)
                        ebx_3 = *(result + (ebx_1 << 2))
                    
                    if (ebx_1 u>= edx_10 || ebx_3 == 0)
                        return sub_53d1c0(result, edx_10, arg1, 0x74d090)
                    
                    *(arg10 + (ebp_1 << 2)) = sub_552250(ebx_3)
                    goto label_53ccf8
                case 6
                    *(arg10 + (ebp_1 << 2)) = *(arg1 + 0x24)
                    goto label_53ccf8
        
        int32_t var_10 = *(*ecx_1 + (ebp_1 << 2))
        return sub_53d1c0(result, 0xfffffffc, arg1, 0x74d13c)

result.b = 1
return result
