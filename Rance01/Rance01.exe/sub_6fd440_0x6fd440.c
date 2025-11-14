// 函数: sub_6fd440
// 地址: 0x6fd440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t eax = *(esi + 0x37f0)
int32_t ebx = 0
int32_t eax_1 = 0
int32_t var_18 = *(esi + 0x4de4)
int32_t ecx_1 = *(esi + 0x37c0)
int32_t var_7c[0x4]
int32_t var_6c[0x4]

if (ecx_1 s> 0)
    void* edx_1 = *(esi + 0x37cc)
    
    do
        int32_t edi_1 = *(edx_1 + 0xc)
        int32_t ebp_2 = *(edx_1 + 8) * *(edx_1 + 4)
        eax_1 += ebp_2
        edx_1 += 0x10
        var_7c[ebx] = ebp_2
        var_6c[ebx] = *(esi + (edi_1 << 2) + 0x36e4)
        ebx += 1
    while (ebx s< ecx_1)

int32_t ecx_3 = eax_1 << 7
int32_t ebx_1 = 0
int32_t ebp_4 = *(esi + 0x7c)

if (ebp_4 s> 0)
    int32_t edx_2 = *(esi + 0x78)
    int32_t edi_3 = eax_1 << 6
    
    do
        if (edx_2 s> 0)
            int32_t var_40_1 = 0
            bool cond:0_1
            
            do
                int16_t* ebx_12 = *(esi + 0x4834)
                int32_t* ecx_4 = *(esi + 0x4ddc)
                int32_t var_88
                int32_t var_84
                
                if (ecx_4 == 0)
                    var_88 = var_40_1
                    var_84 = ebx_1
                    (*(eax + 0x60))(esi, var_88, var_84)
                else
                    int32_t ebp_5 = 0
                    int32_t eax_2 = *(esi + 0x37c0)
                    
                    if (eax_2 s> 0)
                        int16_t* var_54_1 = ebx_12
                        int32_t var_50_1 = edx_2
                        int32_t* var_4c_1 = ecx_4
                        int32_t edx_3 = *(esi + 0x37cc)
                        
                        do
                            int32_t ecx_5 = 0
                            int32_t ebx_3 = ebp_5 << 4
                            int32_t ebx_4 = *(ebx_3 + edx_3 + 8)
                            
                            if (ebx_4 s> 0)
                                int32_t eax_4 = *(ebx_3 + edx_3 + 4)
                                int32_t edi_8 = ebp_5 * 2
                                int32_t* ebp_6 = var_4c_1
                                
                                do
                                    int32_t edi_9 = 0
                                    
                                    if (eax_4 s> 0)
                                        int32_t ecx_6 = var_50_1
                                        int32_t esi_1 = edi_8
                                        
                                        while (true)
                                            int32_t ecx_7 = ecx_6 << 7
                                            int32_t ebx_10 = ebx_4 * ecx_7 * ebx_1 * eax_4
                                                + *(ebp_6 + (esi_1 << 1) + 4)
                                                + (var_40_1 << 4) * eax_4 + eax_4 * ecx_7 * ecx_5
                                                + (edi_9 << 4)
                                            int32_t i = 0
                                            int16_t* esi_3 = var_54_1
                                            
                                            do
                                                var_88 = ebx_10
                                                var_84 = 0x10
                                                data_797c48(esi_3, var_88, 0x10)
                                                ecx_6 = *(arg1 + 0x78)
                                                edx_3 = *(arg1 + 0x37cc)
                                                eax_4 = *(ebx_3 + edx_3 + 4)
                                                ebx_10 += (ecx_6 << 4) * eax_4
                                                esi_3 = &esi_3[8]
                                                i += 1
                                            while (i s< 8)
                                            
                                            var_54_1 = esi_3
                                            esi_1 = edi_8
                                            edi_9 += 1
                                            
                                            if (edi_9 s>= eax_4)
                                                break
                                            
                                            ebp_6 = *(arg1 + 0x4ddc)
                                            ebx_4 = *(ebx_3 + edx_3 + 8)
                                        
                                        var_50_1 = ecx_6
                                        esi = arg1
                                        ebp_6 = *(esi + 0x4ddc)
                                        ebx_4 = *(ebx_3 + edx_3 + 8)
                                    
                                    ecx_5 += 1
                                while (ecx_5 s< ebx_4)
                                
                                var_4c_1 = ebp_6
                                eax_2 = *(esi + 0x37c0)
                            
                            ebp_5 += 1
                        while (ebp_5 s< eax_2)
                        
                        ecx_4 = var_4c_1
                        ebx_12 = *(esi + 0x4834)
                    
                    if (*ecx_4 != 0)
                        int32_t i_1 = edi_3 - 1
                        
                        if (edi_3 != 0)
                            do
                                *ebx_12 -= 0x80
                                ebx_12 = &ebx_12[1]
                                i_1 -= 1
                            while (i_1 != 0xffffffff)
                            
                            ebx_12 = *(esi + 0x4834)
                
                int32_t edi_14 = 0
                
                if (eax_1 s> 0)
                    int16_t* ebp_10 = ebx_12
                    
                    do
                        (*(eax + 0x44))(ebp_10, var_88, var_84)
                        ebp_10 = &ebp_10[0x40]
                        edi_14 += 1
                    while (edi_14 s< eax_1)
                    
                    esi = arg1
                
                int32_t ebp_11 = 0
                int32_t eax_12 = *(esi + 0x37c0)
                
                if (eax_12 s> 0)
                    void* edx_8 = esi
                    
                    do
                        int32_t i_2 = 0
                        
                        if (var_7c[ebp_11] s> 0)
                            do
                                (*(eax + 0x104))(ebx_12, var_6c[ebp_11], var_84)
                                ebx_12 = &ebx_12[0x40]
                                i_2 += 1
                            while (i_2 s< var_7c[ebp_11])
                            
                            edx_8 = arg1
                            eax_12 = *(edx_8 + 0x37c0)
                        
                        ebp_11 += 1
                    while (ebp_11 s< eax_12)
                    
                    esi = edx_8
                
                var_88 = *(esi + 0x4834)
                var_84 = ecx_3
                data_797c48(var_18, var_88, var_84)
                edx_2 = *(esi + 0x78)
                cond:0_1 = var_40_1 + 1 s< edx_2
                var_18 += ecx_3
                var_40_1 += 1
            while (cond:0_1)
            ebp_4 = *(esi + 0x7c)
        
        ebx_1 += 1
    while (ebx_1 s< ebp_4)

return 0
