// 函数: sub_54fda0
// 地址: 0x54fda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 3
int32_t ebp_2 = (edx_1 u>> 0x1f) + edx_1
arg1[7] = arg3
int32_t var_8 = ebp_2
uint32_t result

if (sub_54fab0(ebp_2, arg1).b != 0 && sub_54fcc0(arg1, arg2).b != 0)
    int32_t ebx = 0
    arg3 = 0
    
    if (ebp_2 s> 0)
        int32_t var_10_1 = 0
        
        while (true)
            void* esi_3 = *arg2 + var_10_1
            *(arg1[8] + (ebx << 2)) = *(esi_3 + 0x1c)
            int32_t var_4
            int32_t ecx_9
            
            switch (*(esi_3 + 0x1c))
                case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 
                        0x2f, 0x33, 0x34, 0x43, 0x44
                    goto label_54ff18
                case 0xc
                    result = sub_552830(arg1[5])
                    
                    if (result s>= 0)
                        if (arg1[1] != 0)
                            ecx_9 = *arg1
                            goto label_54ff15
                        
                        ecx_9 = 0
                    label_54ff15:
                        *(ecx_9 + (ebx << 2)) = result
                    label_54ff18:
                        var_10_1 += 0x2c
                        ebx += 1
                        arg3 = ebx
                        
                        if (ebx s>= ebp_2)
                            break
                        
                        continue
                case 0xd
                    if (sub_553750(arg1[5], *(esi_3 + 0x20), &var_4, arg4).b != 0)
                        if (arg1[1] != 0)
                            *(*arg1 + (ebx << 2)) = var_4
                        else
                            *(ebx << 2) = var_4
                        
                        goto label_54ff18
                case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                    void* ebx_1 = arg1[5]
                    uint32_t eax_4 = sub_5527e0(ebx_1)
                    *(*(ebx_1 + 8) + eax_4 * 4) = sub_5524b0(ebx_1 + 0x20)
                    
                    if (eax_4 s>= 0)
                        void* ecx_5 = arg1[5]
                        
                        if (eax_4 u< (*(ecx_5 + 0xc) - *(ecx_5 + 8)) s>> 2)
                            void* ecx_7 = *(*(ecx_5 + 8) + (eax_4 << 2))
                            
                            if (ecx_7 != 0)
                                *(ecx_7 + 0x34) = *(esi_3 + 0x1c)
                                *(ecx_7 + 0x38) = *(esi_3 + 0x20)
                                
                                if (arg1[1] != 0)
                                    ebp_2 = var_8
                                    *(*arg1 + (arg3 << 2)) = eax_4
                                    ebx = arg3
                                else
                                    ebp_2 = var_8
                                    *(arg3 << 2) = eax_4
                                    ebx = arg3
                                
                                goto label_54ff18
                case 0x3f
                    result = sub_552860(arg1[5])
                    
                    if (result s>= 0)
                        if (arg1[1] != 0)
                            ecx_9 = *arg1
                            goto label_54ff15
                        
                        ecx_9 = 0
                        goto label_54ff15
            
            result.b = 0
            return result
    
    result.b = 1
    return result

result.b = 0
return result
