// 函数: sub_5c1010
// 地址: 0x5c1010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t* esi = arg1
int32_t eax = esi[3]
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (eax != 1 && eax != 2)
    return 0

int32_t ecx = esi[4]
long double x87_r7 = float.t(ecx & 0x1fffff)

if (ecx s< 0)
    x87_r7 = fneg(x87_r7)

int32_t edx
long double st0 = sub_6b70c6((ecx s>> 0x15 & 0x3ff) - 0x314, edx, ecx, fconvert.d(x87_r7), 
    (ecx s>> 0x15 & 0x3ff) - 0x314)
int32_t ecx_1 = esi[5]
float var_18 = fconvert.s(st0)
int32_t edx_2 = ecx_1 & 0x1fffff
long double x87_r7_2 = float.t(edx_2)

if (ecx_1 s< 0)
    x87_r7_2 = fneg(x87_r7_2)

int32_t ecx_2
int32_t edx_3
long double st0_1
st0_1, ecx_2, edx_3 = sub_6b70c6((ecx_1 s>> 0x15 & 0x3ff) - 0x314, edx_2, ecx_1, 
    fconvert.d(x87_r7_2), (ecx_1 s>> 0x15 & 0x3ff) - 0x314)
int32_t ebx = *esi
float var_20 = fconvert.s(st0_1)
int32_t eax_13 = ebx * arg2
int32_t var_34_2 = 4
double var_3c_2
var_3c_2:4.d = eax_13
int32_t result = _calloc(eax_13, edx_3, ecx_2)
int32_t eax_14 = esi[3]

if (eax_14 == 1)
    long double x87_r0
    int32_t eax_19 = sub_5c0f90(esi, x87_r0)
    int32_t ecx_23 = esi[1]
    int32_t eax_20 = 0
    int32_t var_1c_2 = 0
    int32_t var_4_2 = ecx_23
    
    if (ecx_23 s> 0)
        long double x87_r0_3 = fconvert.t(var_18)
        long double x87_r7_6 = fconvert.t(var_20)
        int32_t var_10_2 = 0
        int32_t* var_14_2 = arg3
        
        do
            if (arg3 == 0 || *(esi[2] + (eax_20 << 2)) != 0)
                int32_t i = 0
                float var_20_2 = fconvert.s(float.t(0))
                int32_t ecx_24 = 1
                
                if (ebx s>= 4)
                    int32_t edx_11 = arg1[8]
                    int32_t eax_22 = arg1[7]
                    
                    do
                        long double x87_r5_7 = fconvert.t(fconvert.s(fabs(float.t(*(edx_11
                            + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_1c_2), ecx_24)), eax_19) << 2))))
                            * x87_r7_6 + x87_r0_3 + fconvert.t(var_20_2)))
                        
                        if (eax_22 != 0)
                            var_20_2 = fconvert.s(x87_r5_7)
                        
                        if (arg3 == 0)
                            *(result + ((var_10_2 + i) << 2)) = fconvert.s(x87_r5_7)
                        else
                            *(result + ((*var_14_2 * ebx + i) << 2)) = fconvert.s(x87_r5_7)
                        
                        int32_t ecx_25 = ecx_24 * eax_19
                        long double x87_r5_13 = fconvert.t(fconvert.s(fabs(float.t(*(edx_11
                            + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_1c_2), ecx_25)), eax_19) << 2))))
                            * x87_r7_6 + x87_r0_3 + fconvert.t(var_20_2)))
                        
                        if (eax_22 != 0)
                            var_20_2 = fconvert.s(x87_r5_13)
                        
                        if (arg3 == 0)
                            *(result + ((var_10_2 + i) << 2) + 4) = fconvert.s(x87_r5_13)
                        else
                            *(result + ((*var_14_2 * ebx + i) << 2) + 4) = fconvert.s(x87_r5_13)
                        
                        int32_t ecx_26 = ecx_25 * eax_19
                        long double x87_r5_19 = fconvert.t(fconvert.s(fabs(float.t(*(edx_11
                            + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_1c_2), ecx_26)), eax_19) << 2))))
                            * x87_r7_6 + x87_r0_3 + fconvert.t(var_20_2)))
                        
                        if (eax_22 != 0)
                            var_20_2 = fconvert.s(x87_r5_19)
                        
                        if (arg3 == 0)
                            *(result + ((var_10_2 + i) << 2) + 8) = fconvert.s(x87_r5_19)
                        else
                            *(result + ((*var_14_2 * ebx + i) << 2) + 8) = fconvert.s(x87_r5_19)
                        
                        int32_t ecx_27 = ecx_26 * eax_19
                        long double x87_r5_25 = fconvert.t(fconvert.s(fabs(float.t(*(edx_11
                            + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_1c_2), ecx_27)), eax_19) << 2))))
                            * x87_r7_6 + x87_r0_3 + fconvert.t(var_20_2)))
                        
                        if (eax_22 != 0)
                            var_20_2 = fconvert.s(x87_r5_25)
                        
                        if (arg3 == 0)
                            *(result + ((var_10_2 + i) << 2) + 0xc) = fconvert.s(x87_r5_25)
                        else
                            *(result + ((*var_14_2 * ebx + i) << 2) + 0xc) = fconvert.s(x87_r5_25)
                        
                        i += 4
                        ecx_24 = ecx_27 * eax_19
                    while (i s< ebx - 3)
                
                if (i s< ebx)
                    int32_t edx_36 = arg1[8]
                    int32_t eax_57 = arg1[7]
                    
                    do
                        long double x87_r5_31 = fconvert.t(fconvert.s(fabs(float.t(*(edx_36
                            + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_1c_2), ecx_24)), eax_19) << 2))))
                            * x87_r7_6 + x87_r0_3 + fconvert.t(var_20_2)))
                        
                        if (eax_57 != 0)
                            var_20_2 = fconvert.s(x87_r5_31)
                        
                        if (arg3 == 0)
                            *(result + ((var_10_2 + i) << 2)) = fconvert.s(x87_r5_31)
                        else
                            *(result + ((*var_14_2 * ebx + i) << 2)) = fconvert.s(x87_r5_31)
                        
                        i += 1
                        ecx_24 *= eax_19
                    while (i s< ebx)
                
                var_14_2 = &var_14_2[1]
                var_10_2 += ebx
                ecx_23 = var_4_2
                eax_20 = var_1c_2
                esi = arg1
            
            eax_20 += 1
            var_1c_2 = eax_20
        while (eax_20 s< ecx_23)
