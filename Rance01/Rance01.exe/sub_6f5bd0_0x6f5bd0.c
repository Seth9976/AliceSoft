// 函数: sub_6f5bd0
// 地址: 0x6f5bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t* edi = arg2
int32_t* ebx = arg3
int32_t var_20 = *(arg1 + 8)
int32_t ebp = 0
int32_t var_18 = 0
int32_t ecx_1 = *edi
int32_t var_94[0x4]
int32_t var_84[0x4]
int32_t var_74[0x4]
int32_t edx

if (ecx_1 s> 0)
    edx = edi[0xd]
    int32_t eax_1 = 0
    
    do
        var_94[ebp] = *(eax_1 + edx + 0x10)
        var_84[ebp] = *(eax_1 + edx + 0xc)
        var_74[ebp] = *(eax_1 + edx + 4) * *(eax_1 + edx + 8)
        eax_1 += 0x18
        ebp += 1
    while (ebp s< ecx_1)

int32_t ebp_1 = 0
int32_t ecx_2 = ebx[0xdf0]

if (ecx_2 s> 0)
    edx = ebx[0xdf3]
    int32_t eax_2 = 0
    int32_t edi_1 = var_18
    
    do
        ebp_1 += 1
        edi_1 += *(eax_2 + edx + 4) * *(eax_2 + edx + 8)
        eax_2 += 0x10
    while (ebp_1 s< ecx_2)
    
    var_18 = edi_1
    edi = arg2

int32_t eax_3 = ebx[0xdee]
char var_1c

if (eax_3 == 1 && ebx[0xdef] == 1)
    var_1c = 0
else
    int32_t ebp_2 = 0
    var_1c = 1
    
    if (ecx_2 s> 0)
        int32_t edx_1 = 0
        int32_t var_24_1 = eax_3
        eax_3.b = 1
        
        while (true)
            if (eax_3.b == 0)
                var_1c = eax_3.b
                eax_3 = var_24_1
                edi = arg2
                break
            
            int32_t esi_7 = ebx[0xdf3]
            int32_t edi_3 = *(esi_7 + edx_1 + 4)
            
            if (edi_3 != *(esi_7 + edx_1 + 8))
                eax_3.b = 0
            
            if (edi_3 != 1 && edi_3 != 2)
                eax_3.b = 0
            
            edx_1 += 0x10
            ebp_2 += 1
            
            if (ebp_2 s>= ecx_2)
                var_1c = eax_3.b
                eax_3 = var_24_1
                edi = arg2
                break

int32_t var_44

if (eax_3 == 2 && ebx[0xdef] s<= 2 && ebx[0x137a] == 1)
    var_44 = 1
else
    var_44 = 0

int32_t var_14

if (eax_3 == 2 && ebx[0xdef] == 2 && ebx[0x137a] == 1)
    var_14 = 1
else
    var_14 = 0

int32_t var_b8
int32_t var_b4
int32_t var_b0
int32_t var_ac
int32_t* var_a8
int32_t var_a4
int32_t var_a0
char var_9c

