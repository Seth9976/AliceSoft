// 函数: sub_703228
// 地址: 0x703228
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 - 0x20)
_m_psubd(arg5, zx.q(arg3))

while (true)
    int32_t temp0_1 = ecx
    ecx -= 1
    int32_t var_10
    int32_t ebx
    
    if (temp0_1 s< 1)
        void* ecx_3 = *(arg1 + 8)
        
        if (*(*(arg1 + 8) + 0x3c) != 0)
            var_10 = ebx
            int32_t* var_14_1 = &var_10
            char* var_1c_1 = arg2
            bool cond:1_1 = sub_702840(ecx_3) != 0
            ebx = var_10
            
            if (not(cond:1_1))
                arg2 = *(ecx_3 + 0x10)
                ecx = *(ecx_3 + 0x24)
                continue
        
        return 0
    
    *(arg1 - 0x28) += 1
    uint32_t eax = zx.d(*arg2)
    arg2 = &arg2[1]
    
    if (eax == 0xff)
        while (true)
            int32_t temp1_1 = ecx
            ecx -= 1
            
            if (temp1_1 s< 1)
                void* ecx_7 = *(arg1 + 8)
                
                if (*(*(arg1 + 8) + 0x3c) == 0)
                    return 0
                
                var_10 = ebx
                int32_t* var_14_2 = &var_10
                char* var_1c_2 = arg2
                bool cond:3_1 = sub_702840(ecx_7) != 0
                ebx = var_10
                
                if (cond:3_1)
                    return 0
                
                arg2 = *(ecx_7 + 0x10)
                ecx = *(ecx_7 + 0x24)
            else
                *(arg1 - 0x28) += 1
                eax = zx.d(*arg2)
                arg2 = &arg2[1]
                
                if (eax != 0xff)
                    break
        
        if (eax != 0)
            *(arg1 - 0x24) = eax
            arg4 = _m_psllqi(arg4, 8)
            arg3 += 8
            break
        
        eax = 0xff
    
    arg3 += 8
    arg4 = _m_psllqi(arg4, 8) | zx.q(eax)
    
    if (arg3 s> 0x38)
        break

*(arg1 - 0x20) = ecx
_m_psllq(arg4, _m_psubd(arg5, zx.q(arg3)))
return 0xff
