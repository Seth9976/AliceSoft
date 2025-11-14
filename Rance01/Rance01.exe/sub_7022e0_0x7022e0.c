// 函数: sub_7022e0
// 地址: 0x7022e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_8 = arg3
void* var_2c = &data_78d920
int32_t i_2 = 0x10
int32_t var_c = 0
uint64_t st0
uint64_t st1
int32_t i

do
    int32_t eax_4 = zx.d((*(arg2 + (*var_2c << 1))).w) | *(arg2 + (*(var_2c + 4) << 1)) << 0x10
    int32_t ecx_4 =
        zx.d((*(arg2 + (*(var_2c + 8) << 1))).w) | *(arg2 + (*(var_2c + 0xc) << 1)) << 0x10
    
    if ((eax_4 | ecx_4) == 0)
        var_2c += 0x10
        var_c += 4
    else
        st0 = _m_pcmpeqw(zx.q(eax_4), 0)
        st1 = _m_pcmpeqw(zx.q(ecx_4), 0)
        int16_t temp0_3[0x4] = _m_pcmpeqw(0, 0)
        
        if ((st0 | st1).d != 0)
            int32_t eax_10 = (not.d(st0.d) & 0x20001) | ((st1 & not.q(temp0_3)).d & 0x80004)
            void* var_2c_1 = var_2c + 0x10
            jump((((zx.d((eax_10 u>> 0x10).w) | zx.d(eax_10.w)) - 1) << 3) + &data_7023a0)
        
        int32_t* eax_18 = var_8
        int32_t edx_8 = var_c
        var_c = 0
        var_2c += 0x10
        eax_18[0x41] = 0
        *eax_18 = eax_4
        eax_18[1] = eax_4 u>> 0x10
        eax_18[0x42] = 0
        eax_18[0x40] = edx_8
        eax_18[2] = ecx_4
        var_8 = &eax_18[4]
        eax_18[0x43] = 0
        eax_18[3] = ecx_4 u>> 0x10
    
    i = i_2
    i_2 -= 1
while (i != 1)
uint32_t eax_21 = (var_8 - arg3) u>> 2
*arg5 = eax_21
int32_t i_3 = (eax_21 + 4) & 0xfc
void* esi_8 = arg3
int16_t (* edi_4)[0x4] = arg3
int32_t i_1

do
    uint32_t st7[0x2] = *(esi_8 + 8)
    st0 = _m_pslldi(*esi_8, 0x10)
    uint32_t temp0_5[0x2] = _m_pslldi(st7, 0x10)
    st0 = _m_packssdw(_m_psradi(st0, 0x10), _m_psradi(temp0_5, 0x10))
    st1 = st0
    st0 = _m_pcmpgtw(st0, 0)
    uint64_t st3 = st1
    st1 &= st0
    int16_t st2[0x4] = st0
    st0 = (st0 & not.q(_m_psubw(0, st3))) | st1
    st2 = (st2 & not.q(__psubw_mmxq_memq(st3, data_78de78))) | st1
    st3 = st0
    st1 = __pcmpgtw_mmxq_memq(st0, data_78dea8)
    st0 = _m_psrlwi(st0, 8)
    *edi_4 = st2
    st2 = st1
    st1 &= data_78de98
    st0 &= st2
    st2 &= not.q(st3)
    uint64_t st5 = st0
    st0 |= st2
    st5 = __pcmpgtw_mmxq_memq(st5 | st2, data_78dea0)
    uint64_t st4 = st0
    st3 = st5
    st0 = _m_psrlwi(st0, 4)
    st5 &= data_78de90
    st0 &= st3
    st2 = st0
    st3 &= not.q(st4)
    st0 |= st3
    int16_t temp0_16[0x4] = __pcmpgtw_mmxq_memq(st2 | st3, data_78de88)
    st4 = st0
    st3 = temp0_16
    st0 = _m_psrlwi(st0, 2)
    st2 = temp0_16 & data_78de80
    st0 &= st3
    uint64_t st6 = st0
    st3 &= not.q(st4)
    st0 |= st3
    st6 = __pcmpgtw_mmxq_memq(st6 | st3, data_78de78)
    edi_4 = &edi_4[1]
    esi_8 += 0x10
    edi_4[0x3f] = _m_paddw((_m_psrlwi(st0, 1) & st6) | (st6 & not.q(st0)), 
        st1 | st5 | (st6 & data_78de78) | st2)
    i_1 = i_3
    i_3 -= 4
while (i_1 != 4)
*arg4 = var_c
return arg1
