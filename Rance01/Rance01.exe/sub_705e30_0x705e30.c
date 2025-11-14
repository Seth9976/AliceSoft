// 函数: sub_705e30
// 地址: 0x705e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_1 = arg3 + *(arg4 + 0xc)
uint64_t st7 = *arg4
arg1 = _m_pcmpeqb(arg1, arg1)
uint64_t temp0_1 = _m_psllq(zx.q(arg2), zx.q(0x40 - esi_1))
*(arg4 + 0xc) = esi_1
int32_t result = 0
st7 |= temp0_1
uint64_t st0 = st7

if (esi_1 s> 0x20)
    void* edx_1 = arg4[2].d
    result = 0xffffffe4
    
    if (arg4[3].d - edx_1 u>= 4)
        while (true)
            *(arg4 + 0x1c) += 4
            uint64_t temp0_2 = _m_psrlqi(st0, 0x20)
            char temp0_3[0x8] = _m_pcmpeqb(arg1, temp0_2)
            uint64_t temp0_4 = _m_psrlqi(temp0_2, 8)
            edx_1 += 4
            int32_t eax_1 = temp0_3[0].d
            
            if (eax_1 == 0)
                *(edx_1 + 0x24)
                esi_1 -= 0x20
                st0 = _m_psradi(_m_pslldi(_m_punpckhwd(temp0_4, temp0_2.d), 0x10), 0x10)
                st0 = _m_packssdw(st0, st0)
                st0 = _m_punpcklwd(_m_psrlqi(st0, 0x10), st0.d)
                st7 = _m_psllqi(st7, 0x20)
                *(edx_1 - 4) = st0.d
                break
            
            uint32_t eax_2 = eax_1 u>> 8
            uint64_t st4
            uint64_t st5
            
            if (eax_2 s>= 0xff0000)
                if (eax_2 == 0xff0000)
                    uint64_t temp0_12 = _m_psrlqi(st7, 0x28)
                    esi_1 -= 0x18
                    uint64_t temp0_15 =
                        _m_psllqi(_m_punpckhwd(_m_psrlqi(temp0_12, 8), temp0_12.d), 0x10)
                    arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                    st5 = temp0_15 | data_78e270
                    st7 = _m_psllqi(st7, 0x18)
                    st0 = st7
                    *(edx_1 - 4) = st5.d
                    
                    if (esi_1 s< 0x20)
                        break
                else if (eax_2 != 0xffff00)
                    uint64_t temp0_28 = _m_psllqi(st7, 0x18)
                    esi_1 -= 0x10
                    st4 = _m_psllqi(_m_psrlqi(st7, 0x30), 0x10) | data_78e270
                    st7 = _m_psrlqi(temp0_28, 8)
                    st0 = st7
                    *(edx_1 - 4) = st4.d
                    arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                    
                    if (esi_1 s< 0x20)
                        break
                else
                    st5 = data_78e280
                    st7 = _m_psllqi(st7, 0x10)
                    st0 = st7
                    esi_1 -= 0x10
                    *(edx_1 - 4) = st5.d
                    arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                    
                    if (esi_1 s< 0x20)
                        break
            else if (eax_2 s>= 0xff00)
                if (eax_2 == 0xffff)
                    uint64_t temp0_33 = _m_psllqi(st7, 0x18)
                    st4 = _m_psrlqi(st7, 0x38) | data_78e288
                    st7 = _m_psrlqi(temp0_33, 8)
                    st0 = st7
                    esi_1 -= 0x10
                    *(edx_1 - 4) = st4.d
                    arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                    
                    if (esi_1 s< 0x20)
                        break
                else
                    st4 = st7
                    st7 = _m_psllqi(st7, 0x18)
                    uint64_t temp0_19 = _m_psrlqi(st4, 0x28)
                    st0 = st7
                    st4 = _m_pslldi(temp0_19, 0x18) | data_78e278
                    esi_1 -= 0x18
                    *(edx_1 - 4) = (_m_psrlqi(temp0_19, 0x10) | st4).d
                    arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                    
                    if (esi_1 s< 0x20)
                        break
            else if (eax_2 == 0)
                uint64_t temp0_37 = _m_psllqi(st7, 0x20)
                uint64_t temp0_38 = _m_psrlqi(st7, 0x20)
                arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                esi_1 -= 0x18
                st4 = _m_psradi(_m_pslldi(_m_punpckhwd(_m_psrlqi(temp0_38, 8), temp0_38.d), 0x10), 
                    0x10)
                st4 = _m_packssdw(st4, st4)
                st4 = _m_punpcklwd(_m_psrlqi(st4, 0x10), st4.d)
                st7 = _m_psrlqi(temp0_37, 8)
                *(edx_1 - 4) = st4.d
                st0 = st7
                
                if (esi_1 s< 0x20)
                    break
            else
                uint64_t temp0_23 = _m_psllqi(data_78e278, 0x18)
                uint64_t temp0_24 = _m_psrlqi(st7, 0x28)
                esi_1 -= 0x18
                st5 = _m_psrlqi(temp0_23 | temp0_24, 0x10) | (temp0_24 & data_78e278)
                st7 = _m_psllqi(st7, 0x18)
                arg1 = _m_pcmpeqb(temp0_3, temp0_3)
                *(edx_1 - 4) = st5.d
                st0 = st7
                
                if (esi_1 s< 0x20)
                    break
        
        result = 0
        arg4[2].d = edx_1
        *(arg4 + 0xc) = esi_1

*arg4 = st7
return result
