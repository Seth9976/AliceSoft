// 函数: sub_707ee0
// 地址: 0x707ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* esi = arg2
uint8_t (* edi)[0x8] = arg4
uint8_t (* ebx)[0x8] = arg5
int32_t ecx = 3
int32_t edx = 1
int16_t st7[0x4] = data_78e2a8
uint64_t st6 = 0
uint64_t st1 = *esi
uint64_t temp0 = _m_psrlqi(st1, 0x18)
uint8_t st0[0x8] = _m_punpckhwd(st1, 0)
int64_t var_24_1
__builtin_memset(&var_24_1, 0, 0x20)
st1 = _m_punpckhwd(temp0, 0)
int64_t st2
uint64_t st3
int64_t st4
int64_t st5

while (true)
    st3 = *esi
    int64_t var_c_1
    int64_t temp0_3 = __paddw_mmxq_memq(st0, var_c_1)
    uint64_t temp0_4 = _m_psrlqi(st3, 0x30)
    int64_t temp0_5 = _m_paddw(temp0_3, st1)
    st0 = _m_pmaddwd(st0, st7)
    st5 = esi[1]
    st1 = _m_pmaddwd(st1, st7)
    var_c_1 = temp0_5
    st2 = st0
    st4 = st5
    st0 = _m_punpckldq(st0, st1.d)
    int64_t temp0_9 = _m_punpckhdq(st2, st1.d)
    uint64_t temp0_10 = _m_psrlqi(st5, 8)
    st0 = __psubd_mmxq_memq(_m_paddd(st0, temp0_9), data_78e2c0)
    st5 = _m_punpckhwd(temp0_10, st6.d)
    st0 = _m_psradi(st0, 8)
    st1 = esi[2]
    uint64_t temp0_15 = _m_psllqi(st4, 0x10)
    st0 = _m_packssdw(st0, st0)
    int64_t var_14_1
    int64_t temp0_17 = _m_paddw(var_14_1, st5)
    st3 = _m_punpckhwd(temp0_4 | temp0_15, st6.d)
    st4 = esi[1]
    int64_t temp0_19 = _m_paddw(temp0_17, st3)
    st3 = _m_pmaddwd(st3, st7)
    uint64_t temp0_21 = _m_psllqi(st1, 8)
    var_14_1 = temp0_19
    st4 = _m_punpckhwd(_m_psrlqi(st4, 0x20), st6.d)
    st5 = _m_pmaddwd(st5, st7)
    st2 = st3
    st1 = temp0_21 | _m_psrlqi(esi[1], 0x38)
    st3 = _m_punpckldq(st3, st5.d)
    int16_t var_1c_1[0x4]
    st7 = _m_paddw(var_1c_1, st4)
    int64_t temp0_28 = _m_punpckhdq(st2, st5.d)
    st1 = __punpcklbw_mmxq_memd(st1, data_78e320)
    int64_t temp0_31 = __psubd_mmxq_memq(_m_paddd(st3, temp0_28), data_78e2c0)
    st7 = _m_paddw(st7, st1)
    st5 = data_78e2a8
    st3 = _m_psradi(temp0_31, 8)
    var_1c_1 = st7
    st3 = _m_packssdw(st3, st3)
    st4 = _m_pmaddwd(st4, st5)
    st0 = _m_punpckldq(st0, st3.d)
    st3 = esi[2]
    st1 = _m_pmaddwd(st1, st5)
    *edi = st0
    uint64_t temp0_38 = _m_psrlqi(st3, 0x10)
    st0 = esi[2]
    st7 = data_78e2a8
    int64_t temp0_39 = _m_punpckhdq(st4, st1.d)
    st5 = var_24_1
    st4 = _m_punpckldq(st4, st1.d)
    st0 = _m_psrlqi(st0, 0x28)
    int64_t temp0_43 = __psubd_mmxq_memq(_m_paddd(st4, temp0_39), data_78e2c0)
    st3 = _m_punpckhwd(temp0_38, 0)
    st4 = _m_psradi(temp0_43, 8)
    int64_t temp0_46 = _m_paddw(st5, st3)
    uint8_t temp0_47[0x8] = _m_punpckhwd(st0, 0)
    st3 = _m_pmaddwd(st3, st7)
    st4 = _m_packssdw(st4, st4)
    int64_t temp0_50 = _m_paddw(temp0_46, temp0_47)
    st1 = *(arg3 + esi)
    st0 = _m_pmaddwd(temp0_47, st7)
    var_24_1 = temp0_50
    st6 = 0
    esi += arg3
    edi = &edi[2]
    int64_t temp0_55 = __psubd_mmxq_memq(
        _m_paddd(_m_punpckldq(st3, st0[0].d), _m_punpckhdq(st3, st0[0].d)), data_78e2c0)
    uint64_t temp0_56 = _m_psrlqi(st1, 0x18)
    st3 = _m_psradi(temp0_55, 8)
    edx ^= 1
    st4 = _m_punpckldq(st4, _m_packssdw(st3, st3).d)
    st0 = _m_punpckhwd(st1, 0)
    edi[-1] = st4
    
    if (edx != 0)
        st0 = var_c_1
        st5 = data_78e2b0
        st1 = st0
        st6 = data_78e2b8
        st0 = _m_pmaddwd(st0, st5)
        st1 = _m_pmaddwd(st1, st6)
        st2 = st0
        st3 = _m_pmaddwd(var_14_1, st5)
        st0 = _m_punpckldq(st0, st1.d)
        int16_t temp0_66[0x4] = _m_pmaddwd(var_1c_1, st5)
        int64_t temp0_67 = _m_punpckhdq(st2, st1.d)
        st4 = _m_pmaddwd(var_14_1, st6)
        st1 = st3
        st0 = _m_psradi(__paddd_mmxq_memq(_m_paddd(st0, temp0_67), data_78e2d8), 0xa) & data_78e300
        st3 = _m_punpckldq(st3, st4.d)
        int64_t temp0_73 = _m_punpckhdq(st1, st4.d)
        st2 = _m_pmaddwd(var_1c_1, st6)
        int64_t temp0_76 = __paddd_mmxq_memq(_m_paddd(st3, temp0_73), data_78e2d8)
        st1 = var_24_1
        st3 = _m_psradi(temp0_76, 0xa) & data_78e300
        st7 = _m_punpckldq(temp0_66, st2.d)
        st0 |= _m_psllqi(st3, 0x10)
        st3 = st1
        st7 = __paddd_mmxq_memq(_m_paddd(st7, _m_punpckhdq(temp0_66, st2.d)), data_78e2d8)
        st1 = _m_pmaddwd(st1, st5)
        st7 = _m_psradi(st7, 0xa) & data_78e300
        st3 = _m_pmaddwd(st3, st6)
        st5 = st7
        st6 = 0
        st7 = data_78e2a8
        int64_t temp0_89 = __paddd_mmxq_memq(
            _m_paddd(_m_punpckldq(st1, st3.d), _m_punpckhdq(st1, st3.d)), data_78e2d8)
        __builtin_memset(&var_24_1, 0, 0x20)
        st1 = _m_psradi(temp0_89, 0xa) & data_78e300
        st4 = st0
        st3 = *esi
        st1 = _m_psllqi(st1, 0x10) | st5
        uint64_t temp0_92 = _m_psrlqi(st3, 0x18)
        st0 = _m_punpckldq(st0, st1.d)
        int64_t temp0_94 = _m_punpckhdq(st4, st1.d)
        st2 = _m_punpckhwd(st3, 0)
        *ebx = st0
        st1 = _m_punpckhwd(temp0_92, 0)
        ebx[0x10] = temp0_94
        st0 = st2
        ebx = &ebx[2]
        int32_t temp0_97 = ecx
        ecx -= 1
        
        if (temp0_97 == 1)
            break
    else
        st1 = _m_punpckhwd(temp0_56, 0)

