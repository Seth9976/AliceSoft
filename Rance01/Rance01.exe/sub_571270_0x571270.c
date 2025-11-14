// 函数: sub_571270
// 地址: 0x571270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1 = (*(*arg1 + 0x10))()
int32_t i_2 = (*(*arg1 + 0x14))()
void* var_28 = (*(*arg1 + 8))(0, 0)
int32_t eax_5 = (*(*arg1 + 0x1c))()
char* esi_1 = (*(*arg2 + 8))(0, 0)
int32_t ebp_2 = (*(*arg2 + 0x1c))() - *(arg3 + 0x40)
int32_t var_10 = ebp_2
int32_t eax_14 = (1 - (*(*arg2 + 0x1c))()) * *(arg3 + 0x40)
void* edx_9 = arg3
int32_t result = result_1
int32_t edi_3 = ((*(*arg2 + 0x1c))() - result) * *(edx_9 + 0x40)
int32_t var_c = edi_3

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if (result s> 0)
            int32_t var_1c_1 = result
            int32_t j
            
            do
                int32_t k_2 = *(edx_9 + 0x40)
                int32_t ecx_10 = 0
                int32_t var_24_1 = 0
                
                if (k_2 s> 0)
                    int32_t k_1 = k_2
                    int32_t k
                    
                    do
                        int32_t edx_10 = 0
                        int32_t edi_4 = 0
                        int32_t ebx_1 = 0
                        
                        if (k_2 s>= 2)
                            int32_t ecx_13 = ((k_2 - 2) u>> 1) + 1
                            ebx_1 = ecx_13 * 2
                            int32_t temp4_1
                            
                            do
                                edx_10 += zx.d(*esi_1)
                                edi_4 += zx.d(esi_1[1])
                                esi_1 = &esi_1[2]
                                temp4_1 = ecx_13
                                ecx_13 -= 1
                            while (temp4_1 != 1)
                            ebp_2 = var_10
                            ecx_10 = var_24_1
                        
                        if (ebx_1 s< k_2)
                            ecx_10 += zx.d(*esi_1)
                            esi_1 = &esi_1[1]
                        
                        ecx_10 += edi_4 + edx_10
                        esi_1 = &esi_1[ebp_2]
                        k = k_1
                        k_1 -= 1
                        var_24_1 = ecx_10
                    while (k != 1)
                    edi_3 = var_c
                    edx_9 = arg3
                
                esi_1 = &esi_1[eax_14]
                void* eax_18 = var_28 + 4
                j = var_1c_1
                var_1c_1 -= 1
                var_28 = eax_18
                *(eax_18 - 1) = (ecx_10 s>> (*(edx_9 + 0x44)).b).b
            while (j != 1)
            result = result_1
        
        var_28 += eax_5 - (result_1 << 2)
        esi_1 = &esi_1[edi_3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
