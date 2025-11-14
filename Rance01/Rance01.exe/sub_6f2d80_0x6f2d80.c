// 函数: sub_6f2d80
// 地址: 0x6f2d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
uint32_t var_28
int32_t result = sub_6f2b00(arg1, &var_28)

if (result == 0)
    uint32_t eax_1 = var_28
    
    if (eax_1 s>= 2)
        var_28 = eax_1 - 2
        result = sub_6f2920(arg1, eax_1 - 2, &var_30, &var_34, &var_2c)
        
        if (result == 0)
            data_797c44(*(arg2 + 0x37cc), 0x40)
            char* eax_5 = var_34
            var_34 = &eax_5[1]
            uint32_t edx_4 = zx.d(*eax_5)
            *(arg2 + 0x37a4) = edx_4
            var_34 = &eax_5[2]
            uint32_t esi_3 = zx.d(eax_5[1]) << 8
            *(arg2 + 0x37ac) = esi_3
            var_34 = &eax_5[3]
            uint32_t ecx_5 = zx.d(eax_5[2]) + esi_3
            *(arg2 + 0x37ac) = ecx_5
            var_34 = &eax_5[4]
            uint32_t edi_2 = zx.d(eax_5[3]) << 8
            *(arg2 + 0x37a8) = edi_2
            var_34 = &eax_5[5]
            uint32_t esi_7 = zx.d(eax_5[4]) + edi_2
            void* edi_3 = &eax_5[6]
            *(arg2 + 0x37a8) = esi_7
            var_34 = edi_3
            uint32_t eax_6 = zx.d(eax_5[5])
            *(arg2 + 0x37c0) = eax_6
            
            if (edx_4 != 8)
                result = 0xffffffe3
            else if (ecx_5 != 0)
                int32_t edx_5 = 0
                int32_t var_18_1 = 0
                
                if (eax_6 s> 0)
                    int32_t ebp_3 = *(arg2 + 0x37cc)
                    uint32_t* eax_7 = nullptr
                    int32_t i = 0
                    int32_t var_24_1 = 0
                    
                    do
                        var_34 = edi_3 + 1
                        *(eax_7 + ebp_3) = zx.d(*edi_3)
                        void* edx_8 = var_34
                        *(eax_7 + *(arg2 + 0x37cc) + 4) = zx.d(*edx_8) s>> 4
                        int32_t edi_4 = *(arg2 + 0x37cc)
                        var_34 = edx_8 + 1
                        *(eax_7 + edi_4 + 8) = zx.d(*edx_8) & 0xf
                        edi_3 = edx_8 + 2
                        int32_t ebp_8 = *(arg2 + 0x37cc)
                        var_34 = edi_3
                        *(eax_7 + ebp_8 + 0xc) = zx.d(*(edx_8 + 1))
                        ebp_3 = *(arg2 + 0x37cc)
                        int32_t edx_10 = *(eax_7 + ebp_3 + 4)
                        
                        if (var_24_1 s< edx_10)
                            var_24_1 = edx_10
                        
                        int32_t edx_11 = *(eax_7 + ebp_3 + 8)
                        
                        if (var_18_1 s< edx_11)
                            var_18_1 = edx_11
                        
                        eax_7 = &eax_7[4]
                        i += 1
                    while (i s< *(arg2 + 0x37c0))
                    
                    edx_5 = var_24_1
                    ecx_5 = *(arg2 + 0x37ac)
                    esi_7 = *(arg2 + 0x37a8)
                
                int32_t temp0_1 = divs.dp.d(sx.q(esi_7 + (edx_5 << 3) - 1), edx_5 * 8)
                *(arg2 + 0x37c4) = temp0_1
                *(arg2 + 0x37c8) =
                    divs.dp.d(sx.q(ecx_5 + (var_18_1 << 3) - 1), var_18_1 * 8) * temp0_1
            else
                result = 0xfffffff0
    else
        result = 0xffffffeb

if (var_2c != 0)
    int32_t edx_2 = var_30
    
    if (edx_2 != 0)
        int32_t var_4c_1 = edx_2
        sub_6b4d5b()

return result
