// 函数: sub_571cd0
// 地址: 0x571cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = *arg1
int32_t ebp = arg1[1]
char* ebx = eax + 4
int32_t var_4 = ebp

if (ebx u<= ebp)
    uint32_t esi_7 =
        ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
    
    if (esi_7 s>= 0)
        int32_t* edi_2 = arg2 + 0xc
        int32_t* var_c_1 = edi_2
        sub_572140(esi_7, edi_2)
        int32_t var_24_1 = 0
        int32_t eax_2
        
        if (esi_7 s> 0)
            int32_t var_30_1 = 0
            
            while (true)
                int32_t* esi_9 = *edi_2 + var_30_1
                int32_t* var_20_1 = esi_9
                
                if (&ebx[4] u> ebp)
                    goto label_571d87
                
                uint32_t edx_2 = zx.d(ebx[1])
                uint32_t ecx_2 = zx.d(*ebx)
                uint32_t edi_9 = ((zx.d(ebx[3]) << 8 | zx.d(ebx[2])) << 8 | edx_2) << 8 | ecx_2
                ebx = &ebx[4]
                
                if (edi_9 s< 0)
                    goto label_571d87
                
                sub_571460(edi_9, edx_2, ecx_2, esi_9)
                uint32_t var_28_1 = 0
                
                if (edi_9 s> 0)
                    int32_t var_34_1 = 0
                    
                    while (true)
                        uint32_t* ecx_4 = *esi_9 + var_34_1
                        
                        if (&ebx[4] u> ebp)
                            goto label_571d87
                        
                        *ecx_4 = ((zx.d(ebx[3]) << 8 | zx.d(ebx[2])) << 8 | zx.d(ebx[1])) << 8
                            | zx.d(*ebx)
                        eax = &ebx[8]
                        
                        if (eax u> ebp)
                            goto label_571d87
                        
                        ebx = eax + 4
                        
                        if (ebx u> ebp)
                            goto label_571d87
                        
                        uint32_t edi_16 = ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8
                            | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
                        
                        if (edi_16 s< 0)
                            goto label_571d87
                        
                        sub_571850(edi_16, &ecx_4[1])
                        uint32_t var_2c_1 = 0
                        
                        if (edi_16 s> 0)
                            arg2 = nullptr
                            
                            do
                                void* esi_15 = ecx_4[1] + arg2
                                
                                if (&ebx[2] u> ebp)
                                    goto label_571d87
                                
                                *esi_15 = zx.d(zx.w(ebx[1]) << 8) | zx.d(*ebx)
                                
                                if (&ebx[6] u> ebp)
                                    goto label_571d87
                                
                                uint32_t ecx_7 = zx.d(ebx[2])
                                uint32_t eax_18 =
                                    ((zx.d(ebx[5]) << 8 | zx.d(ebx[4])) << 8 | zx.d(ebx[3])) << 8
                                void* var_8 = &ebx[6]
                                *(esi_15 + 4) = eax_18 | ecx_7
                                uint32_t var_18
                                
                                if (sub_5546f0(&var_8, &var_18).b == 0)
                                    goto label_571d87
                                
                                arg2 += 0xc
                                ebp = var_4
                                ebx = var_8
                                *(esi_15 + 8) = var_18
                                eax = var_2c_1 + 1
                                var_2c_1 = eax
                            while (eax s< edi_16)
                        
                        var_34_1 += 0x14
                        eax = var_28_1 + 1
                        var_28_1 = eax
                        
                        if (eax s>= edi_9)
                            break
                        
                        esi_9 = var_20_1
                
                var_30_1 += 0x10
                eax_2 = var_24_1 + 1
                var_24_1 = eax_2
                
                if (eax_2 s>= esi_7)
                    break
                
                edi_2 = var_c_1
        
        eax_2.b = 1
        return eax_2

label_571d87:
eax.b = 0
return eax
