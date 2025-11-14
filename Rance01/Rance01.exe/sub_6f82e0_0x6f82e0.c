// 函数: sub_6f82e0
// 地址: 0x6f82e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t* edi = arg2
int32_t edx = *(arg1 + 8)
int32_t ecx_1 = 0
int32_t ebp = *edi
int32_t var_58 = 0
int32_t var_ac[0x4]
int32_t var_9c[0x4]
int32_t var_8c[0x4]
int32_t var_7c[0x4]

if (ebp s> 0)
    int32_t edx_1 = edi[0xd]
    int32_t eax_1 = 0
    int32_t ebx_1 = 0
    
    do
        var_ac[ecx_1] = *(eax_1 + edx_1 + 0x10)
        var_9c[ecx_1] = *(eax_1 + edx_1 + 0xc)
        var_8c[ecx_1] = *(*(eax_1 + edx_1 + 0x14) + 8)
        int32_t esi_7 = *(eax_1 + edx_1 + 4) * *(eax_1 + edx_1 + 8)
        ebx_1 += esi_7
        eax_1 += 0x18
        var_7c[ecx_1] = esi_7
        ecx_1 += 1
    while (ecx_1 s< ebp)
    
    var_58 = ebx_1

int32_t ecx_2 = arg3[0xdee]
int32_t* var_18
int32_t ebx_2

if (ebp == 1)
    void* ebx_19 = edi[0xd]
    int32_t temp0_5 = divs.dp.d(sx.q(ecx_2 * 8), *(ebx_19 + 4))
    int32_t temp0_6 = divs.dp.d(sx.q(arg3[0xdef] * 8), *(ebx_19 + 8))
    ebx_2 = divs.dp.d(sx.q(arg3[0x13] + temp0_5 - 1), temp0_5)
    int32_t eax_62
    int32_t edx_87
    edx_87:eax_62 = sx.q(arg3[0x14])
    var_18 = divs.dp.d(sx.q((eax_62 ^ edx_87) - edx_87 + temp0_6 - 1), temp0_6)
    var_58 = 1
    var_7c[0] = 1
else
    ebx_2 = arg3[0x1e]
    var_18 = arg3[0x1f]

char var_54

if (ecx_2 == 1 && arg3[0xdef] == 1)
    var_54 = 0
else
    int32_t esi_8 = 0
    var_54 = 1
    int32_t ebp_3 = arg3[0xdf0]
    
    if (ebp_3 s> 0)
        int32_t edx_3 = 0
        int32_t* eax_2
        eax_2.b = 1
        
        while (true)
            if (eax_2.b == 0)
                var_54 = eax_2.b
                edi = arg2
                break
            
            int32_t edi_1 = arg3[0xdf3]
            int32_t ebx_3 = *(edi_1 + edx_3 + 4)
            
            if (ebx_3 != *(edi_1 + edx_3 + 8))
                eax_2.b = 0
            
            if (ebx_3 != 1 && ebx_3 != 2)
                eax_2.b = 0
            
            edx_3 += 0x10
            esi_8 += 1
            
            if (esi_8 s>= ebp_3)
                var_54 = eax_2.b
                edi = arg2
                break

int32_t var_1c

if (ecx_2 == 2 && arg3[0xdef] s<= 2 && arg3[0x137a] == 1)
    var_1c = 1
else
    var_1c = 0

int32_t var_28

if (ecx_2 == 2 && arg3[0xdef] == 2 && arg3[0x137a] == 1)
    var_28 = 1
else
    var_28 = 0

int32_t esi_9 = edi[8]