if (edi[2] == 0 || edi[3] == 0)
    int32_t ebp_21 = edi[8]
    int32_t eax_45 = ebx[0x1f]
    
    if (ebp_21 s< eax_45)
        int32_t ecx_33 = var_18 << 7
        int32_t var_48_2 = ebp_21
        int32_t edx_73
        
        do
            int32_t esi_26 = edi[7]
            int32_t* ecx_34 = ebx[0x1e]
            int32_t* var_bc
            
            if (esi_26 s< ecx_34)
                do
                    int32_t eax_48 = 0
                    int32_t edx_43 = *edi[0xd]
                    int32_t* ebp_26 = (ecx_34 * var_48_2 + esi_26) * ecx_33 + ebx[0x1379]
                    
                    if (edx_43 s> 0)
                        int32_t edx_44 = ebx[0xdf3]
                        int32_t var_40_4 = 0
                        int32_t ecx_35 = 0
                        
                        do
                            eax_48 += 1
                            ebp_26 += (*(ecx_35 + edx_44 + 4) << 7) * *(ecx_35 + edx_44 + 8)
                            ecx_35 += 0x10
                        while (eax_48 s< edx_43)
                        
                        ebx = arg3
                        edi = arg2
                    
                    if (edi[4] != 0)
                        int32_t eax_50 = 0
                        int32_t edx_53 = *edi
                        
                        if (edx_53 s> 0)
                            do
                                int32_t i = 0
                                
                                if (var_74[eax_50] s> 0)
                                    int32_t var_3c_3 = eax_50
                                    
                                    do
                                        sub_6d23b0(arg1, ebp_26, (edi[5]).b)
                                        ebp_26 = &ebp_26[0x20]
                                        i += 1
                                        eax_50 = var_3c_3
                                    while (i s< var_74[eax_50])
                                    
                                    edx_53 = *edi
                                
                                eax_50 += 1
                            while (eax_50 s< edx_53)
                            
                            ebx = arg3
                            ecx_34 = ebx[0x1e]
                    else
                        int32_t edx_48 = *edi
                        
                        if (edx_48 s> 0)
                            int32_t ebx_11 = 0
                            
                            do
                                if (var_74[ebx_11] s> 0)
                                    int32_t i_1 = 0
                                    
                                    do
                                        data_797c44(ebp_26, 0x80, var_bc, var_b8, var_b4, var_b0, 
                                            var_ac, var_a8, var_a4, var_a0, var_9c)
                                        int16_t var_64 = (edi[ebx_11 + 9]).w
                                        var_bc = ebp_26
                                        var_b8 = &var_64
                                        var_b4 = edi[5]
                                        sub_6d22d0(arg1, var_84[ebx_11], var_bc, var_b8, var_b4.b)
                                        ebp_26 = &ebp_26[0x20]
                                        i_1 += 1
                                        edi[ebx_11 + 9] = sx.d(var_64)
                                    while (i_1 s< var_74[ebx_11])
                                    
                                    edx_48 = *edi
                                
                                ebx_11 += 1
                            while (ebx_11 s< edx_48)
                            
                            ebx = arg3
                            ecx_34 = ebx[0x1e]
                    
                    var_bc = ecx_34
                    var_b8 = ebx[0x1f]
                    var_b4 = esi_26
                    var_b0 = var_48_2
                    
                    if (sub_6f5b50(arg1, edi, var_bc, var_b8, var_b4, var_b0) != 0)
                        return 0xffffffe7
                    
                    int32_t eax_54 = ebx[0xdf0]
                    
                    if (eax_54 s> ebx[0xdf5])
                        ecx_34 = ebx[0x1e]
                    else if (eax_54 s> ebx[0xdf6])
                        ecx_34 = ebx[0x1e]
                    else
                        ecx_34 = ebx[0x1e]
                        int32_t* ebp_27 = ebx[0x1377]
                        int32_t edx_59 = (ecx_34 * var_48_2 + esi_26) * ecx_33 + ebx[0x1379]
                        
                        if (ebp_27 == 0 || *ebp_27 == 0)
                            int32_t eax_59 = ebx[0x120d]
                            data_797c48(eax_59, edx_59, var_18 << 7)
                            int32_t eax_60 = 0
                            int32_t edx_69 = ebx[0xdf0]
                            
                            if (edx_69 s> 0)
                                int32_t var_60_4 = eax_59
                                
                                do
                                    int32_t edi_33 = eax_60 << 4
                                    void* ecx_47 = edi_33 + ebx[0xdf3]
                                    int32_t ebp_40 = 0
                                    int32_t esi_36 = *(ecx_47 + 4) * *(ecx_47 + 8)
                                    
                                    if (esi_36 s> 0)
                                        int32_t edi_34 = var_60_4
                                        
                                        while (true)
                                            (*(var_20 + 0x110))(edi_34, 
                                                ebx[*(ecx_47 + 0xc) * 0x2d + 0x27])
                                            edi_34 += 0x80
                                            ebp_40 += 1
                                            
                                            if (ebp_40 s>= esi_36)
                                                break
                                            
                                            ecx_47 = ebx[0xdf3] + edi_33
                                        
                                        var_60_4 = edi_34
                                        edx_69 = ebx[0xdf0]
                                    
                                    eax_60 += 1
                                while (eax_60 s< edx_69)
                                
                                edi = arg2
                            
                            var_bc = edi
                            var_b8 = esi_26
                            var_b4 = var_48_2
                            var_b0 = var_18
                            var_ac = eax_59
                            var_a8 = ebx[0x1e]
                            int32_t eax_95
                            eax_95.b = var_1c
                            var_a4 = ebx[0x1f]
                            var_a0 = arg4
                            var_9c = eax_95.b
                            sub_6f44f0(ebx, arg1, var_bc, var_b8, var_b4, var_b0, var_ac, var_a8, 
                                var_a4, var_a0, var_9c)
                            ecx_34 = ebx[0x1e]
                        else if (eax_54 s> 0)
                            int32_t edi_26 = 0
                            int32_t var_28_5 = edx_59
                            int32_t* var_60_3 = ecx_34
                            int32_t ecx_40 = eax_54
                            int32_t edx_60 = ebx[0xdf3]
                            
                            do
                                int32_t eax_55 = 0
                                int32_t ebp_33 = edi_26 << 4
                                int32_t esi_30 = *(ebp_33 + edx_60 + 8)
                                
                                if (esi_30 s> 0)
                                    int32_t ecx_42 = *(ebp_33 + edx_60 + 4)
                                    
                                    do
                                        int32_t edi_27 = 0
                                        
                                        if (ecx_42 s> 0)
                                            int32_t* eax_56 = var_60_3
                                            
                                            while (true)
                                                int32_t i_2 = 0
                                                int32_t ebp_39 = (edi_27 << 4)
                                                    + *(arg3[0x1377] + edi_26 * 4 + 4)
                                                    + esi_30 * (var_48_2 << 7) * eax_56 * ecx_42
                                                    + eax_56 * ecx_42 * (eax_55 << 7)
                                                    + ecx_42 * (esi_26 << 4)
                                                int32_t esi_34 = var_28_5
                                                
                                                do
                                                    var_bc = 0x10
                                                    data_797c48(ebp_39, esi_34, 0x10)
                                                    edx_60 = arg3[0xdf3]
                                                    eax_56 = arg3[0x1e]
                                                    ecx_42 = *(ebp_33 + edx_60 + 4)
                                                    ebp_39 += (eax_56 << 4) * ecx_42
                                                    esi_34 += 0x10
                                                    i_2 += 1
                                                while (i_2 s< 8)
                                                
                                                var_28_5 = esi_34
                                                edi_27 += 1
                                                
                                                if (edi_27 s>= ecx_42)
                                                    break
                                                
                                                esi_30 = *(ebp_33 + edx_60 + 8)
                                            
                                            var_60_3 = eax_56
                                            esi_30 = *(ebp_33 + edx_60 + 8)
                                        
                                        eax_55 += 1
                                    while (eax_55 s< esi_30)
                                    
                                    ebx = arg3
                                    ecx_40 = ebx[0xdf0]
                                
                                edi_26 += 1
                            while (edi_26 s< ecx_40)
                            
                            ecx_34 = var_60_3
                            edi = arg2
                    
                    if (ebx[7] != 0 && (var_44 == 0 || esi_26 != 0))
                        int32_t ebp_44
                        
                        if (var_14 == 0)
                            ebp_44 = var_48_2
                        label_6f6cbc:
                            int32_t temp1_2 = mods.dp.d(sx.q(esi_26 + 1), ecx_34 + var_44)
                            edi[7] = temp1_2
                            
                            if (temp1_2 == 0)
                                edi[8] = ebp_44 + 1
                                
                                if (ebp_44 + 1 == var_14 + ebx[0x1f])
                                    edi[8] = 0
                                    return 0
                            else
                                edi[8] = ebp_44
                            
                            int32_t esi_42 = esi_26 - var_44
                            ebx[3] = esi_42
                            int32_t ebp_45 = ebp_44 - var_14
                            ebx[4] = ebp_45
                            ebx[1] = esi_42
                            ebx[2] = ebp_45
                            return 1
                        
                        if (var_48_2 != 0)
                            ebp_44 = var_48_2
                            goto label_6f6cbc
                    
                    esi_26 += 1
                while (esi_26 s< ecx_34)
                
                eax_45 = ebx[0x1f]
            
            if (var_44 != 0)
                var_bc = edi
                var_b8 = esi_26
                var_b4 = var_48_2
                var_b0 = var_18
                var_ac = ebx[0x120d]
                var_a8 = ecx_34
                var_a4 = eax_45
                eax_45.b = var_1c
                var_a0 = arg4
                var_9c = eax_45.b
                sub_6f44f0(ebx, arg1, var_bc, var_b8, var_b4, var_b0, var_ac, var_a8, var_a4, 
                    var_a0, var_9c)
                
                if (ebx[7] == 0)
                    eax_45 = ebx[0x1f]
                else if (esi_26 != 0)
                    int32_t ebp_48
                    
                    if (var_14 == 0)
                        ebp_48 = var_48_2
                    label_6f6e5f:
                        int32_t temp1_4 = mods.dp.d(sx.q(esi_26 + 1), var_44 + ebx[0x1e])
                        edi[7] = temp1_4
                        int32_t edx_99
                        
                        if (temp1_4 == 0)
                            edx_99 = ebp_48 + 1
                            edi[8] = edx_99
                        else
                            edx_99 = ebp_48
                            edi[8] = ebp_48
                        
                        if (edx_99 == var_14 + ebx[0x1f])
                            edi[8] = 0
                            return 0
                        
                        int32_t esi_47 = esi_26 - var_44
                        ebx[3] = esi_47
                        int32_t ebp_49 = ebp_48 - var_14
                        ebx[4] = ebp_49
                        ebx[1] = esi_47
                        ebx[2] = ebp_49
                        return 1
                    
                    if (var_48_2 != 0)
                        ebp_48 = var_48_2
                        goto label_6f6e5f
                    
                    eax_45 = ebx[0x1f]
                else
                    eax_45 = ebx[0x1f]
            
            edx_73 = var_48_2 + 1
            var_48_2 = edx_73
        while (edx_73 s< eax_45)
        
        ebp_21 = edx_73
    
    if (var_14 != 0)
        int32_t ecx_50 = edi[7]
        int32_t edx_75 = ebx[0x1e]
        int32_t var_24_7 = ecx_50
        
        if (ecx_50 s<= edx_75)
            int32_t esi_37 = ecx_50
            
            while (true)
                int32_t var_a8_1 = edx_75
                edx_75.b = var_1c
                sub_6f44f0(ebx, arg1, arg2, esi_37, ebp_21, var_18, ebx[0x120d], var_a8_1, eax_45, 
                    arg4, edx_75.b)
                
                if (ebx[7] != 0 && (var_44 == 0 || esi_37 != 0))
                    int32_t* edi_41
                    
                    if (var_14 == 0)
                        int32_t var_24_9 = esi_37
                        edi_41 = arg2
                    label_6f6d3e:
                        int32_t temp1_3 = mods.dp.d(sx.q(esi_37 + 1), var_44 + ebx[0x1e])
                        edi_41[7] = temp1_3
                        
                        if (temp1_3 == 0)
                            edi_41[8] = ebp_21 + 1
                            
                            if (ebp_21 + 1 == var_14 + ebx[0x1f])
                                edi_41[8] = 0
                                return 0
                        else
                            edi_41[8] = ebp_21
                        
                        int32_t edx_93 = esi_37 - var_44
                        ebx[3] = edx_93
                        int32_t ebp_46 = ebp_21 - var_14
                        ebx[4] = ebp_46
                        ebx[1] = edx_93
                        ebx[2] = ebp_46
                        return 1
                    
                    if (ebp_21 != 0)
                        int32_t var_24_8 = esi_37
                        edi_41 = arg2
                        goto label_6f6d3e
                
                esi_37 += 1
                edx_75 = ebx[0x1e]
                
                if (esi_37 s> edx_75)
                    break
                
                eax_45 = ebx[0x1f]
