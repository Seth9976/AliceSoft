// 函数: sub_70ba50
// 地址: 0x70ba50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = 8
int64_t* esi = arg2
int64_t* ebx = arg3
int64_t* edx = arg4
void* edi = arg5

while (true)
    uint16_t st0[0x4] = *edx
    uint16_t temp0_1[0x4] = _m_psllwi(*ebx, 4)
    int16_t st2[0x4] = data_78e370
    int16_t st3[0x4] = data_78e378
    uint16_t temp0_2[0x4] = _m_psllwi(st0, 4)
    int16_t temp0_3[0x4] = _m_pmulhw(st3, temp0_1)
    int16_t temp0_4[0x4] = _m_pmulhw(st2, temp0_2)
    int64_t st5 = data_78e398
    int16_t var_40_1[0x4] = _m_psubw(temp0_4, data_78e3a0)
    int32_t var_38_1 = _m_psubw(temp0_3, st5)[0].d
    st3 = *u"XXXX"
    st2 = data_78e390
    uint16_t temp0_7[0x4] = _m_psrlwi(temp0_2, 4)
    int16_t temp0_9[0x4] = _m_pmullw(st3, _m_psrlwi(temp0_1, 4))
    int16_t temp0_13[0x4] =
        _m_psrawi(__psubw_mmxq_memq(_m_paddw(_m_pmullw(st2, temp0_7), temp0_9), data_78e418), 8)
    st0 = edx[1]
    uint16_t temp0_14[0x4] = _m_psllwi(ebx[1], 4)
    st2 = data_78e370
    st3 = data_78e378
    uint16_t temp0_15[0x4] = _m_psllwi(st0, 4)
    int16_t temp0_16[0x4] = _m_pmulhw(st3, temp0_14)
    int16_t temp0_17[0x4] = _m_pmulhw(st2, temp0_15)
    int64_t st6 = *esi
    st5 = data_78e398
    int16_t var_28_1[0x4] = _m_psubw(temp0_17, data_78e3a0)
    int16_t var_20_1[0x4] = _m_psubw(temp0_16, st5)
    st3 = *u"XXXX"
    st2 = data_78e390
    uint16_t temp0_20[0x4] = _m_psrlwi(temp0_15, 4)
    int16_t temp0_22[0x4] = _m_pmullw(st3, _m_psrlwi(temp0_14, 4))
    int16_t temp0_26[0x4] =
        _m_psrawi(__psubw_mmxq_memq(_m_paddw(_m_pmullw(st2, temp0_20), temp0_22), data_78e418), 8)
    st0 = zx.q(var_40_1[0].d)
    uint16_t temp0_27[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_38_1)
    st2 = _m_punpcklwd(st2, st2[0].d)
    int64_t st4 = zx.q(temp0_13[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_27, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_32 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_34[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_32, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_34, 0)
    st6 = _m_punpckhwd(st6, 0)
    uint16_t st1[0x4] = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_41 = _m_psubw(st5, st6)
    st4 = esi[0x60]
    *edi = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_41, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi + 8) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_41, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = esi[1]
    st0 = zx.q(var_40_1[2].d)
    uint16_t temp0_56[0x4] = _m_punpcklwd(st0, st0[0].d)
    int32_t var_34
    st2 = zx.q(var_34)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_56, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_61 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_63[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_61, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_63, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_70 = _m_psubw(st5, st6)
    st4 = esi[0x61]
    *(edi + 0x10) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_70, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi + 0x18) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_70, 0), 8)
        | _m_pslldi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = esi[0x10]
    st0 = zx.q(var_28_1[0].d)
    uint16_t temp0_85[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[0].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_85, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_90 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_92[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_90, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_92, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_99 = _m_psubw(st5, st6)
    st4 = esi[0x70]
    *(edi + 0x20) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_99, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi + 0x28) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_99, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = esi[0x11]
    st0 = zx.q(var_28_1[2].d)
    uint16_t temp0_114[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[2].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_114, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_119 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_121[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_119, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_121, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_128 = _m_psubw(st5, st6)
    st4 = esi[0x71]
    *(edi + 0x30) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_128, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi + 0x38) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_128, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    void* edi_1 = edi + arg6
    void* esi_1 = &esi[2]
    st6 = *esi_1
    st0 = zx.q(var_40_1[0].d)
    uint16_t temp0_143[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_38_1)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_143, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_148 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_150[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_148, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_150, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_157 = _m_psubw(st5, st6)
    st4 = *(esi_1 + 0x300)
    *edi_1 = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_157, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi_1 + 8) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_157, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = *(esi_1 + 8)
    st0 = zx.q(var_40_1[2].d)
    uint16_t temp0_172[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_34)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_172, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_177 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_179[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_177, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_179, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_186 = _m_psubw(st5, st6)
    st4 = *(esi_1 + 0x308)
    *(edi_1 + 0x10) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_186, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi_1 + 0x18) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_186, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = *(esi_1 + 0x80)
    st0 = zx.q(var_28_1[0].d)
    uint16_t temp0_201[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[0].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_201, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_206 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_208[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_206, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_208, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_215 = _m_psubw(st5, st6)
    st4 = *(esi_1 + 0x380)
    *(edi_1 + 0x20) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_215, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi_1 + 0x28) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_215, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    st6 = *(esi_1 + 0x88)
    st0 = zx.q(var_28_1[2].d)
    uint16_t temp0_230[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[2].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_230, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_235 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_237[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_235, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_237, 0)
    st6 = _m_punpckhwd(st6, 0)
    st1 = data_78e428
    st3 = st1
    st5 = st1
    st1 = _m_psubw(st1, st0)
    st3 = _m_psubw(st3, st2)
    int64_t temp0_244 = _m_psubw(st5, st6)
    st4 = *(esi_1 + 0x388)
    *(edi_1 + 0x30) = _m_punpcklwd(st1, 0) | _m_pslldi(_m_punpcklwd(st3, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(temp0_244, 0), 8) | _m_pslldi(_m_punpcklwd(0, st4.d), 8)
    *(edi_1 + 0x38) = __punpckhwd_mmxq_mmxd(st1, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st3, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(temp0_244, 0), 8)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(0, st4.d), 8)
    int32_t temp0_259 = ecx
    ecx -= 1
    
    if (temp0_259 == 1)
        break
    
    if (ecx == 4)
        esi_1 += 0x80
    
    esi = esi_1 + 0x10
    ebx = &ebx[2]
    edx = &edx[2]
    edi = edi_1 + arg6

return arg1