if (esi_9 s< var_18)
    int32_t var_60_2 = esi_9
    int32_t* ebx_4 = arg3
    int32_t edx_37
    
    do
        int32_t var_c8
        int32_t var_c4
        int32_t var_c0
        int32_t* var_bc
        int32_t var_b8
        char var_b4
        int32_t i
        
        for (i = edi[7]; i s< ebx_2; i += 1)
            int32_t esi_10 = 0
            int32_t var_5c_1 = ebx_4[0x120d]
            int32_t edx_9 = *edi
            
            if (edx_9 s> 0)
                int32_t* eax_3 = ebx_4
                
                do
                    int32_t* ecx_8 = eax_3[0x1377]
                    
                    if (ecx_8 == 0 || *ecx_8 != 0)
                        int32_t j = 0
                        int32_t ebx_12 = esi_10 * 2
                        
                        if (var_7c[esi_10] s> 0)
                            int32_t edi_2 = var_5c_1
                            
                            do
                                int32_t ecx_19 = var_ac[esi_10]
                                int16_t var_6c = (*(arg2 + (ebx_12 << 1) + 0x24)).w
                                int32_t eax_19 = (*(edx + 0xf4))(arg1, var_9c[esi_10], ecx_19, 
                                    &var_6c, edi_2, var_c8, var_c4, var_c0, var_bc, var_b8, var_b4)
                                *(arg2 + (ebx_12 << 1) + 0x24) = sx.d(var_6c)
                                
                                if (eax_19 s< 0)
                                    return eax_19
                                
                                (*(edx + 0x110))(edi_2, var_8c[esi_10])
                                edi_2 += 0x80
                                j += 1
                            while (j s< var_7c[esi_10])
                            
                            var_5c_1 = edi_2
                            eax_3 = arg3
                            edi = arg2
                            edx_9 = *edi
                    else
                        int32_t ebp_4 = edi[0xd]
                        int32_t ebx_5 = esi_10 * 0x18
                        int32_t ecx_12 = *(ebx_5 + ebp_4 + 8)
                        
                        if (ecx_12 s> 0)
                            int32_t edx_10 = esi_10 * 2
                            int32_t eax_4 = 0
                            int32_t edx_11 = *(ebx_5 + ebp_4 + 4)
                            
                            do
                                if (edx_11 s> 0)
                                    int32_t var_3c_1 = 0
                                    int32_t var_40_1 = 0
                                    int32_t eax_11
                                    int32_t eax_13
                                    
                                    do
                                        int16_t var_68 = (*(edi + (edx_10 << 1) + 0x24)).w
                                        int32_t eax_9 = (*(edx + 0xf4))(arg1, var_9c[esi_10], 
                                            var_ac[esi_10], &var_68, var_5c_1, var_c8, var_c4, 
                                            var_c0, var_bc, var_b8, var_b4)
                                        *(edi + (edx_10 << 1) + 0x24) = sx.d(var_68)
                                        
                                        if (eax_9 s< 0)
                                            return eax_9
                                        
                                        int32_t eax_10 = edi[0xd]
                                        int32_t edx_14 = *(ebx_5 + eax_10 + 4)
                                        int32_t ebp_11 = edx_14 * (i << 4)
                                            + *(arg3[0x1377] + (edx_10 << 1) + 4)
                                            + (var_60_2 * *(ebx_5 + eax_10 + 8) + eax_4) * edx_14
                                            * (ebx_2 << 7)
                                        int32_t j_1 = 0
                                        int32_t ebp_12 = ebp_11 + var_3c_1
                                        int32_t esi_14 = var_5c_1
                                        
                                        do
                                            data_797c48(ebp_12, esi_14, 0x10)
                                            eax_11 = edi[0xd]
                                            edx_11 = *(ebx_5 + eax_11 + 4)
                                            ebp_12 += (ebx_2 << 4) * edx_11
                                            esi_14 += 0x10
                                            j_1 += 1
                                        while (j_1 s< 8)
                                        
                                        eax_13 = var_40_1 + 1
                                        var_5c_1 = esi_14
                                        var_3c_1 += 0x10
                                        var_40_1 = eax_13
                                    while (eax_13 s< edx_11)
                                    ecx_12 = *(ebx_5 + eax_11 + 8)
                                
                                eax_4 += 1
                            while (eax_4 s< ecx_12)
                            
                            eax_3 = arg3
                            edx_9 = *edi
                    
                    esi_10 += 1
                while (esi_10 s< edx_9)
                
                ebx_4 = eax_3
            
            var_c8 = var_60_2
            int32_t eax_21 = sub_6f5b50(arg1, edi, ebx_2, var_18, i, var_c8)
            
            if (eax_21 != 0)
                return eax_21
            
            int32_t* edx_21 = ebx_4[0x1377]
            
            if (edx_21 == 0 || *edx_21 != 0)
                var_c8 = var_58
                var_c4 = ebx_4[0x120d]
                var_c0 = ebx_2
                int32_t edx_27
                edx_27.b = var_54
                var_bc = var_18
                var_b8 = arg4
                var_b4 = edx_27.b
                sub_6f44f0(ebx_4, arg1, edi, i, var_60_2, var_c8, var_c4, var_c0, var_bc, var_b8, 
                    var_b4)
            
            if (ebx_4[7] != 0 && (var_1c == 0 || i != 0))
                int32_t ebx_13
                int32_t esi_19
                
                if (var_28 == 0)
                    esi_19 = var_60_2
                    ebx_13 = ebx_2
                label_6f899d:
                    int32_t temp1_1 = mods.dp.d(sx.q(i + 1), ebx_13 + var_1c)
                    edi[7] = temp1_1
                    
                    if (temp1_1 == 0)
                        if (esi_19 + 1 == var_18 + var_28)
                            edi[8] = 0
                            return 0
                        
                        edi[8] = esi_19 + 1
                    else
                        edi[8] = esi_19
                    
                    int32_t ebp_14 = i - var_1c
                    arg3[3] = ebp_14
                    int32_t esi_21 = esi_19 - var_28
                    arg3[4] = esi_21
                    arg3[1] = ebp_14
                    arg3[2] = esi_21
                    return 1
                
                if (var_60_2 != 0)
                    esi_19 = var_60_2
                    ebx_13 = ebx_2
                    goto label_6f899d
        
        if (var_1c != 0)
            int32_t* edx_34 = ebx_4[0x1377]
            
            if (edx_34 == 0 || *edx_34 != 0)
                var_c8 = var_58
                var_c4 = ebx_4[0x120d]
                var_c0 = ebx_2
                var_bc = var_18
                var_b8 = arg4
                int32_t edx_59
                edx_59.b = var_54
                var_b4 = edx_59.b
                sub_6f44f0(ebx_4, arg1, edi, i, var_60_2, var_c8, var_c4, var_c0, var_bc, var_b8, 
                    var_b4)
                
                if (ebx_4[7] != 0)
                    int32_t temp1_2 = mods.dp.d(sx.q(i + 1), ebx_2 + var_1c)
                    edi[7] = temp1_2
                    
                    if (temp1_2 == 0)
                        if (var_60_2 + 1 == var_18 + var_28)
                            edi[8] = 0
                            return 0
                        
                        edi[8] = var_60_2 + 1
                    else
                        edi[8] = var_60_2
                    
                    int32_t ebp_15 = i - var_1c
                    arg3[3] = ebp_15
                    int32_t esi_26 = var_60_2 - var_28
                    arg3[4] = esi_26
                    arg3[1] = ebp_15
                    arg3[2] = esi_26
                    return 1
        
        edx_37 = var_60_2 + 1
        var_60_2 = edx_37
    while (edx_37 s< var_18)
    
    esi_9 = edx_37

