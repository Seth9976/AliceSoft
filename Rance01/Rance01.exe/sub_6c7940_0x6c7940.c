// 函数: sub_6c7940
// 地址: 0x6c7940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char ecx = 0
int32_t eax
eax.b = 0
char edx = 0
char var_18 = 0
eax.b = 0
char var_1c = 0

if (*arg1 == 0)
    int32_t esi_1 = arg1[0x16]
    
    if (esi_1 == 0xffffffff)
        return 0xfffffff8
    
    if (esi_1 != 0 && esi_1 != 1 && esi_1 != 2 && esi_1 != 3 && esi_1 != 4 && esi_1 != 5
            && esi_1 != 6 && esi_1 != 7 && esi_1 != 0xe && esi_1 != 0xf && esi_1 != 0x10
            && esi_1 != 0x11 && esi_1 != 0x12 && esi_1 != 0x13 && esi_1 != 0x14 && esi_1 != 0x15)
        if (esi_1 != 8 && esi_1 != 9 && esi_1 != 0xa && esi_1 != 0xb && esi_1 != 0xc
                && esi_1 != 0xd)
            return 0xfffffff8
        
        var_18 = 1
    else
        ecx = 1
    
    if (esi_1 == 0 || esi_1 == 2 || esi_1 == 4 || esi_1 == 6 || esi_1 == 0xe || esi_1 == 0x10
            || esi_1 == 0x12 || esi_1 == 0x14 || esi_1 == 8 || esi_1 == 0xa || esi_1 == 0xc)
        edx = 1
    
    if (esi_1 == 2 || esi_1 == 3 || esi_1 == 6 || esi_1 == 7 || esi_1 == 8 || esi_1 == 9
            || esi_1 == 0xc || esi_1 == 0xd || esi_1 == 0x12 || esi_1 == 0x13 || esi_1 == 0x10
            || esi_1 == 0x11 || esi_1 == 0xf || esi_1 == 0xf || esi_1 == 0x14 || esi_1 == 0x15)
        eax.b = 1
        int32_t ebx_2 = arg1[0x138d]
        
        if (ebx_2 == 0)
            if (arg1[1] == 0)
                return 0xfffffff8
            
            int32_t ebx_4 = arg1[2]
            
            if (ebx_4 s> 0xffff || ebx_4 s<= 0)
                return 0xfffffff8
            
            int32_t ebx_5 = arg1[3]
            
            if (ebx_5 s> 0xffff || ebx_5 s< 0xffff0001)
                return 0xfffffff8
            
            if (esi_1 == 0x14 || esi_1 == 0x15)
                int32_t ebx_11 = arg1[6]
                
                if (ebx_11 != 1 && ebx_11 != 2)
                    return 0xffffffe5
            
            if (ebx_2 == 0)
                if (arg1[4] s< 0)
                    return 0xfffffff8
                
                int32_t ebx_8 = arg1[5]
                
                if (ebx_8 s<= 0 || ebx_8 s> 0xff)
                    return 0xfffffff8
                
                int32_t ebx_9 = arg1[7]
                
                if (ebx_9 != 0 && (ebx_9 != 2 || arg1[6] != 3))
                    return 0xfffffffd
    
    if (edx == 0)
        if (arg1[9] == 0 || arg1[0xa] == 0)
            return 0xfffffff8
    else if (arg1[8] == 0)
        return 0xfffffff8
    
    int32_t ebx_1 = arg1[0xd]
    
    if (ebx_1 s<= 0 || ebx_1 s> 0x100)
        return 0xfffffff8
    
    int32_t edx_1
    edx_1.b = var_18
    
    if (edx_1.b != 0)
        if (eax.b != 0)
            int32_t eax_1 = arg1[0xb]
            
            if (eax_1 s<= 0 || eax_1 s> 0xffff)
                return 0xfffffff8
            
            int32_t eax_2 = arg1[0xc]
            
            if (eax_2 s<= 0 || eax_2 s> 0xffff)
                return 0xfffffff8
            
            if (arg1[6] != 4 && arg1[0xe] != 3 && ebx_1 s> arg1[5])
                return 0xfffffff8
        
        if (ebx_1 == 1 && arg1[0xf] != 0)
            return 0xfffffffd
        
        if (ebx_1 == 3)
            eax = arg1[0xf]
            
            if (eax != 1 && eax != 2 && eax != 0)
                return 0xfffffffd
        
        if (ebx_1 == 4)
            eax = arg1[0xf]
            
            if (eax != 3 && eax != 4 && eax != 0)
                return 0xfffffffd
        
        if (ebx_1 != 1 && ebx_1 != 3 && ebx_1 != 4 && arg1[0xf] != 0)
            return 0xfffffffd
    
    if (ecx == 0)
        eax = arg1[6]
        
        if (eax == 4 && arg1[5] == 1)
            int32_t edx_17 = arg1[0xe]
            
            if (edx_17 == 4 && ebx_1 == 1)
                var_1c = 1
            else if (edx_17 == 3 && ebx_1 == 3)
                var_1c = 1
        
        if (eax == 1 && arg1[5] == 3)
            int32_t edx_15 = arg1[0xe]
            
            if ((edx_15 == 4 && ebx_1 == 1) || (edx_15 == 1 && ebx_1 == 3))
                var_1c = 1
            else if (edx_15 == 3 && ebx_1 == 3)
                var_1c = 1
        
        if (eax == 1 && arg1[5] == 4 && arg1[0xe] == 3 && ebx_1 == 3)
            var_1c = 1
        
        if (eax == 2 && arg1[5] == 3)
            int32_t edx_11 = arg1[0xe]
            
            if ((edx_11 == 4 && ebx_1 == 1) || (edx_11 == 1 && ebx_1 == 3))
                var_1c = 1
            else if (edx_11 == 3 && ebx_1 == 3)
                var_1c = 1
        
        if (eax == 5 && arg1[5] == 4)
            int32_t edx_9 = arg1[0xe]
            
            if (edx_9 == 5 && ebx_1 == 4)
                var_1c = 1
            else if (edx_9 == 6 && ebx_1 == 4)
                var_1c = 1
        
        if (eax == 3 && arg1[5] == 3 && arg1[0xe] == 3 && ebx_1 == 3)
            var_1c = 1
        
        if (eax != 0xff || ebx_1 s> arg1[5] || arg1[0xe] != 0xff)
            goto label_6c7c14
    else
        int32_t ecx_1 = arg1[0xe]
        
        if (ecx_1 == 4 && ebx_1 == 1)
            int32_t edx_5 = arg1[6]
            
            if ((edx_5 == 4 && arg1[5] == 1) || (edx_5 == 1 && arg1[5] == 3)
                    || (edx_5 == 2 && arg1[5] == 3))
                eax.b = 1
                var_1c = 1
            else if (edx_5 == 5 && arg1[5] == 4)
                eax.b = 1
                var_1c = 1
        
        if (ecx_1 == 1 && ebx_1 == 3)
            int32_t edx_4 = arg1[6]
            
            if ((edx_4 == 1 && arg1[5] == 3) || (edx_4 == 2 && arg1[5] == 3))
                eax.b = 1
                var_1c = 1
            else if (edx_4 == 5 && arg1[5] == 4)
                eax.b = 1
                var_1c = 1
        
        if (ecx_1 == 5 && ebx_1 == 4 && arg1[6] == 5 && arg1[5] == 4)
            eax.b = 1
            var_1c = 1
        
        if (ecx_1 == 3 && ebx_1 == 3)
            int32_t edx_3 = arg1[6]
            
            if ((edx_3 == 4 && arg1[5] == 1) || (edx_3 == 1 && arg1[5] == 3)
                    || (edx_3 == 2 && arg1[5] == 3))
                eax.b = 1
                var_1c = 1
            else if (edx_3 == 5 && arg1[5] == 4)
                eax.b = 1
                var_1c = 1
            
            if (edx_3 == 3)
                eax.b = 1
                var_1c = 1
        
        if (ecx_1 == 6 && ebx_1 == 4 && arg1[6] == 5 && arg1[5] == 4)
            eax.b = 1
            var_1c = 1
        
        if (ecx_1 != 0xff || arg1[6] != 0xff)
        label_6c7c14:
            eax.b = var_1c
            
            if (eax.b == 0)
                return 0xfffffff8
    
    int32_t eax_5 = arg1[0x1b]
    
    if (eax_5 != 0 && eax_5 != 1)
        return 0xfffffff8
    
    if (arg1[0x1390] == 1 && arg1[0x138d] != 0)
        return 0xfffffff8

return 0
