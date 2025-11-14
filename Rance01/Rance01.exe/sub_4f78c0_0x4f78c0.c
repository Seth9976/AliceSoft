// 函数: sub_4f78c0
// 地址: 0x4f78c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg1 - arg2) s/ 0x6c
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(ebx_2)
int32_t result = (eax_3 - edx_2) s>> 1

if (result s> 0)
    int32_t result_7 = result * 2 + 2
    void* esi_3 = result * 0x6c + arg2
    
    while (true)
        int32_t result_2 = result - 1
        int32_t result_5 = result_7 - 2
        void var_78
        int32_t ecx_1 = __builtin_memcpy(&var_78, esi_3 - 0x6c, 0x6c)
        int32_t result_1 = result_2
        int32_t result_6 = result_5
        int32_t result_4 = result_2
        bool cond:0_1 = result_5 != ebx_2
        
        if (result_5 s< ebx_2)
            do
                int32_t eax_6 = result_5 * 0x6c
                long double x87_r7_1 = fconvert.t(*(eax_6 + arg2 + 0x68))
                long double x87_r6_1 = fconvert.t(*(eax_6 + arg2 - 4))
                x87_r6_1 - x87_r7_1
                eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                
                if ((eax_6:1.b & 0x41) == 0)
                    result_5 -= 1
                
                ecx_1 = __builtin_memcpy(result_4 * 0x6c + arg2, result_5 * 0x6c + arg2, 0x6c)
                result_4 = result_5
                result_5 = result_5 * 2 + 2
                cond:0_1 = result_5 != ebx_2
            while (result_5 s< ebx_2)
            
            result_2 = result_1
        
        if (not(cond:0_1))
            ecx_1 = __builtin_memcpy(result_4 * 0x6c + arg2, ebx_2 * 0x6c + arg2 - 0x6c, 0x6c)
            result_4 = ebx_2 - 1
        
        void* var_94_1 = &var_78
        int32_t result_3 = result_2
        result = sub_4f7d50(result_4, arg2, ecx_1, arg2)
        
        if (result_1 s<= 0)
            break
        
        result = result_1
        result_7 = result_6
        esi_3 -= 0x6c

return result
