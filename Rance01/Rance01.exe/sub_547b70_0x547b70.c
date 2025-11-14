// 函数: sub_547b70
// 地址: 0x547b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebp = arg3
void* edi

if (arg2[1] != 0)
    edi = *arg2
else
    edi = nullptr

uint32_t i

if (ebp != 0)
    int32_t ebx_2 = 1
    
    if (sub_550c30(arg2) s> 1)
        uint32_t eax_5
        
        do
            int32_t esi_1 = ebx_2 - 1
            arg3 = fconvert.s(fconvert.t(*(edi + (ebx_2 << 2))))
            
            if (ebx_2 s>= 1)
                int32_t temp1_1
                
                do
                    int32_t var_4
                    int32_t eax_3
                    int32_t edx_2
                    eax_3, edx_2 = sub_548460(ebp, arg1, fconvert.s(fconvert.t(arg3)), 
                        fconvert.s(fconvert.t(*(edi + (esi_1 << 2)))), &var_4)
                    
                    if (eax_3.b == 0)
                        return sub_53d1c0(eax_3, edx_2, arg1, 0x7500c8)
                    
                    if (var_4 s<= 0)
                        break
                    
                    temp1_1 = esi_1
                    esi_1 -= 1
                    *(edi + (esi_1 << 2) + 8) = fconvert.s(fconvert.t(*(edi + (esi_1 << 2) + 4)))
                while (temp1_1 - 1 s>= 0)
            
            *(edi + (esi_1 << 2) + 4) = fconvert.s(fconvert.t(arg3))
            ebx_2 += 1
            eax_5 = sub_550c30(arg2)
        while (ebx_2 s< eax_5)
        
        eax_5.b = 1
        return eax_5
else if (sub_550c30(arg2) s> 1)
    int32_t j_1 = 0
    float* ebx_1 = edi + 4
    
    do
        int32_t j = j_1
        long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*ebx_1)))
        
        if (j_1 s>= 0)
            int32_t eax
            
            if (j_1 + 1 s>= 4)
                void* edx_1 = &ebx_1[-2]
                
                do
                    long double x87_r6_1 = fconvert.t(*(edx_1 + 4))
                    x87_r6_1 - x87_r7_2
                    eax.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax:1.b & 0x41) != 0)
                        goto label_547c41
                    
                    *(edx_1 + 8) = fconvert.s(fconvert.t(*(edx_1 + 4)))
                    long double x87_r6_3 = fconvert.t(*edx_1)
                    x87_r6_3 - x87_r7_2
                    eax.w = (x87_r6_3 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax:1.b & 0x41) != 0)
                        j -= 1
                        goto label_547c41
                    
                    *(edx_1 + 4) = fconvert.s(fconvert.t(*edx_1))
                    long double x87_r6_5 = fconvert.t(*(edx_1 - 4))
                    x87_r6_5 - x87_r7_2
                    eax.w = (x87_r6_5 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_5, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax:1.b & 0x41) != 0)
                        j -= 2
                        goto label_547c41
                    
                    *edx_1 = fconvert.s(fconvert.t(*(edx_1 - 4)))
                    long double x87_r6_7 = fconvert.t(*(edx_1 - 8))
                    x87_r6_7 - x87_r7_2
                    eax.w = (x87_r6_7 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_7, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_7 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax:1.b & 0x41) != 0)
                        j -= 3
                        goto label_547c41
                    
                    j -= 4
                    *(edx_1 - 4) = fconvert.s(fconvert.t(*(edx_1 - 8)))
                    edx_1 -= 0x10
                while (j s>= 3)
            
            if (j s>= 0)
                int32_t j_2
                
                do
                    long double x87_r6_9 = fconvert.t(*(edi + (j << 2)))
                    x87_r6_9 - x87_r7_2
                    eax.w = (x87_r6_9 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_9, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_9 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax:1.b & 0x41) != 0)
                        break
                    
                    j_2 = j
                    j -= 1
                    *(edi + (j << 2) + 8) = fconvert.s(fconvert.t(*(edi + (j << 2) + 4)))
                while (j_2 - 1 s>= 0)
        
    label_547c41:
        *(edi + (j << 2) + 4) = fconvert.s(x87_r7_2)
        ebx_1 = &ebx_1[1]
        j_1 += 1
        i = sub_550c30(arg2)
    while (j_1 + 1 s< i)

i.b = 1
return i
