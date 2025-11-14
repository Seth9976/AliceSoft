// 函数: sub_702d80
// 地址: 0x702d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
uint64_t st1 = *arg1
int32_t edi = *(arg1 + 0xc)
char* esi = arg1[2].d
int32_t var_2c = *(arg1 + 0x1c)
int32_t var_24 = *(arg1 + 0x24)
uint32_t ebx_2 = zx.d(arg1[6].b)
int64_t st4 = 0x40
__builtin_memset(arg5, 0, 0x80)
uint64_t st0
char st7[0x8]
uint64_t x87_r1
int64_t x87_r4

if (edi s< 8)
    st0 = zx.q(edi)
    char temp0_11[0x8] = _m_psubd(0x40, st0)
    st0 = _m_pcmpeqb(st0, st0)
    st1 = _m_psrlq(st1, temp0_11)
    
    if (ebx_2 != 0)
        goto label_702fb7
    
    if (var_24 s< 4)
    label_702fd0:
        
        if (sub_703228(ebp, esi, edi, x87_r1, x87_r4) != 0)
            if (edi s>= 8)
                goto label_702e20
            
            goto label_703075
        
    label_7031f7:
        *arg1 = st1
        *(arg1 + 0xc) = edi
        arg1[2].d = esi
        *(arg1 + 0x24) = var_24
        int64_t* eax_33
        eax_33.b = ebx_2.b
        arg1[6].b = eax_33.b
        *(arg1 + 0x1c) = var_2c
        return 0
    
    st7 = zx.q(_bswap(*esi))
    
    if (_m_pcmpeqb(st0, st7).d != 0)
        goto label_702fd0
    
    esi = &esi[4]
    edi += 0x20
    st1 = _m_psllqi(st1, 0x20) | st7
    var_2c += 4
    var_24 -= 4
label_702fb7:
    st1 = _m_psllq(st1, _m_psubd(0x40, zx.q(edi)))
    st4 = 0x40
    
    if (edi s>= 8)
        goto label_702e20
    
    goto label_703075

label_702e20:
int32_t eax_4 = _m_psrlqi(st1, 0x38).d
uint32_t ebx_5 = zx.d(*(arg2 + 8 + (eax_4 << 2) + 2))
uint32_t eax_5 = zx.d(*(arg2 + 8 + (eax_4 << 2)))

if (ebx_5 == 0)
label_703075:
    int32_t var_18_1 = arg2
    eax_5 = sub_703325(ebp, esi, edi, x87_r1, x87_r4)
    
    if (eax_5 s< 0)
        goto label_7031f7
else
    edi -= ebx_5
    st1 = _m_psllq(st1, zx.q(ebx_5))

if (edi s< eax_5)
    st0 = zx.q(edi)
    st7 = _m_psubd(st4, st0)
    st0 = _m_pcmpeqb(st0, st0)
    st1 = _m_psrlq(st1, st7)
    
    if (ebx_2 != 0)
        st1 = _m_psllq(st1, _m_psubd(st4, zx.q(edi)))
    else if (var_24 s< 4)
    label_703059:
        
        if (sub_703228(ebp, esi, edi, x87_r1, x87_r4) == 0)
            goto label_7031f7
    else
        st7 = zx.q(_bswap(*esi))
        
        if (_m_pcmpeqb(st0, st7).d != 0)
            goto label_703059
        
        esi = &esi[4]
        edi += 0x20
        var_2c += 4
        var_24 -= 4
        st1 = _m_psllq(_m_psllqi(st1, 0x20) | st7, _m_psubd(st4, zx.q(edi)))

edi -= eax_5
uint64_t st2 = zx.q(eax_5)
int32_t ecx_2 = _m_psrlq(st1, _m_psubd(st4, st2)).d
st1 = _m_psllq(st1, st2)
int16_t edx_1 = 0

if (ecx_2 s< *((eax_5 << 2) + &data_79b100))
    edx_1 = (*((eax_5 << 2) + &data_79b0c0)).w

int32_t edx_2 = 1
uint32_t ecx_4
ecx_4.w = ecx_2.w + edx_1 + *arg4
*arg4 = ecx_4.w
uint64_t st3 = st1
int32_t ebx_6 = arg3 + 8
*arg5 = ecx_4

