// 函数: sub_6499d0
// 地址: 0x6499d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg1 - arg2) s/ 0x28
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(ebx_2)
int32_t result = eax_3 - edx_2
int32_t ebp_1 = result s>> 1

if (ebp_1 s> 0)
    int32_t eax_4 = ebp_1 * 2 + 2
    int32_t esi_1 = arg2 + ebp_1 * 0x28
    
    while (true)
        int32_t eax_5 = eax_4 - 2
        ebp_1 -= 1
        int32_t var_2c[0xb]
        __builtin_memcpy(&var_2c, esi_1 - 0x28, 0x28)
        int32_t var_30_1 = eax_5
        int32_t ecx_2 = ebp_1
        int32_t edx_3
        
        if (eax_5 s>= ebx_2)
            edx_3 = arg2
        else
            do
                edx_3 = arg2
                int32_t esi_3 = eax_5 * 5
                
                if (*(edx_3 + (esi_3 << 3)) s< *(edx_3 + (esi_3 << 3) - 0x28))
                    eax_5 -= 1
                
                __builtin_memcpy(edx_3 + ecx_2 * 0x28, edx_3 + eax_5 * 0x28, 0x28)
                ecx_2 = eax_5
                eax_5 = eax_5 * 2 + 2
            while (eax_5 s< ebx_2)
        
        if (eax_5 == ebx_2)
            __builtin_memcpy(edx_3 + ecx_2 * 0x28, edx_3 + ebx_2 * 0x28 - 0x28, 0x28)
            ecx_2 = ebx_2 - 1
        
        int32_t var_48_1 = arg3
        int32_t* var_4c_1 = &var_2c
        int32_t var_54 = edx_3
        result = sub_64c680(&var_2c, edx_3, ecx_2, var_54, ebp_1, var_4c_1)
        
        if (ebp_1 s<= 0)
            break
        
        esi_1 -= 0x28
        eax_4 = var_30_1

return result
