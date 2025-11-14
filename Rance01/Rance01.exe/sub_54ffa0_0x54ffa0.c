// 函数: sub_54ffa0
// 地址: 0x54ffa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg2[7] = arg1
uint32_t result = sub_54fab0(arg3, arg2)

if (result.b == 0)
    return result

int32_t ebx = 0
int32_t var_c = 0

if (arg3 s> 0)
    int32_t var_8_1 = 0
    
    while (true)
        void* esi_2 = *arg4 + var_8_1
        *(arg2[8] + (ebx << 2)) = *(esi_2 + 0x1c)
        
        switch (*(esi_2 + 0x1c))
            case 0, 0xa, 0xb, 0x1b, 0x2f
                if (arg2[1] != 0)
                    *(*arg2 + (ebx << 2)) = 0
                else
                    *(ebx << 2) = 0
                
                goto label_55010f
            case 0xc
                result = sub_552830(arg2[5])
                
                if (result s>= 0)
                    if (arg2[1] != 0)
                        *(*arg2 + (ebx << 2)) = result
                    else
                        *(ebx << 2) = result
                    
                    goto label_55010f
            case 0xd, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 
                    0x44
                if (arg2[1] != 0)
                    *(*arg2 + (ebx << 2)) = 0xffffffff
                else
                    *(ebx << 2) = 0xffffffff
                
                goto label_55010f
            case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                void* ebx_1 = arg2[5]
                uint32_t eax_2 = sub_5527e0(ebx_1)
                *(*(ebx_1 + 8) + eax_2 * 4) = sub_5524b0(ebx_1 + 0x20)
                
                if (eax_2 s>= 0)
                    void* ecx_4 = arg2[5]
                    
                    if (eax_2 u< (*(ecx_4 + 0xc) - *(ecx_4 + 8)) s>> 2)
                        void* ecx_6 = *(*(ecx_4 + 8) + (eax_2 << 2))
                        
                        if (ecx_6 != 0)
                            *(ecx_6 + 0x34) = *(esi_2 + 0x1c)
                            *(ecx_6 + 0x38) = *(esi_2 + 0x20)
                            
                            if (arg2[1] != 0)
                                *(*arg2 + (var_c << 2)) = eax_2
                            else
                                *(var_c << 2) = eax_2
                            
                        label_55010b:
                            ebx = var_c
                        label_55010f:
                            var_8_1 += 0x2c
                            ebx += 1
                            var_c = ebx
                            
                            if (ebx s>= arg3)
                                break
                            
                            continue
            case 0x3f
                void* esi_3 = arg2[5]
                int32_t eax_8 = sub_5527e0(esi_3)
                *(*(esi_3 + 8) + (eax_8 << 2)) = sub_5525f0(esi_3 + 0x20)
                
                if (eax_8 s>= 0)
                    if (arg2[1] != 0)
                        result = *arg2
                    else
                        result = 0
                    
                    *(result + (var_c << 2)) = eax_8
                    goto label_55010b
        
        result.b = 0
        return result

result.b = 1
return result
