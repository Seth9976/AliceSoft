// 函数: sub_708500
// 地址: 0x708500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* ebx = nullptr
int32_t ecx = 8
int32_t edx = 0
int32_t esi = arg2
int32_t edi = 4

while (true)
    int64_t st6 = data_78e328
    int64_t st0 = *(ebx + esi)
    int64_t temp0_2 = _m_psubd(_m_psrlqi(st0 & data_78e330, 0x18), data_78e340)
    uint64_t st4 = _m_packssdw(temp0_2, temp0_2)
    int64_t temp0_4 = _m_psubusb(st6, st0)
    int64_t var_60
    *(&var_60 + edx) = st4.d
    int64_t st1 = _m_punpckhwd(temp0_4, 0)
    int64_t st3 = data_78e350
    int64_t st2 = st3
    st3 = _m_pmaddwd(st3, st1)
    int64_t temp0_7 = _m_punpckhbw(temp0_4, 0)
    st2 = _m_pmaddwd(st2, temp0_7)
    uint64_t temp0_9 = _m_psrlqi(st3, 0x20)
    uint64_t temp0_10 = _m_psrlqi(st2, 0x20)
    int64_t temp0_11 = _m_paddd(temp0_9, st3)
    int64_t temp0_12 = _m_paddd(temp0_10, st2)
    uint64_t temp0_13 = _m_psllqi(temp0_11, 0x20)
    uint64_t temp0_14 = _m_psllqi(temp0_12, 0x20)
    int64_t st5 = _m_psradi(__psubd_mmxq_memq(_m_psrlqi(temp0_13, 0x20) | temp0_14, data_78e338), 8)
    int64_t var_120
    *(edx + &var_120) = _m_packssdw(st5, st5).d
    st3 = data_78e358
    st2 = st3
    st3 = _m_pmaddwd(st3, st1)
    st2 = _m_pmaddwd(st2, temp0_7)
    uint64_t temp0_21 = _m_psrlqi(st3, 0x20)
    uint64_t temp0_22 = _m_psrlqi(st2, 0x20)
    uint64_t var_e0
    *(&var_e0 + edx) = _m_paddd(_m_paddd(temp0_21, st3), _m_paddd(temp0_22, st2)).d
    st3 = data_78e360
    st2 = st3
    st3 = _m_pmaddwd(st3, st1)
    st2 = _m_pmaddwd(st2, temp0_7)
    uint64_t temp0_28 = _m_psrlqi(st3, 0x20)
    uint64_t temp0_29 = _m_psrlqi(st2, 0x20)
    uint64_t var_a0
    *(&var_a0 + edx) = _m_paddd(_m_paddd(temp0_28, st3), _m_paddd(temp0_29, st2)).d
    int32_t temp0_33 = ecx
    ecx -= 1
    
    if (temp0_33 == 1)
        int64_t* ebx_1 = nullptr
        int32_t edx_1 = edx + 4
        int32_t ecx_1 = 8
        int32_t esi_1 = esi + arg3
        
        while (true)
            st6 = data_78e328
            st0 = *(ebx_1 + esi_1)
            int64_t temp0_35 = _m_psubd(_m_psrlqi(st0 & data_78e330, 0x18), data_78e340)
            st4 = _m_packssdw(temp0_35, temp0_35)
            int64_t temp0_37 = _m_psubusb(st6, st0)
            *(&var_60 + edx_1) = st4.d
            st1 = _m_punpckhwd(temp0_37, 0)
            st3 = data_78e350
            st2 = st3
            st3 = _m_pmaddwd(st3, st1)
            int64_t temp0_40 = _m_punpckhbw(temp0_37, 0)
            st2 = _m_pmaddwd(st2, temp0_40)
            uint64_t temp0_42 = _m_psrlqi(st3, 0x20)
            uint64_t temp0_43 = _m_psrlqi(st2, 0x20)
            int64_t temp0_44 = _m_paddd(temp0_42, st3)
            int64_t temp0_45 = _m_paddd(temp0_43, st2)
            uint64_t temp0_46 = _m_psllqi(temp0_44, 0x20)
            uint64_t temp0_47 = _m_psllqi(temp0_45, 0x20)
            st5 = _m_psradi(__psubd_mmxq_memq(_m_psrlqi(temp0_46, 0x20) | temp0_47, data_78e338), 8)
            *(edx_1 + &var_120) = _m_packssdw(st5, st5).d
            st3 = data_78e358
            st2 = st3
            st3 = _m_pmaddwd(st3, st1)
            st2 = _m_pmaddwd(st2, temp0_40)
            uint64_t temp0_54 = _m_psrlqi(st3, 0x20)
            uint64_t temp0_55 = _m_psrlqi(st2, 0x20)
            *(&var_e0 + edx_1) = _m_paddd(_m_paddd(temp0_54, st3), _m_paddd(temp0_55, st2)).d
            st3 = data_78e360
            st2 = st3
            st3 = _m_pmaddwd(st3, st1)
            st2 = _m_pmaddwd(st2, temp0_40)
            uint64_t temp0_61 = _m_psrlqi(st3, 0x20)
            uint64_t temp0_62 = _m_psrlqi(st2, 0x20)
            *(&var_a0 + edx_1) = _m_paddd(_m_paddd(temp0_61, st3), _m_paddd(temp0_62, st2)).d
            int32_t temp1_1 = ecx_1
            ecx_1 -= 1
            
            if (temp1_1 == 1)
                break
            
            ebx_1 = &ebx_1[1]
            edx_1 += 4
        
        int64_t st7 = data_78e348
        *arg4 = var_120
        int64_t var_118
        arg4[1] = var_118
        int64_t var_110
        arg4[0x10] = var_110
        int64_t var_108
        arg4[0x11] = var_108
        int64_t var_100
        arg4[2] = var_100
        int64_t var_f8
        arg4[3] = var_f8
        int64_t var_f0
        arg4[0x12] = var_f0
        int64_t var_e8
        arg4[0x13] = var_e8
        int64_t var_d8
        int64_t var_c0
        int64_t var_b8
        *arg5 = _m_packssdw(_m_psradi(_m_paddd(_m_paddd(var_c0, var_e0), st7), 0xa), 
            _m_psradi(_m_paddd(_m_paddd(var_d8, var_b8), st7), 0xa))
        uint64_t var_d0
        int64_t var_c8
        int64_t var_b0
        int64_t var_a8
        *(arg5 + 8) = _m_packssdw(_m_psradi(_m_paddd(_m_paddd(var_b0, var_d0), st7), 0xa), 
            _m_psradi(_m_paddd(_m_paddd(var_c8, var_a8), st7), 0xa))
        int64_t var_98
        int64_t var_80
        int64_t var_78
        *(arg5 + 0x80) = _m_packssdw(_m_psradi(_m_paddd(_m_paddd(var_80, var_a0), st7), 0xa), 
            _m_psradi(_m_paddd(_m_paddd(var_98, var_78), st7), 0xa))
        uint64_t var_90
        int64_t var_88
        int64_t var_70
        int64_t var_68
        *(arg5 + 0x88) = _m_packssdw(_m_psradi(_m_paddd(_m_paddd(var_70, var_90), st7), 0xa), 
            _m_psradi(_m_paddd(_m_paddd(var_88, var_68), st7), 0xa))
        *arg6 = var_60
        int64_t var_58
        arg6[1] = var_58
        int64_t var_50
        arg6[0x10] = var_50
        int64_t var_48
        arg6[0x11] = var_48
        int64_t var_40
        arg6[2] = var_40
        int64_t var_38
        arg6[3] = var_38
        int64_t var_30
        arg6[0x12] = var_30
        int64_t var_28
        arg6[0x13] = var_28
        int32_t temp2_1 = edi
        edi -= 1
        
        if (temp2_1 == 1)
            break
        
        ebx = nullptr
        edx = 0
        ecx = 8
        esi = esi_1 + arg3
        arg4 = &arg4[4]
        arg5 += 0x10
        arg6 = &arg6[4]
    else
        ebx = &ebx[1]
        edx += 4

return arg1