st3 = *esi
int64_t temp0_98 = __paddw_mmxq_memq(st0, 0)
uint64_t temp0_99 = _m_psrlqi(st3, 0x30)
int64_t temp0_100 = _m_paddw(temp0_98, st1)
st0 = _m_pmaddwd(st0, st7)
st5 = esi[1]
st1 = _m_pmaddwd(st1, st7)
st2 = st0
st4 = st5
st0 = _m_punpckldq(st0, st1.d)
int64_t temp0_104 = _m_punpckhdq(st2, st1.d)
uint64_t temp0_105 = _m_psrlqi(st5, 8)
st0 = __psubd_mmxq_memq(_m_paddd(st0, temp0_104), data_78e2c0)
st5 = _m_punpckhwd(temp0_105, 0)
st0 = _m_psradi(st0, 8)
st1 = esi[2]
uint64_t temp0_110 = _m_psllqi(st4, 0x10)
st0 = _m_packssdw(st0, st0)
int64_t temp0_112 = _m_paddw(0, st5)
st3 = _m_punpckhwd(temp0_99 | temp0_110, 0)
st4 = esi[1]
int64_t temp0_114 = _m_paddw(temp0_112, st3)
st3 = _m_pmaddwd(st3, st7)
uint64_t temp0_116 = _m_psllqi(st1, 8)
st4 = _m_punpckhwd(_m_psrlqi(st4, 0x20), 0)
st5 = _m_pmaddwd(st5, st7)
st2 = st3
st1 = temp0_116 | _m_psrlqi(esi[1], 0x38)
st3 = _m_punpckldq(st3, st5.d)
st7 = _m_paddw(0, st4)
int64_t temp0_123 = _m_punpckhdq(st2, st5.d)
st1 = __punpcklbw_mmxq_memd(st1, data_78e320)
int64_t temp0_126 = __psubd_mmxq_memq(_m_paddd(st3, temp0_123), data_78e2c0)
st7 = _m_paddw(st7, st1)
st5 = data_78e2a8
st3 = _m_psradi(temp0_126, 8)
int16_t var_1c_2[0x4] = st7
st3 = _m_packssdw(st3, st3)
st4 = _m_pmaddwd(st4, st5)
st0 = _m_punpckldq(st0, st3.d)
st3 = esi[2]
st1 = _m_pmaddwd(st1, st5)
*edi = st0
uint64_t temp0_133 = _m_psrlqi(st3, 0x10)
st0 = esi[2]
st7 = data_78e2a8
int64_t temp0_134 = _m_punpckhdq(st4, st1.d)
st4 = _m_punpckldq(st4, st1.d)
st0 = _m_psrlqi(st0, 0x28)
int64_t temp0_138 = __psubd_mmxq_memq(_m_paddd(st4, temp0_134), data_78e2c0)
st3 = _m_punpckhwd(temp0_133, 0)
st4 = _m_psradi(temp0_138, 8)
int64_t temp0_141 = _m_paddw(0, st3)
uint8_t temp0_142[0x8] = _m_punpckhwd(st0, 0)
st3 = _m_pmaddwd(st3, st7)
st4 = _m_packssdw(st4, st4)
int64_t temp0_145 = _m_paddw(temp0_141, temp0_142)
st1 = *(arg3 + esi)
st0 = _m_pmaddwd(temp0_142, st7)
void* esi_1 = esi + arg3
int64_t temp0_150 = __psubd_mmxq_memq(
    _m_paddd(_m_punpckldq(st3, st0[0].d), _m_punpckhdq(st3, st0[0].d)), data_78e2c0)
