// 函数: sub_53f950
// 地址: 0x53f950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_410
int32_t eax_1 = data_78c474 ^ &var_410
void* eax_3 = *(arg4 + 0x28c) + 4
int32_t esi = *(eax_3 - 4)
*(arg4 + 0x28c) = eax_3
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x6bca1af3, *(arg4 + 0xbc) - *(arg4 + 0xb8))
int32_t edx_1 = edx s>> 5
int32_t ebp_1
int32_t* ebp_2

if (esi u< (edx_1 u>> 0x1f) + edx_1)
    ebp_1 = esi * 0x4c
    ebp_2 = ebp_1 + *(arg4 + 0xb8)

uint32_t result
int32_t entry_ebx

if (esi u< (edx_1 u>> 0x1f) + edx_1 && ebp_1 != neg.d(*(arg4 + 0xb8)))
    if (*(arg4 + 0x1338) != 0)
        sub_52bd90(*(arg4 + 0x12f8) + esi * 0x38)
    
    void var_408
    void* eax_8 = &var_408
    int32_t __saved_edi
    void* edx_4 = &(&__saved_edi)[ebp_2[0xa] + 6]
    
    if (&var_408 u< edx_4)
        int32_t* ecx_6 = *(arg4 + 0x2b0)
        
        do
            ecx_6 -= 4
            *(arg4 + 0x2b0) = ecx_6
            *eax_8 = *ecx_6
            eax_8 += 4
        while (eax_8 u< edx_4)
    
    *(arg4 + 0x2b0) -= 4
    int32_t eax_10 = **(arg4 + 0x2b0)
    var_410 = eax_10
    
    if (eax_10 != 0xffffffff)
        int32_t eax_11 = sub_5527e0(arg4 + 0x1dc)
        result = sub_552320(arg4 + 0x1fc)
        int32_t* result_1 = result
        
        if (result_1 != 0)
            *(*(arg4 + 0x1e4) + (eax_11 << 2)) = result_1
            result = sub_54ffa0(ebp_2[0xc], result_1, ebp_2[0xb], &ebp_2[0xf])
            
            if (result.b != 0)
                result_1[0x11] = var_410
                result = sub_53ada0(arg4, eax_11)
                
                if (result.b != 0)
                    **(arg4 + 0x12c0) = var_410
                    *(arg4 + 0x12c0) += 4
                    int32_t ecx_13
                    result, ecx_13 = sub_53af10(arg4)
                    
                    if (result.b != 0)
                        int32_t eax_15 = ebp_2[0xa]
                        char eax_16
                        
                        if (eax_15 s> 0)
                            eax_16, ecx_13 = sub_5501a0(eax_15, *(arg4 + 0x12c4), &var_408)
                        
                        if (eax_15 s<= 0 || eax_16 != 0)
                            result = arg4
                            sub_53cad0(ecx_13, 2, result, *(arg4 + 0x28c) - *(arg4 + 0x290), *ebp_2)
                        else
                            result =
                                sub_53d0e0(arg4, 0x74da64, arg3, arg2, arg1, entry_ebx, var_410)
    else
        result = sub_53d0e0(arg4, "NULL", arg3, arg2, arg1, entry_ebx, var_410)
else
    result = sub_53d0e0(arg4, 0x74da04, esi, arg3, arg2, arg1, entry_ebx)
sub_6b4885(eax_1 ^ &var_410)
return result
