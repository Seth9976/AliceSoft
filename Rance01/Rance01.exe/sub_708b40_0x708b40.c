// 函数: sub_708b40
// 地址: 0x708b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* esi = arg1
uint8_t (* edi)[0x8] = arg3
int32_t i_1 = 4
int64_t st6 = data_78e2e0
int32_t i

do
    uint8_t st0[0x8] = *esi
    uint8_t st4[0x8] = *(arg2 + esi)
    uint8_t temp0_1[0x8] = _m_punpckhwd(st0, 0)
    int64_t temp0_2 = _m_punpckhbw(st0, 0)
    uint8_t temp0_3[0x8] = _m_punpckhwd(st4, 0)
    int64_t temp0_4 = _m_punpckhbw(st4, 0)
    st0 = _m_psubw(temp0_1, st6)
    int64_t temp0_6 = _m_psubw(temp0_2, st6)
    st4 = _m_psubw(temp0_3, st6)
    int64_t temp0_8 = _m_psubw(temp0_4, st6)
    *edi = st0
    edi[1] = temp0_6
    edi[2] = st4
    edi[3] = temp0_8
    edi = &edi[4]
    esi += arg2 * 2
    i = i_1
    i_1 -= 1
while (i != 1)
