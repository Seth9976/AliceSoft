// 函数: sub_5b2040
// 地址: 0x5b2040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2[1]
int32_t eax = *arg2
int32_t var_4 = ebp
char* esi = (*(*arg1 + 8))(0, 0)
int32_t eax_4 = (*(*arg1 + 0x1c))()
char* edi_1 = arg2[7]
int32_t ecx_2 = eax_4
int32_t result = 0
int32_t var_10 = ecx_2
void* var_18 = nullptr
int32_t result_1 = 0

if (ebp s> 0)
    char* var_14_1 = esi
    
    while (true)
        if (var_18 s< eax)
            result.b = *edi_1
            edi_1 = &edi_1[1]
            
            if (result.b u< 0xf8)
                uint32_t eax_5 = zx.d(zx.w(*edi_1) << 8) | zx.d(result.b)
                uint16_t edx_2
                edx_2.b = eax_5.b
                edx_2.b *= 2
                uint16_t ecx_3
                ecx_3.b = eax_5.b
                ecx_3.b u>>= 2
                edx_2.b *= 2
                edx_2.b *= 2
                ecx_3.b &= 7
                ecx_3.b ^= edx_2.b
                *esi = ecx_3.b
                ecx_3 = eax_5.w u>> 3
                uint8_t edx_4 = (((eax_5 u>> 9).b ^ ecx_3.b) & 3) ^ ecx_3.b
                ecx_3 = eax_5.w u>> 8
                esi[1] = edx_4
                esi[2] = (((eax_5 u>> 0xd).b ^ ecx_3.b) & 7) ^ ecx_3.b
                esi[3] = 0xff
                edi_1 = &edi_1[1]
                esi = &esi[4]
                var_18 += 1
            else
                int128_t* var_44_1
                int32_t var_40_1
                int32_t eax_14
                void* edx_5
                int32_t* ebx
                int32_t ebp_2
                
                if (zx.d(result.b) - 0xf8 u<= 7)
                    switch (result.b)
                        case 0xf8
                            uint32_t eax_9 = zx.d(*edi_1)
                            edx_5.b = eax_9.b
                            edx_5.b *= 2
                            ecx_2.b = eax_9.b
                            ecx_2.b u>>= 2
                            edx_5.b *= 2
                            edx_5.b *= 2
                            ecx_2.b &= 7
                            ecx_2.b ^= edx_5.b
                            *esi = ecx_2.b
                            ecx_2.w = eax_9.w
                            ecx_2.w u>>= 3
                            uint8_t edx_7 = (((eax_9 u>> 9).b ^ ecx_2.b) & 3) ^ ecx_2.b
                            ecx_2.w = eax_9.w
                            ecx_2.w u>>= 8
                            esi[1] = edx_7
                            esi[2] = (((eax_9 u>> 0xd).b ^ ecx_2.b) & 7) ^ ecx_2.b
                            esi[3] = 0xff
                            edi_1 = &edi_1[2]
                            esi = &esi[4]
                            var_18 += 1
                        case 0xf9
                            int32_t eax_8
                            eax_8.b = edi_1[1]
                            uint16_t ecx_4 = ((zx.w(eax_8.b) & 0xffe0) * 4) | (zx.w(eax_8.b) & 0x18)
                            eax_8.b &= 7
                            int32_t i = zx.d(*edi_1) + 1
                            var_18 += i
                            edi_1 = &edi_1[2]
                            uint16_t edx_10 = (ecx_4 << 4 | zx.w(eax_8.b)) * 4
                            
                            while (i s> 0)
                                uint16_t eax_11
                                eax_11.b = *edi_1
                                ecx_4.b = eax_11.b
                                ecx_4.b &= 0xc0
                                ebx.b = eax_11.b
                                ebx.b &= 0x3c
                                eax_11.b &= 3
                                uint32_t eax_13 = zx.d(((zx.w(ecx_4.b) * 4) | zx.w(ebx.b)) * 8)
                                    | zx.d(eax_11.b) | zx.d(edx_10)
                                uint16_t ebx_1
                                ebx_1.b = eax_13.b
                                ebx_1.b *= 2
                                ecx_4.b = eax_13.b
                                ecx_4.b u>>= 2
                                ebx_1.b *= 2
                                ebx_1.b *= 2
                                ecx_4.b &= 7
                                ecx_4.b ^= ebx_1.b
                                *esi = ecx_4.b
                                ecx_4 = eax_13.w u>> 3
                                ebx.b = (eax_13 u>> 9).b ^ ecx_4.b
                                ebx.b &= 3
                                ebx.b ^= ecx_4.b
                                ecx_4 = eax_13.w u>> 8
                                eax_11.b = (eax_13 u>> 0xd).w.b ^ ecx_4.b
                                eax_11.b &= 7
                                esi[1] = ebx.b
                                eax_11.b ^= ecx_4.b
                                esi[2] = eax_11.b
                                i -= 1
                                esi[3] = 0xff
                                edi_1 = &edi_1[1]
                                esi = &esi[4]
                        case 0xfa
                            eax_14 = ecx_2 - 4
                        label_5b226b:
                            *esi = *(esi - eax_14)
                            esi[1] = *(&esi[1] - eax_14)
                            eax_14.b = *(&esi[2] - eax_14)
                            esi[2] = eax_14.b
                            esi[3] = 0xff
                            esi = &esi[4]
                            var_18 += 1
                        case 0xfb
                            eax_14 = ecx_2 + 4
                            goto label_5b226b
                        case 0xfc
                            uint16_t edx_17 = *(edi_1 + 1)
                            ebx = zx.d(*(edi_1 + 3))
                            int32_t i_1 = zx.d(*edi_1) + 2
                            edi_1 = &edi_1[5]
                            var_18 += i_1 << 1
                            
                            if (i_1 s> 0)
                                void* ecx_8
                                ecx_8.b = edx_17.b
                                ebp.w = edx_17
                                ecx_8.b *= 2
                                ecx_8.b *= 2
                                ecx_8.b *= 2
                                arg2.b = ecx_8.b
                                ecx_8.w = edx_17
                                ebp.w u>>= 2
                                ecx_8.w u>>= 9
                                char var_28_1 = ebp.b
                                ebp.w = edx_17
                                char var_26_1 = ecx_8.b
                                ecx_8.w = edx_17
                                char var_2a_1 = (edx_17 u>> 8).b
                                char var_1e_1 = (ebx.w u>> 2).b
                                edx_17.b = ebx.b
                                edx_17.b *= 2
                                edx_17.b *= 2
                                edx_17.b *= 2
                                char var_2b_1 = edx_17.b
                                char var_1c_1 = (ebx.w u>> 9).b
                                char var_22_1 = (ebx.w u>> 3).b
                                ebp.w u>>= 0xd
                                edx_17 = ebx.w u>> 0xd
                                ecx_8.w u>>= 3
                                ebx.w u>>= 8
                                char var_20_1 = ebx.b
                                
                                do
                                    i_1 -= 1
                                    *esi = (var_28_1 & 7) ^ arg2.b
                                    esi = &esi[8]
                                    esi[0xfffffff9] = ((ecx_8.b ^ var_26_1) & 3) ^ ecx_8.b
                                    esi[0xfffffffa] = ((var_2a_1 ^ ebp.b) & 7) ^ var_2a_1
                                    esi[0xfffffffb] = 0xff
                                    esi[0xfffffffc] = (var_1e_1 & 7) ^ var_2b_1
                                    esi[0xfffffffd] = ((var_22_1 ^ var_1c_1) & 3) ^ var_22_1
                                    esi[0xfffffffe] = ((var_20_1 ^ edx_17.b) & 7) ^ var_20_1
                                    esi[0xffffffff] = 0xff
                                while (i_1 s> 0)
                        case 0xfd
                            uint16_t ecx_9 = *(edi_1 + 1)
                            int32_t eax_17 = zx.d(*edi_1) + 3
                            var_18 += eax_17
                            edi_1 = &edi_1[3]
                            
                            if (eax_17 s> 0)
                                edx_5.b = ecx_9.b
                                edx_5.b *= 2
                                edx_5.b *= 2
                                edx_5.b *= 2
                                arg2.b = edx_5.b
                                edx_5.w = ecx_9
                                edx_5.w u>>= 9
                                char var_26_2 = edx_5.b
                                ebx.w = ecx_9
                                edx_5.w = ecx_9
                                ebp.w = ecx_9
                                ebx.w u>>= 2
                                ebp.w u>>= 0xd
                                edx_5.w u>>= 3
                                int16_t var_28_2 = ebx.w
                                char var_2a_2 = (ecx_9 u>> 8).b
                                
                                while (true)
                                    ecx_9.b = edx_5.b
                                    ecx_9.b ^= var_26_2
                                    ebx.b &= 7
                                    ebx.b ^= arg2.b
                                    ecx_9.b &= 3
                                    ecx_9.b ^= edx_5.b
                                    *esi = ebx.b
                                    esi[1] = ecx_9.b
                                    ecx_9.b = var_2a_2
                                    ecx_9.b ^= ebp.b
                                    eax_17 -= 1
                                    ecx_9.b &= 7
                                    ecx_9.b ^= var_2a_2
                                    esi = &esi[4]
                                    esi[0xfffffffe] = ecx_9.b
                                    esi[0xffffffff] = 0xff
                                    
                                    if (eax_17 s<= 0)
                                        break
                                    
                                    ebx.w = var_28_2
                        case 0xfe
                            ebx = zx.d(*edi_1) + 2
                            ebp_2 = ebx << 2
                            var_40_1 = ebp_2
                            var_44_1 = esi - var_10 * 2
                        label_5b2481:
                            edi_1 = &edi_1[1]
                            sub_6c02a0(esi, var_44_1, var_40_1)
                            esi = &esi[ebp_2]
                            var_18 += ebx
                        case 0xff
                            ebx = zx.d(*edi_1) + 2
                            ebp_2 = ebx << 2
                            var_40_1 = ebp_2
                            var_44_1 = esi - var_10
                            goto label_5b2481
        else
            var_14_1 = &var_14_1[ecx_2]
            var_18 = nullptr
            result_1 = result + 1
            
            if (result + 1 s>= ebp)
                break
            
            esi = var_14_1
        
        result = result_1
        ebp = var_4
        
        if (result s>= ebp)
            break
        
        ecx_2 = var_10

result.b = 1
return result
