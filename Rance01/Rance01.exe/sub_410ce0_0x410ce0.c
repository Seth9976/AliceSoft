// 函数: sub_410ce0
// 地址: 0x410ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
void* eax_2 = (*(*arg3 + 8))(arg2, arg1)
void* eax_4 = (*(*arg4 + 8))(arg5, arg6)
int32_t ebx_3 = arg7 * 4
int32_t* eax_7 = (*(*arg3 + 0x1c))() - ebx_3
int32_t* eax_10 = (*(*arg4 + 0x1c))() - ebx_3
void* edi_2 = eax_2
void* esi_2 = eax_4
void* result
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        if (j_1 u>= 4)
            result = edi_2 & 0xf
            
            if (result == 0)
                while (true)
                    *edi_2 = *esi_2
                    edi_2 += 0x10
                    esi_2 += 0x10
                    int32_t j_2 = j_1
                    j_1 -= 4
                    
                    if (j_2 == 4)
                        break
                    
                    if (j_1 u< 4)
                        goto label_410d4d
                
                break
        
    label_410d4d:
        result = *esi_2
        *edi_2 = result
        edi_2 += 4
        esi_2 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_2 += eax_7
    esi_2 += eax_10
    i = arg8
    arg8 -= 1
while (i != 1)
return result
