// 函数: sub_57a260
// 地址: 0x57a260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *arg2
int32_t esi = 0
int32_t* eax

if (ecx != 0)
    eax = (*(*ecx + 0x14))()
else
    eax = nullptr

int32_t* var_24 = eax

if (eax != 0)
    long double x87_r7_1 = fconvert.t(arg4)
    arg4 = sub_70c710(fconvert.t(255.0) * x87_r7_1)
    int32_t var_18_1
    
    if (*(arg1 i+ 0x10) == 0)
        var_18_1 = 0
    else
        var_18_1 = sub_70c710(float.t(*(arg1 i+ 8)) * x87_r7_1)
    
    float var_10_1 = fconvert.s(fconvert.t(*(arg1 i+ 0xc)) * float.t(*(arg1 i+ 4)))
    long double x87_r6_7 = fconvert.t(0.5f)
    x87_r6_7 - x87_r7_1
    int32_t eax_2
    eax_2.w = (x87_r6_7 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_7, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_7 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    long double x87_r6_9
    
    if ((eax_2:1.b & 0x41) != 0)
        long double x87_r6_11 = float.t(1) - x87_r7_1
        x87_r6_9 = x87_r6_11 + x87_r6_11
    else
        x87_r6_9 = x87_r7_1 + x87_r7_1
    
    int32_t ecx_1 = *(arg1 i+ 8)
    float var_c_1 = fconvert.s(x87_r6_9)
    
    if (ecx_1 s> 0)
        long double x87_r7_2 = x87_r7_1 * fconvert.t(1440.0)
        int32_t var_1c_1 = 0
        double var_8_1 = fconvert.d(x87_r7_2)
        int32_t var_20_1 = 0
        long double x87_r6_12 = fconvert.t(3.1415927410125732)
        
        while (true)
            int32_t var_34_1 = ecx_1
            float ebp_1 = mods.dp.d(sx.q(esi + var_18_1), ecx_1)
            int32_t var_34_5
            int32_t eax_13
            float ecx_6
            
            if (arg3 == 0)
                long double x87_r6_15 = x87_r6_12
                    * (float.t(divs.dp.d(sx.q(var_1c_1), ecx_1)) + x87_r7_2 + fconvert.t(90.0))
                int32_t eax_17 = sub_70c710(
                    sub_4ed890(fconvert.s(fconvert.t(fconvert.s(x87_r6_15 / x87_r6_15))))
                    * fconvert.t(var_10_1) * fconvert.t(var_c_1))
                int32_t eax_18 = *(arg1 i+ 4)
                sub_57a090(arg4, &var_24, arg1, eax_17 - eax_18, esi, ebp_1, eax_18)
                sub_57a090(arg4, &var_24, arg1, eax_17, esi, ebp_1, *(arg1 i+ 4))
                int32_t eax_19 = *(arg1 i+ 4)
                ecx_6 = arg4
                var_34_5 = eax_19
                eax_13 = eax_19 + eax_17
            else
                long double x87_r6_14 =
                    x87_r6_12 * (x87_r7_2 + float.t(divs.dp.d(sx.q(var_20_1), ecx_1)))
                int32_t eax_9 = sub_70c710(
                    sub_4ed890(fconvert.s(fconvert.t(fconvert.s(x87_r6_14 / x87_r6_14))))
                    * fconvert.t(var_10_1) * fconvert.t(var_c_1))
                int32_t ecx_2 = *(arg1 i+ 4)
                int32_t* edx_7 = &var_24
                sub_57a090(0xff i- arg4, edx_7, arg1, eax_9 - ecx_2, esi, ebp_1, ecx_2)
                sub_57a090(0xff i- arg4, edx_7, arg1, eax_9, esi, ebp_1, *(arg1 i+ 4))
                int32_t eax_12 = *(arg1 i+ 4)
                var_34_5 = eax_12
                eax_13 = eax_12 + eax_9
                ecx_6 = 0xff i- arg4
            
            sub_57a090(ecx_6, &var_24, arg1, eax_13, esi, ebp_1, var_34_5)
            ecx_1 = *(arg1 i+ 8)
            var_20_1 += 0x2d0
            var_1c_1 += 0x168
            esi += 1
            
            if (esi s>= ecx_1)
                break
            
            x87_r7_2 = fconvert.t(var_8_1)
            x87_r6_12 = fconvert.t(3.1415927410125732)
    
    int32_t* ecx_11 = *arg2
    
    if (ecx_11 != 0 && (*(*ecx_11 + 0x18))().b != 0)
        eax.b = 1
        return 

eax.b = 0
