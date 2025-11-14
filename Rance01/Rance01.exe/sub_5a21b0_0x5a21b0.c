// 函数: sub_5a21b0
// 地址: 0x5a21b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8c
int32_t eax_1 = data_78c474 ^ &var_8c
int32_t var_44
__builtin_memset(&var_44, 0, 0x20)
int32_t eax_3 = 0

if (arg5 != 0)
    do
        uint32_t ecx = zx.d(*(arg3 + (eax_3 << 1)))
        *(&var_44 + (ecx << 1)) += 1
        eax_3 += 1
    while (eax_3 u< arg5)

uint32_t eax_4 = *arg2
uint32_t var_88 = eax_4
uint32_t ecx_2 = 0xf

while (*(&var_44 + (ecx_2 << 1)) == 0)
    ecx_2 -= 1
    
    if (ecx_2 u< 1)
        break

if (eax_4 u> ecx_2)
    var_88 = ecx_2
    eax_4 = ecx_2

if (ecx_2 == 0)
    int32_t* ecx_3 = *arg6
    var_8c = 0x140
    int32_t eax_5 = var_8c
    *ecx_3 = eax_5
    *arg6 += 4
    **arg6 = eax_5
    *arg6 += 4
    *arg2 = 1
    sub_6b4885(eax_1 ^ &var_8c)
    return 0

uint32_t ebx = 1

if (ecx_2 u> 1)
    while (*(&var_44 + (ebx << 1)) == 0)
        ebx += 1
        
        if (ebx u>= ecx_2)
            break

if (eax_4 u< ebx)
    var_88 = ebx

int32_t edx = 1
int32_t eax_7 = 1
int32_t result

