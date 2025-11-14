// 函数: sub_4ac790
// 地址: 0x4ac790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_8 = fconvert.s(fconvert.t(-3.40282347e+38f))
int32_t eax = sub_70c710(fconvert.t(arg2))
int32_t eax_1 = sub_70c710(fconvert.t(arg3))
int32_t edx = *(arg1 + 0x24)

if (eax s>= edx && eax s<= *(arg1 + 0x28))
    int32_t ecx_1 = *(arg1 + 0x2c)
    
    if (eax_1 s>= ecx_1 && eax_1 s<= *(arg1 + 0x30))
        int32_t eax_4 = (eax_1 - ecx_1) * *(arg1 + 0x34) - edx
        int32_t eax_5 = eax_4 + eax
        
        if (eax_4 + eax s>= 0)
            int32_t ecx_2 = *(arg1 + 0x14)
            
            if (eax_5 s< (*(arg1 + 0x18) - ecx_2) s>> 4)
                int32_t eax_6 = eax_5 * 2
                void** i = *(ecx_2 + (eax_6 << 3))
                
                for (int32_t edi_1 = *(ecx_2 + (eax_6 << 3) + 4); i != edi_1; i = &i[1])
                    void* esi_1 = *i
                    int80_t st0_1
                    st0_1, eax_6 = sub_4ad410(esi_1, fconvert.s(fconvert.t(arg2)), 
                        fconvert.s(fconvert.t(arg3)))
                    
                    if (eax_6.b != 0)
                        long double x87_r7_11 = fconvert.t(fconvert.s((
                            fneg(fconvert.t(*(esi_1 + 0x38))) * fconvert.t(arg2)
                            - fconvert.t(*(esi_1 + 0x40)) * fconvert.t(arg3)
                            - fconvert.t(*(esi_1 + 0x44))) / fconvert.t(*(esi_1 + 0x3c))))
                        long double x87_r6_3 = fconvert.t(var_8)
                        x87_r6_3 - x87_r7_11
                        eax_6.w = (x87_r6_3 < x87_r7_11 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_11) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            var_8 = fconvert.s(x87_r7_11)
                
                long double x87_r7_12 = fconvert.t(var_8)
                long double x87_r6_4 = fconvert.t(-3.4028234663852886e+38)
                x87_r6_4 - x87_r7_12
                eax_6.w = (x87_r6_4 < x87_r7_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_12 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    var_8 = fconvert.s(float.t(0))
                
                return fconvert.t(var_8)

return float.t(0)
