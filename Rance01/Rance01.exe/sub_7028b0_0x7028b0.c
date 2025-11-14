// 函数: sub_7028b0
// 地址: 0x7028b0
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
int32_t* esi = arg1[2].d
uint32_t eax_10
uint64_t x87_r1
uint64_t x87_r4

if (edi s< 8)
    if (sub_702b35(ebp, esi, edi, x87_r1, x87_r4) == 0)
    label_702b01:
        uint64_t* eax_26 = arg1
        *eax_26 = st1
        *(eax_26 + 0xc) = edi
        eax_26[2].d = esi
        *(arg1 + 0x24) = eax_3
        int32_t edx_5
        edx_5.b = var_24
        arg1[6].b = edx_5.b
        *(arg1 + 0x1c) = eax_1
        return 0
    
    if (edi s>= 8)
        goto label_702913
    
label_702a66:
    int32_t var_18_1 = arg2
    eax_10 = sub_702c93(ebp, edi, x87_r1, x87_r4)
    
    if (eax_10 s< 0)
        goto label_702b01
else
label_702913:
    int32_t ebx_2 = *(arg2 + 8 + (_m_psrlqi(st1, 0x38).d << 2))
    
    if (ebx_2 s<= 0xffff)
        goto label_702a66
    
    uint32_t ebx_3 = ebx_2 u>> 0x10
    edi -= ebx_3
    st1 = _m_psllq(st1, zx.q(ebx_3))
    eax_10 = zx.d(ebx_2.w)

if (edi s< eax_10 && sub_702b35(ebp, esi, edi, x87_r1, x87_r4) == 0)
    goto label_702b01

edi -= eax_10
uint64_t st2 = zx.q(eax_10)
uint64_t temp0_4 = _m_psrlq(st1, _m_psubd(0x40, st2))
int32_t ebx_4 = *((eax_10 << 2) + &data_79b100)
int32_t ecx_2 = temp0_4.d
st1 = _m_psllq(st1, st2)

if (ecx_2 s< ebx_4)
    ecx_2 += *((eax_10 << 2) + &data_79b0c0)

int32_t edx_1 = 1
int80_t st7
st7.q = 0
int32_t ebx_5 = arg3 + 8
*arg4 += ecx_2.w
uint64_t st3 = st1

while (true)
    st1 = _m_psrlqi(st1, 0x38)
    
    while (true)
        if (edi s< 8)
            st1 = st3
            ebx_5 = arg3 + 8
            
            if (sub_702b35(ebp, esi, edi, x87_r1, x87_r4) == 0)
                goto label_702b01
            
            st3 = st1
            st1 = _m_psrlqi(st1, 0x38)
            
            if (edi s>= 8)
                continue
            
            goto label_702ae5
        
        int32_t ecx_3 = st1.d
        st1 = st3
        int32_t ebx_6 = *(ebx_5 + (ecx_3 << 2))
        uint32_t ebx_7 = ebx_6 u>> 0x10
        int32_t eax_13 = zx.d(ebx_6.w)
        
        if (ebx_7 == 0)
        label_702ae5:
            int32_t var_18_2 = arg3
            eax_13 = sub_702c93(ebp, edi, x87_r1, x87_r4)
            
            if (eax_13 s< 0)
                goto label_702b01
        else
            edi -= ebx_7
            st1 = _m_psllq(st1, zx.q(ebx_7))
        
        int32_t ecx_4 = 0xf & eax_13
        st2 = zx.q(ecx_4)
        _m_psubd(0x40, st2)
        
        if (ecx_4 != 0)
            if (edi s< ecx_4 && sub_702b35(ebp, esi, edi, x87_r1, x87_r4) == 0)
                goto label_702b01
            
            edi -= ecx_4
            st1 = _m_psllq(st1, st2)
            edx_1 = edx_1 + (eax_13 u>> 4) + 1
            
            if (edx_1 s< 0x40)
                ebx_5 = arg3 + 8
                st3 = st1
                break
        else if (eax_13 s>= 0xf0)
            edx_1 += 0x10
            ebx_5 = arg3 + 8
            
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
