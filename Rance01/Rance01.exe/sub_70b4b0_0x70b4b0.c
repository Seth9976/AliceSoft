// 函数: sub_70b4b0
// 地址: 0x70b4b0
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
    *edi = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi + 8) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = esi[1]
    st0 = zx.q(var_40_1[2].d)
    uint16_t temp0_49[0x4] = _m_punpcklwd(st0, st0[0].d)
    int32_t var_34
    st2 = zx.q(var_34)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_49, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_54 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_56[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_54, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_56, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi + 0x10) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi + 0x18) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = esi[0x10]
    st0 = zx.q(var_28_1[0].d)
    uint16_t temp0_71[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[0].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_71, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_76 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_78[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_76, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_78, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi + 0x20) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi + 0x28) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = esi[0x11]
    st0 = zx.q(var_28_1[2].d)
    uint16_t temp0_93[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[2].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_93, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_98 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_100[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_98, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_100, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi + 0x30) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi + 0x38) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    void* edi_1 = edi + arg6
    void* esi_1 = &esi[2]
    st6 = *esi_1
    st0 = zx.q(var_40_1[0].d)
    uint16_t temp0_115[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_38_1)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_115, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_120 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_122[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_120, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_122, 0)
    st6 = _m_punpckhwd(st6, 0)
    *edi_1 = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi_1 + 8) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = *(esi_1 + 8)
    st0 = zx.q(var_40_1[2].d)
    uint16_t temp0_137[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_34)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_13[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_137, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_142 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_144[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_142, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_144, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi_1 + 0x10) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi_1 + 0x18) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = *(esi_1 + 0x80)
    st0 = zx.q(var_28_1[0].d)
    uint16_t temp0_159[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[0].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[0].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_159, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_164 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_166[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_164, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_166, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi_1 + 0x20) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi_1 + 0x28) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    st6 = *(esi_1 + 0x88)
    st0 = zx.q(var_28_1[2].d)
    uint16_t temp0_181[0x4] = _m_punpcklwd(st0, st0[0].d)
    st2 = zx.q(var_20_1[2].d)
    st2 = _m_punpcklwd(st2, st2[0].d)
    st4 = zx.q(temp0_26[2].d)
    st4 = _m_punpcklwd(st4, st4.d)
    st0 = _m_paddsw(temp0_181, st6)
    st2 = _m_paddsw(st2, st6)
    int64_t temp0_186 = _m_psubsw(st6, st4)
    st0 = _m_packuswb(st0, 0)
    int16_t temp0_188[0x4] = _m_packuswb(st2, 0)
    st6 = _m_packuswb(temp0_186, 0)
    st0 = _m_punpckhwd(st0, 0)
    st2 = _m_punpckhwd(temp0_188, 0)
    st6 = _m_punpckhwd(st6, 0)
    *(edi_1 + 0x30) = _m_punpcklwd(st0, 0) | _m_pslldi(_m_punpcklwd(st2, 0), 0x10)
        | _m_psllwi(_m_punpcklwd(st6, 0), 8) | data_78e420
    *(edi_1 + 0x38) = __punpckhwd_mmxq_mmxd(st0, 0) | _m_pslldi(__punpckhwd_mmxq_mmxd(st2, 0), 0x10)
        | _m_psllwi(__punpckhwd_mmxq_mmxd(st6, 0), 8) | data_78e420
    int32_t temp0_203 = ecx
    ecx -= 1
    
    if (temp0_203 == 1)
        break
    
    if (ecx == 4)
        esi_1 += 0x80
    
    esi = esi_1 + 0x10
    ebx = &ebx[2]
    edx = &edx[2]
    edi = edi_1 + arg6

return arg1
