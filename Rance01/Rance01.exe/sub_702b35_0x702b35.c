// 函数: sub_702b35
// 地址: 0x702b35
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint64_t st0 = zx.q(arg3)
int32_t ecx = *(arg1 - 0x24)
int64_t temp0 = _m_psubd(arg5, st0)
st0 = _m_pcmpeqb(st0, st0)
arg4 = _m_psrlq(arg4, temp0)

if (*(arg1 - 0x20) == 0)
    if (ecx s>= 4)
        int64_t st7 = zx.q(_bswap(*arg2))
        
        if (_m_pcmpeqb(st0, st7).d == 0)
            arg4 = _m_psllqi(arg4, 0x20) | st7
            *(arg1 - 0x28) += 4
            *(arg1 - 0x24) = ecx - 4
            _m_psllq(arg4, _m_psubd(arg5, zx.q(arg3 + 0x20)))
            return 0xff
    
    ecx = *(arg1 - 0x24)
    _m_psubd(arg5, zx.q(arg3))
    
    while (true)
        int32_t temp0_8 = ecx
        ecx -= 1
        int32_t var_10
        int32_t ebx
        
        if (temp0_8 s< 1)
            void* ecx_4 = *(arg1 + 8)
            
            if (*(*(arg1 + 8) + 0x3c) != 0)
                var_10 = ebx
                int32_t* var_14_1 = &var_10
                int32_t* var_1c_1 = arg2
                bool cond:1_1 = sub_702840(ecx_4) != 0
                ebx = var_10
                
                if (not(cond:1_1))
                    arg2 = *(ecx_4 + 0x10)
                    ecx = *(ecx_4 + 0x24)
                    continue
            
            return 0
        
        *(arg1 - 0x28) += 1
        int32_t eax
        eax.b = *arg2
        arg2 += 1
        
        if (eax == 0xff)
            while (true)
                int32_t temp1_1 = ecx
                ecx -= 1
                
                if (temp1_1 s< 1)
                    void* ecx_8 = *(arg1 + 8)
                    
                    if (*(*(arg1 + 8) + 0x3c) == 0)
                        return 0
                    
                    var_10 = ebx
                    int32_t* var_14_2 = &var_10
                    int32_t* var_1c_2 = arg2
                    bool cond:3_1 = sub_702840(ecx_8) != 0
                    ebx = var_10
                    
                    if (cond:3_1)
                        return 0
                    
                    arg2 = *(ecx_8 + 0x10)
                    ecx = *(ecx_8 + 0x24)
                else
                    *(arg1 - 0x28) += 1
                    eax.b = *arg2
                    arg2 += 1
                    
                    if (eax != 0xff)
                        break
            
            if (eax != 0)
                *(arg1 - 0x20) = eax.b
                arg4 = _m_psllqi(arg4, 8)
                arg3 += 8
                break
            
            eax = 0xff
        
        arg3 += 8
        arg4 = _m_psllqi(arg4, 8) | zx.q(eax)
        
        if (arg3 s> 0x38)
            break

*(arg1 - 0x24) = ecx
_m_psllq(arg4, _m_psubd(arg5, zx.q(arg3)))
return 0xff
