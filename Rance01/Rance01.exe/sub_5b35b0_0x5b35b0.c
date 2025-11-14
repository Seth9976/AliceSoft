// 函数: sub_5b35b0
// 地址: 0x5b35b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax

if (arg4 s>= 0x11)
    *arg1 = zx.d(*(arg2 + 2))
    arg1[1] = zx.d(*(arg2 + 0xd)) << 8 | zx.d(*(arg2 + 0xc))
    arg1[2] = zx.d(*(arg2 + 0xf)) << 8 | zx.d(*(arg2 + 0xe))
    uint32_t ecx_5 = zx.d(*(arg2 + 0x10))
    eax = *arg1
    arg1[3] = ecx_5
    
    if ((eax == 2 || eax == 0xa) && arg1[1] s> 0 && arg1[2] s> 0 && (ecx_5 == 0x18 || ecx_5 == 0x20)
            && sub_5b3680(arg1, arg3).b != 0)
        eax = *arg1
        
        if (eax == 2)
            if (arg1[3] != 0x18)
                sub_5b3780(arg1, *(arg3 + 0x10), arg2)
                int32_t eax_8
                eax_8.b = 1
                return eax_8
            
            sub_5b36e0(arg1, *(arg3 + 0x10), arg2)
            int32_t eax_6
            eax_6.b = 1
            return eax_6
        
        if (eax == 0xa)
            if (arg1[3] != 0x18)
                sub_5b3930(arg1, *(arg3 + 0x10), arg2)
                int32_t eax_10
                eax_10.b = 1
                return eax_10
            
            sub_5b3820(arg1, *(arg3 + 0x10), arg2)
            int32_t eax_9
            eax_9.b = 1
            return eax_9

eax.b = 0
return eax
