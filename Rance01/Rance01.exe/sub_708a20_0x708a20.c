// 函数: sub_708a20
// 地址: 0x708a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* esi = arg2
void* edi = arg4
void* eax = arg5
void* ebx = arg6
int32_t i_1 = 8
int64_t st6 = data_78e2e0
int32_t i

do
    uint8_t st0[0x8] = *esi
    uint8_t st1[0x8] = esi[1]
    uint8_t temp0_1[0x8] = _m_punpckhwd(st0, 0)
    int64_t temp0_2 = _m_punpckhbw(st0, 0)
    uint8_t temp0_3[0x8] = _m_punpckhwd(st1, 0)
    int64_t temp0_4 = _m_punpckhbw(st1, 0)
    st0 = _mm_shuffle_pi16(temp0_1, 0xd8)
    int64_t st2 = _mm_shuffle_pi16(temp0_2, 0xd8)
    st1 = _mm_shuffle_pi16(temp0_3, 0xd8)
    int64_t st3 = _mm_shuffle_pi16(temp0_4, 0xd8)
    uint8_t st4[0x8] = st0
    int64_t st5 = st1
    st0 = _m_punpckldq(st0, st2.d)
    st4 = _m_punpckhdq(st4, st2.d)
    st1 = _m_punpckldq(st1, st3.d)
    int64_t temp0_12 = _m_punpckhdq(st5, st3.d)
    st0 = _m_psubw(st0, st6)
    st1 = _m_psubw(st1, st6)
    *edi = st0
    *(edi + 8) = st1
    st4 = _mm_shuffle_pi16(st4, 0xd8)
    st5 = _mm_shuffle_pi16(temp0_12, 0xd8)
    st2 = st4
    st4 = _m_punpckldq(st4, st5.d)
    int64_t temp0_18 = _m_punpckhdq(st2, st5.d)
    st4 = _m_psubw(st4, st6)
    int64_t temp0_20 = _m_psubw(temp0_18, st6)
    *eax = st4
    *ebx = temp0_20
    st0 = esi[2]
    st1 = esi[3]
    uint8_t temp0_21[0x8] = _m_punpckhwd(st0, 0)
    int64_t temp0_22 = _m_punpckhbw(st0, 0)
    uint8_t temp0_23[0x8] = _m_punpckhwd(st1, 0)
    int64_t temp0_24 = _m_punpckhbw(st1, 0)
    st0 = _mm_shuffle_pi16(temp0_21, 0xd8)
    st2 = _mm_shuffle_pi16(temp0_22, 0xd8)
    st1 = _mm_shuffle_pi16(temp0_23, 0xd8)
    st3 = _mm_shuffle_pi16(temp0_24, 0xd8)
    st4 = st0
    st5 = st1
    st0 = _m_punpckldq(st0, st2.d)
    st4 = _m_punpckhdq(st4, st2.d)
    st1 = _m_punpckldq(st1, st3.d)
    int64_t temp0_32 = _m_punpckhdq(st5, st3.d)
    st0 = _m_psubw(st0, st6)
    st1 = _m_psubw(st1, st6)
    *(edi + 0x80) = st0
    *(edi + 0x88) = st1
    st4 = _mm_shuffle_pi16(st4, 0xd8)
    st5 = _mm_shuffle_pi16(temp0_32, 0xd8)
    st2 = st4
    st4 = _m_punpckldq(st4, st5.d)
    int64_t temp0_38 = _m_punpckhdq(st2, st5.d)
    st4 = _m_psubw(st4, st6)
    int64_t temp0_40 = _m_psubw(temp0_38, st6)
    *(eax + 8) = st4
    *(ebx + 8) = temp0_40
    edi += 0x10
    eax += 0x10
    ebx += 0x10
    esi += arg3
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
