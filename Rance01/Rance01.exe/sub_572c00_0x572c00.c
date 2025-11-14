// 函数: sub_572c00
// 地址: 0x572c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_7c = ebx
int32_t ecx
int32_t var_84 = ecx
int16_t x87control = sub_572da0(arg1, fconvert.s(fconvert.t(arg4)))
int32_t ecx_1 = *(arg1 + 0x28)
char* var_88
var_88.q = fconvert.d(fconvert.t(arg4))
int32_t var_54 = *(arg1 + 0x38)
int32_t var_58 = *(arg1 + 0x2c)
int32_t mxcsr
float var_5c = fconvert.s(sub_6b4ef0(mxcsr, x87control, var_88))
int32_t eax_1 = sub_70c710(fconvert.t(var_5c))
char* ebx_3 = eax_1 * 2 * *(arg1 + 0x34) + 1
char* edi = (*(*arg1 + 8))(0, 0, arg2)
int32_t var_78
int32_t var_50 = (*(*arg1 + 0x1c))() + *(arg1 + 0x34) * 2 * ecx_1 - var_78
int32_t eax_8 = (*(*arg1 + 0x1c))()
int32_t var_54_1 = 1 - (*(*arg1 + 0x1c))() * ebx_3
void* eax_14 = (*(*arg3 + 8))(0, 0)
int32_t ebx_4 = *(arg1 + 0x34)
void* var_7c_1 = eax_14
int32_t edx_8 = (*(*arg3 + 0x1c))() + ebx_4 * 2 * var_78 - arg2
int32_t i_2 = ebx_4 * var_78
int32_t i_1 = i_2
int32_t j_2 = *(arg1 + 0x34) * var_78

if (i_2 s< eax_1 - j_2)
    int32_t i
    
    do
        int32_t j = j_2
        int32_t j_1 = j_2
        
        if (j s< arg2 - j_2)
            do
                char* ecx_18 = var_7c_1
                int32_t edx_12
                edx_12.b = *ecx_18
                var_7c_1 = &ecx_18[1]
                
                if (edx_12.b != 0)
                    int32_t var_74
                    int32_t edx_13 = var_74
                    char* ecx_20 = ebx_3
                    
                    if (edx_13 s> 0)
                        int32_t var_78_1 = edx_13
                        
                        while (true)
                            j.b = *ecx_20
                            *edi |= j.b
                            ecx_20 = &ecx_20[1]
                            edi = &edi[1]
                            int32_t temp1_1 = edx_13
                            edx_13 -= 1
                            
                            if (temp1_1 == 1)
                                int32_t var_60
                                edi = &edi[var_60]
                                int32_t temp2_1 = var_78_1
                                var_78_1 -= 1
                                
                                if (temp2_1 == 1)
                                    break
                                
                                edx_13 = var_74
                        
                        j = j_1
                    
                    edi = &edi[var_5c]
                else
                    edi = &edi[1]
                
                j += 1
                j_1 = j
            while (j s< arg2 - *(arg1 + 0x34) * var_78)
        
        var_7c_1 += edx_8
        j_2 = *(arg1 + 0x34) * var_78
        edi += eax_8 - ebx_3
        i = i_1 + 1
        i_1 = i
    while (i s< eax_1 - j_2)

int32_t result
result.b = 1
return result
