// 函数: sub_6931c0
// 地址: 0x6931c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = arg2
char* eax = *ebp

if (&eax[4] u<= *(ebp + 4))
    *(arg1 + 0x10) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
    *ebp += 4
    eax = *ebp
    
    if (&eax[4] u<= *(ebp + 4))
        *(arg1 + 0x14) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
        *ebp += 4
        int32_t* ecx_7 = ebp
        
        if (sub_5546f0(ecx_7, arg1 + 0x18).b != 0 && sub_5546f0(ecx_7, arg1 + 0x1c).b != 0
                && sub_5546f0(ecx_7, arg1 + 0x20).b != 0 && sub_40fea0(ebp, arg1 + 0x24).b != 0)
            int32_t* ecx_9 = ebp
            uint32_t var_34
            
            if (sub_5546f0(ecx_9, &arg2).b != 0 && sub_5546f0(ecx_9, &var_34).b != 0)
                int32_t* ecx_10 = ebp
                uint32_t var_30
                uint32_t var_2c
                uint32_t var_28
                
                if (sub_5546f0(ecx_10, &var_30).b != 0 && sub_5546f0(ecx_10, &var_2c).b != 0
                        && sub_5546f0(ecx_10, &var_28).b != 0)
                    float var_24
                    int32_t ecx_12
                    eax, ecx_12 = sub_40ff40(&var_24, ebp, &var_24)
                    float var_20
                    uint32_t var_1c
                    
                    if (eax.b != 0 && sub_40ff40(ecx_12, ebp, &var_20).b != 0
                            && sub_5546f0(ebp, &var_1c).b != 0)
                        int32_t* ecx_14 = ebp
                        uint32_t var_18
                        uint32_t var_14
                        
                        if (sub_5546f0(ecx_14, &var_18).b != 0
                                && sub_5546f0(ecx_14, &var_14).b != 0)
                            uint32_t eax_5 = arg2
                            uint32_t esi = var_30
                            *(arg1 + 0x2c) = var_34
                            uint32_t ecx_16 = var_28
                            uint32_t edx_18 = var_2c
                            *(arg1 + 0x28) = eax_5
                            void var_10
                            int32_t* eax_6 = sub_407320(ecx_16, edx_18, esi, 0xff, &var_10)
                            long double x87_r7 = fconvert.t(var_24)
                            uint32_t esi_1 = var_1c
                            *(arg1 + 0x30) = *eax_6
                            *(arg1 + 0x34) = eax_6[1]
                            *(arg1 + 0x38) = eax_6[2]
                            int32_t edx_20 = eax_6[3]
                            *(arg1 + 0x40) = fconvert.s(x87_r7)
                            uint32_t ecx_19 = var_14
                            *(arg1 + 0x44) = fconvert.s(fconvert.t(var_20))
                            *(arg1 + 0x3c) = edx_20
                            int32_t* eax_7 = sub_407320(ecx_19, var_18, esi_1, 0xff, &var_10)
                            *(arg1 + 0x48) = *eax_7
                            *(arg1 + 0x4c) = eax_7[1]
                            *(arg1 + 0x50) = eax_7[2]
                            *(arg1 + 0x54) = eax_7[3]
                            
                            if (sub_410070(ebp, arg1 + 0x58) != 0
                                    && sub_5546f0(ebp, arg1 + 0x74) != 0)
                                int32_t* ecx_24 = ebp
                                
                                if (sub_5546f0(ecx_24, arg1 + 0x78) != 0
                                        && sub_5546f0(ecx_24, arg1 + 0x7c) != 0
                                        && sub_5546f0(ecx_24, arg1 + 0x80) != 0
                                        && sub_410070(ebp, arg1 + 0x84) != 0)
                                    sub_68d800(arg1, *(arg1 + 0x74))
                                    struct _EXCEPTION_REGISTRATION_RECORD** eax_11
                                    eax_11.b = 1
                                    *(arg1 + 0xa0) = 1
                                    return eax_11
                            
                            return 0

eax.b = 0
return eax
