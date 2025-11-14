// 函数: sub_701df0
// 地址: 0x701df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2
int32_t edx_3

while (true)
    int32_t edx_2 = arg5 + *(arg1 + 0xc)
    
    if (edx_2 s<= 0x40)
        int64_t temp0_1 = _m_psubd(0, _m_pcmpeqb(arg2, arg2))
        _m_psllq(zx.q(arg4) & _m_psubd(_m_psllq(temp0_1, zx.q(arg5)), temp0_1), zx.q(0x40 - edx_2))
        *(arg1 + 0xc) = edx_2
        return 0
    
    edx_3 = edx_2 - arg5
    ecx_2 = *(arg1 + 0x10)
    
    if (*(arg1 + 0x18) - &ecx_2[1] s>= 4)
        break
    
    if (*(arg1 + 0x3c) == 0)
        return 0xffffffe4
    
    int32_t result = sub_701da0(arg1)
    
    if (result != 0)
        return result

uint64_t st0 = _m_psllwi(arg3, 8)
int64_t st1 = _m_psrlwi(arg3, 8)
st0 = _mm_shuffle_pi16(st0 | st1, 0x1b)
int32_t eax_3 = _m_pcmpeqb(st0, _m_pcmpeqb(st1, st1)).d
int32_t edx_4

switch (eax_3)
    case 0
        *ecx_2 = st0.d
        edx_4 = edx_3 - 0x20
        _m_psllqi(arg3, 0x20)
        *(arg1 + 0x10) = &ecx_2[1]
        *(arg1 + 0x1c) += 4
    case 0xff, 0xff0000ff
        arg2 = data_78de20
        *ecx_2 = (_m_psllqi(st0 & data_78de40, 8) | arg2).d
        _m_psllqi(arg3, 0x18)
        edx_4 = edx_3 - 0x18
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xff00
        arg2 = data_78de68
        *ecx_2 = ((st0 & data_78de60) | _m_psllqi(st0 & arg2, 8)).d
        _m_psllqi(arg3, 0x18)
        edx_4 = edx_3 - 0x18
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xffff, 0xff00ffff
        *ecx_2 = data_78de30.d
        _m_psllqi(arg3, 0x10)
        edx_4 = edx_3 - 0x10
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xff0000
        *ecx_2 = (st0 & data_78de58).d
        _m_psllqi(arg3, 0x18)
        edx_4 = edx_3 - 0x18
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xff00ff
        arg2 = data_78de20
        *ecx_2 = (_m_psllqi(st0 & data_78de40, 8) | arg2).d
        edx_4 = edx_3 - 0x10
        _m_psrlqi(_m_psllqi(arg3, 0x18), 8)
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xffff00
        *ecx_2 = ((st0 & data_78de60) | data_78de70).d
        edx_4 = edx_3 - 0x10
        _m_psrlqi(_m_psllqi(arg3, 0x18), 8)
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xff000000
        *ecx_2 = st0.d
        edx_4 = edx_3 - 0x18
        _m_psrlqi(_m_psllqi(arg3, 0x20), 8)
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xff00ff00
        int64_t st2 = data_78de68
        uint64_t st6 = _m_punpcklwd(st0, 0)
        arg2 = _m_psllqi(st0 & st2, 8)
        *ecx_2 = (st6 | arg2).d
        _m_psllqi(arg3, 0x18)
        edx_4 = edx_3 - 0x18
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    case 0xffff0000
        *ecx_2 = (st0 & data_78de58).d
        _m_psllqi(arg3, 0x18)
        edx_4 = edx_3 - 0x18
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4
    default
        if (eax_3 != 0xffff00ff)
            return 0xffffffe8
        
        arg2 = data_78de20
        *ecx_2 = (_m_psllqi(st0 & data_78de40, 8) | arg2).d
        edx_4 = edx_3 - 0x10
        _m_psrlqi(_m_psllqi(arg3, 0x18), 8)
        *(arg1 + 0x1c) += 4
        *(arg1 + 0x10) += 4
        *(arg1 + 0xc) = edx_4

int32_t edx_5 = edx_4 + arg5
int64_t temp0_12 = _m_psubd(0, _m_pcmpeqb(arg2, arg2))
_m_psllq(zx.q(arg4) & _m_psubd(_m_psllq(temp0_12, zx.q(arg5)), temp0_12), zx.q(0x40 - edx_5))
*(arg1 + 0xc) = edx_5
return 0
