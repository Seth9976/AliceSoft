// 函数: sub_53f820
// 地址: 0x53f820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg7 == 0xffffffff)
    int32_t entry_ebx
    return sub_53d0e0(arg6, "NULL", arg5, arg4, arg3, entry_ebx, arg1)

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x6bca1af3, *(arg6 + 0xbc) - *(arg6 + 0xb8))
int32_t edx_1 = edx s>> 5
int32_t eax_4 = (edx_1 u>> 0x1f) + edx_1

if (arg2 u< eax_4)
    int32_t ebp_1 = arg2 * 0x4c
    int32_t* ebp_2 = ebp_1 + *(arg6 + 0xb8)
    
    if (ebp_1 != neg.d(*(arg6 + 0xb8)))
        if (*(arg6 + 0x1338) != 0)
            sub_52bd90(*(arg6 + 0x12f8) + arg2 * 0x38)
        
        uint32_t eax_6 = sub_5527e0(arg6 + 0x1dc)
        uint32_t result = sub_552320(arg6 + 0x1fc)
        int32_t* result_1 = result
        
        if (result_1 != 0)
            *(*(arg6 + 0x1e4) + (eax_6 << 2)) = result_1
            result = sub_54ffa0(ebp_2[0xc], result_1, ebp_2[0xb], &ebp_2[0xf])
            
            if (result.b != 0)
                result_1[0x11] = arg7
                result = sub_53ada0(arg6, eax_6)
                
                if (result.b != 0)
                    **(arg6 + 0x12c0) = arg7
                    *(arg6 + 0x12c0) += 4
                    int32_t ecx_12
                    result, ecx_12 = sub_53af10(arg6)
                    
                    if (result.b != 0)
                        result = arg6
                        sub_53cad0(ecx_12, 2, result, *(arg6 + 0x28c) - *(arg6 + 0x290), *ebp_2)
        
        return result

int32_t var_18_1 = arg2
return sub_53d1c0(eax_4, edx_1, arg6, 0x74d9d4)
