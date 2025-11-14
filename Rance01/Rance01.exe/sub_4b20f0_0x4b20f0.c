// 函数: sub_4b20f0
// 地址: 0x4b20f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t i = 0
int32_t eax_1

if (((ebx[1] - *ebx) & 0xfffffffc) s> 0)
    int32_t var_8_1 = 0
    arg2 = nullptr
    
    do
        if (i s>= 0)
            eax_1 = ebx[0xc]
            
            if (i s< (ebx[0xd] - eax_1) s>> 2 && *(eax_1 + (i << 2)) != 0)
                int32_t esi_1 = ebx[0x14]
                
                if (i s< (ebx[0x15] - esi_1) s/ 0x1c && *(arg2 + esi_1 + 0x18) != 0)
                    (*(*arg1 + 0x94))(0)
                    (*(*arg1 + 0x98))(0)
                    (*(*arg1 + 0xa0))(0)
                    float var_4_1 = fconvert.s(fconvert.t(*(arg2 + ebx[0x14] + 0x14)))
                    long double x87_r7_2 = fconvert.t(var_4_1)
                    long double x87_r6_1 = float.t(1)
                    x87_r6_1 - x87_r7_2
                    int32_t eax_8
                    eax_8.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1 || *(*(*ebx + (i << 2)) + 0x10) != 0)
                        (*(*arg1 + 0x84))(1)
                        int32_t var_18_1
                        
                        if (*(*(*ebx + (i << 2)) + 0x10) == 0)
                            var_18_1 = 3
                        else
                            var_18_1 = 6
                        
                        int32_t ecx_17 = (*(*arg1 + 0x90))(0, var_18_1)
                        void* edx_13 = *arg1
                        int32_t var_18_2 = ecx_17
                        int32_t eax_14
                        int16_t x87control
                        int80_t st0_1
                        st0_1, eax_14, x87control =
                            sub_4b22c0(x87control, fconvert.s(fconvert.t(var_4_1)))
                        (*(edx_13 + 0xa8))(eax_14)
                    else
                        (*(*arg1 + 0x84))(0)
                        (*(*arg1 + 0x90))(0, 1)
                    
                    (*(*arg1 + 0x8c))(0, 1)
                    (*(*arg1 + 0x7c))(0, 1, 0)
                    
                    if ((*(**(ebx[0xc] + (i << 2)) + 0x30))(0) == 0)
                        return 
                    
                    int32_t* esi_3 = ebx[0x10] + var_8_1
                    
                    if (*esi_3 == 0)
                        return 
                    
                    if (sub_51a210(esi_3) == 0)
                        return 
                    
                    (*(*arg1 + 0xa0))(1)
                    (*(*arg1 + 0xa8))(0xffffffff)
        
        arg2 = &arg2[7]
        var_8_1 += 0x24
        i += 1
    while (i s< (ebx[1] - *ebx) s>> 2)

eax_1.b = 1
