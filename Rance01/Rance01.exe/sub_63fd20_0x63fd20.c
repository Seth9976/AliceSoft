// 函数: sub_63fd20
// 地址: 0x63fd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4 = (arg1 - arg2) s/ 0x8c
int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_4)
int32_t result = (eax_5 - edx_3) s>> 1

if (result s> 0)
    int32_t result_6 = result * 2 + 2
    void* esi_3 = result * 0x8c + arg2
    
    while (true)
        int32_t result_1 = result - 1
        void var_98
        int32_t ecx_1 = __builtin_memcpy(&var_98, esi_3 - 0x8c, 0x8c)
        int32_t result_4 = result_6 - 2
        int32_t result_3 = result_1
        int32_t result_5 = result_4
        bool cond:0_1 = result_4 != eax_4
        
        while (result_4 s< eax_4)
            int32_t* ecx_3 = result_4 * 0x8c
            
            if (*(ecx_3 + arg2) s< *(ecx_3 + arg2 - 0x8c))
                result_4 -= 1
            
            ecx_1 = __builtin_memcpy(result_3 * 0x8c + arg2, result_4 * 0x8c + arg2, 0x8c)
            result_3 = result_4
            result_4 = result_4 * 2 + 2
            cond:0_1 = result_4 != eax_4
        
        if (not(cond:0_1))
            ecx_1 = __builtin_memcpy(result_3 * 0x8c + arg2, &arg2[eax_4 * 0x23 - 0x23], 0x8c)
            result_3 = eax_4 - 1
        
        int32_t var_bc_1 = arg3
        void* var_c0_1 = &var_98
        int32_t result_2 = result_1
        result = sub_643510(result_3, result_1, ecx_1, arg2)
        
        if (result_1 s<= 0)
            break
        
        result_6 = result_5
        esi_3 -= 0x8c
        result = result_1

return result
