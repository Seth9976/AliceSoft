// 函数: sub_5aad60
// 地址: 0x5aad60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
arg1.b = edi[2].b
void* i_13 = *edi

if (arg1.b == 0)
    uint32_t ebx_1
    
    if (arg4 == 0)
        ebx_1 = 0
    else
        ebx_1 = zx.d(*(arg4 + 8))
    
    arg1.b = *(edi + 9)
    
    if (arg1.b u< 8)
        uint32_t eax = zx.d(arg1.b)
        
        if (eax == 1)
            void* var_c_3 = i_13 + arg2 - 1
            uint32_t edi_9 = ((i_13 - 1) u>> 3) + arg2
            arg1 = 7 - ((i_13 - 1) & 7)
            
            if (i_13 != 0)
                void* i_9 = i_13
                void* i
                
                do
                    int16_t ebx_9
                    ebx_9.b = *edi_9
                    void* ecx_10
                    ecx_10.b = arg1.b
                    ebx_9.b u>>= ecx_10.b
                    ebx_9.b &= 1
                    char temp3_1 = ebx_9.b
                    ebx_9.b = neg.b(ebx_9.b)
                    ebx_9.b = sbb.b(ebx_9.b, ebx_9.b, temp3_1 != 0)
                    *var_c_3 = ebx_9.b
                    
                    if (arg1 != 7)
                        arg1 += 1
                    else
                        arg1 = nullptr
                        edi_9 -= 1
                    
                    var_c_3 -= 1
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            edi = arg3
            ebx_1 = zx.d((ebx_1.w & 1) * 0xff)
        else if (eax == 2)
            uint32_t edi_6 = ((i_13 - 1) u>> 2) + arg2
            arg1 = i_13 + arg2 - 1
            int32_t ebx_7 = (3 - ((i_13 - 1) & 3)) * 2
            void* var_c_2 = arg1
            
            if (i_13 != 0)
                void* i_8 = i_13
                void* i_1
                
                do
                    void* ecx_7
                    ecx_7.b = ebx_7.b
                    char eax_14 = (zx.d(*edi_6) u>> ecx_7.b).b & 3
                    ecx_7.b = eax_14
                    ecx_7.b *= 2
                    ecx_7.b *= 2
                    ecx_7.b |= eax_14
                    ecx_7.b *= 2
                    ecx_7.b *= 2
                    ecx_7.b |= eax_14
                    ecx_7.b *= 2
                    ecx_7.b *= 2
                    ecx_7.b |= eax_14
                    *var_c_2 = ecx_7.b
                    
                    if (ebx_7 != 6)
                        ebx_7 += 2
                    else
                        ebx_7 = 0
                        edi_6 -= 1
                    
                    arg1 = 1
                    var_c_2 -= 1
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
            
            edi = arg3
            ebx_1 = zx.d((ebx_1.w & 3) * 0x55)
        else
            arg1 = eax - 4
            
            if (eax == 4)
                int32_t ebx_2 = ebx_1 & 0xf
                arg1 = ((i_13 - 1) & 1) * 4
                char* edi_3 = ((i_13 - 1) u>> 1) + arg2
                void* ebx_3 = 4 - arg1
                char* var_c_1 = i_13 + arg2 - 1
                
                if (i_13 != 0)
                    void* i_7 = i_13
                    void* i_2
                    
                    do
                        char* ecx_4
                        ecx_4.b = ebx_3.b
                        char eax_10 = (zx.d(*edi_3) u>> ecx_4.b).b & 0xf
                        ecx_4.b = eax_10
                        ecx_4.b <<= 4
                        ecx_4.b |= eax_10
                        *var_c_1 = ecx_4.b
                        
                        if (ebx_3 != 4)
                            ebx_3 = 4
                        else
                            ebx_3 = nullptr
                            edi_3 -= 1
                        
                        arg1 = 1
                        var_c_1 -= 1
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                
                edi = arg3
                ebx_1 = zx.d((ebx_2 << 4).w + ebx_2.w)
        
        *(edi + 9) = 8
        *(edi + 0xb) = 8
        edi[1] = i_13
    
    if (arg4 != 0)
        arg1.b = *(edi + 9)
        
        if (arg1.b != 8)
            if (arg1.b == 0x10)
                int32_t eax_19 = edi[1]
                char* ecx_13 = eax_19 + arg2 - 1
                arg1 = arg2 + (eax_19 << 1) - 1
                
                if (i_13 != 0)
                    void* i_12 = i_13
                    void* i_3
                    
                    do
                        arg2.b = (ebx_1 u>> 8).b
                        
                        if (ecx_13[0xffffffff] != arg2.b || *ecx_13 != ebx_1.b)
                            *(arg1 - 1) = 0xffff
                        else
                            *(arg1 - 1) = 0
                        
                        *(arg1 - 2) = *ecx_13
                        *(arg1 - 3) = ecx_13[0xffffffff]
                        arg1 -= 4
                        ecx_13 -= 2
                        i_3 = i_12
                        i_12 -= 1
                    while (i_3 != 1)
                    edi = arg3
            
            goto label_5aafc8
        
        char* ebp_1 = i_13 + arg2 - 1
        char* edx = arg2 + (i_13 << 1) - 1
        
        if (i_13 == 0)
        label_5aafc8:
            arg1.b = *(edi + 9)
            edi[2].b = 4
            *(edi + 0xa) = 2
        else
            arg1 = i_13
            void* i_4
            
            do
                if (zx.w(*ebp_1) != (ebx_1.w & 0xff))
                    *edx = 0xff
                else
                    *edx = 0
                
                uint16_t ecx_12
                ecx_12.b = *ebp_1
                *(edx - 1) = ecx_12.b
                edx -= 2
                ebp_1 -= 1
                i_4 = arg1
                arg1 -= 1
            while (i_4 != 1)
            arg1.b = *(edi + 9)
            edi[2].b = 4
            *(edi + 0xa) = 2
        
        goto label_5ab121
