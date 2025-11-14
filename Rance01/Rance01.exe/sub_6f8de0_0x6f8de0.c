// 函数: sub_6f8de0
// 地址: 0x6f8de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
int32_t* ebx = arg3
int32_t ecx = arg1[2]
int32_t ecx_1 = *arg2
int32_t var_18 = 0
int32_t edx = 0
int32_t var_dc[0x4]
int32_t var_cc[0x4]
int32_t var_bc[0x4]
int32_t var_ac[0x4]
int32_t var_2c

if (ecx_1 s<= 0)
    var_2c = ebx[0x1d]
else
    var_2c = ebx[0x1d]
    int32_t eax_1 = 0
    int32_t esi_1 = 0
    
    do
        int32_t ebp_4
        
        if (arg3[0xdf8] == 0)
            int32_t ebx_22 = edx * 2
            ebp_4 = ebx_22 * 2
            
            if (var_2c != 1)
                *(arg2 + (ebx_22 << 1) + 0x24) = 0
                ecx_1 = *arg2
                var_2c = arg3[0x1d]
        else
            ebp_4 = edx * 4
        
        int32_t ebx_2 = arg2[0xd]
        *(&var_dc + ebp_4) = *(eax_1 + ebx_2 + 0x10)
        edx += 1
        *(&var_cc + ebp_4) = *(eax_1 + ebx_2 + 0xc)
        *(&var_bc + ebp_4) = *(*(eax_1 + ebx_2 + 0x14) + 8)
        int32_t edi_8 = *(eax_1 + ebx_2 + 4) * *(eax_1 + ebx_2 + 8)
        esi_1 += edi_8
        eax_1 += 0x18
        *(&var_ac + ebp_4) = edi_8
    while (edx s< ecx_1)
    
    var_18 = esi_1
    ebx = arg3

int32_t* ebp_5 = ebx[0xdee]
int32_t* edx_1 = ebx[0xdef]
int32_t eax_2 = ebx[0xf]
void** var_6c
int32_t* var_20
int32_t var_1c_1
int32_t ecx_4
int32_t ebp_9

if (ecx_1 == 1)
    void* esi_34 = arg2[0xd]
    void* var_50_2 = esi_34
    ecx_4 = divs.dp.d(sx.q(ebp_5 * 8), *(esi_34 + 4))
    ebp_9 = divs.dp.d(sx.q(edx_1 * 8), *(esi_34 + 8))
    var_1c_1 = eax_2 * ebp_9
    var_6c = divs.dp.d(sx.q(ebx[0x13] + ecx_4 - 1), ecx_4)
    int32_t eax_134
    int32_t edx_101
    edx_101:eax_134 = sx.q(ebx[0x14])
    var_20 = divs.dp.d(sx.q((eax_134 ^ edx_101) - edx_101 + ebp_9 - 1), ebp_9)
    var_18 = 1
    var_ac[0] = 1
else
    ecx_4 = ebp_5 * 8
    ebp_9 = edx_1 * 8
    var_1c_1 = eax_2 * ebp_9
    var_6c = ebx[0x1e]
    var_20 = ebx[0x1f]

char var_48

if (ebp_5 == 1 && edx_1 == 1)
    var_48 = 0
else
    int32_t edi_11 = 0
    int32_t esi_3 = ebx[0xdf0]
    var_48 = 1
    
    if (esi_3 s> 0)
        int32_t edx_4 = 0
        int32_t* eax_3
        eax_3.b = 1
        
        while (true)
            if (eax_3.b == 0)
                var_48 = eax_3.b
                break
            
            int32_t ebp_10 = ebx[0xdf3]
            int32_t ecx_5 = *(ebp_10 + edx_4 + 4)
            
            if (ecx_5 != *(ebp_10 + edx_4 + 8))
                eax_3.b = 0
            
            if (ecx_5 != 1 && ecx_5 != 2)
                eax_3.b = 0
            
            edx_4 += 0x10
            edi_11 += 1
            
            if (edi_11 s>= esi_3)
                var_48 = eax_3.b
                break

