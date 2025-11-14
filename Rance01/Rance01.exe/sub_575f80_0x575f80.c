// 函数: sub_575f80
// 地址: 0x575f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = *arg1
int32_t eax = *arg2

if (eax s<= ecx_1)
    if (eax s< ecx_1)
        eax.b = 0
        return eax
    
    eax = arg2[1]
    int32_t ecx = arg1[1]
    
    if (eax s<= ecx)
        if (eax s< ecx)
            eax.b = 0
            return eax
        
        int16_t eax_2
        
        if (sub_575eb0(&arg1[2], &arg2[2]).b == 0)
            if (sub_575e80(&arg1[2], &arg2[2]).b != 0)
                eax_2.b = 0
                return eax_2
            
            fconvert.t(arg1[3]) - fconvert.t(arg2[3])
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                long double x87_r7_2 = fconvert.t(arg2[3])
                long double x87_r6_2 = fconvert.t(arg1[3])
                x87_r6_2 - x87_r7_2
                
                if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                    eax_2.b = 0
                    return eax_2
                
                fconvert.t(arg1[4]) - fconvert.t(arg2[4])
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    long double x87_r7_4 = fconvert.t(arg2[4])
                    long double x87_r6_4 = fconvert.t(arg1[4])
                    x87_r6_4 - x87_r7_4
                    
                    if ((((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                        eax_2.b = 0
                        return eax_2
                    
                    if (sub_575eb0(&arg1[5], &arg2[5]).b == 0)
                        eax_2.b = 0
                        return eax_2
        
        eax_2.b = 1
        return eax_2

eax.b = 1
return eax
