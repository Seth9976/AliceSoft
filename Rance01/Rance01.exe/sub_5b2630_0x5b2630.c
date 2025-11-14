// 函数: sub_5b2630
// 地址: 0x5b2630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg3
int32_t ecx = arg3[1]
void* eax_2 = (*(*arg1 + 8))(0, 0)
int32_t eax_4 = (*(*arg1 + 0x1c))()
char* edx_2 = arg3[7]
int32_t esi_1 = ecx
int32_t ebp = eax_4
int32_t edi_1 = 0
int32_t result = 0
int32_t var_10 = ebp
void* ecx_3 = eax_2
int32_t var_18 = 0
int32_t result_1 = 0

if (esi_1 s> 0)
    void* var_14_1 = eax_2
    
    while (true)
        if (edi_1 s< eax)
            result.b = *edx_2
            edx_2 = &edx_2[1]
            
            if (result.b u< 0xf8)
                *(ecx_3 + 3) = result.b
                ecx_3 += 4
                var_18 = edi_1 + 1
            else
                int32_t eax_6
                int32_t i_7
                
                if (zx.d(result.b) - 0xf8 u<= 7)
                    switch (result.b)
                        case 0xf8
                            eax_6.b = *edx_2
                            *(ecx_3 + 3) = eax_6.b
                            edx_2 = &edx_2[1]
                            ecx_3 += 4
                            var_18 = edi_1 + 1
                        case 0xfc
                            eax_6.b = edx_2[1]
                            void* ebx
                            ebx.b = edx_2[2]
                            int32_t i = zx.d(*edx_2) + 3
                            edx_2 = &edx_2[3]
                            var_18 = edi_1 + (i << 1)
                            
                            while (i s> 0)
                                i -= 1
                                *(ecx_3 + 3) = eax_6.b
                                *(ecx_3 + 7) = ebx.b
                                ecx_3 += 8
                        case 0xfd
                            eax_6.b = edx_2[1]
                            i_7 = zx.d(*edx_2) + 4
                            edx_2 = &edx_2[2]
                            
                            if (i_7 s> 0)
                                int32_t i_6 = i_7
                                int32_t i_1
                                
                                do
                                    *(ecx_3 + 3) = eax_6.b
                                    ecx_3 += 4
                                    i_1 = i_6
                                    i_6 -= 1
                                while (i_1 != 1)
                            
                            var_18 += i_7
                        case 0xfe
                            i_7 = zx.d(*edx_2) + 3
                            edx_2 = &edx_2[1]
                            
                            if (i_7 s<= 0)
                                var_18 += i_7
                            else
                                void* edi_7 = ecx_3 - ebp * 2 + 3
                                int32_t i_4 = i_7
                                int32_t i_2
                                
                                do
                                    int32_t eax_7
                                    eax_7.b = *edi_7
                                    *(ecx_3 + 3) = eax_7.b
                                    ecx_3 += 4
                                    edi_7 += 4
                                    i_2 = i_4
                                    i_4 -= 1
                                while (i_2 != 1)
                                ebp = var_10
                                var_18 += i_7
                        case 0xff
                            i_7 = zx.d(*edx_2) + 3
                            edx_2 = &edx_2[1]
                            
                            if (i_7 s<= 0)
                                var_18 += i_7
                            else
                                void* edi_10 = ecx_3 - ebp + 3
                                int32_t i_5 = i_7
                                int32_t i_3
                                
                                do
                                    eax_6.b = *edi_10
                                    *(ecx_3 + 3) = eax_6.b
                                    ecx_3 += 4
                                    edi_10 += 4
                                    i_3 = i_5
                                    i_5 -= 1
                                while (i_3 != 1)
                                ebp = var_10
                                var_18 += i_7
        else
            var_14_1 += ebp
            var_18 = 0
            result_1 = result + 1
            
            if (result + 1 s>= esi_1)
                break
            
            ecx_3 = var_14_1
        
        result = result_1
        esi_1 = ecx
        
        if (result s>= esi_1)
            break
        
        edi_1 = var_18

result.b = 1
return result
