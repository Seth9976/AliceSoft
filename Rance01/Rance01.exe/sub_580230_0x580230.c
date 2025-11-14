// 函数: sub_580230
// 地址: 0x580230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi_3 = arg1 * 0xc
int32_t eax_2 = (*(**(edi_3 + arg2[0xc]) + 8))(0, 0)
int32_t ecx_1 = arg2[0xc]
int32_t edx_1 = *(edi_3 + ecx_1 + 4)
void* eax_3 = edi_3 + ecx_1
int32_t ecx_2 = *(eax_3 + 8)
int32_t eax_6 = (*(**eax_3 + 0x1c))()
int32_t eax_8 = (*(*arg3 + 8))(0, 0)
int32_t eax_10 = (*(*arg3 + 0x1c))()
int32_t i = arg4
float var_2c = fconvert.s(fconvert.t(arg2[0x44]))
int32_t eax_11
eax_11.b = arg5 s>= 0
float var_c = fconvert.s(fconvert.t(arg2[0x45]))
float var_8 = fconvert.s(fconvert.t(arg2[0x46]))
float var_4 = fconvert.s(fconvert.t(arg2[0x47]))
arg3 = fconvert.s(fconvert.t(arg2[0x48]))
int32_t result = (eax_11 - 1) & arg5
float var_60 = fconvert.s(fconvert.t(arg2[0x49]))
float var_5c = fconvert.s(fconvert.t(arg2[0x4a]))
float var_58 = fconvert.s(fconvert.t(arg2[0x4b]))
float var_54 = fconvert.s(fconvert.t(arg2[0x4c]))
float var_40 = fconvert.s(fconvert.t(arg2[0x4d]))
float var_3c = fconvert.s(fconvert.t(arg2[0x4e]))
float var_38 = fconvert.s(fconvert.t(arg2[0x4f]))
float var_34 = fconvert.s(fconvert.t(arg2[0x50]))
float var_30 = fconvert.s(fconvert.t(arg2[0x51]))

if (i s< result)
    long double x87_r7_16 = float.t(result - i)
    i = result
    long double x87_r7_17 = fconvert.t(fconvert.s(x87_r7_16))
    arg4 = result
    arg3 = fconvert.s(x87_r7_17 * fconvert.t(var_40) + fconvert.t(arg3))
    var_60 = fconvert.s(x87_r7_17 * fconvert.t(var_3c) + fconvert.t(var_60))
    var_5c = fconvert.s(x87_r7_17 * fconvert.t(var_38) + fconvert.t(var_5c))
    var_58 = fconvert.s(x87_r7_17 * fconvert.t(var_34) + fconvert.t(var_58))
    var_54 = fconvert.s(x87_r7_17 * fconvert.t(var_30) + fconvert.t(var_54))

long double x87_r7_20 = fconvert.t(fconvert.s(fconvert.t(arg2[0x42])))
long double x87_r6_13 = fconvert.t(fconvert.s(fconvert.t(arg2[0x43])))
long double x87_r5 = fconvert.t(var_2c)

