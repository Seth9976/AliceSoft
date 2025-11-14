// 函数: sub_61acb0
// 地址: 0x61acb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** esi = data_797e0c
int32_t ebx_2 = (data_797e10 - esi) s/ 0x1c
int32_t result = 0

if (ebx_2 s> 0)
    void** edx_3 = arg1
    int32_t eax_1 = edx_3[4]
    int32_t ecx_2 = edx_3[5]
    int32_t var_8_1 = eax_1
    int32_t var_c_1 = eax_1
    int32_t** edi_1 = esi
    
    while (true)
        int32_t ebp_1 = edi_1[4]
        int32_t* var_10_1
        
        if (edi_1[5] u< 0x10)
            var_10_1 = edi_1
        else
            var_10_1 = *edi_1
        
        int32_t esi_1 = var_8_1
        
        if (eax_1 u< esi_1)
            esi_1 = eax_1
        
        int32_t eax_2 = esi_1
        
        if (esi_1 u>= ebp_1)
            eax_2 = ebp_1
        
        if (ecx_2 u>= 0x10)
            edx_3 = *edx_3
        
        if (sub_402320(eax_2, edx_3, var_10_1, eax_2) == 0 && esi_1 u>= ebp_1)
            int32_t eax_3
            eax_3.b = esi_1 != ebp_1
            
            if (eax_3 == 0)
                return result
        
        int32_t result_1 = result + 1
        edi_1 = &edi_1[7]
        result = result_1
        
        if (result_1 s>= ebx_2)
            break
        
        edx_3 = arg1
        eax_1 = var_c_1

return 0xffffffff
