// 函数: sub_5be520
// 地址: 0x5be520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg4
float* result = arg7
int32_t edx_2 = 0
float var_44 = fconvert.s(fconvert.t(*(arg4[1] + (arg6 << 2) + 0xc)))
void* edi = arg8
long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(arg4[0xc])))
int32_t var_38 = 0
long double x87_r6 = fconvert.t(-17.200000762939453)
long double x87_r5 = fconvert.t(0.0050000000000000001)
long double x87_r4 = float.t(1)

if (edx s>= 4)
    float* ebp_8 = edi - arg3
    float* ebp_17 = edi - result
    float* var_48_1 = edi + 0xc
    int32_t i_1 = ((edx - 4) u>> 2) + 1
    float* var_28_1 = arg5 - arg9
    void* var_4c_1 = &result[2]
    int32_t ebp_18 = arg6
    float* var_40_1 = arg9
    void* edx_5 = arg3 + 4
    var_38 = i_1 << 2
    int32_t i
    
    do
        void* ebp_21 = arg4[1]
        long double x87_r2_3 = fconvert.t(fconvert.s(
            fconvert.t(*(0xfffffffc - arg3 + edx_5 + *(arg4[3] + (ebp_18 << 2))))
            + fconvert.t(*(var_28_1 + var_40_1))))
        long double x87_r1_1 = fconvert.t(*(ebp_21 + 0x6c))
        x87_r1_1 - x87_r2_3
        float* eax_8
        eax_8.w = (x87_r1_1 < x87_r2_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_1, x87_r2_3) ? 1 : 0) << 0xa
            | (x87_r1_1 == x87_r2_3 ? 1 : 0) << 0xe | 0x1000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            x87_r2_3 = fconvert.t(fconvert.s(fconvert.t(*(ebp_21 + 0x6c))))
        
        long double x87_r1_3 = fconvert.t(*(edx_5 - 4)) + fconvert.t(var_44)
        x87_r1_3 - x87_r2_3
        eax_8.w = (x87_r1_3 < x87_r2_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_3, x87_r2_3) ? 1 : 0) << 0xa
            | (x87_r1_3 == x87_r2_3 ? 1 : 0) << 0xe | 0x800
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            x87_r2_3 = x87_r1_3
            x87_r1_3 = x87_r2_3
        
        *(var_4c_1 - 8) = fconvert.s(x87_r1_3)
        
        if (arg6 == 1)
            long double x87_r2_6 = fconvert.t(-17.2000008f)
            long double x87_r1_4 = fconvert.t(fconvert.s(x87_r2_3 - fconvert.t(*var_40_1)))
            x87_r1_4 - x87_r2_6
            float* eax_10
            eax_10.w = (x87_r1_4 < x87_r2_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_4, x87_r2_6) ? 1 : 0) << 0xa
                | (x87_r1_4 == x87_r2_6 ? 1 : 0) << 0xe | 0x800
            long double x87_r2_7 = x87_r2_6 - x87_r6
            
            if ((eax_10:1.b & 0x41) != 0)
                var_48_1[-3] = fconvert.s(fconvert.t(var_48_1[-3]) * fconvert.t(fconvert.s(x87_r4
                    - x87_r2_7 * fconvert.t(0.00029999999999999997) * x87_r7_2)))
            else
                float var_50_4 = fconvert.s(x87_r4 - x87_r2_7 * x87_r5 * x87_r7_2)
                long double temp0_1 = fconvert.t(var_50_4)
                x87_r1_4 - temp0_1
                eax_10.w = (x87_r1_4 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_4, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r1_4 == temp0_1 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_10:1.b & 0x41) != 0)
                    var_48_1[-3] = fconvert.s(fconvert.t(var_48_1[-3]) * fconvert.t(var_50_4))
                else
                    var_48_1[-3] = fconvert.s(fconvert.t(var_48_1[-3])
                        * fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f))))
        
        void* ebp_24 = arg4[1]
        long double x87_r2_21 = fconvert.t(fconvert.s(
            fconvert.t(*(0xfffffffc - arg3 + edx_5 + *(arg4[3] + (arg6 << 2)) + 4))
            + fconvert.t(*(arg5 - arg3 + edx_5))))
        long double x87_r1_5 = fconvert.t(*(ebp_24 + 0x6c))
        x87_r1_5 - x87_r2_21
        float* eax_16
        eax_16.w = (x87_r1_5 < x87_r2_21 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_5, x87_r2_21) ? 1 : 0) << 0xa
            | (x87_r1_5 == x87_r2_21 ? 1 : 0) << 0xe | 0x1000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            x87_r2_21 = fconvert.t(fconvert.s(fconvert.t(*(ebp_24 + 0x6c))))
        
        long double x87_r1_7 = fconvert.t(*edx_5) + fconvert.t(var_44)
        x87_r1_7 - x87_r2_21
        eax_16.w = (x87_r1_7 < x87_r2_21 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_7, x87_r2_21) ? 1 : 0) << 0xa
            | (x87_r1_7 == x87_r2_21 ? 1 : 0) << 0xe | 0x800
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_4))
            x87_r2_21 = x87_r1_7
            x87_r1_7 = x87_r2_21
        
        *(result - arg3 + edx_5) = fconvert.s(x87_r1_7)
        
        if (arg6 == 1)
            long double x87_r2_24 = fconvert.t(-17.2000008f)
            long double x87_r1_8 =
                fconvert.t(fconvert.s(x87_r2_21 - fconvert.t(*(arg9 - arg3 + edx_5))))
            x87_r1_8 - x87_r2_24
            float* eax_18
            eax_18.w = (x87_r1_8 < x87_r2_24 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_8, x87_r2_24) ? 1 : 0) << 0xa
                | (x87_r1_8 == x87_r2_24 ? 1 : 0) << 0xe | 0x800
            long double x87_r2_25 = x87_r2_24 - x87_r6
            
            if ((eax_18:1.b & 0x41) != 0)
                *(ebp_8 + edx_5) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                    - x87_r2_25 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                    * fconvert.t(*(ebp_8 + edx_5)))
            else
                float var_50_9 = fconvert.s(x87_r4 - x87_r2_25 * x87_r5 * x87_r7_2)
                long double temp2_1 = fconvert.t(var_50_9)
                x87_r1_8 - temp2_1
                eax_18.w = (x87_r1_8 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_8, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r1_8 == temp2_1 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_18:1.b & 0x41) != 0)
                    *(ebp_8 + edx_5) =
                        fconvert.s(fconvert.t(var_50_9) * fconvert.t(*(ebp_8 + edx_5)))
                else
                    *(ebp_8 + edx_5) = fconvert.s(
                        fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                        * fconvert.t(*(ebp_8 + edx_5)))
        
        void* ebp_27 = arg4[1]
        long double x87_r2_39 = fconvert.t(fconvert.s(
            fconvert.t(*(*(arg4[3] + (arg6 << 2)) + 4 - arg3 + edx_5))
            + fconvert.t(*(arg5 - result + var_4c_1))))
        long double x87_r1_9 = fconvert.t(*(ebp_27 + 0x6c))
        x87_r1_9 - x87_r2_39
        float* eax_24
        eax_24.w = (x87_r1_9 < x87_r2_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_9, x87_r2_39) ? 1 : 0) << 0xa
            | (x87_r1_9 == x87_r2_39 ? 1 : 0) << 0xe | 0x1000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
            x87_r2_39 = fconvert.t(fconvert.s(fconvert.t(*(ebp_27 + 0x6c))))
        
        long double x87_r1_11 = fconvert.t(*(edx_5 + 4)) + fconvert.t(var_44)
        x87_r1_11 - x87_r2_39
        eax_24.w = (x87_r1_11 < x87_r2_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_11, x87_r2_39) ? 1 : 0) << 0xa
            | (x87_r1_11 == x87_r2_39 ? 1 : 0) << 0xe | 0x800
        bool p_6 = unimplemented  {test ah, 0x5}
        
        if (not(p_6))
            x87_r2_39 = x87_r1_11
            x87_r1_11 = x87_r2_39
        
        *var_4c_1 = fconvert.s(x87_r1_11)
        
        if (arg6 == 1)
            long double x87_r2_42 = fconvert.t(-17.2000008f)
            long double x87_r1_12 =
                fconvert.t(fconvert.s(x87_r2_39 - fconvert.t(*(arg9 - result + var_4c_1))))
            x87_r1_12 - x87_r2_42
            float* eax_25
            eax_25.w = (x87_r1_12 < x87_r2_42 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_12, x87_r2_42) ? 1 : 0) << 0xa
                | (x87_r1_12 == x87_r2_42 ? 1 : 0) << 0xe | 0x800
            long double x87_r2_43 = x87_r2_42 - x87_r6
            
            if ((eax_25:1.b & 0x41) != 0)
                *(ebp_17 + var_4c_1) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                    - x87_r2_43 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                    * fconvert.t(*(ebp_17 + var_4c_1)))
            else
                float var_50_14 = fconvert.s(x87_r4 - x87_r2_43 * x87_r5 * x87_r7_2)
                long double temp3_1 = fconvert.t(var_50_14)
                x87_r1_12 - temp3_1
                eax_25.w = (x87_r1_12 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_12, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r1_12 == temp3_1 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_25:1.b & 0x41) != 0)
                    *(ebp_17 + var_4c_1) =
                        fconvert.s(fconvert.t(var_50_14) * fconvert.t(*(ebp_17 + var_4c_1)))
                else
                    *(ebp_17 + var_4c_1) = fconvert.s(
                        fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                        * fconvert.t(*(ebp_17 + var_4c_1)))
        
        float* eax_29 = arg9 - edi + var_48_1
        void* ebp_31 = arg4[1]
        long double x87_r2_57 = fconvert.t(fconvert.s(
            fconvert.t(*(*(arg4[3] + (arg6 << 2)) + 8 - arg3 + edx_5))
            + fconvert.t(*(var_28_1 + eax_29))))
        long double x87_r1_13 = fconvert.t(*(ebp_31 + 0x6c))
        x87_r1_13 - x87_r2_57
        float* eax_33
        eax_33.w = (x87_r1_13 < x87_r2_57 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_13, x87_r2_57) ? 1 : 0) << 0xa
            | (x87_r1_13 == x87_r2_57 ? 1 : 0) << 0xe | 0x1000
        bool p_7 = unimplemented  {test ah, 0x5}
        
        if (not(p_7))
            x87_r2_57 = fconvert.t(fconvert.s(fconvert.t(*(ebp_31 + 0x6c))))
        
        long double x87_r1_15 = fconvert.t(*(edx_5 + 8)) + fconvert.t(var_44)
        x87_r1_15 - x87_r2_57
        eax_33.w = (x87_r1_15 < x87_r2_57 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_15, x87_r2_57) ? 1 : 0) << 0xa
            | (x87_r1_15 == x87_r2_57 ? 1 : 0) << 0xe | 0x800
        bool p_8 = unimplemented  {test ah, 0x5}
        
        if (not(p_8))
            x87_r2_57 = x87_r1_15
            x87_r1_15 = x87_r2_57
        
        ebp_18 = arg6
        *(var_4c_1 + 4) = fconvert.s(x87_r1_15)
        
        if (ebp_18 == 1)
            long double x87_r2_60 = fconvert.t(-17.2000008f)
            long double x87_r1_16 = fconvert.t(fconvert.s(x87_r2_57 - fconvert.t(*eax_29)))
            x87_r1_16 - x87_r2_60
            float* eax_35
            eax_35.w = (x87_r1_16 < x87_r2_60 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_16, x87_r2_60) ? 1 : 0) << 0xa
                | (x87_r1_16 == x87_r2_60 ? 1 : 0) << 0xe | 0x800
            long double x87_r2_61 = x87_r2_60 - x87_r6
            
            if ((eax_35:1.b & 0x41) != 0)
                *var_48_1 = fconvert.s(fconvert.t(*var_48_1) * fconvert.t(fconvert.s(x87_r4
                    - x87_r2_61 * fconvert.t(0.00029999999999999997) * x87_r7_2)))
            else
                float var_50_19 = fconvert.s(x87_r4 - x87_r2_61 * x87_r5 * x87_r7_2)
                long double temp5_1 = fconvert.t(var_50_19)
                x87_r1_16 - temp5_1
                eax_35.w = (x87_r1_16 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_16, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r1_16 == temp5_1 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_35:1.b & 0x41) != 0)
                    *var_48_1 = fconvert.s(fconvert.t(*var_48_1) * fconvert.t(var_50_19))
                else
                    *var_48_1 = fconvert.s(fconvert.t(*var_48_1)
                        * fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f))))
        
        var_40_1 = &var_40_1[4]
        var_4c_1 += 0x10
        var_48_1 = &var_48_1[4]
        edx_5 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    edx_2 = var_38
    edi = arg8
    result = arg7