int32_t temp0_1 = divs.dp.d(sx.q(ecx_4), arg4)
int32_t var_28 = divs.dp.d(sx.q(ebx[1]), temp0_1)
int32_t esi_7 = divs.dp.d(sx.q(temp0_1 + ebx[3] - 1), temp0_1)
int32_t temp0_4 = divs.dp.d(sx.q(ebp_9), arg4)
int32_t edi_12 = divs.dp.d(sx.q(ebx[2]), temp0_4)
int32_t ecx_9 = ebx[0x137a]
int32_t temp0_6 = divs.dp.d(sx.q(temp0_4 + ebx[4] - 1), temp0_4)
int32_t var_50_1 = temp0_6
int32_t var_58

if (ecx_9 == 1 && ebp_5 == 2)
    var_58 = 1
else
    var_58 = 0

int32_t var_4c_1

if (ecx_9 == 1 && edx_1 == 2)
    var_4c_1 = 1
else
    var_4c_1 = 0

if (var_28 != 0)
    var_28 -= var_58

if (edi_12 != 0)
    edi_12 -= var_4c_1

if (esi_7 s< var_6c)
    esi_7 += var_58

if (temp0_6 s< var_20)
    var_50_1 = temp0_6 + var_4c_1

int32_t ebp_12 = arg2[8]

if (ebp_12 s<= edi_12)
    ebp_12 = edi_12

int32_t* var_10c
int32_t* var_108
void** var_104
int32_t* var_100
int32_t var_fc
int32_t var_f8

if (var_2c == 1 && arg1[0xe] != 0)
    int32_t edx_92 = ebx[0x120d]
    
    if (arg2[7] == 0)
        int32_t ecx_58 = 0
        
        if (ebp_12 s> 0)
            int32_t* edi_37 = arg2
            int32_t* ebp_21 = arg1
            
            do
                int32_t esi_32 = 0
                
                if (var_6c s> 0)
                    do
                        int32_t edx_93 = *edi_37
                        
                        if (edx_93 s> 0)
                            int32_t ebx_21 = 0
                            
                            do
                                int32_t i = 0
                                
                                if (var_ac[ebx_21] s> 0)
                                    int32_t edx_94 = edi_37[ebx_21 + 9]
                                    
                                    do
                                        int16_t var_98 = edx_94.w
                                        int32_t eax_117 = (*(ecx + 0xf8))(arg1, var_cc[ebx_21], 
                                            var_dc[ebx_21], &var_98, edx_92, var_f8)
                                        edx_94 = sx.d(var_98)
                                        arg2[ebx_21 + 9] = edx_94
                                        
                                        if (eax_117 s< 0)
                                            return 0xffffffeb
                                        
                                        i += 1
                                    while (i s< var_ac[ebx_21])
                                    
                                    edi_37 = arg2
                                    edx_93 = *edi_37
                                
                                ebx_21 += 1
                            while (ebx_21 s< edx_93)
                            
                            ebp_21 = arg1
                        
                        var_10c = ebp_21
                        var_108 = edi_37
                        var_104 = var_6c
                        var_100 = var_20
                        var_fc = esi_32
                        var_f8 = ecx_58
                        
                        if (sub_6f5b50(var_10c, var_108, var_104, var_100, var_fc, var_f8) != 0)
                            return 0xffffffe7
                        
                        esi_32 += 1
                    while (esi_32 s< var_6c)
                
                ecx_58 += 1
            while (ecx_58 s< ebp_12)
            
            var_6c = var_6c
            ebp_12 = ebp_12
            ebx = arg3