else
    int32_t eax_16 = eax_14 - 2
    
    if (eax_14 == 2)
        int32_t ecx_3 = esi[1]
        int32_t var_1c_1 = eax_16
        int32_t var_4_1 = ecx_3
        
        if (ecx_3 s> eax_16)
            long double x87_r7_4 = fconvert.t(var_18)
            long double x87_r6_1 = fconvert.t(var_20)
            int32_t var_14_1 = eax_16
            int32_t var_8_2 = eax_16
            int32_t* var_c_1 = arg3
            
            do
                if (arg3 == 0 || *(esi[2] + (eax_16 << 2)) != 0)
                    int32_t i_1 = 0
                    float var_20_1 = fconvert.s(float.t(0))
                    
                    if (ebx s>= 4)
                        int32_t ecx_4 = esi[8]
                        int32_t edi = esi[7]
                        void* edx_7 = ecx_4 + (var_8_2 << 2) + 8
                        int32_t* var_10_1 = ecx_4 + (var_8_2 << 2) + 4
                        
                        do
                            long double x87_r4_6 = fconvert.t(fconvert.s(
                                fabs(float.t(*(edx_7 - 8))) * x87_r6_1 + x87_r7_4
                                + fconvert.t(var_20_1)))
                            
                            if (edi != 0)
                                var_20_1 = fconvert.s(x87_r4_6)
                            
                            int32_t ecx_7
                            
                            if (arg3 == 0)
                                ecx_7 = var_14_1
                            else
                                ecx_7 = *var_c_1 * ebx
                            
                            *(result + ((ecx_7 + i_1) << 2)) = fconvert.s(x87_r4_6)
                            long double x87_r4_12 = fconvert.t(fconvert.s(
                                fabs(float.t(*var_10_1)) * x87_r6_1 + x87_r7_4
                                + fconvert.t(var_20_1)))
                            
                            if (edi != 0)
                                var_20_1 = fconvert.s(x87_r4_12)
                            
                            int32_t ecx_11
                            
                            if (arg3 == 0)
                                ecx_11 = var_14_1
                            else
                                ecx_11 = *var_c_1 * ebx
                            
                            *(result + ((ecx_11 + i_1) << 2) + 4) = fconvert.s(x87_r4_12)
                            long double x87_r4_18 = fconvert.t(fconvert.s(
                                fabs(float.t(*edx_7)) * x87_r6_1 + x87_r7_4 + fconvert.t(var_20_1)))
                            
                            if (edi != 0)
                                var_20_1 = fconvert.s(x87_r4_18)
                            
                            int32_t ecx_14
                            
                            if (arg3 == 0)
                                ecx_14 = var_14_1
                            else
                                ecx_14 = *var_c_1 * ebx
                            
                            *(result + ((ecx_14 + i_1) << 2) + 8) = fconvert.s(x87_r4_18)
                            long double x87_r4_24 = fconvert.t(fconvert.s(
                                fabs(float.t(*(edx_7 + 4))) * x87_r6_1 + x87_r7_4
                                + fconvert.t(var_20_1)))
                            
                            if (edi != 0)
                                var_20_1 = fconvert.s(x87_r4_24)
                            
                            int32_t ecx_17
                            
                            if (arg3 == 0)
                                ecx_17 = var_14_1
                            else
                                ecx_17 = *var_c_1 * ebx
                            
                            var_10_1 = &var_10_1[4]
                            *(result + ((ecx_17 + i_1) << 2) + 0xc) = fconvert.s(x87_r4_24)
                            i_1 += 4
                            edx_7 += 0x10
                        while (i_1 s< ebx - 3)
                        
                        esi = arg1
                    
                    if (i_1 s< ebx)
                        int32_t edx_8 = esi[7]
                        int32_t* ecx_22 = esi[8] + ((var_8_2 + i_1) << 2)
                        
                        do
                            long double x87_r4_30 = fconvert.t(fconvert.s(
                                fabs(float.t(*ecx_22)) * x87_r6_1 + x87_r7_4
                                + fconvert.t(var_20_1)))
                            
                            if (edx_8 != 0)
                                var_20_1 = fconvert.s(x87_r4_30)
                            
                            int32_t edi_4
                            
                            if (arg3 == 0)
                                edi_4 = var_14_1
                            else
                                edi_4 = *var_c_1 * ebx
                            
                            int32_t edi_5 = edi_4 + i_1
                            i_1 += 1
                            *(result + (edi_5 << 2)) = fconvert.s(x87_r4_30)
                            ecx_22 = &ecx_22[1]
                        while (i_1 s< ebx)
                    
                    var_c_1 = &var_c_1[1]
                    var_14_1 += ebx
                    eax_16 = var_1c_1
                    ecx_3 = var_4_1
                
                var_8_2 += ebx
                eax_16 += 1
                var_1c_1 = eax_16
            while (eax_16 s< ecx_3)

return result
