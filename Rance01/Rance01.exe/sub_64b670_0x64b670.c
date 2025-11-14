// 函数: sub_64b670
// 地址: 0x64b670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2
int32_t ebx_2 = (arg1 - ebp) s/ 0x28
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(ebx_2)
int32_t result = eax_3 - edx_2
int32_t edx_4 = result s>> 1

if (edx_4 s> 0)
    int32_t eax_4 = edx_4 * 2 + 2
    int32_t esi_1 = ebp + edx_4 * 0x28
    
    while (true)
        int32_t edx_5 = edx_4 - 1
        int32_t eax_5 = eax_4 - 2
        void var_2c
        __builtin_memcpy(&var_2c, esi_1 - 0x28, 0x28)
        arg2 = edx_5
        int32_t var_34_1 = eax_5
        int32_t edi_1 = edx_5
        bool cond:0_1 = eax_5 != ebx_2
        
        if (eax_5 s< ebx_2)
            do
                int32_t edx_6 = eax_5 * 5
                int32_t edx_7 = ebp + (edx_6 << 3)
                int32_t ecx_2
                ecx_2.b = *(edx_7 + 0x25)
                edx_7.b = *(edx_7 - 3)
                
                if (ecx_2.b != 0)
                    if (edx_7.b != 0 && *(ebp + (edx_6 << 3)) s< *(ebp + (edx_6 << 3) - 0x28))
                        eax_5 -= 1
                else if (edx_7.b != 0 || *(ebp + (edx_6 << 3)) s< *(ebp + (edx_6 << 3) - 0x28))
                    eax_5 -= 1
                
                __builtin_memcpy(ebp + edi_1 * 0x28, ebp + eax_5 * 0x28, 0x28)
                edi_1 = eax_5
                eax_5 = eax_5 * 2 + 2
                cond:0_1 = eax_5 != ebx_2
            while (eax_5 s< ebx_2)
            
            edx_5 = arg2
        
        if (not(cond:0_1))
            __builtin_memcpy(ebp + edi_1 * 0x28, ebp + ebx_2 * 0x28 - 0x28, 0x28)
            edi_1 = ebx_2 - 1
        
        int32_t var_50_1 = arg3
        int32_t* var_54 = &var_2c
        result = sub_64ca60(arg3, edx_5, edi_1, ebp, edx_5, var_54)
        
        if (arg2 s<= 0)
            break
        
        edx_4 = arg2
        eax_4 = var_34_1
        esi_1 -= 0x28

return result
