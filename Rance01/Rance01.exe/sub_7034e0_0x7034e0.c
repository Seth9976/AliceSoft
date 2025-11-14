// 函数: sub_7034e0
// 地址: 0x7034e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t eax_1 = *(arg1 + 0x1c)
int32_t eax_3 = *(arg1 + 0x24)
int64_t* eax_4
eax_4.b = arg1[6].b
char var_24 = eax_4.b
uint64_t st1 = *arg1
int32_t edi = *(arg1 + 0xc)
char* esi = arg1[2].d
__builtin_memset(arg5, 0, 0x80)
int80_t st5
st5.q = data_79bb80
int80_t st6
st6.q = data_79bb88
uint32_t eax_11
uint64_t x87_r1
int64_t x87_r4

if (edi s< 8)
    if (sub_7037ee(ebp, esi, edi, x87_r1, x87_r4) == 0)
    label_7037bd:
        *arg1 = st1
        *(arg1 + 0xc) = edi
        arg1[2].d = esi
        *(arg1 + 0x24) = eax_3
        int32_t edx_5
        edx_5.b = var_24
        arg1[6].b = edx_5.b
        *(arg1 + 0x1c) = eax_1
        return 0
    
    if (edi s>= 8)
        goto label_703596
    
label_70371f:
    int32_t var_18_1 = arg2
    eax_11 = sub_7038f6(ebp, edi, x87_r1, x87_r4)
    
    if (eax_11 s< 0)
        goto label_7037bd
else
label_703596:
    int32_t ebx_2 = *(arg2 + 8 + (_m_psrlqi(st1, 0x38).d << 2))
    
    if (ebx_2 s<= 0xffff)
        goto label_70371f
    
    uint32_t ebx_3 = ebx_2 u>> 0x10
    edi -= ebx_3
    st1 = _m_psllq(st1, zx.q(ebx_3))
    eax_11 = zx.d(ebx_2.w)

if (edi s< eax_11 && sub_7037ee(ebp, esi, edi, x87_r1, x87_r4) == 0)
    goto label_7037bd

edi -= eax_11
uint64_t st2 = zx.q(eax_11)
uint64_t temp0_4 = _m_psrlq(st1, _m_psubd(0x40, st2))
int32_t ebx_4 = *((eax_11 << 2) + &data_79b100)
int32_t ecx_2 = temp0_4.d
st1 = _m_psllq(st1, st2)

if (ecx_2 s< ebx_4)
    ecx_2 += *((eax_11 << 2) + &data_79b0c0)

int32_t edx_1 = 1
ecx_2.w += *arg4
*arg4 = ecx_2.w
*arg5 = ecx_2.w
int32_t ebx_6 = arg3 + 8
uint64_t st3 = st1

while (true)
    st1 = _m_psrlqi(st1, 0x38)
    
    while (true)
        if (edi s< 8)
            st1 = st3
            ebx_6 = arg3 + 8
            
            if (sub_7037ee(ebp, esi, edi, x87_r1, x87_r4) == 0)
                goto label_7037bd
            
            st3 = st1
            st1 = _m_psrlqi(st1, 0x38)
            
            if (edi s>= 8)
                continue
            
            goto label_70379e
        
        int32_t ecx_3 = st1.d
        st1 = st3
        int32_t ebx_7 = *(ebx_6 + (ecx_3 << 2))
        uint32_t ebx_8 = ebx_7 u>> 0x10
        int32_t eax_14 = zx.d(ebx_7.w)
        
        if (ebx_8 == 0)
        label_70379e:
            int32_t var_18_2 = arg3
            eax_14 = sub_7038f6(ebp, edi, x87_r1, x87_r4)
            
            if (eax_14 s< 0)
                goto label_7037bd
        else
            edi -= ebx_8
            st1 = _m_psllq(st1, zx.q(ebx_8))
        
        int32_t ecx_4 = 0xf & eax_14
        st2 = zx.q(ecx_4)
        int64_t temp0_8 = _m_psubd(0x40, st2)
        
        if (ecx_4 != 0)
            int32_t edx_2 = edx_1 + (eax_14 u>> 4)
            
            if (edi s< ecx_4 && sub_7037ee(ebp, esi, edi, x87_r1, x87_r4) == 0)
                goto label_7037bd
            
            uint64_t temp0_9 = _m_psrlq(st1, temp0_8)
            int32_t eax_16 = *((ecx_4 << 2) + &data_79b100)
            edi -= ecx_4
            int32_t ebx_9 = temp0_9.d
            uint64_t temp0_10 = _m_psllq(st1, st2)
            
            if (ebx_9 s< eax_16)
                ebx_9 += *((ecx_4 << 2) + &data_79b0c0)
            
            st1 = temp0_10
            edx_1 = edx_2 + 1
            arg5[*((edx_2 << 2) + &data_79aee0)] = ebx_9.w
            ebx_6 = arg3 + 8
            
            if (edx_1 s< 0x40)
                st3 = st1
                break
        else if (eax_14 s>= 0xf0)
            edx_1 += 0x10
            ebx_6 = arg3 + 8
            
            if (edx_1 s< 0x40)
                st3 = st1
                break
        
        *arg1 = st1
        *(arg1 + 0xc) = edi
        arg1[2].d = esi
        *(arg1 + 0x24) = eax_3
        int32_t edx_3
        edx_3.b = var_24
        arg1[6].b = edx_3.b
        *(arg1 + 0x1c) = eax_1
        return 0
