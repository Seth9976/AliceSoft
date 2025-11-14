// 函数: sub_67d5b0
// 地址: 0x67d5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi = arg2
uint32_t* eax = *esi

if (&eax[1] u<= *(esi + 4))
    *(arg1 + 0x5c) =
        ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
    *esi += 4
    eax = *esi
    
    if (&eax[1] u<= *(esi + 4))
        *(arg1 + 0x60) =
            ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
        *esi += 4
        int32_t* ecx_7 = esi
        
        if (sub_5546f0(ecx_7, arg1 + 0x64).b != 0 && sub_5546f0(ecx_7, arg1 + 0x68).b != 0
                && sub_5546f0(ecx_7, arg1 + 0x6c).b != 0)
            int32_t* ecx_9 = esi
            
            if (sub_5546f0(ecx_9, arg1 + 0x70).b != 0 && sub_5546f0(ecx_9, arg1 + 0x74).b != 0
                    && sub_40fea0(esi, arg1 + 0x78).b != 0 && sub_410070(esi, arg1 + 0x7c).b != 0
                    && sub_410070(esi, arg1 + 0x98).b != 0 && sub_5546f0(esi, &arg2).b != 0)
                int32_t* ecx_12 = esi
                uint32_t var_34
                uint32_t var_30
                uint32_t var_2c
                
                if (sub_5546f0(ecx_12, &var_34).b != 0 && sub_5546f0(ecx_12, &var_30).b != 0
                        && sub_5546f0(ecx_12, &var_2c).b != 0)
                    int32_t* ecx_13 = esi
                    uint32_t var_28
                    
                    if (sub_5546f0(ecx_13, &var_28).b != 0)
                        float var_24
                        int32_t ecx_14
                        eax, ecx_14 = sub_40ff40(ecx_13, esi, &var_24)
                        float var_20
                        uint32_t var_1c
                        uint32_t var_18
                        uint32_t var_14
                        
                        if (eax.b != 0 && sub_40ff40(ecx_14, esi, &var_20).b != 0
                                && sub_5546f0(esi, &var_1c).b != 0
                                && sub_5546f0(esi, &var_18).b != 0
                                && sub_5546f0(esi, &var_14).b != 0)
                            uint32_t edx_20 = var_34
                            uint32_t esi_1 = var_30
                            *(arg1 + 0xb4) = arg2
                            uint32_t ecx_17 = var_28
                            *(arg1 + 0xb8) = edx_20
                            void var_10
                            int32_t* eax_6 = sub_407320(ecx_17, var_2c, esi_1, 0xff, &var_10)
                            long double x87_r7 = fconvert.t(var_24)
                            uint32_t esi_2 = var_1c
                            *(arg1 + 0xbc) = *eax_6
                            *(arg1 + 0xc0) = eax_6[1]
                            *(arg1 + 0xc4) = eax_6[2]
                            int32_t edx_23 = eax_6[3]
                            *(arg1 + 0xcc) = fconvert.s(x87_r7)
                            uint32_t ecx_20 = var_14
                            *(arg1 + 0xd0) = fconvert.s(fconvert.t(var_20))
                            *(arg1 + 0xc8) = edx_23
                            int32_t* eax_7 = sub_407320(ecx_20, var_18, esi_2, 0xff, &var_10)
                            *(arg1 + 0xd4) = *eax_7
                            *(arg1 + 0xd8) = eax_7[1]
                            *(arg1 + 0xdc) = eax_7[2]
                            int32_t edx_26 = eax_7[3]
                            eax_7.b = 1
                            *(arg1 + 0xe0) = edx_26
                            *(arg1 + 0xe4) = 1
                            return eax_7

eax.b = 0
return eax