while (true)
    st1 = _m_psrlqi(st1, 0x38)
    
    while (true)
        if (edi s< 8)
            st0 = zx.q(edi)
            st7 = _m_psubd(st4, st0)
            st0 = _m_pcmpeqb(st0, st0)
            st1 = _m_psrlq(st3, st7)
            
            if (ebx_2 != 0)
                goto label_703183
            
            if (var_24 s< 4)
            label_7031a6:
                
                if (sub_703228(ebp, esi, edi, x87_r1, x87_r4) == 0)
                    goto label_7031f7
                
                ebx_6 = arg3 + 8
                st3 = st1
                st1 = _m_psrlqi(st1, 0x38)
                
                if (edi s>= 8)
                    continue
            else
                st7 = zx.q(_bswap(*esi))
                
                if (_m_pcmpeqb(st0, st7).d != 0)
                    goto label_7031a6
                
                esi = &esi[4]
                edi += 0x20
                st1 = _m_psllqi(st1, 0x20) | st7
                var_2c += 4
                var_24 -= 4
            label_703183:
                uint64_t temp0_38 = _m_psllq(st1, _m_psubd(st4, zx.q(edi)))
                ebx_6 = arg3 + 8
                st3 = temp0_38
                st1 = _m_psrlqi(temp0_38, 0x38)
                
                if (edi s>= 8)
                    continue
            
            goto label_7031d8
        
        int32_t ecx_6 = st1.d
        st1 = st3
        int32_t eax_8 = zx.d(*(ebx_6 + (ecx_6 << 2)))
        uint32_t ebx_7 = zx.d(*(ebx_6 + (ecx_6 << 2) + 2))
        
        if (ebx_7 == 0)
        label_7031d8:
            int32_t var_18_2 = arg3
            eax_8 = sub_703325(ebp, esi, edi, x87_r1, x87_r4)
            
            if (eax_8 s< 0)
                goto label_7031f7
        else
            edi -= ebx_7
            st1 = _m_psllq(st1, zx.q(ebx_7))
        
        int32_t ecx_7 = 0xf & eax_8
        st2 = zx.q(ecx_7)
        int64_t temp0_8 = _m_psubd(st4, st2)
        
        if (ecx_7 != 0)
            int32_t edx_3 = edx_2 + (eax_8 u>> 4)
            
            if (edi s< ecx_7)
                st0 = zx.q(edi)
                st7 = _m_psubd(st4, st0)
                st0 = _m_pcmpeqb(st0, st0)
                st1 = _m_psrlq(st1, st7)
                
                if (ebx_2 != 0)
                    st1 = _m_psllq(st1, _m_psubd(st4, zx.q(edi)))
                else if (var_24 s< 4)
                label_703112:
                    
                    if (sub_703228(ebp, esi, edi, x87_r1, x87_r4) == 0)
                        goto label_7031f7
                else
                    st7 = zx.q(_bswap(*esi))
                    
                    if (_m_pcmpeqb(st0, st7).d != 0)
                        goto label_703112
                    
                    esi = &esi[4]
                    edi += 0x20
                    var_2c += 4
                    var_24 -= 4
                    st1 = _m_psllq(_m_psllqi(st1, 0x20) | st7, _m_psubd(st4, zx.q(edi)))
            
            edi -= ecx_7
            int32_t eax_10 = 0
            int32_t ebx_8 = _m_psrlq(st1, temp0_8).d
            uint64_t temp0_10 = _m_psllq(st1, st2)
            
            if (ebx_8 s< *((ecx_7 << 2) + &data_79b100))
                eax_10 = *((ecx_7 << 2) + &data_79b0c0)
            
            st1 = temp0_10
            edx_2 = edx_3 + 1
            *(arg5 + (*((edx_3 << 2) + &data_79aee0) << 1)) = (ebx_8 + eax_10).w
            ebx_6 = arg3 + 8
            
            if (edx_2 s< 0x40)
                st3 = st1
                break
        else if (eax_8 s>= 0xf0)
            edx_2 += 0x10
            ebx_6 = arg3 + 8
            
            if (edx_2 s< 0x40)
                st3 = st1
                break
        
        *arg1 = st1
        *(arg1 + 0xc) = edi
        arg1[2].d = esi
        arg1[6].b = ebx_2.b
        *(arg1 + 0x24) = var_24
        *(arg1 + 0x1c) = var_2c
        return 0
