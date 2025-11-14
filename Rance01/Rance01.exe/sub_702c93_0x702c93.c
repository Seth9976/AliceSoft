// 函数: sub_702c93
// 地址: 0x702c93
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t entry_ebx
*(arg1 - 0x10) = entry_ebx

if (arg2 s>= entry_ebx)
    goto label_702c9f

int32_t* esi
uint64_t x87_r1
uint64_t x87_r4

if (sub_702b35(arg1, esi, arg2, x87_r1, x87_r4) != 0)
    entry_ebx = *(arg1 - 0x10)
label_702c9f:
    int32_t edi = arg2 - entry_ebx
    uint64_t st7 = zx.q(entry_ebx)
    uint64_t st2 = arg3
    int64_t temp0_1 = _m_psubd(arg4, st7)
    arg3 = _m_psllq(arg3, st7)
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
            
            int32_t eax_5 = *(arg1 - 0x10)
            int32_t ebx_2 = *(arg1 - 0x14)
            ecx_1.w -= *(ebx_2 + (eax_5 << 1) + 0x608)
            ecx_1.w += *(ebx_2 + (eax_5 << 1) + 0x64e)
            return sx.d(*(ebx_2 + (ecx_1 << 1) + 0x408))
        
        if (edi s< 1 && sub_702b35(arg1, esi, edi, x87_r1, x87_r4) == 0)
            break
        
        edi -= 1
        uint64_t temp0_4 = _m_psrlqi(arg3, 0x3f)
        arg3 = _m_psllqi(arg3, 1)
        uint64_t temp0_6 = _m_psllqi(zx.q(ecx_1), 1)
        *(arg1 - 0x10) += 1
        ecx_1 = (temp0_6 | temp0_4).d

return 1
