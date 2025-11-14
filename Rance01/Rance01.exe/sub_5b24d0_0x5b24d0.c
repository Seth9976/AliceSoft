// 函数: sub_5b24d0
// 地址: 0x5b24d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
int32_t eax = *arg1
int32_t ecx = arg1[1]
char* eax_2 = (*(*ebp + 0xc))(0, 0)
char* edi_1 = arg1[8]
char* esi = eax_2
int32_t eax_4 = (*(*ebp + 0x20))()
int32_t ecx_3 = ecx
int32_t result = 0
void* ebx = nullptr
int32_t result_1 = 0

if (ecx_3 s> 0)
    do
        if (ebx s< eax)
            result.b = *edi_1
            edi_1 = &edi_1[1]
            
            if (result.b u< 0xf8)
                *esi = result.b
                esi = &esi[1]
                ebx += 1
            else
                int128_t* var_28_2
                void* var_24_3
                void* ebp_2
                
                if (zx.d(result.b) - 0xf8 u<= 7)
                    switch (result.b)
                        case 0xf8
                            ecx_3.b = *edi_1
                            *esi = ecx_3.b
                            esi = &esi[1]
                            edi_1 = &edi_1[1]
                            ebx += 1
                        case 0xfc
                            ecx_3.b = edi_1[1]
                            char edx_2 = edi_1[2]
                            int32_t i = zx.d(*edi_1) + 3
                            edi_1 = &edi_1[3]
                            ebx += i << 1
                            
                            while (i s> 0)
                                *esi = ecx_3.b
                                i -= 1
                                esi[1] = edx_2
                                esi = &esi[2]
                        case 0xfd
                            char eax_10 = edi_1[1]
                            ebp_2 = zx.d(*edi_1) + 4
                            edi_1 = &edi_1[2]
                            sub_6bc670(esi, eax_10, ebp_2)
                        label_5b25df:
                            esi += ebp_2
                            ebx += ebp_2
                            ebp = arg2
                        case 0xfe
                            ebp_2 = zx.d(*edi_1) + 3
                            var_24_3 = ebp_2
                            var_28_2 = esi - eax_4 * 2
                        label_5b25d9:
                            edi_1 = &edi_1[1]
                            sub_6c02a0(esi, var_28_2, var_24_3)
                            goto label_5b25df
                        case 0xff
                            ebp_2 = zx.d(*edi_1) + 3
                            var_24_3 = ebp_2
                            var_28_2 = esi - eax_4
                            goto label_5b25d9
        else
            ebx = nullptr
            result_1 = result + 1
            
            if (result + 1 s>= ecx_3)
                break
            
            esi = (*(*ebp + 0xc))(0, result + 1)
        
        result = result_1
        ecx_3 = ecx
    while (result s< ecx_3)

result.b = 1
return result