uint64_t temp0_151 = _m_psrlqi(st1, 0x18)
st3 = _m_psradi(temp0_150, 8)
st4 = _m_punpckldq(st4, _m_packssdw(st3, st3).d)
uint8_t temp0_155[0x8] = _m_punpckhwd(st1, 0)
edi[1] = st4
st1 = _m_punpckhwd(temp0_151, 0)
st3 = *esi_1
int64_t temp0_157 = __paddw_mmxq_memq(temp0_155, temp0_100)
uint64_t temp0_158 = _m_psrlqi(st3, 0x30)
int64_t temp0_159 = _m_paddw(temp0_157, st1)
st0 = _m_pmaddwd(temp0_155, st7)
st5 = *(esi_1 + 8)
st1 = _m_pmaddwd(st1, st7)
st2 = st0
st4 = st5
st0 = _m_punpckldq(st0, st1.d)
int64_t temp0_163 = _m_punpckhdq(st2, st1.d)
uint64_t temp0_164 = _m_psrlqi(st5, 8)
st0 = __psubd_mmxq_memq(_m_paddd(st0, temp0_163), data_78e2c0)
st5 = _m_punpckhwd(temp0_164, 0)
st0 = _m_psradi(st0, 8)
st1 = *(esi_1 + 0x10)
uint64_t temp0_169 = _m_psllqi(st4, 0x10)
st0 = _m_packssdw(st0, st0)
int64_t temp0_171 = _m_paddw(temp0_114, st5)
st3 = _m_punpckhwd(temp0_158 | temp0_169, 0)
st4 = *(esi_1 + 8)
int64_t temp0_173 = _m_paddw(temp0_171, st3)
st3 = _m_pmaddwd(st3, st7)
uint64_t temp0_175 = _m_psllqi(st1, 8)
st4 = _m_punpckhwd(_m_psrlqi(st4, 0x20), 0)
st5 = _m_pmaddwd(st5, st7)
st2 = st3
st1 = temp0_175 | _m_psrlqi(*(esi_1 + 8), 0x38)
st3 = _m_punpckldq(st3, st5.d)
st7 = _m_paddw(var_1c_2, st4)
int64_t temp0_182 = _m_punpckhdq(st2, st5.d)
st1 = __punpcklbw_mmxq_memd(st1, data_78e320)
int64_t temp0_185 = __psubd_mmxq_memq(_m_paddd(st3, temp0_182), data_78e2c0)
st7 = _m_paddw(st7, st1)
st5 = data_78e2a8
st3 = _m_psradi(temp0_185, 8)
int16_t var_1c_3[0x4] = st7
st3 = _m_packssdw(st3, st3)
st4 = _m_pmaddwd(st4, st5)
st0 = _m_punpckldq(st0, st3.d)
st3 = *(esi_1 + 0x10)
st1 = _m_pmaddwd(st1, st5)
edi[2] = st0
uint64_t temp0_192 = _m_psrlqi(st3, 0x10)
st0 = *(esi_1 + 0x10)
st7 = data_78e2a8
int64_t temp0_193 = _m_punpckhdq(st4, st1.d)
st4 = _m_punpckldq(st4, st1.d)
st0 = _m_psrlqi(st0, 0x28)
int64_t temp0_197 = __psubd_mmxq_memq(_m_paddd(st4, temp0_193), data_78e2c0)
st3 = _m_punpckhwd(temp0_192, 0)
st4 = _m_psradi(temp0_197, 8)
int64_t temp0_200 = _m_paddw(temp0_145, st3)
uint8_t temp0_201[0x8] = _m_punpckhwd(st0, 0)
st3 = _m_pmaddwd(st3, st7)
st4 = _m_packssdw(st4, st4)
int64_t temp0_204 = _m_paddw(temp0_200, temp0_201)
st0 = _m_pmaddwd(temp0_201, st7)
st3 = _m_psradi(
    __psubd_mmxq_memq(_m_paddd(_m_punpckldq(st3, st0[0].d), _m_punpckhdq(st3, st0[0].d)), 
        data_78e2c0), 
    8)
