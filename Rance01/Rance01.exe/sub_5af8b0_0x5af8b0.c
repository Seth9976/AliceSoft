// 函数: sub_5af8b0
// 地址: 0x5af8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_4 = arg3
*(arg1 + 0xfc) += 1
int128_t* result = *(arg1 + 0xfc)

if (result u>= *(arg1 + 0xec))
    int32_t ebx
    int32_t var_c_1 = ebx
    
    if (*(arg1 + 0x138) != 0)
        int128_t* ecx = *(arg1 + 0x104)
        int32_t eax_1 = *(arg1 + 0xf4) + 1
        *(arg1 + 0xfc) = 0
        result, arg3 = sub_6bc670(ecx, 0, eax_1)
        
        while (true)
            *(arg1 + 0x139) += 1
            ebx.b = *(arg1 + 0x139)
            
            if (ebx.b u>= 7)
                goto label_5af977
            
            arg3 = zx.d(ebx.b)
            uint32_t edi_1 = zx.d(*(arg3 + 0x74637c))
            result = divu.dp.d(0:(*(arg1 + 0xe4) - zx.d(*(arg3 + 0x746374)) + edi_1 - 1), edi_1)
            bool cond:1_1 = (*(arg1 + 0x74) & 2) != 0
            *(arg1 + 0xf8) = result
            
            if (cond:1_1)
                break
            
            uint32_t edi_2 = zx.d(*(arg3 + 0x74638c))
            result = divu.dp.d(0:(*(arg1 + 0xe8) - zx.d(*(arg3 + 0x746384)) + edi_2 - 1), edi_2)
            *(arg1 + 0xec) = result
            
            if (result != 0)
                if (*(arg1 + 0xf8) != 0)
                    break
    
    if (*(arg1 + 0x138) == 0 || ebx.b u>= 7)
    label_5af977:
        
        if ((*(arg1 + 0x70) & 0x20) == 0)
            *(arg1 + 0x84) = &var_4:3
            *(arg1 + 0x88) = 1
            
            while (true)
                if (*(arg1 + 0x7c) == 0)
                    if (*(arg1 + 0x120) == 0)
                        uint32_t i
                        
                        do
                            sub_5ab650(arg1, 0)
                            i = sub_5ab490(arg1)
                            *(arg1 + 0x120) = i
                            
                            if (*(arg1 + 0x100) != 0x49444154)
                                sub_5a5c60(arg1, "Not enough image data")
                                noreturn
                        while (i == 0)
                    
                    int32_t eax_6 = *(arg1 + 0xb4)
                    int32_t ecx_2 = *(arg1 + 0x120)
                    int32_t edi_3 = *(arg1 + 0xb0)
                    *(arg1 + 0x7c) = eax_6
                    *(arg1 + 0x78) = edi_3
                    
                    if (eax_6 u> ecx_2)
                        *(arg1 + 0x7c) = ecx_2
                    
                    int32_t eax_7 = *(arg1 + 0x54)
                    int32_t ebp_1 = *(arg1 + 0x7c)
                    
                    if (eax_7 == 0)
                        sub_5a5c60(arg1, "Call to NULL read function")
                        noreturn
                    
                    char* ecx_3
                    void* edx_7
                    edx_7, ecx_3 = eax_7(arg1, edi_3, ebp_1)
                    int32_t var_24_1 = edi_3
                    void* var_28_1 = arg1
                    sub_5a3fe0(ebp_1, edx_7, ecx_3)
                    *(arg1 + 0x120) -= *(arg1 + 0x7c)
                
                result, arg3 = sub_5a0bd0(arg1 + 0x78, 1)
                
                if (result != 1)
                    if (result != 0)
                        char* eax_12 = *(arg1 + 0x90)
                        
                        if (eax_12 == 0)
                            eax_12 = "Decompression Error"
                        
                        sub_5a5c60(arg1, eax_12)
                        noreturn
                    
                    if (*(arg1 + 0x88) != 0)
                        continue
                    
                    result = sub_5a5de0("Extra compressed data", arg1)
                else if (*(arg1 + 0x88) == 0 || *(arg1 + 0x7c) != 0 || *(arg1 + 0x120) != 0)
                    result = sub_5a5de0("Extra compressed data", arg1)
                
                *(arg1 + 0x6c) |= 8
                *(arg1 + 0x70) |= 0x20
                *(arg1 + 0x88) = 0
                break
        
        if (*(arg1 + 0x120) != 0 || *(arg1 + 0x7c) != 0)
            result = sub_5a5de0("Extra compression data", arg1)
        
        if (arg1 != 0xffffff88)
            result = *(arg1 + 0x94)
            
            if (result != 0)
                *(result + 0x28) = 0
                *(result + 0x2c) = 0
                result[3].d = 0
                result = sub_5a0980(arg1 + 0x78)
        
        *(arg1 + 0x6c) |= 8

return result
