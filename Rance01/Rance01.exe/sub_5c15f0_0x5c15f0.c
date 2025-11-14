// 函数: sub_5c15f0
// 地址: 0x5c15f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t* ebx = arg4
int32_t i_11 = 0
sub_6bc670(arg3, 0, 0x38)
int32_t i_10 = ebx[1]

if (i_10 s> 0)
    int32_t* ecx = ebx[2]
    int32_t i_9 = i_10
    int32_t i
    
    do
        if (*ecx s> 0)
            i_11 += 1
        
        ecx = &ecx[1]
        i = i_9
        i_9 -= 1
    while (i != 1)

arg3[1] = i_10
arg3[2] = i_11
*arg3 = *ebx

if (i_11 s> 0)
    int32_t* eax_3 = sub_5c0dd0(ebx[2], ebx[1], i_11)
    int32_t eax_4 = i_11 << 2
    __alloca_probe_16(eax_4)
    int32_t* edx_1 = eax_3
    int32_t __saved_edi
    int32_t* eax_5 = &__saved_edi
    int32_t* var_18_1 = &__saved_edi
    
    if (edx_1 == 0)
        sub_5c1570(arg3)
        sub_6b4885(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (i_11 s> 0)
        int32_t** eax_7 = &__saved_edi - edx_1
        int32_t i_7 = i_11
        int32_t i_1
        
        do
            int32_t ecx_5 = rol.d(*edx_1, 0x10)
            int32_t eax_12 = ((ecx_5 u>> 8 ^ ecx_5 << 8) & 0xff00ff) ^ ecx_5 << 8
            int32_t ecx_11 = ((eax_12 u>> 4 ^ eax_12 << 4) & 0xf0f0f0f) ^ eax_12 << 4
            int32_t eax_18 = ((ecx_11 u>> 2 ^ ecx_11 << 2) & 0x33333333) ^ (ecx_11 * 4)
            *edx_1 = ((eax_18 u>> 1 ^ (eax_18 * 2)) & 0x55555555) ^ (eax_18 * 2)
            *(eax_7 + edx_1) = edx_1
            edx_1 = &edx_1[1]
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        ebx = arg4
        eax_5 = var_18_1
    
    sub_6b6b50(eax_5, i_11, 4, sub_5c15d0)
    __alloca_probe_16(eax_4)
    int32_t* var_10_1 = &__saved_edi
    arg3[5] = sub_6b5c43(eax_4)
    int32_t eax_22 = 0
    
    if (i_11 s> 0)
        do
            var_10_1[(var_18_1[eax_22] - eax_3) s>> 2] = eax_22
            eax_22 += 1
        while (eax_22 s< i_11)
        
        if (i_11 s> 0)
            int32_t* eax_23 = var_10_1
            int32_t* ecx_23 = eax_3 - eax_23
            int32_t* var_20_2 = ecx_23
            int32_t i_12 = i_11
            
            while (true)
                int32_t edx_6 = *eax_23
                int32_t ecx_24 = *(ecx_23 + eax_23)
                eax_23 = &eax_23[1]
                int32_t i_13 = i_12
                i_12 -= 1
                *(arg3[5] + (edx_6 << 2)) = ecx_24
                
                if (i_13 == 1)
                    break
                
                ecx_23 = var_20_2
            
            ebx = arg4
    
    __free_base(eax_3)
    arg3[4] = sub_5c1010(ebx, i_11, var_10_1)
    arg3[6] = sub_6b5c43(eax_4)
    int32_t i_2 = 0
    uint32_t ecx_26 = 0
    
    if (ebx[1] s> 0)
        do
            if (*(ebx[2] + (i_2 << 2)) s> 0)
                *(arg3[6] + (var_10_1[ecx_26] << 2)) = i_2
                ecx_26 += 1
            
            i_2 += 1
        while (i_2 s< ebx[1])
    
    int32_t eax_27
    char* edx_11
    eax_27, edx_11 = sub_6b5c43(ecx_26)
    int32_t i_3 = 0
    arg3[7] = eax_27
    int32_t var_c_2 = 0
    
    if (ebx[1] s> 0)
        do
            int32_t eax_28 = ebx[2]
            
            if (*(eax_28 + (i_3 << 2)) s> 0)
                edx_11 = var_10_1[var_c_2]
                char* eax_29
                eax_29.b = *(eax_28 + (i_3 << 2))
                var_c_2 += 1
                edx_11[arg3[7]] = eax_29.b
            
            i_3 += 1
        while (i_3 s< ebx[1])
    
    uint32_t i_4 = arg3[2]
    char* edi_3 = nullptr
    int32_t eax_30 = 0
    
    for (; i_4 != 0; i_4 u>>= 1)
        eax_30 += 1
    
    arg3[9] = eax_30 - 4
    
    if (eax_30 - 4 s< 5)
        arg3[9] = 5
    
    if (arg3[9] s> 8)
        arg3[9] = 8
    
    int32_t ecx_27 = arg3[9]
    int32_t ebx_8 = 1 << ecx_27.b
    int32_t var_20_3 = ebx_8
    arg3[8] = _calloc(8, edx_11, ecx_27, ebx_8, 4)
    arg3[0xa] = 0
    
    if (var_c_2 s> 0)
        do
            void* eax_33 = arg3[7]
            int32_t ecx_28 = sx.d(*(eax_33 + edi_3))
            
            if (arg3[0xa] s< ecx_28)
                arg3[0xa] = ecx_28
            
            int32_t ebx_9 = sx.d(*(eax_33 + edi_3))
            
            if (ebx_9 s<= arg3[9])
                int32_t edx_15 = rol.d(*(arg3[5] + (edi_3 << 2)), 0x10)
                int32_t eax_38 = ((edx_15 u>> 8 ^ edx_15 << 8) & 0xff00ff) ^ edx_15 << 8
                int32_t edx_21 = ((eax_38 u>> 4 ^ eax_38 << 4) & 0xf0f0f0f) ^ eax_38 << 4
                int32_t eax_44 = ((edx_21 u>> 2 ^ edx_21 << 2) & 0x33333333) ^ (edx_21 * 4)
                int32_t i_5 = 0
                int32_t i_8 = 0
                
                if (1 << ((arg3[9]).b - ebx_9.b) s> 0)
                    do
                        int32_t ecx_37
                        ecx_37.b = edi_3[arg3[7]]
                        *(arg3[8] + ((i_5 << ecx_37.b
                            | (((eax_44 u>> 1 ^ (eax_44 * 2)) & 0x55555555) ^ (eax_44 * 2))) << 2)) =
                            &edi_3[1]
                        i_5 = i_8 + 1
                        i_8 = i_5
                    while (i_5 s< 1 << ((arg3[9]).b - edi_3[arg3[7]]))
            
            edi_3 = &edi_3[1]
        while (edi_3 s< var_c_2)
        
        ebx_8 = var_20_3
    
    int32_t eax_49 = 0xfffffffe << (0x1f - (arg3[9]).b)
    int32_t edi_4 = 0
    int32_t var_10_2 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_2 = 0
    
    if (ebx_8 s> 0)
        do
            int32_t i_6 = edi_4 << (0x20 - (arg3[9]).b)
            int32_t ecx_45 = rol.d(i_6, 0x10)
            int32_t eax_54 = ((ecx_45 u>> 8 ^ ecx_45 << 8) & 0xff00ff) ^ ecx_45 << 8
            int32_t ecx_51 = ((eax_54 u>> 4 ^ eax_54 << 4) & 0xf0f0f0f) ^ eax_54 << 4
            int32_t edx_39 = ((ecx_51 u>> 2 ^ ecx_51 << 2) & 0x33333333) ^ (ecx_51 * 4)
            
            if (*(arg3[8] + ((((edx_39 u>> 1 ^ (edx_39 * 2)) & 0x55555555) ^ (edx_39 * 2)) << 2))
                    == 0)
                int32_t edx_41 = var_10_2
                int32_t ebx_20 = var_c_2
                int32_t ecx_56 = edx_41 + 1
                
                if (ecx_56 s< ebx_20)
                    ebx_20 = var_c_2
                    int32_t* var_14_2 = arg3[5] + (edx_41 << 2) + 4
                    
                    while (*var_14_2 u<= i_6)
                        var_10_2 += 1
                        var_14_2 = &var_14_2[1]
                        ecx_56 += 1
                        
                        if (ecx_56 s>= ebx_20)
                            break
                    
                    edx_41 = var_10_2
                
                int32_t ecx_57 = var_1c_1
                
                if (ecx_57 s< ebx_20)
                    int32_t* var_14_3 = arg3[5] + (ecx_57 << 2)
                    
                    while (i_6 u>= (*var_14_3 & eax_49))
                        var_14_3 = &var_14_3[1]
                        ecx_57 += 1
                        
                        if (ecx_57 s>= ebx_20)
                            break
                    
                    edx_41 = var_10_2
                    var_1c_1 = ecx_57
                
                int32_t edi_7 = ebx_20 - ecx_57
                
                if (edx_41 u> 0x7fff)
                    edx_41 = 0x7fff
                
                if (edi_7 u> 0x7fff)
                    edi_7 = 0x7fff
                
                int32_t ecx_62 = ((eax_54 u>> 4 ^ eax_54 << 4) & 0xf0f0f0f) ^ eax_54 << 4
                int32_t eax_60 = ((ecx_62 u>> 2 ^ ecx_62 << 2) & 0x33333333) ^ (ecx_62 * 4)
                *(arg3[8] + ((((eax_60 u>> 1 ^ (eax_60 * 2)) & 0x55555555) ^ (eax_60 * 2)) << 2)) =
                    (edx_41 | 0xffff0000) << 0xf | edi_7
            
            edi_4 = var_18_2 + 1
            var_18_2 = edi_4
        while (edi_4 s< var_20_3)

sub_6b4885(eax_1 ^ &__saved_ebp)
return 0
