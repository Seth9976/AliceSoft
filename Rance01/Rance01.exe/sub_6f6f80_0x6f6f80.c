// 函数: sub_6f6f80
// 地址: 0x6f6f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t* esi = arg3
int32_t edx = *(arg1 + 8)
int32_t edx_1 = 0
int32_t i_14 = 0
int32_t ecx_1 = *ebx
int32_t var_ac[0x4]
int32_t var_9c[0x4]
int32_t var_8c[0x4]

if (ecx_1 s> 0)
    int32_t eax_1 = 0
    
    do
        if (esi[0xdf8] == 0)
            ebx[edx_1 + 9] = 0
            ecx_1 = *ebx
        
        int32_t ebp_2 = ebx[0xd]
        var_ac[edx_1] = *(eax_1 + ebp_2 + 0x10)
        var_9c[edx_1] = *(eax_1 + ebp_2 + 0xc)
        int32_t edi_4 = *(eax_1 + ebp_2 + 4) * *(eax_1 + ebp_2 + 8)
        eax_1 += 0x18
        var_8c[edx_1] = edi_4
        edx_1 += 1
    while (edx_1 s< ecx_1)

if (ecx_1 == 1)
    var_8c[0] = 1

int32_t eax_2 = esi[0xdee]
char var_3c
int32_t var_34
int32_t edi_5
int32_t eax_3

if (eax_2 == 1)
    eax_3 = esi[0xdef]
    var_34 = eax_3
    
    if (eax_3 != 1)
        goto label_6f7028
    
    edi_5 = esi[0xdf0]
    var_3c = 0
else
    var_34 = esi[0xdef]
label_6f7028:
    eax_3.b = 1
    int32_t ecx_2 = 0
    edi_5 = esi[0xdf0]
    var_3c = 1
    
    if (edi_5 s> 0)
        int32_t edx_2 = 0
        
        while (true)
            if (eax_3.b == 0)
                var_3c = eax_3.b
                ebx = arg2
                break
            
            int32_t ebp_3 = esi[0xdf3]
            int32_t ebx_1 = *(ebp_3 + edx_2 + 4)
            
            if (ebx_1 != *(ebp_3 + edx_2 + 8))
                eax_3.b = 0
            
            if (ebx_1 != 1 && ebx_1 != 2)
                eax_3.b = 0
            
            edx_2 += 0x10
            ecx_2 += 1
            
            if (ecx_2 s>= edi_5)
                var_3c = eax_3.b
                ebx = arg2
                break
int32_t temp0 = divs.dp.d(0:8, arg4)
int32_t ecx_5 = eax_2 * temp0
int32_t i_6 = divs.dp.d(sx.q(esi[1]), ecx_5)
int32_t var_44 = divs.dp.d(sx.q(esi[3] + ecx_5 - 1), ecx_5)
int32_t ecx_7 = var_34 * temp0
int32_t var_20 = divs.dp.d(sx.q(esi[2]), ecx_7)
int32_t edx_8 = esi[0x137a]
int32_t var_1c = divs.dp.d(sx.q(esi[4] + ecx_7 - 1), ecx_7)
int32_t var_18

if (edx_8 == 1 && eax_2 == 2)
    var_18 = 1
else
    var_18 = 0

int32_t var_48

if (edx_8 == 1 && var_34 == 2)
    var_48 = 1
else
    var_48 = 0

if (i_6 != 0)
    i_6 -= var_18

if (var_20 != 0)
    var_20 -= var_48

int32_t* ecx_8 = esi[0x1e]

if (var_44 s< ecx_8)
    var_44 += var_18

int32_t eax_24 = esi[0x1f]
int32_t var_60 = eax_24

if (var_1c s< eax_24)
    var_1c += var_48

int32_t ebp_6 = 0

if (edi_5 s> 0)
    int32_t edx_10 = esi[0xdf3]
    int32_t eax_26 = 0
    int32_t i_15 = i_14
    
    do
        ebp_6 += 1
        i_15 += *(eax_26 + edx_10 + 4) * *(eax_26 + edx_10 + 8)
        eax_26 += 0x10
    while (ebp_6 s< edi_5)
    
    i_14 = i_15
    esi = arg3
    ebx = arg2

int32_t i_5
int32_t i_10
int32_t i_13
int32_t var_c4
int32_t var_c0
int32_t var_bc
int32_t var_b8
char var_b4

