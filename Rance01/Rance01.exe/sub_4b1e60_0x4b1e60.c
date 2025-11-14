// 函数: sub_4b1e60
// 地址: 0x4b1e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1

if (*ebp != ebp[1])
    void* ebx_1 = &ebp[0x10]
    int32_t* var_10
    int32_t* ecx_2
    int32_t edx_1
    ecx_2, edx_1 = sub_4b2480(ebx_1, &var_10, ebp[0x10], ebp[0x11])
    sub_4b2330((ebp[1] - *ebp) s>> 2, edx_1, ecx_2, ebx_1)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = muls.dp.d(0x38e38e39, *(ebx_1 + 4) - *ebx_1)
    int32_t edx_3 = edx_2 s>> 3
    int32_t i = 0
    
    if ((edx_3 u>> 0x1f) + edx_3 s> 0)
        int32_t var_28_1 = 0
        int32_t var_30_1 = 0
        int32_t edx_18
        
        do
            void* eax_7 = *(*ebp + (i << 2))
            
            if (eax_7 != 0)
                int32_t ebp_1 = *(eax_7 + 8)
                
                if (ebp_1 != 0)
                    float var_c
                    sub_4b0230(arg2, &var_c, i)
                    int32_t edx_6
                    
                    if (i s>= 0)
                        int32_t ecx_7 = arg2[1] - *arg2
                        int32_t eax_9
                        int32_t edx_4
                        edx_4:eax_9 = muls.dp.d(0x88888889, ecx_7)
                        edx_6 = (edx_4 + ecx_7) s>> 5
                    
                    long double x87_r7_1
                    
                    if (i s< 0 || i s>= (edx_6 u>> 0x1f) + edx_6)
                        x87_r7_1 = float.t(1)
                    else
                        x87_r7_1 = fconvert.t(*(var_30_1 + *arg2 + 0x30))
                    
                    float var_2c_1 = fconvert.s(x87_r7_1)
                    int32_t edx_9
                    
                    if (i s>= 0)
                        int32_t ecx_10 = arg2[1] - *arg2
                        int32_t eax_14
                        int32_t edx_7
                        edx_7:eax_14 = muls.dp.d(0x88888889, ecx_10)
                        edx_9 = (edx_7 + ecx_10) s>> 5
                    
                    long double x87_r7_2
                    
                    if (i s< 0 || i s>= (edx_9 u>> 0x1f) + edx_9)
                        x87_r7_2 = float.t(1)
                    else
                        x87_r7_2 = fconvert.t(*(var_30_1 + *arg2 + 0x34))
                    
                    int32_t var_20_1
                    
                    if (ebp_1 != 0)
                        var_20_1 = (*(**(eax_7 + 8) + 0x10))()
                    else
                        var_20_1 = ebp_1
                    
                    int32_t var_24_2
                    
                    if (*(eax_7 + 8) != 0)
                        var_24_2 = (*(**(eax_7 + 8) + 0x10))()
                    else
                        var_24_2 = 0
                    
                    int32_t var_20_2
                    
                    if (*(eax_7 + 8) != 0)
                        var_20_2 = (*(**(eax_7 + 8) + 0x14))()
                    else
                        var_20_2 = 0
                    
                    int32_t var_24_3
                    
                    if (*(eax_7 + 8) != 0)
                        var_24_3 = (*(**(eax_7 + 8) + 0x14))()
                    else
                        var_24_3 = 0
                    
                    long double x87_r6_1 = fconvert.t(fconvert.s(x87_r7_2))
                    float esi_6 = *ebx_1 + var_28_1
                    var_10 = fconvert.s(fconvert.t(arg1[0x18]) * fconvert.t(*arg4) * x87_r6_1)
                    float var_14_1 =
                        fconvert.s(x87_r6_1 * fconvert.t(arg4[1]) * fconvert.t(arg1[0x18]))
                    int32_t eax_28
                    int32_t ecx_18
                    eax_28, ecx_18 = (*(*ebp_1 + 0x14))(0xffffffff, 
                        fconvert.s(fconvert.t(fconvert.s(float.t(var_20_1) / float.t(var_24_2)))), 
                        fconvert.s(fconvert.t(fconvert.s(float.t(var_20_2) / float.t(var_24_3)))))
                    int32_t var_50_2 = ecx_18
                    float var_54_1 = fconvert.s(fconvert.t(fconvert.s(float.t((*(*ebp_1 + 0x10))(
                        fconvert.s(fconvert.t(fconvert.s(float.t(eax_28) * fconvert.t(var_2c_1))))))
                        * fconvert.t(var_2c_1))))
                    float var_8
                    float var_58_1 = fconvert.s(fconvert.t(fconvert.s(float.t(arg3[1])
                        + fconvert.t(var_8) + fconvert.t(var_14_1))))
                    var_10 = fconvert.s(float.t(*arg3) + fconvert.t(var_c) + fconvert.t(var_10))
                    
                    if (sub_519f30(arg5, esi_6, fconvert.s(fconvert.t(var_10)), var_58_1, var_54_1)
                            == 0)
                        return 0
                
                ebp = arg1
            
            var_30_1 += 0x3c
            var_28_1 += 0x24
            int32_t eax_33
            int32_t edx_17
            edx_17:eax_33 = muls.dp.d(0x38e38e39, *(ebx_1 + 4) - *ebx_1)
            edx_18 = edx_17 s>> 3
            i += 1
        while (i s< (edx_18 u>> 0x1f) + edx_18)

int32_t result
result.b = 1
return result
