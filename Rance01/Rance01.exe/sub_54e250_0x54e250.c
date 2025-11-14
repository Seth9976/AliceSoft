// 函数: sub_54e250
// 地址: 0x54e250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2
int32_t ebp = *(arg4 + 0x28)
void* var_8 = nullptr
void* eax

if (ebp s> 0)
    int32_t ebx_2 = ebp * 0x2c
    int32_t* ecx = arg1 - esi
    int32_t* var_4_1 = ecx
    
    while (true)
        int32_t* eax_2
        
        switch (*(*(arg4 + 0x3c) + ebx_2 - 0x10))
            case nullptr, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 
                    0x20, 0x2f, 0x33, 0x34
                eax_2 = *(ecx + esi)
            label_54e2db:
                *esi = eax_2
                eax = var_8 + 1
                ebx_2 -= 0x2c
                esi = &esi[1]
                var_8 = eax
                
                if (eax s>= ebp)
                    break
                
                continue
            case 0xc
                eax_2 = *(ecx + esi)
                
                if (eax_2 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
                    eax_2 = *(*(arg3 + 0x1e4) + (eax_2 << 2))
                    
                    if (eax_2 != 0)
                        eax_2 = sub_552dc0(arg3 + 0x1dc, eax_2)
                        
                        if (eax_2 s>= 0)
                            ecx = var_4_1
                            goto label_54e2db
        
        eax_2.b = 0
        return eax_2

eax.b = 1
return eax
