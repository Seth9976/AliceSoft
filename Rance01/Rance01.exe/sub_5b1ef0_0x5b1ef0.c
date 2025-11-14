// 函数: sub_5b1ef0
// 地址: 0x5b1ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax
int32_t edx

if (arg3 s>= 0x28 && sub_5b1fe0(eax, edx, arg1).b != 0)
    int32_t* eax_1 = arg1[2]
    int32_t edx_2
    
    if (eax_1 != 0x10)
    label_5b1f61:
        
        if (eax_1 == 8)
            int32_t* ecx_4 = data_797d74
            
            if (ecx_4 != 0)
                eax_1, edx_2 = (*(*ecx_4 + 0x10))(*arg1, arg1[1])
                
                if (eax_1 != 0)
                label_5b1f82:
                    *(arg2 + 0x10) = eax_1
                    int32_t ecx_5 = arg1[2]
                    
                    if (ecx_5 == 0x10)
                        char eax_4 = sub_5b2040(eax_1, arg1)
                        
                        if (eax_4 == 0)
                            return eax_4
                        
                        goto label_5b1faf
                    
                    if (ecx_5 != 8)
                    label_5b1faf:
                        
                        if (arg1[9].b != 0)
                            eax_1 = sub_5b24d0(arg1, *(arg2 + 0x10))
                        
                        if (arg1[9].b == 0 || eax_1.b != 0)
                            int32_t ecx_7 = arg1[3]
                            *(arg2 + 0x18) = arg1[4]
                            *(arg2 + 0x14) = ecx_7
                            int32_t eax_7
                            eax_7.b = 1
                            return eax_7
                    else
                        eax_1 = sub_5b2630(eax_1, edx_2, arg1)
                        
                        if (eax_1.b != 0)
                            goto label_5b1faf
    else if (arg1[9].b == 0)
        if (eax_1 != 0x10 || arg1[9].b != 0)
            goto label_5b1f61
        
        int32_t* ecx_3 = data_797d74
        
        if (ecx_3 != 0)
            eax_1, edx_2 = (*(*ecx_3 + 0xc))(*arg1, arg1[1], 0x20)
            goto label_5b1f30
    else
        int32_t* ecx_2 = data_797d74
        
        if (ecx_2 != 0)
            eax_1, edx_2 = (*(*ecx_2 + 8))(*arg1, arg1[1], 0x20)
        label_5b1f30:
            
            if (eax_1 != 0)
                goto label_5b1f82
    eax_1.b = 0
    return eax_1

eax.b = 0
return eax
