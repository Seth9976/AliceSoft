// 函数: sub_51a720
// 地址: 0x51a720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebx = arg6

if (arg1[0x28] != 0)
    (*(*arg2 + 0x94))(0)
    (*(*arg2 + 0x98))(0)
    (*(*arg2 + 0xa0))(0)
    (*(*arg2 + 0x84))(0)
    (*(*arg2 + 0x8c))(0, 1)
    (*(*arg2 + 0x90))(0, 0)
    (*(*arg2 + 0x7c))(0, 0, 0)
    int32_t var_44_1 = (*(*arg2 + 0x80))(0, 1)
    float var_20_1 = fconvert.s(float.t(*(ebx i+ 0x40)))
    arg6 = fconvert.s(float.t(*(ebx i+ 0x44)))
    float var_28_1 = fconvert.s(sub_51a3f0(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*(ebx i+ 0x50)) * fconvert.t(0.5)))
        * fconvert.t(3.1415927410125732) / fconvert.t(180.0))))))
    float var_18_1 = fconvert.s(fconvert.t(*(ebx i+ 0x48)))
    float var_1c_1 = fconvert.s(fconvert.t(*(ebx i+ 0x4c)))
    long double x87_r5_1 = fconvert.t(var_20_1)
    float var_4_1 = fconvert.s(fconvert.t(var_28_1) * fconvert.t(arg6) / x87_r5_1)
    long double x87_r4_3 = float.t(1)
    long double x87_r7_14 = x87_r4_3
    long double x87_r6_4 = float.t(0)
    int32_t eax_10 = (*(arg7 i+ 0x1a8) - *(arg7 i+ 0x1a4)) s>> 2
    float var_2c_1
    
    if (eax_10 s> 3)
        var_2c_1 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0xc)))
    else
        var_2c_1 = fconvert.s(x87_r6_4)
    
    float var_20_2
    
    if (eax_10 s> 4)
        var_20_2 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0x10)))
    else
        var_20_2 = fconvert.s(x87_r6_4)
    
    if (eax_10 s> 5)
        arg6 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0x14)))
    else
        arg6 = fconvert.s(x87_r6_4)
    
    float var_24_1
    
    if (eax_10 s> 6)
        var_24_1 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0x18)))
    else
        var_24_1 = fconvert.s(x87_r6_4)
    
    float var_30_1
    
    if (eax_10 s> 7)
        var_30_1 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0x1c)))
    else
        var_30_1 = fconvert.s(x87_r6_4)
    
    if (eax_10 s> 8)
        arg7 = fconvert.s(fconvert.t(*(*(arg7 i+ 0x1a4) + 0x20)))
    else
        arg7 = fconvert.s(x87_r6_4)
    
    long double x87_r5_9 = fconvert.t(arg7) - fconvert.t(var_30_1)
    long double x87_r3_2 = float.t(0)
    x87_r3_2 - x87_r5_9
    eax_10.w = (x87_r3_2 < x87_r5_9 ? 1 : 0) << 8
        | (is_unordered.t(x87_r3_2, x87_r5_9) ? 1 : 0) << 0xa
        | (x87_r3_2 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        x87_r7_14 = x87_r5_9 / x87_r6_4
    
    if ((*(*arg1[0x28] + 0x10))().b != 0)
        int32_t* ecx_14 = arg1[9]
        
        if (ecx_14 != 0 && (*(*ecx_14 + 0x14))().b != 0 && (*(*arg1[0x28] + 0x20))(0, 
                fconvert.s(fconvert.t(var_2c_1)), fconvert.s(fconvert.t(fconvert.s(x87_r7_14))), 
                fconvert.s(fconvert.t(arg7)), fconvert.s(float.t(0))).b != 0)
            long double x87_r7_20 = float.t(0)
            
            if ((*(*arg1[0x28] + 0x20))(1, fconvert.s(fconvert.t(var_18_1)), 
                    fconvert.s(fconvert.t(var_1c_1)), fconvert.s(x87_r7_20), fconvert.s(x87_r7_20)).b != 0
                    && (*(*arg1[0x28] + 0x20))(2, fconvert.s(fconvert.t(var_28_1)), 
                    fconvert.s(fconvert.t(var_4_1)), 
                    fconvert.s(fconvert.t(fconvert.s(x87_r4_3 / x87_r4_3))), 
                    fconvert.s(fconvert.t(fconvert.s(x87_r5_1 / x87_r5_1)))).b != 0)
                float ebx_1 = 0f
                arg7 = 0f
                float var_10_1
                var_10_1.q = fconvert.d(fconvert.t(var_24_1) - fconvert.t(arg6))
                
                while (true)
                    void* ebp_1 = *arg1[0x28]
                    long double x87_r6_7 = fconvert.t(fconvert.s(float.t(arg7)))
                    float var_24_2 = fconvert.s(fconvert.t(var_10_1.q) * x87_r6_7 / fconvert.t(24.0)
                        + fconvert.t(arg6))
                    long double x87_r7_31 = x87_r6_7 / x87_r6_7 * fconvert.t(var_20_2)
                    arg7 = fconvert.s((x87_r7_31 + x87_r7_31) * fconvert.t(3.1415927410125732))
                    long double x87_r7_34 = float.t(0)
                    float var_4c_5 = fconvert.s(fconvert.t(fconvert.s(
                        sub_42a880(fconvert.s(fconvert.t(arg7))) * fconvert.t(var_24_2))))
                    long double x87_r7_41 =
                        sub_4ed890(fconvert.s(fconvert.t(arg7))) * fconvert.t(var_24_2)
                    arg1[0x28]
                    
                    if ((*(ebp_1 + 0x20))(ebx_1 i+ 3, 
                            fconvert.s(fconvert.t(fconvert.s(x87_r7_41))), var_4c_5, 
                            fconvert.s(x87_r7_34), fconvert.s(x87_r7_34)).b == 0)
                        break
                    
                    ebx_1 += 1
                    arg7 = ebx_1
                    
                    if (ebx_1 s>= 0x18)
                        if ((*(*arg3 + 0x24))(0).b != 0 && *arg1 != 0 && sub_51a210(arg1).b != 0
                                && sub_50a950(&arg1[9]).b != 0 && (*(*arg1[0x28] + 0x14))().b != 0)
                            bool eax_23
                            int80_t st0_4
                            st0_4, eax_23 = sub_4b4150(arg2, &arg1[0xf], arg1[9], arg4, arg5)
                            return 
                        
                        break

arg1.b = 0