if (var_28 != 0)
    int32_t edx_39 = edi[7]
    int32_t var_5c_2 = edx_39
    
    if (edx_39 s< ebx_2)
        int32_t ebp_13 = edx_39
        
        do
            int32_t edx_44
            edx_44.b = var_54
            sub_6f44f0(arg3, arg1, arg2, ebp_13, esi_9, var_58, arg3[0x120d], ebx_2, var_18, arg4, 
                edx_44.b)
            
            if (arg3[7] != 0 && (var_1c == 0 || ebp_13 != 0))
                int32_t esi_28
                int32_t* edi_4
                
                if (var_28 == 0)
                    int32_t var_5c_4 = ebp_13
                    esi_28 = esi_9
                    edi_4 = arg2
                label_6f8b19:
                    int32_t temp1_3 = mods.dp.d(sx.q(ebp_13 + 1), ebx_2 + var_1c)
                    edi_4[7] = temp1_3
                    
                    if (temp1_3 == 0)
                        if (esi_28 + 1 == var_18 + var_28)
                            edi_4[8] = 0
                            return 0
                        
                        edi_4[8] = esi_28 + 1
                    else
                        edi_4[8] = esi_28
                    
                    int32_t ecx_27 = ebp_13 - var_1c
                    arg3[3] = ecx_27
                    int32_t esi_30 = esi_28 - var_28
                    arg3[4] = esi_30
                    arg3[1] = ecx_27
                    arg3[2] = esi_30
                    return 1
                
                if (esi_9 != 0)
                    int32_t var_5c_3 = ebp_13
                    esi_28 = esi_9
                    edi_4 = arg2
                    goto label_6f8b19
            
            ebp_13 += 1
        while (ebp_13 s< ebx_2)
        
        var_5c_2 = ebp_13
        edi = arg2
    
    if (var_1c != 0)
        int32_t edx_72
        edx_72.b = var_54
        sub_6f44f0(arg3, arg1, edi, var_5c_2, esi_9, var_58, arg3[0x120d], ebx_2, var_18, arg4, 
            edx_72.b)
        
        if (arg3[7] != 0)
            int32_t temp1_4 = mods.dp.d(sx.q(var_5c_2 + 1), ebx_2 + var_1c)
            edi[7] = temp1_4
            
            if (temp1_4 == 0)
                if (esi_9 + 1 == var_18 + var_28)
                    edi[8] = 0
                    return 0
                
                edi[8] = esi_9 + 1
            else
                edi[8] = esi_9
            
            int32_t ecx_34 = var_5c_2 - var_1c
            arg3[3] = ecx_34
            int32_t esi_33 = esi_9 - var_28
            arg3[4] = esi_33
            arg3[1] = ecx_34
            arg3[2] = esi_33
            return 1

return 0
