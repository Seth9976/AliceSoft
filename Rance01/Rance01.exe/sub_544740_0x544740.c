// 函数: sub_544740
// 地址: 0x544740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
int32_t var_10
int32_t var_c
int32_t var_8

if (ecx_1 == 0xa || ecx_1 == 0xb || ecx_1 == 0x1b || ecx_1 == 0x2f)
    *(arg1 + 0x2b0) -= 4
    int32_t edx_10 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ecx_34 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    var_c = ecx_34
    int32_t ebp_9 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebx_9 = **(arg1 + 0x2b0)
    var_10 = edx_10
    
    if (ebx_9 u>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        return sub_53d0e0(arg1, 0x74ecd0, ebx_9, ebp_9, arg4, arg3, arg2)
    
    int32_t* eax_24 = *(*(arg1 + 0x1e4) + (ebx_9 << 2))
    
    if (eax_24 == 0)
        return sub_53d0e0(arg1, 0x74ecd0, ebx_9, ebp_9, arg4, arg3, arg2)
    
    int32_t ecx_36 = eax_24[1]
    
    if (ebp_9 u>= ecx_36 u>> 2)
        return sub_53d0e0(arg1, 0x74ecd0, ebx_9, ebp_9, arg4, arg3, arg2)
    
    int32_t eax_25
    
    if (ecx_36 != 0)
        eax_25 = *eax_24
    else
        eax_25 = 0
    
    int32_t eax_26 = *(eax_25 + (ebp_9 << 2))
    
    if (sub_554250(var_c, var_10, arg1 + 0x1dc, &var_8) == 0)
        return sub_53d0e0(arg1, 0x74ed08, var_c, var_10, arg4, arg3, arg2)
    
    if (sub_554320(ebx_9, ebp_9, arg1 + 0x1dc, var_8) == 0)
        return sub_53d0e0(arg1, 0x74ed40, ebx_9, ebp_9, arg4, arg3, arg2)
    
    int32_t edx_20 = var_10
    int32_t esi_4 = var_c
    
    if (sub_554320(esi_4, edx_20, arg1 + 0x1dc, eax_26) == 0)
        return sub_53d0e0(arg1, 0x74ed78, esi_4, edx_20, arg4, arg3, arg2)
else if (ecx_1 == 0xc)
    *(arg1 + 0x2b0) -= 4
    int32_t ecx_3 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    var_c = ecx_3
    int32_t edx = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebx = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebp = **(arg1 + 0x2b0)
    var_10 = edx
    
    if (sub_554250(ebp, ebx, arg1 + 0x1dc, &var_8) == 0)
        return sub_53d0e0(arg1, 0x74edb0, ebp, ebx, arg4, arg3, arg2)
    
    int32_t ebx_1 = var_c
    int32_t ebp_1 = var_10
    
    if (sub_554250(ebp_1, ebx_1, arg1 + 0x1dc, &var_c) == 0)
        return sub_53d0e0(arg1, 0x74ede8, ebp_1, ebx_1, arg4, arg3, arg2)
    
    int32_t ebx_2 = var_c
    int32_t ebp_2 = var_8
    
    if (sub_5543e0(arg1 + 0x1dc, ebp_2, ebx_2) == 0)
        return sub_53d0e0(arg1, 0x74ee20, ebp_2, ebx_2, arg4, arg3, arg2)
else if (ecx_1 != 0xd)
    void var_14
    int32_t entry_ebx
    
    if (ecx_1 != 0xe && ecx_1 != 0xf && ecx_1 != 0x10 && ecx_1 != 0x11 && ecx_1 != 0x1e
            && ecx_1 != 0x32)
        return sub_53d0e0(arg1, 0x74efc0, arg4, arg3, arg2, entry_ebx, var_14)
    *(arg1 + 0x2b0) -= 4
    int32_t ecx_23 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    var_8 = ecx_23
    int32_t edx_7 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebx_6 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebp_6 = **(arg1 + 0x2b0)
    var_c = edx_7
    
    if (sub_554250(ebp_6, ebx_6, arg1 + 0x1dc, &var_10) == 0)
        return sub_53d0e0(arg1, 0x74ef10, ebp_6, ebx_6, arg4, arg3, arg2)
    
    int32_t ebx_7 = var_8
    int32_t ebp_7 = var_c
    
    if (sub_554250(ebp_7, ebx_7, arg1 + 0x1dc, &var_8) == 0)
        return sub_53d0e0(arg1, 0x74ef48, ebp_7, ebx_7, arg4, arg3, arg2)
    
    int32_t ebx_8 = var_8
    int32_t ebp_8 = var_10
    
    if (sub_5545c0(arg1 + 0x1dc, ebp_8, ebx_8) == 0)
        return sub_53d0e0(arg1, 0x74ef80, ebp_8, ebx_8, arg4, arg3, arg2)
else
    *(arg1 + 0x2b0) -= 4
    int32_t edx_4 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ecx_14 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    var_c = ecx_14
    int32_t ebx_3 = **(arg1 + 0x2b0)
    *(arg1 + 0x2b0) -= 4
    int32_t ebp_3 = **(arg1 + 0x2b0)
    var_8 = edx_4
    
    if (sub_554250(ebp_3, ebx_3, arg1 + 0x1dc, &var_10) == 0)
        return sub_53d0e0(arg1, 0x74ee60, ebp_3, ebx_3, arg4, arg3, arg2)
    
    int32_t ebx_4 = var_8
    int32_t ebp_4 = var_c
    
    if (sub_554250(ebp_4, ebx_4, arg1 + 0x1dc, &var_8) == 0)
        return sub_53d0e0(arg1, 0x74ee98, ebp_4, ebx_4, arg4, arg3, arg2)
    
    int32_t ebx_5 = var_8
    int32_t ebp_5 = var_10
    
    if (sub_554560(ebp_5, arg1 + 0x1dc, ebx_5) == 0)
        return sub_53d0e0(arg1, 0x74eed0, ebp_5, ebx_5, arg4, arg3, arg2)
return 1
