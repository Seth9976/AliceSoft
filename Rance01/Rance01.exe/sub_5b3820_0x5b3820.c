// 函数: sub_5b3820
// 地址: 0x5b3820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t* i = arg2
int32_t* ebp = arg1
void* eax_1 = (*(*i + 8))(0, ebp[2] - 1)
int32_t edi = ebp[1]
void* esi = eax_1
int32_t result = edi << 2
int32_t edx_4 = neg.d((*(*i + 0x1c))()) - result
char* ecx_6 = arg3 + 0x12
int32_t var_4 = edx_4
arg1 = nullptr

if (ebp[2] s> 0)
    result.b = 0xff
    
    do
        arg2 = 0
        
        if (edi s> 0)
            do
                i.b = *ecx_6
                edx_4.b = i.b
                edx_4.b u>>= 7
                int32_t j_4 = (zx.d(i.b) & 0x7f) + 1
                ecx_6 = &ecx_6[1]
                
                if (edx_4.b != 0)
                    if (j_4 s> 0)
                        int32_t j_2 = j_4
                        int32_t j
                        
                        do
                            *esi = *ecx_6
                            *(esi + 1) = ecx_6[1]
                            *(esi + 2) = ecx_6[2]
                            *(esi + 3) = 0xff
                            esi += 4
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    
                    ecx_6 = &ecx_6[3]
                else if (j_4 s> 0)
                    int32_t j_3 = j_4
                    int32_t j_1
                    
                    do
                        *esi = *ecx_6
                        *(esi + 1) = ecx_6[1]
                        *(esi + 2) = ecx_6[2]
                        *(esi + 3) = 0xff
                        esi += 4
                        ecx_6 = &ecx_6[3]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                edx_4 = arg2 + j_4
                edi = ebp[1]
                arg2 = edx_4
            while (edx_4 s< edi)
            
            edx_4 = var_4
        
        i = arg1 + 1
        esi += edx_4
        arg1 = i
    while (i s< ebp[2])

return result
