// 函数: sub_5b4d20
// 地址: 0x5b4d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx

if (arg1 u<= 0x20)
    int32_t ecx_1 = arg2[4]
    int32_t edx_1 = *arg2
    var_4 = *((arg1 << 2) + &data_745e00)
    int32_t eax_1 = arg2[1]
    int32_t esi_1 = arg1 + eax_1
    
    if (edx_1 s< ecx_1 - 4)
    label_5b4d65:
        char* ebp = arg2[3]
        ecx_1.b = eax_1.b
        uint32_t ebx_5 = zx.d(*ebp) u>> ecx_1.b
        
        if (esi_1 s> 8)
            ebx_5 |= zx.d(ebp[1]) << (8 - eax_1.b)
            
            if (esi_1 s> 0x10)
                ebx_5 |= zx.d(ebp[2]) << (0x10 - eax_1.b)
                
                if (esi_1 s> 0x18)
                    ebx_5 |= zx.d(ebp[3]) << (0x18 - eax_1.b)
                    
                    if (esi_1 s> 0x20 && eax_1 != 0)
                        ebx_5 |= zx.d(ebp[4]) << (0x20 - eax_1.b)
        
        int32_t eax_4
        int32_t edx_10
        edx_10:eax_4 = sx.q(esi_1)
        int32_t eax_6 = (eax_4 + (edx_10 & 7)) s>> 3
        *arg2 += eax_6
        arg2[1] = esi_1 & 7
        arg2[3] = &ebp[eax_6]
        return ebx_5 & var_4
    
    if (edx_1 s<= ecx_1 - ((esi_1 + 7) s>> 3))
        if (esi_1 == 0)
            return 0
        
        goto label_5b4d65

int32_t edx_12 = arg2[4]
arg2[3] = 0
*arg2 = edx_12
arg2[1] = 1
return 0xffffffff
