// 函数: sub_4ca2c0
// 地址: 0x4ca2c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** eax

if (arg2 == 0)
    struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** esi_1 =
        *(arg1 + 0x24)
    
    if (esi_1 != 0)
        sub_4daaf0(esi_1)
        struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** 
            var_18_1 = esi_1
        sub_6b4d5b()
        *(arg1 + 0x24) = 0
        int32_t eax_1
        eax_1.b = 1
        return eax_1
else if (*(arg1 + 0x14) != 0)
    int32_t edx
    
    if (*(arg1 + 0x24) == 0)
        eax, edx = operator new(0x5c)
        
        if (eax == 0)
            eax = nullptr
        else
            *eax =
                &sealengine::CMotionObjectShadowSphere::`vftable'{for `sealengine::CDrawInstance'}
            eax[1] = &sealengine::CSphere::`vftable'{for `sealengine::CDrawInstance'}
            __builtin_memset(&eax[2], 0, 0x11)
            __builtin_memset(&eax[7], 0, 0x40)
            __builtin_memcpy(&eax[7], 0x758a88, 0x40)
        
        *(arg1 + 0x24) = eax
        
        if (eax == 0)
            eax.b = 0
            return eax
    
    if (arg3 s< 1)
        sub_4dabe0(*(arg1 + 0x24))
    else
        void* eax_2 = *(arg1 + 0x24)
        
        if (*(eax_2 + 0x18) == 0)
            eax, edx = sub_4daba0(eax_2)
        
        if (*(eax_2 + 0x18) == 0 && eax.b == 0)
            eax.b = 0
            return eax
        
        if (sub_5194c0(*(arg1 + 0x14) + 0x144, edx, *(arg1 + 0x24) + 4).b == 0)
            eax.b = 0
            return eax

eax.b = 1
return eax
