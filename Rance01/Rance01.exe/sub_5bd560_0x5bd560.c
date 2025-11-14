// 函数: sub_5bd560
// 地址: 0x5bd560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[9]
int32_t i_2 = 0
int32_t result
int80_t st0
st0, result = sub_5bd3c0(arg2, ebx, arg1[0xa])
int32_t edx_2 = *arg1[5] - (ebx s>> 1) - arg1[7]

if (*arg1 s> 1)
    long double x87_r7_1 = fconvert.t(-9999f)
    
    do
        int32_t eax = arg1[5]
        void* ebx_2 = arg1[1]
        long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg2 i+ (edx_2 << 2)))))
        long double x87_r5_1 = fconvert.t(*(ebx_2 + 0x20))
        x87_r5_1 - x87_r6_2
        result.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            x87_r7_1 = x87_r6_2
            x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(ebx_2 + 0x20))))
        
        int32_t i = edx_2 + 1
        
        while (i s<= ((*(eax + (i_2 << 2) + 4) + *(eax + (i_2 << 2))) s>> 1) - arg1[7])
            edx_2 += 1
            long double x87_r6_4 = x87_r7_1
            x87_r7_1 = x87_r6_2
            long double temp1_1 = fconvert.t(*(arg2 i+ (edx_2 << 2)))
            x87_r6_4 - temp1_1
            i += 1
            result.w = (x87_r6_4 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, temp1_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == temp1_1 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x5}
            bool p_3
            
            if (not(p_2))
                long double x87_r5_2 = fconvert.t(*(arg2 i+ (edx_2 << 2)))
                x87_r5_2 - x87_r7_1
                result.w = (x87_r5_2 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_2, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                p_3 = unimplemented  {test ah, 0x5}
            
            bool p_4
            
            if (p_2 || p_3)
                x87_r6_4 - x87_r7_1
                result.w = (x87_r6_4 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                p_4 = unimplemented  {test ah, 0x44}
            
            if ((p_2 || p_3) && p_4)
                x87_r6_2 = x87_r7_1
                x87_r7_1 = x87_r6_4
            else
                x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg2 i+ (edx_2 << 2)))))
        
        int32_t i_1 = arg1[7] + edx_2
        
        if (i_2 s< *arg1)
            while (*(arg1[5] + (i_2 << 2)) s<= i_1)
                long double x87_r5_4 = fconvert.t(*(arg3 + (i_2 << 2)))
                x87_r5_4 - x87_r6_2
                result.w = (x87_r5_4 < x87_r6_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_4, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r5_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000
                bool p_5 = unimplemented  {test ah, 0x5}
                
                if (not(p_5))
                    *(arg3 + (i_2 << 2)) = fconvert.s(x87_r6_2)
                
                i_2 += 1
                
                if (i_2 s>= *arg1)
                    break
        
        x87_r7_1 = x87_r6_2
    while (i_2 + 1 s< *arg1)

if (i_2 s< *arg1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(*(arg2 i+ (arg1[0xa] << 2) - 4))))
    
    do
        long double x87_r6_6 = fconvert.t(*(arg3 + (i_2 << 2)))
        x87_r6_6 - x87_r7_3
        result.w = (x87_r6_6 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
        bool p_6 = unimplemented  {test ah, 0x5}
        
        if (not(p_6))
            *(arg3 + (i_2 << 2)) = fconvert.s(x87_r7_3)
        
        i_2 += 1
    while (i_2 s< *arg1)

return result
