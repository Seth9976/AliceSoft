// 函数: sub_5c6e40
// 地址: 0x5c6e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = neg.d(arg2)
int32_t eax_3 = sbb.d(eax_1, eax_1, arg2 != 0) & arg5
int32_t ebp = *(arg1 + (eax_3 << 2))
int32_t edx = *(arg1 + (arg2 << 2))
int32_t ecx_1 = neg.d(arg2)
void* ecx_3 = sbb.d(ecx_1, ecx_1, arg2 != 0) & arg6
int32_t edi_2 = "xzs"[*(arg4 + (ecx_3 << 2))]
void* ebx_1 = "xzs"[*(arg4 + (eax_3 << 2))]
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(edx)
int32_t edi_3 = *(arg1 + (ecx_3 << 2))
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(ebp)
int32_t ecx_5 = ((edx_1 & 3) + eax_5) s>> 2
int32_t result_1 = ecx_5 - ((eax_7 + (edx_3 & 3)) s>> 2)
int32_t eax_11
int32_t edx_5
edx_5:eax_11 = sx.q(ebp)
int32_t eax_14
int32_t edx_6
edx_6:eax_14 = sx.q(edi_3)
int32_t eax_18
int32_t edx_8
edx_8:eax_18 = sx.q(edx)
int32_t eax_21
int32_t edx_9
edx_9:eax_21 = sx.q(edi_3)
int32_t edx_10 = arg3
int32_t edi_5 = (eax_21 - edx_9) s>> 1
int32_t esi_4 = ((eax_18 - edx_8) s>> 1) - ((eax_14 + (edx_6 & 3)) s>> 2) + ecx_5
int32_t ebp_3 = ((eax_11 - edx_5) s>> 1) + result_1
int32_t ecx_6 = edi_5 + esi_4
int32_t result = 0
arg5 = edi_5
arg4 = ecx_6

if (result_1 s> 0)
    __builtin_memset(edx_10, 0, result_1 << 2)
    ecx_6 = arg4
    edi_5 = arg5
    result = result_1

int32_t var_c = 0

if (result s< ebp_3)
    if (ebp_3 - result s>= 4)
        int32_t i_4 = ((ebp_3 - result - 4) u>> 2) + 1
        void* ecx_8 = edx_10 + (result << 2) + 8
        int32_t edx_11 = i_4 << 2
        void* edi_8 = ebx_1 + 8
        result += edx_11
        var_c = edx_11
        int32_t i_3 = i_4
        int32_t i
        
        do
            long double x87_r7_1 = fconvert.t(*(edi_8 - 8))
            edi_8 += 0x10
            long double x87_r7_2 = x87_r7_1 * fconvert.t(*(ecx_8 - 8))
            ecx_8 += 0x10
            i = i_3
            i_3 -= 1
            *(ecx_8 - 0x18) = fconvert.s(x87_r7_2)
            *(ecx_8 - 0x14) = fconvert.s(fconvert.t(*(edi_8 - 0x14)) * fconvert.t(*(ecx_8 - 0x14)))
            *(ecx_8 - 0x10) = fconvert.s(fconvert.t(*(ecx_8 - 0x10)) * fconvert.t(*(edi_8 - 0x10)))
            *(ecx_8 - 0xc) = fconvert.s(fconvert.t(*(edi_8 - 0xc)) * fconvert.t(*(ecx_8 - 0xc)))
        while (i != 1)
        edx_10 = arg3
        ecx_6 = arg4
        edi_5 = arg5
    
    if (result s< ebp_3)
        float* ecx_10 = ebx_1 + (var_c << 2)
        
        do
            result += 1
            long double x87_r7_10 = fconvert.t(*ecx_10) * fconvert.t(*(edx_10 + (result << 2) - 4))
            ecx_10 = &ecx_10[1]
            *(edx_10 + (result << 2) - 4) = fconvert.s(x87_r7_10)
        while (result s< ebp_3)
        
        ecx_6 = arg4

int32_t ebp_4 = edi_5 - 1

if (esi_4 s< ecx_6)
    result = ecx_6 - esi_4
    
    if (result s>= 4)
        int32_t i_2 = ((ecx_6 - esi_4 - 4) u>> 2) + 1
        int32_t ebx_10 = i_2 << 2
        result = edx_10 + (esi_4 << 2) + 8
        void* edi_10 = edi_2 + (ebp_4 << 2) - 8
        esi_4 += ebx_10
        ebp_4 -= ebx_10
        void* edi_11 = edi_10
        int32_t i_1
        
        do
            long double x87_r7_11 = fconvert.t(*(edi_11 + 8))
            edi_11 -= 0x10
            long double x87_r7_12 = x87_r7_11 * fconvert.t(*(result - 8))
            result += 0x10
            i_1 = i_2
            i_2 -= 1
            *(result - 0x18) = fconvert.s(x87_r7_12)
            *(result - 0x14) =
                fconvert.s(fconvert.t(*(edi_11 + 0x14)) * fconvert.t(*(result - 0x14)))
            *(result - 0x10) =
                fconvert.s(fconvert.t(*(edi_11 + 0x10)) * fconvert.t(*(result - 0x10)))
            *(result - 0xc) = fconvert.s(fconvert.t(*(edi_11 + 0xc)) * fconvert.t(*(result - 0xc)))
        while (i_1 != 1)
        ecx_6 = arg4
    
    if (esi_4 s< ecx_6)
        result = edi_2 + (ebp_4 << 2)
        
        do
            esi_4 += 1
            long double x87_r7_20 = fconvert.t(*result) * fconvert.t(*(edx_10 + (esi_4 << 2) - 4))
            result -= 4
            *(edx_10 + (esi_4 << 2) - 4) = fconvert.s(x87_r7_20)
        while (esi_4 s< ecx_6)

if (esi_4 s< edx)
    result = 0
    __builtin_memset(edx_10 + (esi_4 << 2), 0, (edx - esi_4) << 2)

return result