else if (arg1.b == 2 && arg4 != 0)
    arg1.b = *(edi + 9)
    int32_t ebx
    
    if (arg1.b == 8)
        arg1.b = *(arg4 + 4)
        char ecx = *(arg4 + 6)
        ebx.b = *(arg4 + 2)
        arg3.b = arg1.b
        char* ecx_14 = edi[1] + arg2 - 1
        arg1 = arg2 + (i_13 << 2) - 1
        
        if (i_13 != 0)
            void* i_10 = i_13
            void* i_5
            
            do
                if (ecx_14[0xfffffffe] != ebx.b)
                    *arg1 = 0xff
                else
                    arg2.b = arg3.b
                    
                    if (ecx_14[0xffffffff] != arg2.b)
                        *arg1 = 0xff
                    else
                        arg2.b = ecx
                        
                        if (*ecx_14 != arg2.b)
                            *arg1 = 0xff
                        else
                            *arg1 = 0
                
                *(arg1 - 1) = *ecx_14
                *(arg1 - 2) = ecx_14[0xffffffff]
                *(arg1 - 3) = ecx_14[0xfffffffe]
                arg1 -= 4
                ecx_14 -= 3
                i_5 = i_10
                i_10 -= 1
            while (i_5 != 1)
    else if (arg1.b == 0x10)
        char eax_23 = *(arg4 + 5)
        char ecx_15 = *(arg4 + 7)
        ebx.b = *(arg4 + 3)
        char ecx_16 = *(arg4 + 4)
        arg3.b = *(arg4 + 2)
        char eax_25 = *(arg4 + 6)
        arg1 = arg2 + (i_13 << 3) - 1
        
        if (i_13 != 0)
            void* i_11 = i_13
            char* ecx_19 = edi[1] + arg2 - 1
            void* i_6
            
            do
                if (ecx_19[0xfffffffb] != ebx.b)
                    *(arg1 - 1) = 0xffff
                else
                    arg2.b = arg3.b
                    
                    if (ecx_19[0xfffffffc] != arg2.b)
                        *(arg1 - 1) = 0xffff
                    else
                        arg2.b = eax_23
                        
                        if (ecx_19[0xfffffffd] != arg2.b)
                            *(arg1 - 1) = 0xffff
                        else
                            arg2.b = ecx_16
                            
                            if (ecx_19[0xfffffffe] != arg2.b)
                                *(arg1 - 1) = 0xffff
                            else
                                arg2.b = ecx_15
                                
                                if (ecx_19[0xffffffff] != arg2.b)
                                    *(arg1 - 1) = 0xffff
                                else
                                    arg2.b = eax_25
                                    
                                    if (*ecx_19 != arg2.b)
                                        *(arg1 - 1) = 0xffff
                                    else
                                        *(arg1 - 1) = 0
                
                *(arg1 - 2) = *ecx_19
                *(arg1 - 3) = ecx_19[0xffffffff]
                *(arg1 - 4) = ecx_19[0xfffffffe]
                *(arg1 - 5) = ecx_19[0xfffffffd]
                *(arg1 - 6) = ecx_19[0xfffffffc]
                *(arg1 - 7) = ecx_19[0xfffffffb]
                arg1 -= 8
                ecx_19 -= 6
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)
    arg1.b = *(edi + 9)
    edi[2].b = 6
    *(edi + 0xa) = 4
    arg1.b *= 2
label_5ab121:
    arg1.b *= 2
    *(edi + 0xb) = arg1.b
    uint32_t eax_27 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        int32_t eax_29 = (eax_27 u>> 3) * i_13
        edi[1] = eax_29
        return eax_29
    
    arg1 = (eax_27 * i_13 + 7) u>> 3
    edi[1] = arg1

return arg1
