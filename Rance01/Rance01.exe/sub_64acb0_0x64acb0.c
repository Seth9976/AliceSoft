// 函数: sub_64acb0
// 地址: 0x64acb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t ebp_2 = (arg1 - ebx) s/ 0x28
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(ebp_2)
int32_t result = eax_3 - edx_2
int32_t edx_4 = result s>> 1

if (edx_4 s> 0)
    int32_t eax_4 = edx_4 * 2 + 2
    int32_t esi_1 = ebx + edx_4 * 0x28
    
    while (true)
        int32_t edx_5 = edx_4 - 1
        int32_t eax_5 = eax_4 - 2
        int32_t var_2c[0xb]
        __builtin_memcpy(&var_2c, esi_1 - 0x28, 0x28)
        arg2 = edx_5
        int32_t var_30_1 = eax_5
        int32_t ecx_2 = edx_5
        bool cond:0_1 = eax_5 != ebp_2
        
        if (eax_5 s< ebp_2)
            do
                int32_t edx_6 = eax_5 * 5
                int32_t edi_1 = *(ebx + (edx_6 << 3) - 0x10)
                int32_t* esi_3 = ebx + (edx_6 << 3)
                int32_t edx_7 = esi_3[6]
                
                if (edx_7 s< edi_1)
                    eax_5 -= 1
                else if (edx_7 s<= edi_1 && *esi_3 s< esi_3[-0xa])
                    eax_5 -= 1
                
                __builtin_memcpy(ebx + ecx_2 * 0x28, ebx + eax_5 * 0x28, 0x28)
                ecx_2 = eax_5
                eax_5 = eax_5 * 2 + 2
                cond:0_1 = eax_5 != ebp_2
            while (eax_5 s< ebp_2)
            
            edx_5 = arg2
        
        if (not(cond:0_1))
            __builtin_memcpy(ebx + ecx_2 * 0x28, ebx + ebp_2 * 0x28 - 0x28, 0x28)
            ecx_2 = ebp_2 - 1
        
        int32_t var_48_1 = arg3
        int32_t* var_4c_1 = &var_2c
        int32_t var_54 = ebx
        result = sub_64c910(&var_2c, edx_5, ecx_2, var_54, edx_5, var_4c_1)
        
        if (arg2 s<= 0)
            break
        
        edx_4 = arg2
        esi_1 -= 0x28
        eax_4 = var_30_1

return result
