// 函数: sub_410e30
// 地址: 0x410e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* eax_2 = (*(*arg3 + 8))(arg2, arg1)
void* eax_4 = (*(*arg4 + 8))(arg5, arg6)
int32_t ebx_3 = arg7 * 4
int32_t* eax_7 = (*(*arg3 + 0x1c))() - ebx_3
int32_t* eax_10 = (*(*arg4 + 0x1c))() - ebx_3
int32_t* edi_2 = eax_2
void* esi_2 = eax_4
int32_t result = arg8
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        uint64_t st1 = zx.q(*edi_2)
        uint64_t st2 = _m_punpckhwd(zx.q(*esi_2), 0)
        st1 = _m_punpckhwd(st1, 0)
        int64_t temp0_3 = __punpckhwd_mmxq_mmxd(st2, st2.d)
        uint64_t st3 = _m_psrlwi(__punpckhwd_mmxq_mmxd(temp0_3, temp0_3.d), 1)
        *edi_2 = _m_packuswb(_m_paddsw(_m_psrawi(_m_pmullw(_m_psubsw(st2, st1), st3), 7), st1), 0).d
        edi_2 = &edi_2[1]
        esi_2 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_2 += eax_7
    esi_2 += eax_10
    i = result
    result -= 1
while (i != 1)
return result
