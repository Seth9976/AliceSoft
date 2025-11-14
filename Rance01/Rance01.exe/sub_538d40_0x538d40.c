// 函数: sub_538d40
// 地址: 0x538d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t* result = *arg1

if (&result[1] u> arg1[1])
label_538ecb:
    result.b = 0
    return result

int32_t edi_7 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
    | zx.d(*result)
int32_t var_8_1 = edi_7
*arg1 = &result[1]

if (edi_7 s> 0)
    int32_t* ebx_2 = arg2 + 0xec
    int32_t* var_4_1 = ebx_2
    sub_55c080(ebx_2, edi_7)
    uint32_t* result_1 = nullptr
    
    if (edi_7 s> 0)
        arg2 = nullptr
        
        while (true)
            char* ecx_1 = *arg1
            void* ebp_2 = *ebx_2 + arg2
            
            if (&ecx_1[4] u> arg1[1])
                goto label_538ecb
            
            result =
                ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
            *arg1 = &ecx_1[4]
            *(ebp_2 + 0x24) = result
            char* ecx_3 = *arg1
            
            if (&ecx_3[4] u> arg1[1])
                goto label_538ecb
            
            uint32_t eax_13 =
                ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
            *arg1 = &ecx_3[4]
            *(ebp_2 + 0x20) = eax_13
            result = *arg1
            
            if (&result[1] u> arg1[1])
                goto label_538ecb
            
            uint32_t ebx_13 =
                ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
                | zx.d(*result)
            *arg1 = &result[1]
            
            if (ebx_13 s> 0)
                int32_t var_18_1 = 0
                
                if (ebx_13 s> 0)
                    int32_t eax_19
                    
                    do
                        result = *arg1
                        
                        if (&result[1] u> arg1[1])
                            goto label_538ecb
                        
                        uint32_t edx_8 = zx.d(*(result + 1))
                        uint32_t eax_15 = zx.d(*result)
                        uint32_t edi_11 = (zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                        *arg1 = &result[1]
                        uint32_t var_c
                        
                        if (sub_5546f0(arg1, &var_c).b == 0)
                            goto label_538ecb
                        
                        uint32_t var_10 = (edi_11 | edx_8) << 8 | eax_15
                        void* eax_17 = sub_4ccf80(ebp_2, &var_10)
                        *eax_17 = var_c
                        eax_19 = var_18_1 + 1
                        var_18_1 = eax_19
                    while (eax_19 s< ebx_13)
                    edi_7 = var_8_1
            
            arg2 += 0x28
            result = result_1 + 1
            result_1 = result
            
            if (result s>= edi_7)
                break
            
            ebx_2 = var_4_1

result.b = 1
return result
