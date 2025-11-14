// 函数: sub_4c2610
// 地址: 0x4c2610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_8 = fconvert.s(fconvert.t(-3.40282347e+38f))
int32_t eax = sub_70c710(fconvert.t(arg2))
int32_t eax_1 = sub_70c710(fconvert.t(arg3))
int32_t ecx = *(arg1 + 0x24)

if (eax s>= ecx && eax s<= *(arg1 + 0x28))
    int32_t edx_1 = *(arg1 + 0x2c)
    
    if (eax_1 s>= edx_1 && eax_1 s<= *(arg1 + 0x30))
        int32_t eax_4 = (eax_1 - edx_1) * *(arg1 + 0x34) - ecx
        eax_1 = eax_4 + eax
        
        if (eax_4 + eax s>= 0)
            int32_t ecx_1 = *(arg1 + 0x14)
            
            if (eax_1 s< (*(arg1 + 0x18) - ecx_1) s>> 4)
                int32_t eax_5 = eax_1 << 4
                int32_t* i = *(eax_5 + ecx_1)
                
                for (int32_t edi_1 = *(eax_5 + ecx_1 + 4); i != edi_1; i = &i[1])
                    void* esi_1 = *i
                    long double st0_1
                    st0_1, eax_1 = sub_4c2bb0(esi_1, fconvert.s(fconvert.t(arg2)), 
                        fconvert.s(fconvert.t(arg3)))
                    
                    if (eax_1.b != 0)
                        long double x87_r7_11 = fconvert.t(fconvert.s((
                            fneg(fconvert.t(*(esi_1 + 0x20))) * fconvert.t(arg2)
                            - fconvert.t(*(esi_1 + 0x28)) * fconvert.t(arg3)
                            - fconvert.t(*(esi_1 + 0x2c))) / fconvert.t(*(esi_1 + 0x24))))
                        long double x87_r6_3 = fconvert.t(var_8)
                        x87_r6_3 - x87_r7_11
                        eax_1.w = (x87_r6_3 < x87_r7_11 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_11) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            var_8 = fconvert.s(x87_r7_11)
                
                long double x87_r7_12 = fconvert.t(var_8)
                long double x87_r5_1 = fconvert.t(-3.4028234663852886e+38)
                x87_r5_1 - x87_r7_12
                eax_1.w = (x87_r5_1 < x87_r7_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r7_12 ? 1 : 0) << 0xe | 0x3800
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    *arg4 = fconvert.s(x87_r7_12)
                    float* eax_7
                    eax_7.b = 1
                    return 

eax_1.b = 0
