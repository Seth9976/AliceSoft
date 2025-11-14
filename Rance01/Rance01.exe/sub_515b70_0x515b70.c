// 函数: sub_515b70
// 地址: 0x515b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *arg1
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg1[1] - esi)
int32_t edx_2 = edx_1 s>> 1
int32_t result = (edx_2 u>> 0x1f) + edx_2
int32_t ebx = 0

if (result s> 0)
    float* edi_1 = nullptr
    
    do
        long double x87_r7_1 = fconvert.t(*arg2)
        long double x87_r6_1 = fconvert.t(*(edi_1 + esi))
        x87_r6_1 - x87_r7_1
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            *arg2 = fconvert.s(fconvert.t(*(edi_1 + esi)))
        
        float* edx_4 = *arg1
        long double x87_r7_3 = fconvert.t(*arg3)
        long double x87_r6_2 = fconvert.t(*(edx_4 + edi_1))
        x87_r6_2 - x87_r7_3
        result.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
        
        if ((result:1.b & 0x41) == 0)
            *arg3 = fconvert.s(fconvert.t(*(edx_4 + edi_1)))
        
        long double x87_r7_5 = fconvert.t(arg2[1])
        void* edx_5 = *arg1 + edi_1 + 4
        long double x87_r6_3 = fconvert.t(*edx_5)
        x87_r6_3 - x87_r7_5
        int32_t eax_3
        eax_3.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            arg2[1] = fconvert.s(fconvert.t(*edx_5))
        
        int32_t edx_6 = *arg1
        long double x87_r7_7 = fconvert.t(arg3[1])
        long double x87_r6_4 = fconvert.t(*(edx_6 + edi_1 + 4))
        x87_r6_4 - x87_r7_7
        eax_3.w = (x87_r6_4 < x87_r7_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_7) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_7 ? 1 : 0) << 0xe
        
        if ((eax_3:1.b & 0x41) == 0)
            arg3[1] = fconvert.s(fconvert.t(*(edx_6 + edi_1 + 4)))
        
        int32_t eax_4 = *arg1
        long double x87_r7_9 = fconvert.t(arg2[2])
        long double x87_r6_5 = fconvert.t(*(eax_4 + edi_1 + 8))
        float* edx_8 = eax_4 + edi_1 + 8
        x87_r6_5 - x87_r7_9
        eax_4.w = (x87_r6_5 < x87_r7_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            arg2[2] = fconvert.s(fconvert.t(*edx_8))
        
        int32_t edx_9 = *arg1
        long double x87_r7_11 = fconvert.t(arg3[2])
        long double x87_r6_6 = fconvert.t(*(edx_9 + edi_1 + 8))
        x87_r6_6 - x87_r7_11
        eax_4.w = (x87_r6_6 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_11 ? 1 : 0) << 0xe
        
        if ((eax_4:1.b & 0x41) == 0)
            arg3[2] = fconvert.s(fconvert.t(*(edx_9 + edi_1 + 8)))
        
        esi = *arg1
        int32_t eax_5
        int32_t edx_13
        edx_13:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - esi)
        int32_t edx_14 = edx_13 s>> 1
        ebx += 1
        result = (edx_14 u>> 0x1f) + edx_14
        edi_1 = &edi_1[3]
    while (ebx s< result)

return result
