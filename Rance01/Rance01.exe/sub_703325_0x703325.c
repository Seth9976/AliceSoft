// 函数: sub_703325
// 地址: 0x703325
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t entry_ebx
*(arg1 - 0x10) = entry_ebx

if (arg3 s>= entry_ebx)
    goto label_703331

char st0[0x8] = zx.q(arg3)
int32_t ecx_2 = *(arg1 - 0x20)
int64_t temp0_7 = _m_psubd(arg5, st0)
char temp0_8[0x8] = _m_pcmpeqb(st0, st0)
arg4 = _m_psrlq(arg4, temp0_7)

if (*(arg1 - 0x24) != 0)
    goto label_7033f3

int32_t eax_4
uint64_t st7

if (ecx_2 s>= 4)
    st7 = zx.q(_bswap(*arg2))
    eax_4 = _m_pcmpeqb(temp0_8, st7)[0].d

uint64_t x87_r1
int64_t x87_r4

if (ecx_2 s< 4 || eax_4 != 0)
    if (sub_703228(arg1, arg2, arg3, x87_r1, x87_r4) != 0)
        entry_ebx = *(arg1 - 0x10)
        goto label_703331
else
    arg2 = &arg2[4]
    arg3 += 0x20
    arg4 = _m_psllqi(arg4, 0x20) | st7
    *(arg1 - 0x28) += 4
    *(arg1 - 0x20) = ecx_2 - 4
label_7033f3:
    arg4 = _m_psllq(arg4, _m_psubd(arg5, zx.q(arg3)))
    entry_ebx = *(arg1 - 0x10)
label_703331:
    int32_t edi = arg3 - entry_ebx
    st7 = zx.q(entry_ebx)
    uint64_t st2 = arg4
    int64_t temp0_1 = _m_psubd(arg5, st7)
    arg4 = _m_psllq(arg4, st7)
    int32_t ecx_1 = _m_psrlq(st2, temp0_1).d
    
    while (true)
        int32_t eax_1 = *(arg1 - 0x10)
        int32_t edx_1 = *(arg1 - 0x14)
        int32_t ebx = sx.d(*(edx_1 + (eax_1 << 1) + 0x62a))
        
        if (ebx != 0xffffffff)
            ebx = zx.d(*(edx_1 + (eax_1 << 1) + 0x62a))
        
        if (ebx s>= ecx_1)
            if (eax_1 s> 0x10)
                return 0
            
            int32_t eax_11 = *(arg1 - 0x10)
            int32_t ebx_2 = *(arg1 - 0x14)
            ecx_1.w -= *(ebx_2 + (eax_11 << 1) + 0x608)
            ecx_1.w += *(ebx_2 + (eax_11 << 1) + 0x64e)
            return sx.d(*(ebx_2 + (ecx_1 << 1) + 0x408))
        
        if (edi s< 1)
            st0 = zx.q(edi)
            int32_t ecx_4 = *(arg1 - 0x20)
            int64_t temp0_14 = _m_psubd(arg5, st0)
            char temp0_15[0x8] = _m_pcmpeqb(st0, st0)
            arg4 = _m_psrlq(arg4, temp0_14)
            
            if (*(arg1 - 0x24) != 0)
                arg4 = _m_psllq(arg4, _m_psubd(arg5, zx.q(edi)))
            else
                int32_t eax_8
                
                if (ecx_4 s>= 4)
                    st7 = zx.q(_bswap(*arg2))
                    eax_8 = _m_pcmpeqb(temp0_15, st7)[0].d
                
                if (ecx_4 s< 4 || eax_8 != 0)
                    if (sub_703228(arg1, arg2, edi, x87_r1, x87_r4) == 0)
                        break
                else
                    arg2 = &arg2[4]
                    edi += 0x20
                    arg4 = _m_psllqi(arg4, 0x20) | st7
                    *(arg1 - 0x28) += 4
                    *(arg1 - 0x20) = ecx_4 - 4
                    arg4 = _m_psllq(arg4, _m_psubd(arg5, zx.q(edi)))
        
        edi -= 1
        uint64_t temp0_4 = _m_psrlqi(arg4, 0x3f)
        arg4 = _m_psllqi(arg4, 1)
        uint64_t temp0_6 = _m_psllqi(zx.q(ecx_1), 1)
        *(arg1 - 0x10) += 1
        ecx_1 = (temp0_6 | temp0_4).d
return 1
