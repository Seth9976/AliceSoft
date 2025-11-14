// 函数: sub_4efdc0
// 地址: 0x4efdc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
void* ebx = *(ebp + 4)
void* var_8 = ebx

if (ebx == *(ebp + 8))
    return 

long double x87_r7_1 = fconvert.t(3.40282347e+38f)
long double x87_r6_1 = fconvert.t(-3.40282347e+38f)
long double x87_r5_1 = float.t(0)

while (true)
    float* ecx_1 = *(ebx + 4)
    long double x87_r7_2 = x87_r5_1
    int32_t edx_1 = *(ebx + 8)
    void* var_4 = ebx
    long double x87_r6_2 = x87_r7_1
    long double x87_r5_6 = fconvert.t(fconvert.s(x87_r7_1))
    long double x87_r4_1 = fconvert.t(fconvert.s(x87_r6_1))
    long double x87_r3_1 = fconvert.t(fconvert.s(x87_r7_1))
    long double x87_r2_1 = fconvert.t(fconvert.s(x87_r6_1))
    int32_t* eax
    int32_t eax_2
    long double x87_r5_7
    
    if (ecx_1 == edx_1)
        x87_r5_7 = x87_r2_1
        eax_2 = sub_70c710(x87_r5_6)
    else
        do
            long double x87_r1_1 = fconvert.t(*ecx_1)
            x87_r1_1 - x87_r5_6
            eax.w = (x87_r1_1 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_1, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r1_1 == x87_r5_6 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                x87_r6_2 = x87_r2_1
                x87_r2_1 = x87_r5_6
                x87_r5_6 = fconvert.t(fconvert.s(fconvert.t(*ecx_1)))
            
            long double x87_r1_2 = fconvert.t(*ecx_1)
            x87_r1_2 - x87_r4_1
            eax.w = (x87_r1_2 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_2, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r1_2 == x87_r4_1 ? 1 : 0) << 0xe | 0x1000
            
            if ((eax:1.b & 0x41) == 0)
                x87_r5_6 = x87_r2_1
                x87_r2_1 = x87_r4_1
                x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(*ecx_1)))
            
            long double x87_r1_3 = fconvert.t(ecx_1[2])
            x87_r1_3 - x87_r3_1
            eax.w = (x87_r1_3 < x87_r3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_3, x87_r3_1) ? 1 : 0) << 0xa
                | (x87_r1_3 == x87_r3_1 ? 1 : 0) << 0xe | 0x1000
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                x87_r4_1 = x87_r2_1
                x87_r2_1 = x87_r3_1
                x87_r3_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[2])))
            
            long double x87_r1_4 = fconvert.t(ecx_1[2])
            x87_r1_4 - x87_r2_1
            eax.w = (x87_r1_4 < x87_r2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_4, x87_r2_1) ? 1 : 0) << 0xa
                | (x87_r1_4 == x87_r2_1 ? 1 : 0) << 0xe | 0x1000
            
            if ((eax:1.b & 0x41) == 0)
                x87_r3_1 = x87_r2_1
                x87_r2_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[2])))
            
            ecx_1 = &ecx_1[3]
        while (ecx_1 != edx_1)
        
        x87_r5_7 = x87_r2_1
        x87_r5_6 - x87_r7_2
        eax.w = (x87_r5_6 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_6, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r5_6 == x87_r7_2 ? 1 : 0) << 0xe | 0x1000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            eax_2 = sub_70c710(x87_r5_6)
        else
            eax_2 = sub_70c710(x87_r5_6) - 1
    
    int32_t var_18_3 = eax_2
    x87_r4_1 - x87_r7_2
    eax_2.w = (x87_r4_1 < x87_r7_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x1800
    bool p_4 = unimplemented  {test ah, 0x5}
    int32_t eax_3
    int32_t edi_1
    
    if (p_4)
        eax_3 = sub_70c710(x87_r4_1)
        int32_t var_c_3 = eax_3
        edi_1 = eax_3
    else
        edi_1 = sub_70c710(x87_r4_1) - 1
    
    x87_r3_1 - x87_r7_2
    eax_3.w = (x87_r3_1 < x87_r7_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r3_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r3_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x2000
    bool p_5 = unimplemented  {test ah, 0x5}
    int32_t esi_1
    
    if (p_5)
        esi_1 = sub_70c710(x87_r3_1)
    else
        esi_1 = sub_70c710(x87_r3_1) - 1
    
    x87_r5_7 - x87_r7_2
    int32_t eax_4
    eax_4.w = (x87_r5_7 < x87_r7_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_7, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r5_7 == x87_r7_2 ? 1 : 0) << 0xe | 0x2800
    bool p_6 = unimplemented  {test ah, 0x5}
    int32_t eax_6
    
    if (p_6)
        eax_6 = sub_70c710(x87_r5_7)
    else
        eax_6 = sub_70c710(x87_r5_7) - 1
    
    int32_t var_10_3 = eax_6
    int32_t i = esi_1 - 1
    int32_t i_1 = i
    
    if (i s<= eax_6 + 1)
        x87_r7_2 = x87_r6_2
        
        do
            if (i s>= *(ebp + 0x2c) && i s<= *(ebp + 0x30))
                int32_t j = var_18_3 - 1
                
                if (j s<= edi_1 + 1)
                    do
                        int32_t ecx_2 = *(ebp + 0x24)
                        
                        if (j s>= ecx_2 && j s<= *(ebp + 0x28))
                            void* eax_10 = (i - *(ebp + 0x2c)) * *(ebp + 0x34) - ecx_2
                            eax = eax_10 + j
                            
                            if (eax_10 + j s>= 0)
                                int32_t ecx_3 = *(ebp + 0x14)
                                
                                if (eax s< (*(ebp + 0x18) - ecx_3) s>> 4)
                                    int32_t* esi_2 = ecx_3 + eax * 0x10
                                    int32_t eax_12 = esi_2[1]
                                    int32_t edx_5
                                    
                                    if (&var_4 u< eax_12)
                                        edx_5 = *esi_2
                                    
                                    if (&var_4 u>= eax_12 || edx_5 u> &var_4)
                                        int32_t ecx_9 = esi_2[2]
                                        
                                        if (eax_12 == ecx_9)
                                            int32_t edx_9 = *esi_2
                                            int32_t eax_17 = (eax_12 - edx_9) s>> 2
                                            
                                            if (eax_17 u> 0x3ffffffe)
                                                sub_6b47bf("vector<T> too long")
                                                noreturn
                                            
                                            int32_t ecx_11 = (ecx_9 - edx_9) s>> 2
                                            
                                            if (eax_17 + 1 u> ecx_11)
                                                uint32_t edx_11 = ecx_11 u>> 1
                                                int32_t ecx_12
                                                
                                                if (0x3fffffff - edx_11 u>= ecx_11)
                                                    ecx_12 = ecx_11 + edx_11
                                                else
                                                    ecx_12 = 0
                                                
                                                if (ecx_12 u< eax_17 + 1)
                                                    ecx_12 = eax_17 + 1
                                                
                                                sub_6b0560(esi_2, ecx_12)
                                                i = i_1
                                        
                                        eax = esi_2[1]
                                        
                                        if (eax != 0)
                                            *eax = var_8
                                    else
                                        int32_t ecx_4 = esi_2[2]
                                        
                                        if (eax_12 == ecx_4)
                                            int32_t eax_14 = (eax_12 - edx_5) s>> 2
                                            
                                            if (eax_14 u> 0x3ffffffe)
                                                sub_6b47bf("vector<T> too long")
                                                noreturn
                                            
                                            int32_t ecx_6 = (ecx_4 - edx_5) s>> 2
                                            
                                            if (eax_14 + 1 u> ecx_6)
                                                uint32_t edx_7 = ecx_6 u>> 1
                                                int32_t ecx_7
                                                
                                                if (0x3fffffff - edx_7 u>= ecx_6)
                                                    ecx_7 = ecx_6 + edx_7
                                                else
                                                    ecx_7 = 0
                                                
                                                if (ecx_7 u< eax_14 + 1)
                                                    ecx_7 = eax_14 + 1
                                                
                                                sub_6b0560(esi_2, ecx_7)
                                                ebp = arg1
                                        
                                        eax = esi_2[1]
                                        
                                        if (eax != 0)
                                            *eax = *(*esi_2 + ((&var_4 - edx_5) s>> 2 << 2))
                                        
                                        i = i_1
                                    
                                    esi_2[1] += 4
                        
                        j += 1
                    while (j s<= edi_1 + 1)
                    
                    x87_r7_2 = float.t(0)
                
                ebx = var_8
            
            i += 1
            i_1 = i
        while (i s<= eax_6 + 1)
        
        x87_r6_2 = fconvert.t(3.40282347e+38f)
    
    ebx += 0x68
    var_8 = ebx
    
    if (ebx == *(ebp + 8))
        break
    
    x87_r6_1 = fconvert.t(-3.40282347e+38f)
    x87_r5_1 = x87_r7_2
    x87_r7_1 = x87_r6_2
