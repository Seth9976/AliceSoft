// 函数: sub_641610
// 地址: 0x641610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4 = (arg1 - arg2) s/ 0x8c
int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_4)
int32_t result = (eax_5 - edx_3) s>> 1

if (result s> 0)
    int32_t result_7 = result * 2 + 2
    void* esi_3 = result * 0x8c + arg2
    
    while (true)
        void var_98
        __builtin_memcpy(&var_98, esi_3 - 0x8c, 0x8c)
        int32_t ecx_4 = eax_4
        int32_t result_2 = result - 1
        int32_t result_5 = result_7 - 2
        int32_t result_1 = result_2
        int32_t result_6 = result_5
        int32_t result_4 = result_2
        bool cond:0_1 = result_5 != ecx_4
        
        if (result_5 s< ecx_4)
            do
                void* ecx_2 = result_5 * 0x8c
                int32_t eax_7 = *(ecx_2 + arg2 + 0x1c)
                int32_t esi_5 = *(ecx_2 + arg2 - 0x70)
                void* ecx_3 = ecx_2 + arg2
                
                if (eax_7 s< esi_5)
                    result_5 -= 1
                else if (eax_7 s<= esi_5 && *ecx_3 s< *(ecx_3 - 0x8c))
                    result_5 -= 1
                
                __builtin_memcpy(result_4 * 0x8c + arg2, result_5 * 0x8c + arg2, 0x8c)
                result_4 = result_5
                result_5 = result_5 * 2 + 2
            while (result_5 s< eax_4)
            
            ecx_4 = eax_4
            result_2 = result_1
            cond:0_1 = result_5 != ecx_4
        
        if (not(cond:0_1))
            __builtin_memcpy(result_4 * 0x8c + arg2, &arg2[ecx_4 * 0x23 - 0x23], 0x8c)
            result_4 = eax_4 - 1
        
        int32_t var_bc_1 = arg3
        void* var_c0_1 = &var_98
        int32_t result_3 = result_2
        result = sub_643880(result_4, result_5, arg3, arg2)
        
        if (result_1 s<= 0)
            break
        
        result = result_1
        result_7 = result_6
        esi_3 -= 0x8c

return result
