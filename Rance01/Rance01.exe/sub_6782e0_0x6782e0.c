// 函数: sub_6782e0
// 地址: 0x6782e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi = arg2
char* eax = *esi

if (&eax[4] u<= *(esi + 4))
    *(arg1 + 0x10) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
    *esi += 4
    eax = *esi
    
    if (&eax[4] u<= *(esi + 4))
        *(arg1 + 0x14) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
        *esi += 4
        int32_t* ecx_7 = esi
        
        if (sub_5546f0(ecx_7, arg1 + 0x18).b != 0 && sub_5546f0(ecx_7, arg1 + 0x1c).b != 0
                && sub_5546f0(ecx_7, arg1 + 0x20).b != 0)
            int32_t* ecx_9 = esi
            
            if (sub_5546f0(ecx_9, arg1 + 0x24).b != 0)
                arg2 = 0
                
                if (sub_5546f0(ecx_9, &arg2).b != 0)
                    *(arg1 + 0x28) = arg2
                    
                    if (sub_40fea0(esi, arg1 + 0x2c).b != 0 && sub_40fea0(esi, arg1 + 0x2d).b != 0
                            && sub_410070(esi, arg1 + 0x30).b != 0)
                        int32_t* ecx_12 = esi
                        sub_5546f0(ecx_12, arg1 + 0x4c)
                        sub_5546f0(ecx_12, arg1 + 0x50)
                        sub_5546f0(ecx_12, arg1 + 0x54)
                        sub_5546f0(esi, arg1 + 0x58)
                        sub_5546f0(esi, arg1 + 0x5c)
                        sub_5546f0(esi, arg1 + 0x60)
                        uint32_t* eax_10
                        eax_10.b = 1
                        *(arg1 + 0x64) = 1
                        return eax_10

eax.b = 0
return eax