while (true)
    uint32_t edi_1 = zx.d(*(&var_44 + (eax_7 << 1)))
    int32_t edx_1 = edx * 2
    edx = edx_1 - edi_1
    
    if (edx_1 - edi_1 s>= 0)
        eax_7 += 1
        
        if (eax_7 u<= 0xf)
            continue
        else
            if (edx s<= 0)
            label_5a22f3:
                int16_t var_22_1 = 0
                void var_24
                
                for (int32_t i = 2; i u< 0x1e; )
                    int16_t ecx_7 = *(&var_24 + i) + *(&var_44 + i)
                    i += 2
                    *(&var_24 + i) = ecx_7
                
                int32_t eax_8 = 0
                
                if (arg5 u> 0)
                    do
                        if (*(arg3 + (eax_8 << 1)) != 0)
                            arg7[zx.d(*(&var_24 + (zx.d(*(arg3 + (eax_8 << 1))) << 1)))] = eax_8.w
                            uint32_t ecx_10 = zx.d(*(arg3 + (eax_8 << 1)))
                            *(&var_24 + (ecx_10 << 1)) += 1
                        
                        eax_8 += 1
                    while (eax_8 u< arg5)
                
                void* const var_6c_1
                int32_t var_68_1
                void* const var_64_1
                
                if (arg4 == 0)
                    var_64_1 = arg7
                    var_6c_1 = arg7
                    var_68_1 = 0x13
                else if (arg4 == 1)
                    var_6c_1 = &data_746d16
                    var_64_1 = &data_746d56
                    var_68_1 = 0x100
                else
                    var_6c_1 = &data_746f98
                    var_64_1 = &data_746fd8
                    var_68_1 = 0xffffffff
                
                int32_t var_7c_1 = 0
                int32_t var_78_1 = *arg6
                uint32_t var_84_1 = 0
                int32_t eax_13 = 1 << var_88.b
                int32_t ebp_1 = 0xffffffff
                int32_t ecx_13 = eax_13 - 1
                int32_t var_5c_1 = eax_13
                int32_t var_80_1 = eax_13
                bool cond:1_1
                
                if (arg4 != 1)
                    if (arg4 == 2)
                        cond:1_1 = eax_13 u>= 0x250
                        goto label_5a23ee
                    
                label_5a23f4:
                    int16_t* var_74_1 = arg7
                    
                    while (true)
                        char edx_3 = var_84_1.b
                        eax_13.b = ebx.b
                        eax_13.b -= edx_3
                        var_8c:1.b = eax_13.b
                        uint32_t eax_14 = zx.d(*var_74_1)
                        
                        if (eax_14 s< var_68_1)
                            var_8c.b = 0
                            var_8c:2.w = eax_14.w
                        else if (eax_14 s<= var_68_1)
                            var_8c.b = 0x60
                            var_8c:2.w = 0
                        else
                            char* eax_16 = zx.d(*var_74_1) * 2
                            void* const ecx_15
                            ecx_15.b = *(eax_16 + var_64_1)
                            var_8c.b = ecx_15.b
                            eax_16.w = *(eax_16 + var_6c_1)
                            var_8c:2.w = eax_16.w
                        
                        int32_t eax_17 = var_5c_1
                        int32_t edx_4 = 1 << (ebx.b - edx_3)
                        int32_t var_48_1 = eax_17
                        int32_t* ecx_21 = var_78_1 + (((var_7c_1 u>> var_84_1.b) + eax_17) << 2)
                        int32_t edi_7 = var_8c
                        int32_t temp3_1
                        
                        do
                            ecx_21 -= edx_4 << 2
                            temp3_1 = eax_17
                            eax_17 -= edx_4
                            *ecx_21 = edi_7
                        while (temp3_1 != edx_4)
                        int32_t eax_18 = 1 << (ebx.b - 1)
                        
                        while ((var_7c_1 & eax_18) != 0)
                            eax_18 u>>= 1
                        
                        if (eax_18 == 0)
                            var_7c_1 = 0
                        else
                            var_7c_1 = ((eax_18 - 1) & var_7c_1) + eax_18
                        
                        var_74_1 = &var_74_1[1]
                        int16_t temp4_1 = *(&var_44 + (ebx << 1))
                        *(&var_44 + (ebx << 1)) -= 1
                        
                        if (temp4_1 == 1)
                            if (ebx == ecx_2)
                                if (var_7c_1 != 0)
                                    ebx.b -= var_84_1.b
                                    var_8c:2.w = 0
                                    var_8c.b = 0x40
                                    var_8c:1.b = ebx.b
                                    *(var_78_1 + (var_7c_1 << 2)) = var_8c
                                
                                *arg6 += var_80_1 << 2
                                *arg2 = var_88
                                result = 0
                                break
                            
                            ebx = zx.d(*(arg3 + (zx.d(*var_74_1) << 1)))
                        
                        if (ebx u> var_88)
                            int32_t esi_4 = ecx_13 & var_7c_1
                            
                            if (esi_4 != ebp_1)
                                uint32_t edx_9 = var_84_1
                                
                                if (edx_9 == 0)
                                    var_84_1 = var_88
                                    edx_9 = var_88
                                
                                uint32_t ecx_28 = ebx - edx_9
                                var_78_1 += var_48_1 << 2
                                uint32_t edx_10 = edx_9 + ecx_28
                                int32_t eax_21 = 1 << ecx_28.b
                                
                                if (edx_10 u< ecx_2)
                                    int32_t __saved_ebx
                                    void* esi_5 = &__saved_ebx + (edx_10 << 1) + 0x58
                                    
                                    do
                                        int32_t eax_22 = eax_21 - zx.d(*esi_5)
                                        
                                        if (eax_22 s<= 0)
                                            break
                                        
                                        edx_10 += 1
                                        ecx_28 += 1
                                        esi_5 += 2
                                        eax_21 = eax_22 * 2
                                    while (edx_10 u< ecx_2)
                                
                                int32_t eax_23 = 1 << ecx_28.b
                                int32_t edx_12 = var_80_1 + eax_23
                                var_5c_1 = eax_23
                                var_80_1 = edx_12
                                bool cond:4_1
                                
                                if (arg4 == 1)
                                    cond:4_1 = edx_12 u>= 0x354
                                label_5a258e:
                                    
                                    if (cond:4_1)
                                        goto label_5a2600
                                else if (arg4 == 2)
                                    cond:4_1 = edx_12 u>= 0x250
                                    goto label_5a258e
                                ebp_1 = esi_4
                                *(*arg6 + (ebp_1 << 2)) = ecx_28.b
                                int32_t edx_13
                                edx_13.b = var_88.b
                                *(*arg6 + (ebp_1 << 2) + 1) = edx_13.b
                                eax_13 = *arg6
                                *(eax_13 + (ebp_1 << 2) + 2) = ((var_78_1 - eax_13) s>> 2).w
                else
                    cond:1_1 = eax_13 u>= 0x354
                label_5a23ee:
                    
                    if (not(cond:1_1))
                        goto label_5a23f4
                    
                label_5a2600:
                    result = 1
                break
            
            if (arg4 != 0 && ecx_2 == 1)
                goto label_5a22f3
    
    result = 0xffffffff
    break

sub_6b4885(eax_1 ^ &var_8c)
return result