else
    int32_t* esi_8 = edi[0xd]
    int32_t temp0_1 = divs.dp.d(sx.q(eax_3 * 8), esi_8[1])
    int32_t esi_9 = esi_8[2]
    int32_t temp0_2 = divs.dp.d(sx.q(ebx[0xdef] * 8), esi_9)
    int32_t eax_16
    int32_t edx_6
    edx_6:eax_16 = sx.q(temp0_1 + ebx[0x13] - 1)
    int32_t eax_19
    int32_t edx_7
    edx_7:eax_19 = sx.q(temp0_2 + ebx[0x14] - 1)
    int32_t esi_11 = edi[8]
    int32_t ebp_6 = ebx[0x1f]
    int32_t var_28_1 = ebp_6
    
    if (esi_11 s< ebp_6)
        int32_t ecx_6 = var_18 << 7
        int32_t* ebp_7 = esi_8
        int32_t edx_11 = esi_9
        
        while (true)
            if (edx_11 s> 0)
                int32_t edi_4 = 0
                int32_t esi_12 = 0
                int32_t eax_22 = edx_11
                
                while (eax_22 * esi_11 * 8 + edi_4 s< ebx[0x14])
                    int32_t ecx_14 = arg2[7]
                    int32_t edx_12 = ebx[0x1e]
                    
                    if (ecx_14 s< edx_12)
                        int32_t eax_23 = ebp_7[1]
                        int32_t* var_2c_2 = ebp_7
                        
                        do
                            int32_t ebp_8 = 0
                            int32_t edi_6 = *var_2c_2
                            int32_t esi_17 = (edx_12 * esi_11 + ecx_14) * ecx_6 + ebx[0x1379]
                            
                            if (edi_6 s> 0)
                                int32_t edi_7 = ebx[0xdf3]
                                int32_t var_28_2 = 0
                                int32_t edx_13 = 0
                                
                                do
                                    ebp_8 += 1
                                    esi_17 += (*(edx_13 + edi_7 + 4) << 7) * *(edx_13 + edi_7 + 8)
                                    edx_13 += 0x10
                                while (ebp_8 s< edi_6)
                                
                                ebx = arg3
                            
                            int32_t ebp_12 = (eax_23 << 7) * esi_12 + esi_17
                            
                            if (eax_23 s> 0)
                                int32_t esi_18 = 0
                                int32_t edi_8 = 0
                                
                                while (true)
                                    if (eax_23 * 8 * ecx_14 + esi_18 s>= arg3[0x13])
                                        ebx = arg3
                                        edx_12 = ebx[0x1e]
                                        break
                                    
                                    if (arg2[4] == 0)
                                        sub_6d2420(arg1, ebp_12, var_94[0], arg2[2], arg2[3], 
                                            arg2[5])
                                        ebp_12 += 0x80
                                    else
                                        sub_6d25d0(arg1, ebp_12, var_94[0], arg2[2], arg2[3], 
                                            (arg2[5]).b)
                                        ebp_12 += 0x80
                                    
                                    void* eax_31 = arg2[0xd]
                                    var_b8 = divs.dp.d(edx_7:eax_19, temp0_2)
                                    var_b4 = ecx_14 * *(eax_31 + 4) + edi_8
                                    var_b0 = esi_11 * *(eax_31 + 8) + esi_12
                                    
                                    if (sub_6f5b50(arg1, arg2, divs.dp.d(edx_6:eax_16, temp0_1), 
                                            var_b8, var_b4, var_b0) != 0)
                                        return 0xffffffe7
                                    
                                    esi_18 += 8
                                    edi_8 += 1
                                    int32_t* eax_33 = arg2[0xd]
                                    var_2c_2 = eax_33
                                    eax_23 = eax_33[1]
                                    
                                    if (edi_8 s>= eax_23)
                                        ebx = arg3
                                        edx_12 = ebx[0x1e]
                                        break
                            
                            ecx_14 += 1
                        while (ecx_14 s< edx_12)
                        
                        ebp_7 = var_2c_2
                        eax_22 = ebp_7[2]
                    
                    edi_4 += 8
                    esi_12 += 1
                    
                    if (esi_12 s>= eax_22)
                        break
            
            int32_t edx_33 = ebx[0xdf0]
            
            if (edx_33 s<= ebx[0xdf5] && edx_33 s<= ebx[0xdf6])
                int32_t* eax_34 = ebx[0x1377]
                int32_t* ecx_20
                int32_t ebp_13
                
                if (eax_34 == 0 || *eax_34 != 0)
                    ebp_13 = 0
                    ecx_20 = ebx[0x1e]
                    
                    if (ecx_20 s> 0)
                        do
                            int32_t edi_9 = ebx[0x120d]
                            data_797c48(edi_9, (ecx_20 * esi_11 + ebp_13) * ecx_6 + ebx[0x1379], 
                                var_18 << 7, var_b8, var_b4, var_b0, var_ac, var_a8, var_a4, 
                                var_a0, var_9c)
                            int32_t eax_36 = 0
                            int32_t ecx_25 = ebx[0xdf0]
                            
                            if (ecx_25 s> 0)
                                int32_t var_34_2 = edi_9
                                
                                do
                                    int32_t edi_11 = eax_36 << 4
                                    void* edx_30 = edi_11 + ebx[0xdf3]
                                    int32_t ebp_14 = 0
                                    int32_t esi_20 = *(edx_30 + 4) * *(edx_30 + 8)
                                    
                                    if (esi_20 s> 0)
                                        int32_t edi_12 = var_34_2
                                        
                                        while (true)
                                            (*(var_20 + 0x110))(edi_12, 
                                                ebx[*(edx_30 + 0xc) * 0x2d + 0x27])
                                            edi_12 += 0x80
                                            ebp_14 += 1
                                            
                                            if (ebp_14 s>= esi_20)
                                                break
                                            
                                            edx_30 = ebx[0xdf3] + edi_11
                                        
                                        var_34_2 = edi_12
                                        ecx_25 = ebx[0xdf0]
                                    
                                    eax_36 += 1
                                while (eax_36 s< ecx_25)
                            
                            var_b8 = ebp_13
                            var_b4 = esi_11
                            var_b0 = var_18
                            int32_t eax_74
                            eax_74.b = var_1c
                            var_ac = edi_9
                            var_a8 = ebx[0x1e]
                            var_a4 = ebx[0x1f]
                            var_a0 = arg4
                            var_9c = eax_74.b
                            sub_6f44f0(ebx, arg1, arg2, var_b8, var_b4, var_b0, var_ac, var_a8, 
                                var_a4, var_a0, var_9c)
                            ebp_13 += 1
                            ecx_20 = ebx[0x1e]
                        while (ebp_13 s< ecx_20)
                        
                        eax_34 = ebx[0x1377]
                else
                    ebp_13 = 0
                    ecx_20 = ebx[0x1e]
                    
                    if (ecx_20 s> 0)
                        int32_t* var_24_5 = eax_34
                        int32_t* var_34_3 = ecx_20
                        
                        do
                            int32_t ecx_27 = 0
                            
                            if (edx_33 s> 0)
                                int32_t eax_39 = ebx[0xdf3]
                                int32_t var_2c_4 =
                                    (var_34_3 * esi_11 + ebp_13) * ecx_6 + ebx[0x1379]
                                
                                do
                                    int32_t esi_23 = 0
                                    int32_t ebp_16 = ecx_27 << 4
                                    int32_t ebx_3 = *(ebp_16 + eax_39 + 8)
                                    
                                    if (ebx_3 s> 0)
                                        int32_t edi_20 = ecx_27 * 2
                                        int32_t edx_34 = *(ebp_16 + eax_39 + 4)
                                        int32_t* ebp_17 = var_24_5
                                        
                                        do
                                            int32_t edi_21 = 0
                                            
                                            if (edx_34 s> 0)
                                                int32_t esi_24 = edi_20
                                                int32_t* ecx_29 = var_34_3
                                                
                                                while (true)
                                                    int32_t ebx_9 =
                                                        ebx_3 * (esi_11 << 7) * ecx_29 * edx_34
                                                        + *(ebp_17 + (esi_24 << 1) + 4)
                                                        + (ebp_13 << 4) * edx_34
                                                        + edx_34 * (ecx_29 << 7) * esi_23
                                                        + (edi_21 << 4)
                                                    int32_t i_3 = 0
                                                    int32_t esi_25 = var_2c_4
                                                    
                                                    do
                                                        data_797c48(ebx_9, esi_25, 0x10, var_b8, 
                                                            var_b4, var_b0, var_ac, var_a8, var_a4, 
                                                            var_a0, var_9c)
                                                        eax_39 = arg3[0xdf3]
                                                        ecx_29 = arg3[0x1e]
                                                        edx_34 = *(ebp_16 + eax_39 + 4)
                                                        ebx_9 += (ecx_29 << 4) * edx_34
                                                        esi_25 += 0x10
                                                        i_3 += 1
                                                    while (i_3 s< 8)
                                                    
                                                    var_2c_4 = esi_25
                                                    esi_24 = edi_20
                                                    edi_21 += 1
                                                    
                                                    if (edi_21 s>= edx_34)
                                                        break
                                                    
                                                    ebp_17 = arg3[0x1377]
                                                    ebx_3 = *(ebp_16 + eax_39 + 8)
                                                
                                                var_34_3 = ecx_29
                                                ebp_17 = arg3[0x1377]
                                                ebx_3 = *(ebp_16 + eax_39 + 8)
                                            
                                            esi_23 += 1
                                        while (esi_23 s< ebx_3)
                                        
                                        var_24_5 = ebp_17
                                        edx_33 = arg3[0xdf0]
                                    
                                    ecx_27 += 1
                                while (ecx_27 s< edx_33)
                                
                                ebx = arg3
                            
                            ebp_13 += 1
                        while (ebp_13 s< var_34_3)
                        
                        eax_34 = var_24_5
                        ecx_20 = var_34_3
                
                if (eax_34 == 0 || *eax_34 != 0)
                    var_b8 = ebp_13
                    var_b4 = esi_11
                    var_b0 = var_18
                    var_ac = ebx[0x120d]
                    var_a8 = ecx_20
                    var_a4 = ebx[0x1f]
                    ecx_20.b = var_1c
                    var_a0 = arg4
                    var_9c = ecx_20.b
                    sub_6f44f0(ebx, arg1, arg2, var_b8, var_b4, var_b0, var_ac, var_a8, var_a4, 
                        var_a0, var_9c)
            
            if (ebx[7] != 0)
                arg2[8] = esi_11 + 1
                arg2[7] = 0
                
                if (esi_11 + 1 == var_14 + ebx[0x1f])
                    arg2[8] = 0
                    return 0
                
                int32_t edx_83 = ebx[0x1e] - 1
                ebx[3] = edx_83
                ebx[4] = esi_11
                ebx[1] = edx_83
                ebx[2] = esi_11
                return 1
            
            esi_11 += 1
            int32_t eax_44 = ebx[0x1f]
            
            if (esi_11 s>= eax_44)
                var_28_1 = eax_44
                break
            
            ebp_7 = arg2[0xd]
            edx_11 = ebp_7[2]
    
    int32_t* eax_80 = ebx[0x1377]
    
    if (eax_80 == 0 || *eax_80 != 0)
        int32_t ebp_42 = 0
        int32_t edx_79 = ebx[0x1e]
        
        if (edx_79 + 1 s> 0)
            int32_t eax_83 = var_28_1
            
            while (true)
                int32_t var_a4_2 = eax_83
                eax_83.b = var_1c
                sub_6f44f0(ebx, arg1, arg2, ebp_42, esi_11, var_18, ebx[0x120d], edx_79, var_a4_2, 
                    arg4, eax_83.b)
                ebp_42 += 1
                edx_79 = ebx[0x1e]
                
                if (ebp_42 s>= edx_79 + 1)
                    break
                
                eax_83 = ebx[0x1f]
return 0
