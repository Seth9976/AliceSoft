// 函数: sub_42c390
// 地址: 0x42c390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebx = arg6
float ebp = arg4
int32_t ecx
int32_t var_4c = ecx
float var_24
float var_20
long double x87_r1_3
long double x87_r0

if (*(ebp i+ 0xac) != 0)
    float var_38_1 = fconvert.s(float.t(*(ebp i+ 0x34)))
    sub_42c730(arg3, ebp, x87_r0, fconvert.s(fconvert.t(var_38_1)))
    bool cond:1_1 = *(ebp i+ 0xac) != 2
    long double x87_r0_5 = fconvert.t(fconvert.s(arg2))
    var_24 = fconvert.s(fconvert.t(*ebx) * x87_r0_5)
    long double x87_r0_7 = fconvert.t(ebx[1])
    float var_c = var_24
    float var_8_1 = fconvert.s(x87_r0_7 * x87_r0_5)
    float var_4_1 = fconvert.s(x87_r0_5 * fconvert.t(ebx[2]))
    var_24 = fconvert.s(fconvert.t(*(ebp i+ 0xb0)))
    float var_20_2 = fconvert.s(fconvert.t(*(ebp i+ 0xb4)))
    float var_1c_2 = fconvert.s(fconvert.t(*(ebp i+ 0xb8)))
    float var_18
    float i
    
    if (not(cond:1_1))
        float esi_1 = sub_4294e0(*(arg3 i+ 0x1c), ebp i+ 0xbc)
        
        if (esi_1 != 0)
            int32_t eax_2 = (*(*esi_1 + 0x10))()
            int32_t eax_4
            int32_t ecx_5
            eax_4, ecx_5 = (*(*esi_1 + 0x14))()
            arg6 = 0f
            
            do
                *arg1 += 1
                
                if (*arg1 s>= 0x209)
                    sub_595240(ecx_5, arg1)
                    *arg1 = 0
                
                int32_t ebx_1 = *arg1
                long double x87_r0_9 = float.t(arg1[ebx_1 + 1])
                
                if (arg1[ebx_1 + 1] s< 0)
                    x87_r0_9 = x87_r0_9 + fconvert.t(4294967296.0)
                
                int32_t eax_6
                int32_t ecx_6
                eax_6, ecx_6 = sub_70c710(
                    fconvert.t(fconvert.s(x87_r0_9 / fconvert.t(4294967295.0)))
                    * fconvert.t(fconvert.s(float.t(eax_2))))
                *arg1 = ebx_1 + 1
                
                if (ebx_1 + 1 s>= 0x209)
                    sub_595240(ecx_6, arg1)
                    *arg1 = 0
                
                int32_t ecx_7 = *arg1
                long double x87_r0_13 = float.t(arg1[ecx_7 + 1])
                
                if (arg1[ecx_7 + 1] s< 0)
                    x87_r0_13 = x87_r0_13 + fconvert.t(4294967296.0)
                
                int32_t eax_7 = sub_70c710(fconvert.t(fconvert.s(x87_r0_13 / x87_r0_13))
                    * fconvert.t(fconvert.s(float.t(eax_4))))
                i, ecx_5 = (*(*esi_1 + 8))(eax_6, eax_7)
                
                if (*(i i+ 3) != 0)
                    long double x87_r0_14 = fconvert.t(arg8)
                    var_18 = fconvert.s(float.t(eax_6) / x87_r0_14)
                    float var_14_1 = fconvert.s(float.t(eax_7) / x87_r0_14)
                    var_24 = fconvert.s(fconvert.t(var_18) + fconvert.t(var_24))
                    float var_20_3 = fconvert.s(fconvert.t(var_14_1) + fconvert.t(var_20_2))
                    float var_1c_3 = fconvert.s(fconvert.t(var_1c_2) + fconvert.t(0.0))
                    break
                
                i = arg6 i+ 1
                arg6 = i
            while (i s< 0x64)
            
            ebp = arg4
    
    long double x87_r1_38 = fconvert.t(arg7)
    long double x87_r7_6 = fconvert.t(var_38_1)
    arg4 = fconvert.s(x87_r1_38 / x87_r7_6)
    arg3 = fconvert.s(float.t(*(*(arg3 i+ 0x1c) + 8)))
    long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(*(ebp i+ 0x6c))))
    long double temp1_1 = fconvert.t(0.0)
    x87_r7_10 - temp1_1
    i.w = (x87_r7_10 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((i:1.b & 0x41) != 0)
        long double x87_r6_10 = float.t(0)
        x87_r6_10 - x87_r7_10
        i.w = (x87_r6_10 < x87_r7_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800
        
        if ((i:1.b & 0x41) == 0)
            long double x87_r6_13 = fconvert.t(fconvert.s(x87_r7_6 / fconvert.t(arg3)))
            long double x87_r7_19 = fconvert.t(fconvert.s(x87_r6_13 - x87_r1_38 / x87_r1_38))
            long double x87_r6_15 = fconvert.t(0.5)
            arg4 = fconvert.s(float.t(1) - fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_19 * x87_r7_19)) * x87_r7_10 * x87_r6_15)) / fconvert.t(
                fconvert.s(x87_r7_10 * fconvert.t(fconvert.s(x87_r6_13 * x87_r6_13)) * x87_r6_15)))
    else
        long double x87_r0_22 = fconvert.t(fconvert.s(x87_r1_38 / x87_r1_38))
        long double x87_r7_12 = fconvert.t(fconvert.s(x87_r7_6 / fconvert.t(arg3)))
        long double x87_r6_5 = fconvert.t(0.5)
        arg4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r0_22 * x87_r0_22))
            * x87_r7_10 * x87_r6_5)) / fconvert.t(fconvert.s(x87_r7_10
            * fconvert.t(fconvert.s(x87_r7_12 * x87_r7_12)) * x87_r6_5)))
    
    float* eax_11 = sub_5fff60(&var_18, arg5, &var_c, &var_24, 
        sub_70c710(fconvert.t(arg4) * fconvert.t(1024.0)))
    var_24 = fconvert.s(fconvert.t(*eax_11) - fconvert.t(*arg5))
    var_20 = fconvert.s(fconvert.t(eax_11[1]) - fconvert.t(arg5[1]))
    x87_r1_3 = fconvert.t(eax_11[2]) - fconvert.t(arg5[2])
else
    sub_42c730(arg3, ebp, x87_r0, fconvert.s(fconvert.t(arg7)))
    long double x87_r0_1 = fconvert.t(fconvert.s(arg2))
    var_24 = fconvert.s(fconvert.t(*ebx) * x87_r0_1)
    var_20 = fconvert.s(fconvert.t(ebx[1]) * x87_r0_1)
    x87_r1_3 = x87_r0_1 * fconvert.t(ebx[2])
float var_1c_4 = fconvert.s(x87_r1_3)
*arg9 = var_24
arg9[1] = var_20
arg9[2] = var_1c_4