if (edx_2 s< edx)
    void* result_1 = result - arg3
    int32_t edi_4 = var_38
    float* edx_6 = arg3 + (edx_2 << 2)
    float* ebx_3 = edi - arg3
    
    do
        void* ecx_2 = arg4[1]
        long double x87_r2_75 = fconvert.t(fconvert.s(
            fconvert.t(*(*(arg4[3] + (arg6 << 2)) + (edi_4 << 2)))
            + fconvert.t(*(edx_6 + arg5 - arg3))))
        long double x87_r1_17 = fconvert.t(*(ecx_2 + 0x6c))
        x87_r1_17 - x87_r2_75
        int32_t eax_38
        eax_38.w = (x87_r1_17 < x87_r2_75 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_17, x87_r2_75) ? 1 : 0) << 0xa
            | (x87_r1_17 == x87_r2_75 ? 1 : 0) << 0xe | 0x1000
        bool p_9 = unimplemented  {test ah, 0x5}
        
        if (not(p_9))
            x87_r2_75 = fconvert.t(fconvert.s(fconvert.t(*(ecx_2 + 0x6c))))
        
        long double x87_r1_19 = fconvert.t(*edx_6) + fconvert.t(var_44)
        x87_r1_19 - x87_r2_75
        eax_38.w = (x87_r1_19 < x87_r2_75 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_19, x87_r2_75) ? 1 : 0) << 0xa
            | (x87_r1_19 == x87_r2_75 ? 1 : 0) << 0xe | 0x800
        bool p_10 = unimplemented  {test ah, 0x5}
        
        if (not(p_10))
            x87_r2_75 = x87_r1_19
            x87_r1_19 = x87_r2_75
        
        result = result_1
        *(result + edx_6) = fconvert.s(x87_r1_19)
        
        if (arg6 == 1)
            long double x87_r2_78 = fconvert.t(-17.2000008f)
            long double x87_r1_20 =
                fconvert.t(fconvert.s(x87_r2_75 - fconvert.t(*(arg9 - arg3 + edx_6))))
            x87_r1_20 - x87_r2_78
            result.w = (x87_r1_20 < x87_r2_78 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_20, x87_r2_78) ? 1 : 0) << 0xa
                | (x87_r1_20 == x87_r2_78 ? 1 : 0) << 0xe | 0x800
            long double x87_r2_79 = x87_r2_78 - x87_r6
            
            if ((result:1.b & 0x41) != 0)
                *(ebx_3 + edx_6) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                    - x87_r2_79 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                    * fconvert.t(*(ebx_3 + edx_6)))
            else
                float var_50_24 = fconvert.s(x87_r4 - x87_r2_79 * x87_r5 * x87_r7_2)
                long double temp1_1 = fconvert.t(var_50_24)
                x87_r1_20 - temp1_1
                result.w = (x87_r1_20 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_20, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r1_20 == temp1_1 ? 1 : 0) << 0xe | 0x1800
                
                if ((result:1.b & 0x41) != 0)
                    *(ebx_3 + edx_6) =
                        fconvert.s(fconvert.t(var_50_24) * fconvert.t(*(ebx_3 + edx_6)))
                else
                    *(ebx_3 + edx_6) = fconvert.s(
                        fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                        * fconvert.t(*(ebx_3 + edx_6)))
        
        edi_4 += 1
        edx_6 = &edx_6[1]
    while (edi_4 s< edx)

return result
