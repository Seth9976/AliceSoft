// 函数: sub_70c0e0
// 地址: 0x70c0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* esi = arg2
int64_t* eax = arg3
int64_t* ebx = arg4
int16_t (* edi)[0x4] = arg5
int32_t i_1 = 8
int32_t i

do
    int16_t st0[0x4] = *esi
    int16_t st1[0x4] = esi[1]
    uint16_t st2[0x4] = *eax
    int32_t st3 = (*ebx).d
    int64_t st6 = st0
    int64_t st5 = st1
    uint16_t temp0_1[0x4] = _m_punpcklwd(st2, st3)
    int64_t temp0_2 = __punpckhwd_mmxq_mmxd(st2, st3)
    st0 = _m_punpcklwd(st0, temp0_1[0].d)
    int64_t temp0_4 = __punpckhwd_mmxq_mmxd(st6, temp0_1[0].d)
    st1 = _m_punpcklwd(st1, temp0_2.d)
    int64_t temp0_6 = __punpckhwd_mmxq_mmxd(st5, temp0_2.d)
    int16_t temp0_7[0x4] = _m_packuswb(st0, temp0_4)
    int16_t temp0_8[0x4] = _m_packuswb(st1, temp0_6)
    *edi = temp0_7
    edi[1] = temp0_8
    st0 = esi[0x10]
    st1 = esi[0x11]
    st2 = eax[1]
    st3 = (ebx[1]).d
    st6 = st0
    st5 = st1
    uint16_t temp0_9[0x4] = _m_punpcklwd(st2, st3)
    int64_t temp0_10 = __punpckhwd_mmxq_mmxd(st2, st3)
    st0 = _m_punpcklwd(st0, temp0_9[0].d)
    int64_t temp0_12 = __punpckhwd_mmxq_mmxd(st6, temp0_9[0].d)
    st1 = _m_punpcklwd(st1, temp0_10.d)
    int64_t temp0_14 = __punpckhwd_mmxq_mmxd(st5, temp0_10.d)
    int16_t temp0_15[0x4] = _m_packuswb(st0, temp0_12)
    int16_t temp0_16[0x4] = _m_packuswb(st1, temp0_14)
    edi[2] = temp0_15
    edi[3] = temp0_16
    esi = &esi[2]
    eax = &eax[2]
    ebx = &ebx[2]
    edi += arg6
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
