// 函数: sub_5a8a40
// 地址: 0x5a8a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_14
int32_t eax_1 = data_78c474 ^ &var_14
char* result = arg3
uint32_t ecx = zx.d(*(arg2 + 8))

if (ecx != 3)
    uint32_t edx_1 = zx.d(*(arg2 + 9))
    int32_t ebx_7
    
    if ((ecx.b & 2) == 0)
        var_14 = edx_1 - zx.d(result[3])
        ebx_7 = 1
    else
        uint32_t edi_2 = zx.d(result[1])
        var_14 = edx_1 - zx.d(*result)
        uint32_t var_10_1 = edx_1 - edi_2
        uint32_t var_c_1 = edx_1 - zx.d(result[2])
        ebx_7 = 3
    
    if ((ecx.b & 4) != 0)
        result = zx.d(result[4])
        (&var_14)[ebx_7] = edx_1 - result
        ebx_7 += 1
    
    int32_t edi_5 = 0
    int32_t ecx_3 = 0
    
    if (ebx_7 s> 0)
        do
            result = (&var_14)[ecx_3]
            
            if (result s<= 0 || result s>= edx_1)
                (&var_14)[ecx_3] = 0
            else
                edi_5 = 1
            
            ecx_3 += 1
        while (ecx_3 s< ebx_7)
        
        if (edi_5 != 0 && edx_1 - 2 u<= 0xe)
            switch (edx_1 + &jump_table_5a8c04[4]:2)
                case &lookup_table_5a8c18
                    void* ecx_5 = *(arg2 + 4) + arg1
                    result = arg1
                    
                    if (arg1 u< ecx_5)
                        do
                            uint32_t edx_3
                            edx_3.b = *result
                            edx_3.b u>>= 1
                            edx_3.b &= 0x55
                            *result = edx_3.b
                            result = &result[1]
                        while (result u< ecx_5)
                        
                        sub_6b4885(eax_1 ^ &var_14)
                        return result
                case &lookup_table_5a8c18[2]
                    int32_t edx_4 = 0xf s>> var_14.b
                    void* edi_7 = *(arg2 + 4) + arg1
                    result = arg1
                    
                    if (arg1 u< edi_7)
                        do
                            ebx_7.b = *result
                            ebx_7.b u>>= var_14.b
                            result = &result[1]
                            ebx_7.b &= edx_4.b | (edx_4 << 4).b
                            result[0xffffffff] = ebx_7.b
                        while (result u< edi_7)
                        
                        sub_6b4885(eax_1 ^ &var_14)
                        return result
                case &lookup_table_5a8c18[6]
                    void* ebp_2 = *(arg2 + 4) + arg1
                    int32_t edi_8 = 0
                    result = arg1
                    
                    if (arg1 u< ebp_2)
                        do
                            ecx_3.b = (&var_14)[edi_8].b
                            edi_8 += 1
                            
                            if (edi_8 s>= ebx_7)
                                edi_8 = 0
                            
                            *result = (zx.d(*result) u>> ecx_3.b).b
                            result = &result[1]
                        while (result u< ebp_2)
                        
                        sub_6b4885(eax_1 ^ &var_14)
                        return result
                case &lookup_table_5a8c18[0xe]
                    void* ebp_4 = *(arg2 + 4) + arg1
                    int32_t edi_9 = 0
                    result = arg1
                    
                    if (arg1 u< ebp_4)
                        do
                            char ecx_16 = ((&var_14)[edi_9]).b
                            edi_9 += 1
                            int32_t edx_11 = ((zx.d(*result) << 8) + zx.d(result[1])) s>> ecx_16
                            
                            if (edi_9 s>= ebx_7)
                                edi_9 = 0
                            
                            *result = (edx_11 s>> 8).b
                            result[1] = edx_11.b
                            result = &result[2]
                        while (result u< ebp_4)

sub_6b4885(eax_1 ^ &var_14)
return result
