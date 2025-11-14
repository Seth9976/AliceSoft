// 函数: sub_583190
// 地址: 0x583190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_318
int32_t eax_1 = data_78c474 ^ &var_318
int32_t i_3 = arg4
int32_t* ecx = *(arg1 + 0xc)
int32_t j_2 = arg2

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xc) = 0

uint32_t ecx_2 = (*(**(arg1 + 8) + 0xc))(arg2, i_3, 0x20)
*(arg1 + 0xc) = ecx_2
uint32_t eax_4

if (ecx_2 != 0)
    int32_t i = 0
    int32_t i_2 = 0
    long double x87_r4_1 = fconvert.t(255.0)
    long double x87_r3_1 = float.t(0)
    
    do
        long double x87_r2_2 = fconvert.t(fconvert.s(float.t(i_2)))
        long double x87_r2_5 = fconvert.t(fconvert.s(x87_r2_2 * fconvert.t(0.29899999499320984)
            + x87_r2_2 * fconvert.t(0.58700001239776611)
            + x87_r2_2 * fconvert.t(0.14399999380111694)))
        float var_310_3 = fconvert.s(fconvert.t(240.0) * x87_r2_5 / x87_r4_1)
        float var_30c_1 = fconvert.s(fconvert.t(200.0) * x87_r2_5 / x87_r4_1)
        var_318 = fconvert.s(x87_r2_5 * fconvert.t(145.0) / x87_r4_1)
        long double x87_r2_8 = fconvert.t(var_310_3)
        x87_r2_8 - x87_r3_1
        eax_4.w = (x87_r2_8 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_8, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_8 == x87_r3_1 ? 1 : 0) << 0xe | 0x1000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r2_8 - x87_r4_1
            eax_4.w = (x87_r2_8 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_8, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r2_8 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_4:1.b & 0x41) == 0)
                var_310_3 = fconvert.s(fconvert.t(255f))
        else
            x87_r3_1 = x87_r2_8
            var_310_3 = fconvert.s(x87_r3_1)
        
        long double x87_r2_10 = fconvert.t(var_30c_1)
        x87_r2_10 - x87_r3_1
        eax_4.w = (x87_r2_10 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_10, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_10 == x87_r3_1 ? 1 : 0) << 0xe | 0x1000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r2_10 - x87_r4_1
            eax_4.w = (x87_r2_10 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_10, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r2_10 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_4:1.b & 0x41) == 0)
                var_30c_1 = fconvert.s(fconvert.t(255f))
        else
            x87_r3_1 = x87_r2_10
            var_30c_1 = fconvert.s(x87_r3_1)
        
        long double x87_r2_12 = fconvert.t(var_318)
        x87_r2_12 - x87_r3_1
        eax_4.w = (x87_r2_12 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_12, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r2_12 == x87_r3_1 ? 1 : 0) << 0xe | 0x1000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            x87_r2_12 - x87_r4_1
            eax_4.w = (x87_r2_12 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_12, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r2_12 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_4:1.b & 0x41) == 0)
                var_318 = fconvert.s(fconvert.t(255f))
        else
            x87_r3_1 = x87_r2_12
            var_318 = fconvert.s(x87_r3_1)
        
        long double x87_r2_14 = fconvert.t(var_318)
        i += 1
        int16_t x87status_1
        int16_t temp0_2
        temp0_2, x87status_1 = __fnstcw_memmem16(arg3)
        var_318.w = temp0_2
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(var_318.w | 0xc00)
        void var_205
        *(&var_205 + i) = (int.d(x87_r2_14)).b
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(var_318.w)
        int16_t x87status_4
        int16_t temp0_3
        temp0_3, x87status_4 = __fnstcw_memmem16(x87control_1)
        var_318.w = temp0_3
        int16_t x87control_2
        int16_t x87status_5
        x87control_2, x87status_5 = __fldcw_memmem16(var_318.w | 0xc00)
        *(&j_2:3 + i) = (int.d(fconvert.t(var_30c_1))).b
        int16_t x87control_3
        int16_t x87status_6
        x87control_3, x87status_6 = __fldcw_memmem16(var_318.w)
        int16_t x87status_7
        int16_t temp0_4
        temp0_4, x87status_7 = __fnstcw_memmem16(x87control_3)
        var_318.w = temp0_4
        i_2 = i
        int16_t x87control_4
        int16_t x87status_8
        x87control_4, x87status_8 = __fldcw_memmem16(var_318.w | 0xc00)
        void var_105
        *(&var_105 + i) = (int.d(fconvert.t(var_310_3))).b
        int16_t x87status_9
        arg3, x87status_9 = __fldcw_memmem16(var_318.w)
    while (i s< 0x100)
    
    char* esi_1 = (*(*ecx_2 + 8))(0, 0)
    uint32_t eax_16 = (*(**(arg1 + 0xc) + 0x1c))()
    int32_t j_1 = j_2
    int32_t ebx_2 = eax_16 - (j_1 << 2)
    
    if (i_3 s> 0)
        int32_t i_1
        
        do
            if (j_1 s> 0)
                int32_t j
                
                do
                    eax_16 = zx.d(sub_6b5a79())
                    char var_304[0xff]
                    char ecx_5 = var_304[eax_16]
                    char var_204[0xff]
                    *esi_1 = var_204[eax_16]
                    char var_104[0x100]
                    char edx_5 = var_104[eax_16]
                    esi_1[1] = ecx_5
                    esi_1[2] = edx_5
                    esi_1 = &esi_1[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                j_1 = j_2
            
            esi_1 = &esi_1[ebx_2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    eax_16.b = 1
else
    eax_4.b = 0
sub_6b4885(eax_1 ^ &var_318)
