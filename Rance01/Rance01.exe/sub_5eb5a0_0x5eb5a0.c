// 函数: sub_5eb5a0
// 地址: 0x5eb5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg3 + 0x3c) == 0)
    int32_t eax = *(arg3 + 8)
    return fconvert.t(fconvert.s(float.t(arg1 - eax) / float.t(*(arg3 + 0xc) - eax)))

if (*(arg3 + 0x48) == 0)
    sub_5eb6b0(arg3, arg3 + 0x2c)

int32_t eax_1 = *(arg3 + 8)
float* edx_1 = *(arg3 + 0x5c)
float var_10 = fconvert.s(float.t(*(arg3 + 0xc) - eax_1))
int32_t ecx_6 = (*(arg3 + 0x60) - edx_1) s>> 2
int32_t ebx = 0
float var_14_5 = fconvert.s(float.t(arg1 - eax_1) / fconvert.t(var_10))

if (ecx_6 s> 0)
    long double x87_r6_2 = float.t(0)
    
    do
        long double x87_r5_2 = fconvert.t(var_14_5)
        x87_r5_2 - x87_r6_2
        eax_1.w = (x87_r5_2 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_1:1.b & 1) == 0)
            long double x87_r4_1 = fconvert.t(*edx_1)
            x87_r4_1 - x87_r5_2
            eax_1.w = (x87_r4_1 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
            
            if ((eax_1:1.b & 0x41) == 0)
                float* edi_3 = *(arg3 + 0x4c) + ebx * 0x18
                int32_t eax_3 = sub_70c710(x87_r6_2 * x87_r5_2)
                sub_5ffb90(&var_10, &edi_3[4], &edi_3[6], &edi_3[2], edi_3, &var_10, 
                    sub_70c710(x87_r5_2 * fconvert.t(*(*(arg3 + 0x5c) + (ebx << 2)))), eax_3)
                float var_c
                return fconvert.t(var_c)
        
        long double x87_r5_1 = x87_r5_2 - fconvert.t(*edx_1)
        ebx += 1
        edx_1 = &edx_1[1]
        var_14_5 = fconvert.s(x87_r5_1)
    while (ebx s< ecx_6)

return float.t(1)
