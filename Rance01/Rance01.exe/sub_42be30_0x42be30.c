// 函数: sub_42be30
// 地址: 0x42be30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
float ebp = arg2
int32_t eax = *(ebp i+ 0x50)

if (eax == 0)
    *ebx += 1
    
    if (*ebx s>= 0x209)
        arg1 = sub_595240(arg1, ebx)
        *ebx = 0
    
    int32_t eax_1 = *ebx
    int32_t* ebp_1 = ebx[eax_1 + 1]
    *ebx = eax_1 + 1
    
    if (eax_1 + 1 s>= 0x209)
        arg1 = sub_595240(arg1, ebx)
        *ebx = 0
    
    int32_t eax_3 = *ebx
    int32_t* edi_1 = ebx[eax_3 + 1]
    *ebx = eax_3 + 1
    
    if (eax_3 + 1 s>= 0x209)
        sub_595240(arg1, ebx)
        *ebx = 0
    
    int32_t eax_5 = *ebx
    long double x87_r7_1 = float.t(ebx[eax_5 + 1])
    
    if (ebx[eax_5 + 1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
    
    long double x87_r6_1 = fconvert.t(4294967295.0)
    float* esi_1 = arg4
    long double x87_r5 = fconvert.t(0.5)
    *esi_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_1 / x87_r6_1)) - x87_r5)
    long double x87_r5_2 = float.t(edi_1)
    
    if (edi_1 s< 0)
        x87_r5_2 = x87_r5_2 + fconvert.t(4294967296.0)
    
    esi_1[1] = fconvert.s(fconvert.t(fconvert.s(x87_r5_2 / x87_r6_1)) - x87_r5)
    long double x87_r5_6 = float.t(ebp_1)
    
    if (ebp_1 s< 0)
        x87_r5_6 = x87_r5_6 + fconvert.t(4294967296.0)
    
    esi_1[2] = fconvert.s(fconvert.t(fconvert.s(x87_r5_6 / x87_r5_6)) - x87_r5)
    return sub_660160(esi_1)

if (eax == 1)
    arg2 = fconvert.s(fconvert.t(*(ebp i+ 0x5c)))
    arg3 = fconvert.s(fconvert.t(*(ebp i+ 0x58)))
    *arg4 = fconvert.s(fconvert.t(*(ebp i+ 0x54)))
    arg4[1] = fconvert.s(fconvert.t(arg3))
    arg4[2] = fconvert.s(fconvert.t(arg2))
else if (eax == 2)
    float* eax_8 = arg4
    *eax_8 = *arg1
    eax_8[1] = arg1[1]
    arg1 = arg1[2]
    eax_8[2] = arg1
else
    float var_68
    
    if (eax == 3)
        long double x87_r6_7 = fconvert.t(-1.0)
        var_68 = fconvert.s(fconvert.t(*arg1) * x87_r6_7)
        long double x87_r7_15 = x87_r6_7 * fconvert.t(arg1[2])
        arg1 = fconvert.s(fconvert.t(arg1[1]) * x87_r6_7)
        *arg4 = var_68
        arg4[1] = arg1
        arg4[2] = fconvert.s(x87_r7_15)
    else if (eax == 4)
        var_68 = fconvert.s(fconvert.t(*(ebp i+ 0x54)))
        float var_64_2 = fconvert.s(fconvert.t(*(ebp i+ 0x58)))
        float var_60_2 = fconvert.s(fconvert.t(*(ebp i+ 0x5c)))
        long double x87_r6_11 = fconvert.t(10.0)
        float var_5c = fconvert.s(fconvert.t(*(ebp i+ 0x54)) + x87_r6_11)
        float var_58_1 = fconvert.s(fconvert.t(*(ebp i+ 0x58)) + x87_r6_11)
        float var_54_1 = fconvert.s(x87_r6_11 + fconvert.t(*(ebp i+ 0x5c)))
        float var_4c
        sub_408950(&var_4c, &var_68, &var_5c, &var_4c)
        uint32_t temp1_1 = modu.dp.d(0:(sub_5953e0(ebx)), 0x168)
        long double x87_r7_23 = float.t(temp1_1)
        
        if (temp1_1 s< 0)
            x87_r7_23 = x87_r7_23 + fconvert.t(4.2949673e+09f)
        
        int32_t var_7c_2 = 0x168
        float* eax_13
        int32_t edx_11
        eax_13, edx_11 = sub_660960(&var_5c, &var_68, 
            fconvert.s(fconvert.t(fconvert.s(x87_r7_23 * fconvert.t(3.1415927410125732)
                / fconvert.t(180.0)))))
        float var_40[0x10]
        float* eax_14 = &var_40
        sub_660a50(eax_14, edx_11, eax_13)
        float* eax_15 = sub_51e1c0(eax_13, &var_5c, eax_14, &var_4c)
        arg1 = arg4
        *arg1 = *eax_15
        arg1[1] = eax_15[1]
        arg1[2] = eax_15[2]

float* var_7c_5 = arg1
sub_42c0f0(arg4, ebx, fconvert.s(fconvert.t(*(ebp i+ 0x60))))
return sub_660160(arg4)