if (ebx[2] == 0 || ebx[3] == 0)
    int32_t i_12 = ebx[8]
    
    if (i_12 s< var_60)
        int32_t edx_57 = i_14 << 7
        int32_t eax_98 = var_60
        
        do
            int32_t i_9 = ebx[7]
            
            if (i_9 s< ecx_8)
                while (true)
                    int32_t eax_101 = 0
                    int32_t edx_59 = *ebx[0xd]
                    int16_t* ebp_34 = (ecx_8 * i_12 + i_9) * edx_57 + esi[0x1379]
                    
                    if (edx_59 s> 0)
                        int32_t edx_60 = esi[0xdf3]
                        int32_t var_34_4 = 0
                        int32_t ecx_30 = 0
                        
                        do
                            eax_101 += 1
                            ebp_34 += (*(ecx_30 + edx_60 + 4) << 7) * *(ecx_30 + edx_60 + 8)
                            ecx_30 += 0x10
                        while (eax_101 s< edx_59)
                        
                        esi = arg3
                        ebx = arg2
                    
                    int32_t* var_d4
                    
                    if (ebx[4] != 0)
                        int32_t eax_103 = 0
                        int32_t edx_69 = *ebx
                        
                        if (edx_69 s> 0)
                            do
                                if (var_8c[eax_103] s> 0)
                                    int32_t var_30_6 = eax_103
                                    int32_t i = 0
                                    
                                    do
                                        sub_6d23b0(arg1, ebp_34, (ebx[5]).b)
                                        ebp_34 = &ebp_34[0x40]
                                        i += 1
                                        eax_103 = var_30_6
                                    while (i s< var_8c[eax_103])
                                    
                                    edx_69 = *ebx
                                
                                eax_103 += 1
                            while (eax_103 s< edx_69)
                            
                            esi = arg3
                            ecx_8 = esi[0x1e]
                    else
                        int32_t edx_64 = *ebx
                        
                        if (edx_64 s> 0)
                            int32_t esi_13 = 0
                            
                            do
                                int32_t i_1 = 0
                                
                                if (var_8c[esi_13] s> 0)
                                    do
                                        data_797c44(ebp_34, 0x80, var_d4, i_5, i_10, i_13, var_c4, 
                                            var_c0, var_bc, var_b8, var_b4)
                                        int16_t var_7c = (ebx[esi_13 + 9]).w
                                        var_d4 = ebp_34
                                        i_5 = &var_7c
                                        i_10 = ebx[5]
                                        sub_6d22d0(arg1, var_9c[esi_13], var_d4, i_5, i_10.b)
                                        ebp_34 = &ebp_34[0x40]
                                        i_1 += 1
                                        ebx[esi_13 + 9] = sx.d(var_7c)
                                    while (i_1 s< var_8c[esi_13])
                                    
                                    edx_64 = *ebx
                                
                                esi_13 += 1
                            while (esi_13 s< edx_64)
                            
                            esi = arg3
                            ecx_8 = esi[0x1e]
                    
                    var_d4 = ecx_8
                    i_5 = esi[0x1f]
                    i_10 = i_9
                    i_13 = i_12
                    
                    if (sub_6f5b50(arg1, ebx, var_d4, i_5, i_10, i_13) != 0)
                        return 0xffffffe7
                    
                    if (i_9 s< i_6)
                        ecx_8 = esi[0x1e]
                    else if (i_9 s>= var_44)
                        ecx_8 = esi[0x1e]
                    else if (i_12 s< var_20)
                        ecx_8 = esi[0x1e]
                    else if (i_12 s>= var_1c)
                        ecx_8 = esi[0x1e]
                    else
                        int32_t edx_72 = esi[0xdf0]
                        
                        if (edx_72 s> esi[0xdf5])
                            ecx_8 = esi[0x1e]
                        else if (edx_72 s> esi[0xdf6])
                            ecx_8 = esi[0x1e]
                        else
                            ecx_8 = esi[0x1e]
                            int32_t var_68_3 = (ecx_8 * i_12 + i_9) * edx_57 + esi[0x1379]
                            int32_t* eax_116 = esi[0x1377]
                            
                            if (eax_116 == 0 || *eax_116 != 0)
                                int32_t ebp_42 = esi[0x120d]
                                data_797c48(ebp_42, var_68_3, i_14 << 7)
                                int32_t eax_127 = 0
                                int32_t ecx_39 = esi[0xdf0]
                                
                                if (ecx_39 s> 0)
                                    int32_t var_34_6 = esi[0x120d]
                                    
                                    do
                                        int32_t edi_33 = eax_127 << 4
                                        void* edx_80 = edi_33 + esi[0xdf3]
                                        int32_t ebx_23 = 0
                                        int32_t ebp_44 = *(edx_80 + 4) * *(edx_80 + 8)
                                        
                                        if (ebp_44 s> 0)
                                            int32_t edi_34 = var_34_6
                                            
                                            while (true)
                                                (*(edx + 0x110))(edi_34, 
                                                    esi[*(edx_80 + 0xc) * 0x2d + 0x27])
                                                edi_34 += 0x80
                                                ebx_23 += 1
                                                
                                                if (ebx_23 s>= ebp_44)
                                                    break
                                                
                                                edx_80 = esi[0xdf3] + edi_33
                                            
                                            var_34_6 = edi_34
                                            ecx_39 = esi[0xdf0]
                                        
                                        eax_127 += 1
                                    while (eax_127 s< ecx_39)
                                    
                                    ebx = arg2
                                
                                var_d4 = ebx
                                i_5 = i_9
                                i_10 = i_12
                                i_13 = i_14
                                int32_t eax_161
                                eax_161.b = var_3c
                                var_c4 = ebp_42
                                var_c0 = esi[0x1e]
                                var_bc = esi[0x1f]
                                var_b8 = arg4
                                var_b4 = eax_161.b
                                sub_6f44f0(esi, arg1, var_d4, i_5, i_10, i_13, var_c4, var_c0, 
                                    var_bc, var_b8, var_b4)
                                ecx_8 = esi[0x1e]
                            else
                                int32_t ebp_35 = 0
                                
                                if (edx_72 s> 0)
                                    int32_t eax_118 = esi[0xdf3]
                                    int32_t* var_50_4 = ecx_8
                                    
                                    do
                                        int32_t ecx_35 = 0
                                        int32_t edi_27 = ebp_35 << 4
                                        int32_t ebx_18 = *(edi_27 + eax_118 + 8)
                                        
                                        if (ebx_18 s> 0)
                                            int32_t edx_73 = ebp_35 * 2
                                            int32_t edx_74 = *(edi_27 + eax_118 + 4)
                                            
                                            do
                                                int32_t esi_16 = 0
                                                
                                                if (edx_74 s> 0)
                                                    int32_t edi_28 = edx_73
                                                    int32_t* ecx_36 = var_50_4
                                                    
                                                    while (true)
                                                        int32_t ebp_41 = (esi_16 << 4)
                                                            + *(arg3[0x1377] + (edi_28 << 1) + 4)
                                                            + ebx_18 * (i_12 << 7) * ecx_36
                                                            * edx_74
                                                            + ecx_36 * edx_74 * (ecx_35 << 7)
                                                            + edx_74 * (i_9 << 4)
                                                        int32_t i_2 = 0
                                                        int32_t esi_17 = var_68_3
                                                        
                                                        do
                                                            var_d4 = 0x10
                                                            data_797c48(ebp_41, esi_17, 0x10)
                                                            eax_118 = arg3[0xdf3]
                                                            ecx_36 = arg3[0x1e]
                                                            edx_74 = *(edi_27 + eax_118 + 4)
                                                            ebp_41 += (ecx_36 << 4) * edx_74
                                                            esi_17 += 0x10
                                                            i_2 += 1
                                                        while (i_2 s< 8)
                                                        
                                                        var_68_3 = esi_17
                                                        edi_28 = edx_73
                                                        esi_16 += 1
                                                        
                                                        if (esi_16 s>= edx_74)
                                                            break
                                                        
                                                        ebx_18 = *(edi_27 + eax_118 + 8)
                                                    
                                                    var_50_4 = ecx_36
                                                    ebx_18 = *(edi_27 + eax_118 + 8)
                                                
                                                ecx_35 += 1
                                            while (ecx_35 s< ebx_18)
                                            
                                            edx_72 = arg3[0xdf0]
                                        
                                        ebp_35 += 1
                                    while (ebp_35 s< edx_72)
                                    
                                    ecx_8 = var_50_4
                                    esi = arg3
                                    ebx = arg2
                    
                    if (esi[7] != 0)
                        int32_t temp1_2 = mods.dp.d(sx.q(i_9 + 1), ecx_8)
                        ebx[7] = temp1_2
                        
                        if (temp1_2 == 0)
                            ebx[8] = i_12 + 1
                            
                            if (i_12 + 1 == esi[0x1f])
                                ebx[8] = 0
                                return 0
                        else
                            ebx[8] = i_12
                        
                        int32_t edi_38 = i_9 - var_18
                        esi[3] = edi_38
                        int32_t ebp_48 = i_12 - var_48
                        esi[4] = ebp_48
                        esi[1] = edi_38
                        esi[2] = ebp_48
                        return 1
                    
                    i_9 += 1
                    
                    if (i_9 s>= ecx_8)
                        eax_98 = esi[0x1f]
                        break
            
            i_12 += 1
        while (i_12 s< eax_98)
        
        edi_5 = esi[0xdf0]