if (i s< arg5)
    int32_t edi_7 = eax_10 * i
    int32_t var_44_1 = edi_7
    
    while (i s< arg2[7])
        long double x87_r4_1 = fconvert.t(arg3)
        int32_t j = sub_70c710(x87_r4_1)
        result = sub_70c710(fconvert.t(var_60))
        int32_t result_1 = result
        int32_t result_2 = result_1
        long double x87_r3_4 = fconvert.t(fconvert.s(float.t(j)))
        long double x87_r3_6 = fconvert.t(fconvert.s(float.t(1) - (x87_r4_1 - x87_r3_4)))
        float var_50_1 = fconvert.s(x87_r3_6 * x87_r7_20 + fconvert.t(var_5c))
        float var_4c_1 = fconvert.s(x87_r3_6 * x87_r6_13 + fconvert.t(var_58))
        float var_48_4 = fconvert.s(x87_r3_6 * x87_r5 + fconvert.t(var_54))
        
        if (j s>= 0)
            x87_r5 = x87_r3_4
        else
            j = 0
            var_50_1 = fconvert.s(fconvert.t(var_50_1) - x87_r3_4 * x87_r7_20)
            var_4c_1 = fconvert.s(fconvert.t(var_4c_1) - x87_r3_4 * x87_r6_13)
            var_48_4 = fconvert.s(fconvert.t(var_48_4) - x87_r3_4 * x87_r5)
        
        char* edi_9 = edi_7 + (j << 2) + eax_8
        
        if (j s<= result_1)
            while (j s< arg2[6])
                result = *(*arg2 + (i << 2))
                long double x87_r4_7 = fconvert.t(*(result + (j << 2)))
                int32_t ecx_8 = result + (j << 2)
                long double x87_r3_14 = fconvert.t(var_50_1)
                x87_r3_14 - x87_r4_7
                result.w = (x87_r3_14 < x87_r4_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_14, x87_r4_7) ? 1 : 0) << 0xa
                    | (x87_r3_14 == x87_r4_7 ? 1 : 0) << 0xe | 0x1800
                x87_r5 = x87_r3_14
                long double x87_r3_15 = fconvert.t(var_4c_1)
                long double x87_r2_13 = fconvert.t(var_48_4)
                
                if ((result:1.b & 0x41) == 0)
                    x87_r6_13 = x87_r2_13
                    *ecx_8 = fconvert.s(x87_r4_7)
                    long double x87_r1_1 = float.t(1)
                    long double x87_r2_16 = fconvert.t(fconvert.s(x87_r1_1 / x87_r1_1))
                    int32_t ebx_1 = sub_70c710(fconvert.t(fconvert.s(x87_r2_16 * x87_r3_15)))
                    
                    if (ebx_1 s< 0)
                        ebx_1 = 0
                    else if (ebx_1 s>= edx_1)
                        ebx_1 = edx_1 - 1
                    
                    int32_t eax_16
                    int32_t ecx_9
                    eax_16, ecx_9 = sub_70c710(fconvert.t(fconvert.s(x87_r2_16 * x87_r5)))
                    
                    if (eax_16 s< 0)
                        eax_16 = 0
                    else if (eax_16 s>= ecx_2)
                        eax_16 = ecx_2 - 1
                    
                    long double x87_r2_21 = x87_r5
                    x87_r5 = fconvert.t(var_2c)
                    x87_r2_13 = x87_r2_21
                    int32_t eax_18 = eax_16 * eax_6 + eax_2
                    ecx_9.b = *(eax_18 + (ebx_1 << 2))
                    result = eax_18 + (ebx_1 << 2)
                    i = arg4
                    *edi_9 = ecx_9.b
                    edi_9[1] = *(result + 1)
                    result.b = *(result + 2)
                    result_1 = result_2
                    edi_9[2] = result.b
                
                j += 1
                edi_9 = &edi_9[4]
                var_50_1 = fconvert.s(x87_r4_7 + x87_r7_20)
                var_4c_1 = fconvert.s(x87_r3_15 + x87_r6_13)
                var_48_4 = fconvert.s(x87_r2_13 + x87_r5)
                
                if (j s> result_1)
                    break
        
        var_44_1 += eax_10
        i += 1
        arg4 = i
        arg3 = fconvert.s(fconvert.t(var_40) + fconvert.t(arg3))
        var_60 = fconvert.s(fconvert.t(var_3c) + fconvert.t(var_60))
        var_5c = fconvert.s(fconvert.t(var_38) + fconvert.t(var_5c))
        var_58 = fconvert.s(fconvert.t(var_34) + fconvert.t(var_58))
        var_54 = fconvert.s(fconvert.t(var_30) + fconvert.t(var_54))
        
        if (i s>= arg5)
            break
        
        edi_7 = var_44_1

arg2[0x42] = fconvert.s(x87_r7_20)
arg2[0x43] = fconvert.s(x87_r6_13)
arg2[0x44] = fconvert.s(x87_r5)
arg2[0x45] = fconvert.s(fconvert.t(var_c))
arg2[0x46] = fconvert.s(fconvert.t(var_8))
arg2[0x47] = fconvert.s(fconvert.t(var_4))
arg2[0x48] = fconvert.s(fconvert.t(arg3))
arg2[0x49] = fconvert.s(fconvert.t(var_60))
arg2[0x4a] = fconvert.s(fconvert.t(var_5c))
arg2[0x4b] = fconvert.s(fconvert.t(var_58))
arg2[0x4c] = fconvert.s(fconvert.t(var_54))
arg2[0x4d] = fconvert.s(fconvert.t(var_40))
arg2[0x4e] = fconvert.s(fconvert.t(var_3c))
arg2[0x4f] = fconvert.s(fconvert.t(var_38))
arg2[0x50] = fconvert.s(fconvert.t(var_34))
arg2[0x51] = fconvert.s(fconvert.t(var_30))
return result
