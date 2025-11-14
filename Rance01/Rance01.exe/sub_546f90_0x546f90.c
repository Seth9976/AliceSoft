// 函数: sub_546f90
// 地址: 0x546f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = arg2[1]
int32_t edi

if (eax != 0)
    edi = *arg2
else
    edi = 0

if (arg1 s< 0)
    arg1 = 0

if (arg6 == 0)
    uint32_t edx
    
    if (arg2[0x10].b != 0)
        edx = eax u>> 2
    else
        edx = 0
    
    if (arg1 s< arg3)
        long double x87_r7_1 = fconvert.t(arg5)
        
        while (arg1 s< edx)
            long double x87_r6_1 = fconvert.t(*(edi + (arg1 << 2)))
            x87_r7_1 - x87_r6_1
            eax.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                **(arg4 + 0x2b0) = arg1
                *(arg4 + 0x2b0) += 4
                int32_t* eax_1
                eax_1.b = 1
                return 
            
            arg1 += 1
            
            if (arg1 s>= arg3)
                break
    
    **(arg4 + 0x2b0) = 0xffffffff
    *(arg4 + 0x2b0) += 4

eax.b = 1
