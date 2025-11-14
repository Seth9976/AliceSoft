// 函数: sub_6e0940
// 地址: 0x6e0940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg2
int32_t ebx = arg3
int32_t edx = *arg1
int32_t esi

if (edx != 0)
    esi = arg1[2]
label_6e09e7:
    int32_t eax_7 = arg4 * ecx
    
    if (eax_7 s>= esi || ecx + eax_7 s< edx)
        return 0xfffffff8
    
    int32_t esi_6 = arg5 * ebx
    
    if (esi_6 s>= arg1[3])
        return 0xfffffff8
    
    int32_t esi_7 = arg1[1]
    int32_t var_20_1 = esi_7
    
    if (ebx + esi_6 s< esi_7)
        return 0xfffffff8
    
    *arg11 = arg6 * (neg.d(edx) + eax_7) + arg7 * (neg.d(esi_7) + esi_6) + arg8
    int32_t esi_11 = *arg1 - eax_7
    int32_t ebx_6 = ebx
    
    if (esi_11 s< 0)
        esi_11 = 0
    
    *arg12 = esi_11
    int32_t edi_8 = arg1[2] - eax_7
    int32_t edx_14
    
    edx_14 = ecx s>= edi_8 ? edi_8 : ecx
    
    int32_t esi_14 = *arg1 - eax_7 + arg9
    int32_t var_20_2 = esi_14
    
    if (edx_14 s>= esi_14)
        ecx = esi_14
    else if (ecx s>= edi_8)
        ecx = edi_8
    
    arg12[2] = ecx
    int32_t eax_10 = arg1[1] - esi_6
    
    if (eax_10 s< 0)
        eax_10 = 0
    
    arg12[1] = eax_10
    int32_t eax_12
    int32_t edx_15
    edx_15:eax_12 = sx.q(arg10)
    int32_t eax_14 = (eax_12 ^ edx_15) - edx_15
    int32_t esi_16 = arg1[3] - esi_6
    int32_t edx_16
    
    edx_16 = ebx_6 s>= esi_16 ? esi_16 : ebx_6
    
    int32_t ebp_4 = arg1[1] - esi_6
    
    if (edx_16 s>= ebp_4 + eax_14)
        ebx_6 = ebp_4 + eax_14
    else if (ebx_6 s>= esi_16)
        ebx_6 = esi_16
    
    arg12[3] = ebx_6
else
    esi = arg1[2]
    
    if (esi != 0 || arg1[1] != 0 || arg1[3] != 0)
        goto label_6e09e7
    
    int32_t eax_1 = arg4 * ecx
    int32_t ebp_2 = arg5 * ebx
    *arg11 = arg6 * eax_1 + arg7 * ebp_2 + arg8
    *arg12 = 0
    int32_t edx_7 = arg9 - eax_1
    
    if (ecx s>= edx_7)
        ecx = edx_7
    
    arg12[2] = ecx
    arg12[1] = 0
    int32_t eax_3
    int32_t edx_8
    edx_8:eax_3 = sx.q(arg10)
    int32_t eax_5 = (eax_3 ^ edx_8) - edx_8
    
    if (ebx s>= eax_5 - ebp_2)
        ebx = eax_5 - ebp_2
    
    arg12[3] = ebx
return 0
