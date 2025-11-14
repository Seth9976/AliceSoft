// 函数: sub_5bfaf0
// 地址: 0x5bfaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t ecx
int32_t edx
void** result_2 = _calloc(eax, edx, ecx, 1, 0x2c)
void* ebp = arg2
int32_t ebx = *(ebp + 0xc)
void** result = result_2
void* eax_2 = *(*(arg1 + 4) + 0x1c)
int32_t ecx_2 = *(ebp + 0x14)
int32_t eax_3 = *(eax_2 + 0xb20)
result[3] = eax_3
int32_t edx_2 = ecx_2 * 7
int32_t* eax_4 = eax_3 + (edx_2 << 3)
result[4] = eax_4
void* i_3 = *eax_4
int32_t i = 0
void** result_1 = result
int32_t var_18 = 0
int32_t var_14 = 0
*result = ebp
result[1] = ebx
int32_t eax_5
int32_t ecx_3
void* edx_3
eax_5, ecx_3, edx_3 = _calloc(i_3, edx_2, ecx_2, ebx, 4)
result[5] = eax_5

if (ebx s> 0)
    do
        uint32_t j = *(ebp + (i << 2) + 0x18)
        int32_t ebx_1 = 0
        
        if (j != 0)
            do
                ebx_1 += 1
                j u>>= 1
            while (j != 0)
            
            if (ebx_1 != 0)
                if (ebx_1 s> var_14)
                    var_14 = ebx_1
                
                int32_t eax_6
                eax_6, edx_3 = _calloc(j, edx_3, ecx_3, ebx_1, 4)
                *(eax_5 + (i << 2)) = eax_6
                ecx_3 = 0
                int32_t eax_7 = 1
                int32_t var_c_1 = 1
                
                if (ebx_1 s> 0)
                    edx_3 = ebp + (var_18 << 2) + 0x118
                    
                    do
                        if ((*(ebp + (i << 2) + 0x18) & eax_7) != 0)
                            var_18 += 1
                            *(*(eax_5 + (i << 2)) + (ecx_3 << 2)) = *(eax_2 + 0xb20) + *edx_3 * 0x38
                            eax_7 = var_c_1
                            ebp = arg2
                            edx_3 += 4
                        
                        ecx_3 += 1
                        eax_7 = rol.d(eax_7, 1)
                        var_c_1 = eax_7
                    while (ecx_3 s< ebx_1)
        
        i += 1
    while (i s< result[1])

void* i_2 = i_3
result[6] = 1

if (i_2 s> 0)
    int32_t eax_12 = 1
    void* i_1
    
    do
        eax_12 *= result[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result[6] = eax_12

int32_t esi = result[6]
result[2] = var_14
int32_t var_8_1 = esi
int32_t eax_13 = sub_6b5c43(esi << 2)
int32_t ebp_5 = 0
result[7] = eax_13

if (esi s> 0)
    void* ecx_6 = result[1]
    int32_t var_10_1 = esi
    
    while (true)
        int32_t ebx_2 = ebp_5
        int32_t esi_1 = divs.dp.d(sx.q(esi), ecx_6)
        int32_t ecx_7 = 0
        *(eax_13 + (ebp_5 << 2)) = sub_6b5c43(i_3 * 4)
        
        if (i_3 s> 0)
            do
                int32_t temp0_2 = divs.dp.d(sx.q(ebx_2), esi_1)
                ecx_7 += 1
                ebx_2 -= temp0_2 * esi_1
                esi_1 = divs.dp.d(sx.q(esi_1), ecx_6)
                *(*(eax_13 + (ebp_5 << 2)) + (ecx_7 << 2) - 4) = temp0_2
            while (ecx_7 s< i_3)
            
            result = result_1
        
        ebp_5 += 1
        
        if (ebp_5 s>= var_10_1)
            break
        
        esi = var_8_1

return result