else if (arg2[7] == 0)
    int32_t* ecx_12 = ebx[0x120c]
    int32_t edx_24 = ecx_12[ebp_12 * 0xa]
    
    if (edx_24 != 0xffffffff)
        var_10c = ebp_12
        var_108 = arg1
        var_104 = arg2
        var_100 = ebx
        int32_t eax_97 = sub_6f5980(var_10c, var_108, var_104, var_100)
        
        if (eax_97 != 0)
            return eax_97
    else
        int32_t var_54_1 = ebp_12
        
        if (edx_24 == 0xffffffff)
            int32_t eax_22 = ebp_12 * 0x28
            int32_t ecx_15 = ebp_12
            
            do
                eax_22 -= 0x28
                ecx_15 -= 1
            while (*(ecx_12 + eax_22) == 0xffffffff)
            
            var_54_1 = ecx_15
            ebx = arg3
        
        var_10c = var_54_1
        var_108 = arg1
        var_104 = arg2
        var_100 = ebx
        int32_t eax_23 = sub_6f5980(var_10c, var_108, var_104, var_100)
        
        if (eax_23 != 0)
            return eax_23
        
        int32_t ecx_17 = ebx[0x120d]
        
        if (var_54_1 s< ebp_12)
            int32_t* ebp_13 = arg2
            int32_t* edi_13 = arg1
            
            do
                if (var_6c s> 0)
                    int32_t ebx_3 = 0
                    
                    do
                        int32_t edx_30 = *ebp_13
                        
                        if (edx_30 s> 0)
                            int32_t ebx_4 = 0
                            
                            do
                                if (var_ac[ebx_4] s> 0)
                                    int32_t edx_31 = ebp_13[ebx_4 + 9]
                                    int32_t i_1 = 0
                                    
                                    do
                                        int16_t var_9c = edx_31.w
                                        int32_t eax_24 = (*(ecx + 0xf8))(arg1, var_cc[ebx_4], 
                                            var_dc[ebx_4], &var_9c, ecx_17, var_f8)
                                        edx_31 = sx.d(var_9c)
                                        arg2[ebx_4 + 9] = edx_31
                                        
                                        if (eax_24 s< 0)
                                            return 0xffffffeb
                                        
                                        i_1 += 1
                                    while (i_1 s< var_ac[ebx_4])
                                    
                                    ebp_13 = arg2
                                    edx_30 = *ebp_13
                                
                                ebx_4 += 1
                            while (ebx_4 s< edx_30)
                            
                            edi_13 = arg1
                        
                        var_fc = ebx_3
                        var_f8 = var_54_1
                        
                        if (sub_6f5b50(edi_13, ebp_13, var_6c, var_20, var_fc, var_f8) != 0)
                            return 0xffffffe7
                        
                        ebx_3 += 1
                    while (ebx_3 s< var_6c)
                    
                    ebx = arg3
                
                int32_t eax_27 = var_54_1 + 1
                var_54_1 = eax_27
                var_10c = eax_27
                var_108 = edi_13
                var_104 = ebp_13
                var_100 = ebx
                sub_6f5a90(var_10c, var_108, var_104, var_100)
            while (var_54_1 s< ebp_12)
            
            var_6c = var_6c

int32_t var_f4
int32_t* var_f0
int32_t* var_ec
int32_t var_e8
char var_e4

