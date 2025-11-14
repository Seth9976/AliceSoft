// 函数: sub_434210
// 地址: 0x434210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
char* edx = *esi
int32_t ebx = esi[1]

if (&edx[4] u<= ebx)
    arg1 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *esi = &edx[4]
    
    if (&edx[8] u<= ebx)
        uint32_t edx_7 = (zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])
        uint32_t ebx_3 = zx.d(edx[4])
        *esi = &edx[8]
        *(arg2 + 0x14) = arg1
        *(arg2 + 0x18) = edx_7 << 8 | ebx_3
        
        if (sub_5546f0(esi, arg2 + 0x1c).b != 0)
            arg1 = *esi
            
            if (arg1 + 1 u<= esi[1])
                *(arg2 + 0x24) = *arg1 == 1
                *esi += 1
                uint32_t var_8
                
                if (sub_5546f0(esi, arg2 + 0x28).b != 0 && sub_5546f0(esi, arg2 + 0x2c).b != 0
                        && sub_5546f0(esi, arg2 + 0x30).b != 0
                        && sub_5546f0(esi, arg2 + 0x34).b != 0
                        && sub_5546f0(esi, arg2 + 0x38).b != 0
                        && sub_5546f0(esi, arg2 + 0x3c).b != 0
                        && sub_5546f0(esi, arg2 + 0x40).b != 0 && sub_5546f0(esi, &var_8).b != 0)
                    *(arg2 + 0x44) = var_8
                    
                    if (sub_5546f0(esi, &var_8).b != 0)
                        *(arg2 + 0x48) = var_8
                        
                        if (sub_40fea0(esi, arg2 + 0x4c).b != 0
                                && sub_40fea0(esi, arg2 + 0x4d).b != 0
                                && sub_40fea0(esi, arg2 + 0x4e).b != 0)
                            *(arg2 + 0x50) = 0
                            *(arg2 + 0x58) = 0
                            *(arg2 + 0x23c) = 0
                            uint32_t var_4
                            
                            if (sub_5ee210(esi, arg2 + 0x78).b != 0
                                    && sub_5ee210(esi, arg2 + 0x88).b != 0
                                    && sub_5ee210(esi, arg2 + 0x98).b != 0
                                    && sub_5ee210(esi, arg2 + 0xa8).b != 0
                                    && sub_5ec0e0(arg2 + 0xb8, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0xc8, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0xd8, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0xe8, esi).b != 0
                                    && sub_5ee210(esi, arg2 + 0xf8).b != 0
                                    && sub_5ec0e0(arg2 + 0x108, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0x118, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0x128, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0x138, esi).b != 0
                                    && sub_5ec0e0(arg2 + 0x148, esi).b != 0
                                    && sub_5ee210(esi, arg2 + 0x178).b != 0
                                    && sub_5ee210(esi, arg2 + 0x188).b != 0
                                    && sub_5546f0(esi, &var_8).b != 0
                                    && sub_5546f0(esi, &var_4).b != 0)
                                uint32_t eax_19 = var_4
                                *(arg2 + 0x198) = var_8
                                *(arg2 + 0x19c) = eax_19
                                
                                if (sub_5546f0(esi, arg2 + 0x70).b != 0
                                        && sub_5546f0(esi, arg2 + 0x74).b != 0
                                        && sub_5546f0(esi, &var_4).b != 0
                                        && sub_5546f0(esi, &var_8).b != 0)
                                    void* eax_20 = *(arg2 + 0x21c)
                                    uint32_t ecx_22 = var_4
                                    
                                    if (*(eax_20 + 8) != ecx_22)
                                        *(eax_20 + 8) = ecx_22
                                    
                                    void* eax_21 = *(arg2 + 0x21c)
                                    uint32_t ecx_23 = var_8
                                    
                                    if (*(eax_21 + 0xc) != ecx_23)
                                        *(eax_21 + 0xc) = ecx_23
                                    
                                    int32_t ecx_24
                                    arg1, ecx_24 = sub_40ff40(ecx_23, esi, arg2 + 0x1a0)
                                    
                                    if (arg1.b != 0 && sub_40ff40(ecx_24, esi, arg2 + 0x1a4).b != 0)
                                        int32_t ecx_26
                                        arg1, ecx_26 = sub_40ff40(arg2 + 0x1a8, esi, arg2 + 0x1a8)
                                        
                                        if (arg1.b != 0)
                                            int32_t ecx_27
                                            arg1, ecx_27 = sub_40ff40(ecx_26, esi, arg2 + 0x1ac)
                                            
                                            if (arg1.b != 0
                                                    && sub_40ff40(ecx_27, esi, arg2 + 0x1b0).b != 0
                                                    && sub_40fea0(esi, arg2 + 0x6d).b != 0
                                                    && sub_40fea0(esi, arg2 + 0x218).b != 0
                                                    && sub_5546f0(esi, &var_4).b != 0)
                                                *(arg2 + 0xc) = 1
                                                arg1.b = 1
                                                return arg1

arg1.b = 0
return arg1