edi[3] = _m_punpckldq(st4, _m_packssdw(st3, st3).d)
_m_punpckhwd(st1, 0)
st0 = temp0_159
st5 = data_78e2b0
st1 = st0
st6 = data_78e2b8
st0 = _m_pmaddwd(st0, st5)
st1 = _m_pmaddwd(st1, st6)
st2 = st0
st3 = _m_pmaddwd(temp0_173, st5)
st0 = _m_punpckldq(st0, st1.d)
int16_t temp0_218[0x4] = _m_pmaddwd(var_1c_3, st5)
int64_t temp0_219 = _m_punpckhdq(st2, st1.d)
st4 = _m_pmaddwd(temp0_173, st6)
st1 = st3
st0 = _m_psradi(__paddd_mmxq_memq(_m_paddd(st0, temp0_219), data_78e2d8), 0xa) & data_78e300
st3 = _m_punpckldq(st3, st4.d)
int64_t temp0_225 = _m_punpckhdq(st1, st4.d)
st2 = _m_pmaddwd(var_1c_3, st6)
st3 = _m_psradi(__paddd_mmxq_memq(_m_paddd(st3, temp0_225), data_78e2d8), 0xa) & data_78e300
st7 = _m_punpckldq(temp0_218, st2.d)
st0 |= _m_psllqi(st3, 0x10)
st7 = __paddd_mmxq_memq(_m_paddd(st7, _m_punpckhdq(temp0_218, st2.d)), data_78e2d8)
st1 = _m_pmaddwd(temp0_204, st5)
st7 = _m_psradi(st7, 0xa) & data_78e300
st3 = _m_pmaddwd(temp0_204, st6)
st4 = st0
st1 = _m_psllqi(
    _m_psradi(
        __paddd_mmxq_memq(_m_paddd(_m_punpckldq(st1, st3.d), _m_punpckhdq(st1, st3.d)), 
            data_78e2d8), 
        0xa) & data_78e300, 
    0x10) | st7
st0 = _m_punpckldq(st0, st1.d)
int64_t temp0_245 = _m_punpckhdq(st4, st1.d)
*ebx = st0
ebx[0x10] = temp0_245
return arg1