if (ebp_12 s< var_50_1)
    int32_t ecx_24 = var_6c << 7
    int32_t eax_30 = var_6c << 4
    int32_t var_78_2 = ebp_12
    int32_t* ebp_15 = arg2
    int32_t* esi_23
    
    do
        int32_t edx_39 = ebx[0x120d]
        int32_t edi_16 = ebp_15[7]
        
        if (edi_16 s< var_28)
            void** esi_9 = var_6c
            int32_t* ebx_5 = arg1
            
            do
                int32_t edx_40 = *ebp_15
                
                if (edx_40 s> 0)
                    int32_t ebx_6 = 0
                    
                    do
                        if (var_ac[ebx_6] s> 0)
                            int32_t edx_41 = ebp_15[ebx_6 + 9]
                            int32_t i_2 = 0
                            
                            do
                                int16_t var_94 = edx_41.w
                                int32_t eax_32 = (*(ecx + 0xf8))(arg1, var_cc[ebx_6], 
                                    var_dc[ebx_6], &var_94, edx_39, var_f8, var_f4, var_f0, var_ec, 
                                    var_e8, var_e4)
                                edx_41 = sx.d(var_94)
                                arg2[ebx_6 + 9] = edx_41
                                
                                if (eax_32 s< 0)
                                    return 0xffffffeb
                                
                                i_2 += 1
                            while (i_2 s< var_ac[ebx_6])
                            
                            ebp_15 = arg2
                            edx_40 = *ebp_15
                        
                        ebx_6 += 1
                    while (ebx_6 s< edx_40)
                    
                    esi_9 = var_6c
                    ebx_5 = arg1
                
                var_10c = ebx_5
                var_108 = ebp_15
                var_104 = esi_9
                var_100 = var_20
                var_fc = edi_16
                var_f8 = var_78_2
                
                if (sub_6f5b50(var_10c, var_108, var_104, var_100, var_fc, var_f8) != 0)
                    return 0xffffffe7
                
                edi_16 += 1
            while (edi_16 s< var_28)
            
            ebx = arg3
            edi_16 = ebp_15[7]
        
        if (ebx[0x1377] == 0)
            int32_t edi_34 = edi_16 - var_28
            
            if (edi_34 s<= 0)
                edi_34 = 0
            
            arg1[0xb] = (var_78_2 - edi_12) * divs.dp.d(sx.q(var_1c_1), arg4) + ebx[8]
                + edi_34 * ebx[0xc] * temp0_1
            edi_16 = ebp_15[7]
        
        if (edi_16 s<= var_28)
            edi_16 = var_28
        
        if (edi_16 s< esi_7)
            int32_t ecx_39
            
            do
                int32_t esi_10 = 0
                int32_t var_5c_2 = ebx[0x120d]
                int32_t eax_40 = *ebp_15
                
                if (eax_40 s> 0)
                    do
                        int32_t* edx_47 = ebx[0x1377]
                        
                        if (edx_47 == 0 || *edx_47 != 0)
                            int32_t i_3 = 0
                            int32_t edx_60 = esi_10 * 2
                            
                            if (var_ac[esi_10] s> 0)
                                int32_t ebp_17 = var_5c_2
                                
                                do
                                    int16_t var_90 = (*(arg2 + (edx_60 << 1) + 0x24)).w
                                    int32_t eax_54 = (*(ecx + 0xf4))(arg1, var_cc[esi_10], 
                                        var_dc[esi_10], &var_90, ebp_17, var_f8, var_f4, var_f0, 
                                        var_ec, var_e8, var_e4)
                                    *(arg2 + (edx_60 << 1) + 0x24) = sx.d(var_90)
                                    (*(ecx + 0x110))(ebp_17, var_bc[esi_10])
                                    
                                    if (eax_54 s< 0)
                                        return 0xffffffeb
                                    
                                    ebp_17 += 0x80
                                    i_3 += 1
                                while (i_3 s< var_ac[esi_10])
                                
                                var_5c_2 = ebp_17
                                ebx = arg3
                                ebp_15 = arg2
                                eax_40 = *ebp_15
                        else
                            int32_t edi_18 = ebp_15[0xd]
                            int32_t ecx_28 = esi_10 * 0x18
                            int32_t edx_51 = *(ecx_28 + edi_18 + 8)
                            
                            if (edx_51 s> 0)
                                int32_t eax_41 = esi_10 * 2
                                int32_t ebx_7 = 0
                                int32_t eax_42 = *(ecx_28 + edi_18 + 4)
                                
                                do
                                    if (eax_42 s> 0)
                                        int32_t var_3c_1 = 0
                                        int32_t var_40_1 = 0
                                        int32_t edx_56
                                        int32_t edx_58
                                        
                                        do
                                            int16_t var_8c = (*(ebp_15 + (eax_41 << 1) + 0x24)).w
                                            int32_t eax_47 = (*(ecx + 0xf4))(arg1, var_cc[esi_10], 
                                                var_dc[esi_10], &var_8c, var_5c_2, var_f8, var_f4, 
                                                var_f0, var_ec, var_e8, var_e4)
                                            *(ebp_15 + (eax_41 << 1) + 0x24) = sx.d(var_8c)
                                            
                                            if (eax_47 s< 0)
                                                return 0xffffffeb
                                            
                                            int32_t eax_48 = ebp_15[0xd]
                                            int32_t edx_54 = *(ecx_28 + eax_48 + 4)
                                            int32_t edi_22 = var_5c_2
                                            int32_t i_4 = 0
                                            int32_t esi_17 = edx_54 * (edi_16 << 4)
                                                + *(arg3[0x1377] + (eax_41 << 1) + 4)
                                                + (var_78_2 * *(ecx_28 + eax_48 + 8) + ebx_7)
                                                * edx_54 * ecx_24 + var_3c_1
                                            int32_t esi_18 = esi_17
                                            
                                            do
                                                data_797c48(esi_18, edi_22, 0x10)
                                                edx_56 = ebp_15[0xd]
                                                eax_42 = *(ecx_28 + edx_56 + 4)
                                                esi_18 += eax_30 * eax_42
                                                edi_22 += 0x10
                                                i_4 += 1
                                            while (i_4 s< 8)
                                            
                                            edx_58 = var_40_1 + 1
                                            var_5c_2 = edi_22
                                            var_3c_1 += 0x10
                                            var_40_1 = edx_58
                                        while (edx_58 s< eax_42)
                                        edx_51 = *(ecx_28 + edx_56 + 8)
                                    
                                    ebx_7 += 1
                                while (ebx_7 s< edx_51)
                                
                                ebx = arg3
                                eax_40 = *ebp_15
                        
                        esi_10 += 1
                    while (esi_10 s< eax_40)
                
                var_10c = arg1
                var_108 = ebp_15
                var_104 = var_6c
                var_100 = var_20
                var_fc = edi_16
                var_f8 = var_78_2
                
                if (sub_6f5b50(var_10c, var_108, var_104, var_100, var_fc, var_f8) != 0)
                    return 0xffffffe7
                
                int32_t* eax_58 = ebx[0x1377]
                
                if (eax_58 == 0 || *eax_58 != 0)
                    var_10c = ebx
                    var_108 = arg1
                    var_104 = ebp_15
                    var_100 = edi_16
                    var_fc = var_78_2
                    var_f8 = var_18
                    var_f4 = ebx[0x120d]
                    var_f0 = var_6c
                    int32_t eax_63
                    eax_63.b = var_48
                    var_ec = var_20
                    var_e8 = arg4
                    var_e4 = eax_63.b
                    sub_6f44f0(var_10c, var_108, var_104, var_100, var_fc, var_f8, var_f4, var_f0, 
                        var_ec, var_e8, var_e4)
                
                if (ebx[7] == 0)
                    ecx_39 = edi_16 + 1
                else if (ebx[0x1d] == 1)
                    ecx_39 = edi_16 + 1
                else if (var_58 != 0 && edi_16 == var_28)
                    ecx_39 = edi_16 + 1
                else if (var_4c_1 == 0 || var_78_2 != edi_12)
                    ecx_39 = edi_16 + 1
                    
                    if (edi_16 != var_58 + esi_7 - 1)
                        arg2[7] = mods.dp.d(sx.q(ecx_39), var_58 + esi_7)
                        arg2[8] = var_78_2
                        int32_t edi_51 = edi_16 - var_58
                        ebx[3] = edi_51
                        int32_t ebp_25 = var_78_2 - var_4c_1
                        ebx[4] = ebp_25
                        ebx[1] = edi_51
                        ebx[2] = ebp_25
                        return 1
                    
                    ebp_15[7] = 0
                    ebp_15[8] = 0
                else
                    ecx_39 = edi_16 + 1
                
                edi_16 = ecx_39
            while (ecx_39 s< esi_7)
        
        if (var_58 != 0)
            var_10c = ebx
            var_108 = arg1
            var_104 = ebp_15
            var_100 = edi_16
            var_fc = var_78_2
            int32_t eax_107
            eax_107.b = var_48
            var_f8 = var_18
            var_f4 = ebx[0x120d]
            var_f0 = var_20
            var_ec = var_20
            var_e8 = arg4
            var_e4 = eax_107.b
            sub_6f44f0(var_10c, var_108, var_104, var_100, var_fc, var_f8, var_f4, var_f0, var_ec, 
                var_e8, var_e4)
            
            if (ebx[7] != 0 && ebx[0x1d] != 1)
                ebp_15[7] = 0
                ebp_15[8] = 0
        
        esi_23 = var_78_2 + 1
        
        if (var_20 s> esi_23)
            if (ebx[0x1d] == 1 && arg1[0xe] != 0)
                int32_t edx_82 = ebx[0x120d]
                int32_t edi_30 = esi_7
                
                if (edi_30 s< var_6c)
                    int32_t* ebx_18 = arg1
                    
                    do
                        int32_t edx_83 = *ebp_15
                        
                        if (edx_83 s> 0)
                            int32_t ebx_19 = 0
                            
                            do
                                if (var_ac[ebx_19] s> 0)
                                    int32_t edx_84 = ebp_15[ebx_19 + 9]
                                    int32_t i_5 = 0
                                    
                                    do
                                        int16_t var_84 = edx_84.w
                                        int32_t eax_102 = (*(ecx + 0xf8))(arg1, var_cc[ebx_19], 
                                            var_dc[ebx_19], &var_84, edx_82, var_f8, var_f4, 
                                            var_f0, var_ec, var_e8, var_e4)
                                        edx_84 = sx.d(var_84)
                                        arg2[ebx_19 + 9] = edx_84
                                        
                                        if (eax_102 s< 0)
                                            return 0xffffffeb
                                        
                                        i_5 += 1
                                    while (i_5 s< var_ac[ebx_19])
                                    
                                    ebp_15 = arg2
                                    edx_83 = *ebp_15
                                
                                ebx_19 += 1
                            while (ebx_19 s< edx_83)
                            
                            ebx_18 = arg1
                        
                        var_10c = ebx_18
                        var_108 = ebp_15
                        var_104 = var_6c
                        var_100 = var_20
                        var_fc = edi_30
                        var_f8 = var_78_2
                        
                        if (sub_6f5b50(var_10c, var_108, var_104, var_100, var_fc, var_f8) != 0)
                            return 0xffffffe7
                        
                        edi_30 += 1
                    while (edi_30 s< var_6c)
                    
                    var_6c = var_6c
                    ebx = arg3
            else if (*(ebx[0x120c] + var_78_2 * 0x28 + 0x28) != 0xffffffff)
                var_10c = esi_23
                var_108 = arg1
                var_104 = ebp_15
                var_100 = ebx
                int32_t eax_99 = sub_6f5980(var_10c, var_108, var_104, var_100)
                
                if (eax_99 != 0)
                    return eax_99
            else
                int32_t edx_72 = ebx[0x120d]
                int32_t edi_24 = esi_7
                
                if (edi_24 s< var_6c)
                    int32_t* ebx_16 = arg1
                    void** esi_24 = var_6c
                    
                    do
                        int32_t edx_73 = *ebp_15
                        
                        if (edx_73 s> 0)
                            int32_t ebx_17 = 0
                            
                            do
                                int32_t i_6 = 0
                                
                                if (var_ac[ebx_17] s> 0)
                                    int32_t edx_74 = ebp_15[ebx_17 + 9]
                                    
                                    do
                                        int16_t var_88 = edx_74.w
                                        int32_t eax_83 = (*(ecx + 0xf8))(arg1, var_cc[ebx_17], 
                                            var_dc[ebx_17], &var_88, edx_72, var_f8, var_f4, 
                                            var_f0, var_ec, var_e8, var_e4)
                                        edx_74 = sx.d(var_88)
                                        arg2[ebx_17 + 9] = edx_74
                                        
                                        if (eax_83 s< 0)
                                            return 0xffffffeb
                                        
                                        i_6 += 1
                                    while (i_6 s< var_ac[ebx_17])
                                    
                                    ebp_15 = arg2
                                    edx_73 = *ebp_15
                                
                                ebx_17 += 1
                            while (ebx_17 s< edx_73)
                            
                            esi_24 = var_6c
                            ebx_16 = arg1
                        
                        var_fc = edi_24
                        var_f8 = var_78_2
                        
                        if (sub_6f5b50(ebx_16, ebp_15, esi_24, var_20, var_fc, var_f8) != 0)
                            return 0xffffffe7
                        
                        edi_24 += 1
                    while (edi_24 s< esi_24)
                    
                    ebx = arg3
                
                var_10c = esi_23
                var_108 = arg1
                var_104 = ebp_15
                var_100 = ebx
                sub_6f5a90(var_10c, var_108, var_104, var_100)
        
        var_78_2 = esi_23
    while (esi_23 s< var_50_1)
    
    ebp_12 = esi_23

if (var_4c_1 != 0)
    int32_t edx_78 = var_58 + esi_7
    
    if (var_28 s< edx_78)
        int32_t ebp_19 = var_28
        
        do
            var_10c = ebx
            var_108 = arg1
            var_104 = arg2
            var_100 = ebp_19
            var_fc = ebp_12
            var_f8 = var_18
            var_f4 = ebx[0x120d]
            var_f0 = var_6c
            var_ec = var_20
            var_e8 = arg4
            int32_t eax_91
            eax_91.b = var_48
            var_e4 = eax_91.b
            sub_6f44f0(var_10c, var_108, var_104, var_100, var_fc, var_f8, var_f4, var_f0, var_ec, 
                var_e8, var_e4)
            ebp_19 += 1
        while (ebp_19 s< edx_78)

(*(ecx + 0x18))(var_10c, var_108, var_104, var_100, var_fc, var_f8, var_f4, var_f0, var_ec, var_e8, 
    var_e4)

if (ebx[0xdf6] s< ebx[0xdf0] && ebx[0x1d] == 1)
    return 0

return 2