else
    void* ebp_7 = ebx[0xd]
    int32_t temp0_5 = divs.dp.d(sx.q(eax_2 * 8), *(ebp_7 + 4))
    int32_t temp0_6 = divs.dp.d(sx.q(var_34 * 8), *(ebp_7 + 8))
    int32_t eax_42
    int32_t edx_13
    edx_13:eax_42 = sx.q(temp0_5 + esi[0x13] - 1)
    int32_t eax_45
    int32_t edx_14
    edx_14:eax_45 = sx.q(esi[0x14])
    int32_t i_11 = ebx[8]
    
    if (i_11 s< var_60)
        int32_t edx_18 = i_14 << 7
        
        while (true)
            if (edi_5 s>= esi[0xdf6])
                int32_t* ecx_16 = arg2[0xd]
                int32_t edx_20 = ecx_16[2]
                
                if (edx_20 s> 0)
                    int32_t ebx_2 = 0
                    int32_t edi_9 = 0
                    
                    while (true)
                        if (edx_20 * i_11 * 8 + ebx_2 s>= esi[0x14])
                            edi_5 = esi[0xdf0]
                            break
                        
                        int32_t eax_51 = arg2[7]
                        int32_t ebp_15 = esi[0x1e]
                        
                        if (eax_51 s< ebp_15)
                            int32_t edx_21 = ecx_16[1]
                            int32_t* var_74_1 = ecx_16
                            
                            do
                                int32_t ecx_17 = 0
                                int32_t ebx_4 = *var_74_1
                                int32_t edi_14 = (ebp_15 * i_11 + eax_51) * edx_18 + esi[0x1379]
                                
                                if (ebx_4 s> 0)
                                    int32_t ebx_5 = esi[0xdf3]
                                    int32_t edx_22 = 0
                                    
                                    do
                                        ecx_17 += 1
                                        edi_14 +=
                                            (*(edx_22 + ebx_5 + 4) << 7) * *(edx_22 + ebx_5 + 8)
                                        edx_22 += 0x10
                                    while (ecx_17 s< ebx_4)
                                    
                                    esi = arg3
                                
                                int32_t ebx_10 = (edx_21 << 7) * edi_9 + edi_14
                                int32_t edi_15 = 0
                                
                                if (edx_21 s> 0)
                                    int32_t ebp_17 = 0
                                    
                                    while (true)
                                        if (edx_21 * 8 * eax_51 + ebp_17 s>= arg3[0x13])
                                            esi = arg3
                                            ebp_15 = esi[0x1e]
                                            break
                                        
                                        if (arg2[4] == 0)
                                            sub_6d2420(arg1, ebx_10, var_ac[0], arg2[2], arg2[3], 
                                                arg2[5])
                                            ebx_10 += 0x80
                                        else
                                            sub_6d25d0(arg1, ebx_10, var_ac[0], arg2[2], arg2[3], 
                                                (arg2[5]).b)
                                            ebx_10 += 0x80
                                        
                                        void* eax_64 = arg2[0xd]
                                        i_5 = divs.dp.d(
                                            sx.q(temp0_6 + (eax_45 ^ edx_14) - edx_14 - 1), temp0_6)
                                        i_10 = eax_51 * *(eax_64 + 4) + edi_15
                                        i_13 = i_11 * *(eax_64 + 8) + edi_9
                                        
                                        if (sub_6f5b50(arg1, arg2, 
                                                divs.dp.d(edx_13:eax_42, temp0_5), i_5, i_10, i_13) != 0)
                                            return 0xffffffe7
                                        
                                        ebp_17 += 8
                                        edi_15 += 1
                                        int32_t* eax_66 = arg2[0xd]
                                        var_74_1 = eax_66
                                        edx_21 = eax_66[1]
                                        
                                        if (edi_15 s>= edx_21)
                                            esi = arg3
                                            ebp_15 = esi[0x1e]
                                            break
                                
                                eax_51 += 1
                            while (eax_51 s< ebp_15)
                            
                            ecx_16 = var_74_1
                            edx_20 = ecx_16[2]
                        
                        ebx_2 += 8
                        edi_9 += 1
                        
                        if (edi_9 s>= edx_20)
                            edi_5 = esi[0xdf0]
                            break
            
            if (edi_5 s<= esi[0xdf5] && edi_5 s<= esi[0xdf6] && i_11 s>= var_20 && i_11 s< var_1c)
                int32_t* eax_69 = esi[0x1377]
                
                if (eax_69 == 0 || *eax_69 != 0)
                    int32_t eax_73 = arg2[7] - i_6
                    
                    if (eax_73 s<= 0)
                        eax_73 = 0
                    
                    int32_t i_3 = i_6
                    *(arg1 + 0x2c) = ((i_11 - var_20) * esi[0xdef] * esi[0xf]
                        + eax_73 * esi[0xc] * esi[0xdee]) * temp0 + esi[8]
                    
                    for (; i_3 s< var_44; i_3 += 1)
                        int32_t edi_16 = esi[0x120d]
                        data_797c48(edi_16, (i_11 * esi[0x1e] + i_3) * edx_18 + esi[0x1379], 
                            i_14 << 7, i_5, i_10, i_13, var_c4, var_c0, var_bc, var_b8, var_b4)
                        int32_t eax_81 = 0
                        int32_t ecx_22 = esi[0xdf0]
                        
                        if (ecx_22 s> 0)
                            int32_t var_30_3 = edi_16
                            int32_t edi_17 = ecx_22
                            
                            do
                                int32_t ecx_24 = eax_81 << 4
                                void* edx_42 = ecx_24 + esi[0xdf3]
                                int32_t ebx_13 = 0
                                int32_t ebp_19 = *(edx_42 + 4) * *(edx_42 + 8)
                                
                                if (ebp_19 s> 0)
                                    int32_t edi_18 = var_30_3
                                    
                                    while (true)
                                        (*(edx + 0x110))(edi_18, esi[*(edx_42 + 0xc) * 0x2d + 0x27])
                                        edi_18 += 0x80
                                        ebx_13 += 1
                                        
                                        if (ebx_13 s>= ebp_19)
                                            break
                                        
                                        edx_42 = esi[0xdf3] + ecx_24
                                    
                                    var_30_3 = edi_18
                                    edi_17 = esi[0xdf0]
                                
                                eax_81 += 1
                            while (eax_81 s< edi_17)
                        
                        i_5 = i_3
                        i_10 = i_11
                        i_13 = i_14
                        var_c4 = edi_16
                        var_c0 = esi[0x1e]
                        var_bc = esi[0x1f]
                        var_b8 = arg4
                        int32_t eax_138
                        eax_138.b = var_3c
                        var_b4 = eax_138.b
                        sub_6f44f0(esi, arg1, arg2, i_5, i_10, i_13, var_c4, var_c0, var_bc, 
                            var_b8, var_b4)
                    
                    if (var_18 != 0 && i_3 == var_44)
                        i_5 = i_3
                        i_10 = i_11
                        i_13 = i_14
                        var_c4 = esi[0x120d]
                        var_c0 = esi[0x1e]
                        var_bc = esi[0x1f]
                        var_b8 = arg4
                        int32_t eax_144
                        eax_144.b = var_3c
                        var_b4 = eax_144.b
                        sub_6f44f0(esi, arg1, arg2, i_5, i_10, i_13, var_c4, var_c0, var_bc, 
                            var_b8, var_b4)
                else
                    int32_t i_7 = i_6
                    
                    if (i_7 s< var_44)
                        int32_t var_64_3 = esi[0x1e]
                        
                        do
                            int32_t eax_87 = 0
                            
                            if (edi_5 s> 0)
                                int32_t ecx_27 = arg3[0xdf3]
                                int32_t var_68_2 = (var_64_3 * i_11 + i_7) * edx_18 + arg3[0x1379]
                                
                                do
                                    int32_t ebx_14 = 0
                                    int32_t ebp_23 = eax_87 << 4
                                    int32_t esi_5 = *(ebp_23 + ecx_27 + 8)
                                    
                                    if (esi_5 s> 0)
                                        int32_t edi_19 = eax_87 * 2
                                        int32_t edx_50 = *(ebp_23 + ecx_27 + 4)
                                        
                                        do
                                            int32_t eax_88 = 0
                                            
                                            if (edx_50 s> 0)
                                                int32_t ebx_15 = edi_19
                                                int32_t edi_20 = var_64_3
                                                
                                                while (true)
                                                    int32_t i_4 = 0
                                                    int32_t esi_9 =
                                                        esi_5 * (i_11 << 7) * edi_20 * edx_50
                                                        + *(arg3[0x1377] + (ebx_15 << 1) + 4)
                                                        + (i_7 << 4) * edx_50
                                                        + edx_50 * (edi_20 << 7) * ebx_14
                                                    int32_t ebx_16 = var_68_2
                                                    int32_t esi_11 = esi_9 + (eax_88 << 4)
                                                    
                                                    do
                                                        data_797c48(esi_11, ebx_16, 0x10, i_5, 
                                                            i_10, i_13, var_c4, var_c0, var_bc, 
                                                            var_b8, var_b4)
                                                        ecx_27 = arg3[0xdf3]
                                                        edi_20 = arg3[0x1e]
                                                        edx_50 = *(ebp_23 + ecx_27 + 4)
                                                        esi_11 += (edi_20 << 4) * edx_50
                                                        ebx_16 += 0x10
                                                        i_4 += 1
                                                    while (i_4 s< 8)
                                                    
                                                    var_68_2 = ebx_16
                                                    ebx_15 = edi_19
                                                    eax_88 += 1
                                                    
                                                    if (eax_88 s>= edx_50)
                                                        break
                                                    
                                                    esi_5 = *(ebp_23 + ecx_27 + 8)
                                                
                                                var_64_3 = edi_20
                                                esi_5 = *(ebp_23 + ecx_27 + 8)
                                            
                                            ebx_14 += 1
                                        while (ebx_14 s< esi_5)
                                        
                                        edi_5 = arg3[0xdf0]
                                    
                                    eax_87 += 1
                                while (eax_87 s< edi_5)
                            
                            i_7 += 1
                        while (i_7 s< var_44)
                        
                        esi = arg3
            
            if (esi[7] != 0)
                arg2[8] = i_11 + 1
                arg2[7] = 0
                
                if (i_11 + 1 == var_48 + esi[0x1f])
                    arg2[8] = 0
                    return 0
                
                int32_t edx_92 = esi[0x1e] - 1
                esi[3] = edx_92
                int32_t ebp_45 = i_11 - var_48
                esi[4] = ebp_45
                esi[1] = edx_92
                esi[2] = ebp_45
                return 1
            
            i_11 += 1
            int32_t eax_94 = esi[0x1f]
            
            if (i_11 s>= eax_94)
                var_60 = eax_94
                ebx = arg2
                break
            
            edi_5 = esi[0xdf0]
    
    int32_t* eax_146 = esi[0x1377]
    
    if (eax_146 != 0 && *eax_146 == 0)
        edi_5 = esi[0xdf0]
    else if (var_48 == 0)
        edi_5 = esi[0xdf0]
    else
        if (i_6 s<= var_44)
            int32_t eax_150 = var_60
            int32_t i_8 = i_6
            
            while (true)
                int32_t eax_151
                eax_151.b = var_3c
                sub_6f44f0(esi, arg1, ebx, i_8, eax_150, i_14, esi[0x120d], esi[0x1e], eax_150, 
                    arg4, eax_151.b)
                i_8 += 1
                
                if (i_8 s> var_44)
                    break
                
                eax_150 = esi[0x1f]
        
        if (esi[7] != 0)
            ebx[7] = 0
            ebx[8] = 0
            return 0
        
        edi_5 = esi[0xdf0]

if (edi_5 s<= esi[0xdf5] && edi_5 s<= esi[0xdf6])
    return 2

return 0
