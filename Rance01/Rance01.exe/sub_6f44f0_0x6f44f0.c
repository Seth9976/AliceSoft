// 函数: sub_6f44f0
// 地址: 0x6f44f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg4
int32_t edx = arg5
int32_t var_28 = arg7
int32_t ebp = arg10
int32_t eax_1 = *(arg2 + 8)
int32_t ebx_1

if (ebp == 1)
    ebx_1 = 8
else if (ebp == 2)
    ebx_1 = 4
else if (ebp == 4)
    ebx_1 = 2
else
    ebx_1 = 1

int32_t i_24 = arg6 << 6

if (ecx != arg8 && edx != arg9)
    int32_t esi_1 = arg1[0x1378]
    int32_t var_2c_1
    
    if (esi_1 == 0)
        var_2c_1 = *arg3
    else
        var_2c_1 = arg1[0xdf0]
    
    if (ebp == 1)
        if (arg6 s> 0)
            int32_t var_30_9 = var_28
            int32_t esi_26 = var_28
            int32_t edi_18 = 0
            
            do
                (*(eax_1 + 0x48))(esi_26)
                esi_26 += 0x80
                edi_18 += 1
            while (edi_18 s< arg6)
            
            ebp = arg10
    else
        int32_t* eax_6
        
        if (ebp == 2)
            eax_6.b = arg11
            
            if (eax_6.b == 0)
                int32_t esi_16 = 0
                
                if (arg6 s> 0)
                    int32_t var_30_7 = var_28
                    int32_t ebx_7 = var_28
                    
                    do
                        (*(eax_1 + 0x4c))(ebx_7)
                        ebx_7 += 0x80
                        esi_16 += 1
                    while (esi_16 s< arg6)
                    
                    ebp = arg10
            else
                int32_t var_30_5 = 0
                
                if (var_2c_1 s> 0)
                    int32_t esi_13 = 0
                    int32_t eax_23 = esi_1
                    int32_t* edi_11 = arg1
                    int32_t ebx_6 = 0
                    int32_t i
                    
                    while (true)
                        int32_t i_27
                        
                        if (eax_23 == 0)
                            int32_t ebp_5 = arg3[0xd]
                            int32_t ecx_6 = esi_13 * 0x18
                            i_27 = *(ecx_6 + ebp_5 + 4) * *(ecx_6 + ebp_5 + 8)
                        else
                            int32_t ecx_5 = edi_11[0xdf3]
                            int32_t edx_14 = esi_13 << 4
                            i_27 = *(edx_14 + ecx_5 + 4) * *(edx_14 + ecx_5 + 8)
                        
                        i = i_27
                        
                        if (i_27 == 1)
                            int32_t edx_28 = ebx_6
                            ebx_6 += 1
                            (*(eax_1 + 0x48))(var_28 + (edx_28 << 7))
                        else
                            i = i_27 - 1
                            
                            if (i_27 != 0)
                                do
                                    int32_t edx_17 = ebx_6
                                    ebx_6 += 1
                                    (*(eax_1 + 0x4c))(var_28 + (edx_17 << 7))
                                    i -= 1
                                while (i != 0xffffffff)
                                
                                edi_11 = arg1
                        
                        esi_13 += 1
                        
                        if (esi_13 s>= var_2c_1)
                            break
                        
                        eax_23 = edi_11[0x1378]
                    
                    i_24 = i
                    ebp = arg10
        else if (ebp == 4)
            eax_6.b = arg11
            
            if (eax_6.b != 0)
                int32_t var_34_1 = 0
                
                if (var_2c_1 s> 0)
                    int32_t eax_7 = esi_1
                    int32_t ebp_1 = 0
                    int32_t esi_4 = 0
                    int32_t* edi_2 = arg1
                    int32_t i_1
                    
                    while (true)
                        int32_t i_25
                        
                        if (eax_7 == 0)
                            int32_t ebx_2 = arg3[0xd]
                            int32_t ecx_2 = esi_4 * 0x18
                            i_25 = *(ecx_2 + ebx_2 + 4) * *(ecx_2 + ebx_2 + 8)
                        else
                            int32_t ecx_1 = edi_2[0xdf3]
                            int32_t edx_2 = esi_4 << 4
                            i_25 = *(edx_2 + ecx_1 + 4) * *(edx_2 + ecx_1 + 8)
                        
                        i_1 = i_25
                        
                        if (i_25 == 1)
                            int32_t edx_26 = ebp_1
                            ebp_1 += 1
                            (*(eax_1 + 0x4c))(var_28 + (edx_26 << 7))
                        else
                            i_1 = i_25 - 1
                            
                            if (i_25 != 0)
                                do
                                    int32_t edx_5 = ebp_1
                                    ebp_1 += 1
                                    (*(eax_1 + 0x50))(var_28 + (edx_5 << 7))
                                    i_1 -= 1
                                while (i_1 != 0xffffffff)
                                
                                edi_2 = arg1
                        
                        esi_4 += 1
                        
                        if (esi_4 s>= var_2c_1)
                            break
                        
                        eax_7 = edi_2[0x1378]
                    
                    i_24 = i_1
                    ebp = arg10
            else if (arg6 s> 0)
                int32_t var_30_2 = var_28
                int32_t ebx_3 = var_28
                int32_t esi_7 = 0
                
                do
                    (*(eax_1 + 0x50))(ebx_3)
                    ebx_3 += 0x80
                    esi_7 += 1
                while (esi_7 s< arg6)
                
                ebp = arg10
        else if (ebp == 8)
            eax_6.b = arg11
            
            if (eax_6.b == 0)
                if (arg6 s> 0)
                    int32_t var_30_4 = var_28
                    int32_t esi_12 = var_28
                    int32_t edi_9 = 0
                    
                    do
                        (*(eax_1 + 0x54))(esi_12)
                        esi_12 += 0x80
                        edi_9 += 1
                    while (edi_9 s< arg6)
                    
                    ebp = arg10
            else if (var_2c_1 s> 0)
                int32_t eax_15 = esi_1
                int32_t esi_8 = 0
                int32_t* edi_7 = arg1
                int32_t ebx_4 = 0
                int32_t i_2
                
                while (true)
                    int32_t i_26
                    
                    if (eax_15 == 0)
                        int32_t ebp_3 = arg3[0xd]
                        int32_t ecx_4 = esi_8 * 0x18
                        i_26 = *(ecx_4 + ebp_3 + 4) * *(ecx_4 + ebp_3 + 8)
                    else
                        int32_t ecx_3 = edi_7[0xdf3]
                        int32_t edx_8 = esi_8 << 4
                        i_26 = *(edx_8 + ecx_3 + 4) * *(edx_8 + ecx_3 + 8)
                    
                    i_2 = i_26
                    
                    if (i_26 == 1)
                        int32_t edx_24 = ebx_4
                        ebx_4 += 1
                        (*(eax_1 + 0x50))(var_28 + (edx_24 << 7))
                    else
                        i_2 = i_26 - 1
                        
                        if (i_26 != 0)
                            do
                                int32_t edx_11 = ebx_4
                                ebx_4 += 1
                                (*(eax_1 + 0x54))(var_28 + (edx_11 << 7))
                                i_2 -= 1
                            while (i_2 != 0xffffffff)
                            
                            edi_7 = arg1
                    
                    esi_8 += 1
                    
                    if (esi_8 s>= var_2c_1)
                        break
                    
                    eax_15 = edi_7[0x1378]
                
                i_24 = i_2
                ebp = arg10
    
    if (arg1[0x1377] != 0)
        int32_t edi_14 = arg1[0xdf0]
        
        if (edi_14 s> 0)
            int32_t eax_34 = arg1[0xdf3]
            int32_t ecx_8 = 0
            
            do
                int32_t ebp_9 = 0
                int32_t esi_21 = ecx_8 << 4
                int32_t ebx_8 = *(esi_21 + eax_34 + 8)
                
                if (ebx_8 s> 0)
                    int32_t edx_19 = *(esi_21 + eax_34 + 4)
                    
                    do
                        int32_t ecx_9 = 0
                        
                        if (edx_19 s> 0)
                            while (true)
                                int32_t ebp_14 = edx_19 * (ecx << 4)
                                    + *(arg1[0x1377] + ecx_8 * 4 + 4)
                                    + (ebx_8 * edx + ebp_9) * edx_19 * (arg8 << 7) + (ecx_9 << 4)
                                int32_t i_3 = 0
                                int32_t edi_16 = var_28
                                
                                do
                                    data_797c48(ebp_14, edi_16, 0x10)
                                    eax_34 = arg1[0xdf3]
                                    edx_19 = *(esi_21 + eax_34 + 4)
                                    ebp_14 += (arg8 << 4) * edx_19
                                    edi_16 += 0x10
                                    i_3 += 1
                                while (i_3 s< 8)
                                
                                var_28 = edi_16
                                ecx_9 += 1
                                
                                if (ecx_9 s>= edx_19)
                                    break
                                
                                ebx_8 = *(esi_21 + eax_34 + 8)
                            
                            ebx_8 = *(esi_21 + eax_34 + 8)
                        
                        ebp_9 += 1
                    while (ebp_9 s< ebx_8)
                    
                    edi_14 = arg1[0xdf0]
                
                ecx_8 += 1
            while (ecx_8 s< edi_14)
        
        return 0

int32_t* i_29

if (arg1[0x137a] == 1)
    int32_t edi_19 = arg1[0xdee]
    
    if (edi_19 == 2 && arg1[0xdef] == 1)
        int32_t temp0_2 = divs.dp.d(sx.q(arg1[1]), ebx_1 * 2)
        
        if (ecx != arg8)
            int16_t* var_48_5
            
            if (ecx != arg8 - 1)
                var_48_5 = arg1[0x120d]
            else
                int32_t eax_121 = arg1[0x13] & 0xf
                
                if (eax_121 == 0)
                    var_48_5 = arg1[0x120d]
                else
                    int32_t j_12 = divs.dp.d(sx.q(eax_121 + (ebp << 1) - 1), ebp * 2)
                    var_48_5 = arg1[0x120d]
                    
                    if (arg1[0x1d] != 0)
                        if (*(arg3[0xd] + 4) == 1)
                            int32_t i_4 = 0
                            int16_t* ebx_32 = var_48_5
                            
                            do
                                int32_t j = j_12
                                
                                if (j_12 s< 8)
                                    if (neg.d(j_12) + 8 s>= 6)
                                        do
                                            int16_t edx_44 = ebx_32[j - 1]
                                            ebx_32[j] = edx_44
                                            ebx_32[j + 1] = edx_44
                                            ebx_32[j + 2] = edx_44
                                            ebx_32[j + 3] = edx_44
                                            ebx_32[j + 4] = edx_44
                                            j += 5
                                        while (j s< 2)
                                    
                                    do
                                        ebx_32[j] = ebx_32[j - 1]
                                        j += 1
                                    while (j s< 8)
                                
                                ebx_32 = &ebx_32[8]
                                i_4 += 1
                            while (i_4 s< 8)
                            
                            ebp = arg10
                            var_48_5 = arg1[0x120d]
                    else
                        int32_t edi_67 = arg1[0x15]
                        
                        if (edi_67 s> 0)
                            int32_t ebp_30 = 0
                            int32_t var_34_6 = 0
                            int32_t edi_71 = arg1[0xdf3]
                            int32_t edx_43 = edi_67
                            int16_t* ecx_24 = var_48_5
                            int32_t ebx_27 = 0
                            
                            do
                                int32_t eax_144 = *(ebx_27 + edi_71 + 4)
                                
                                if (eax_144 == 1)
                                    int32_t i_5 = 0
                                    int16_t* eax_143 = ecx_24
                                    
                                    do
                                        int32_t j_1 = j_12
                                        
                                        if (j_12 s< 8)
                                            if (neg.d(j_12) + 8 s>= 6)
                                                do
                                                    int32_t esi_127 = sx.d(eax_143[j_1 - 1])
                                                    eax_143[j_1] = esi_127.w
                                                    eax_143[j_1 + 1] = esi_127.w
                                                    eax_143[j_1 + 2] = esi_127.w
                                                    eax_143[j_1 + 3] = esi_127.w
                                                    eax_143[j_1 + 4] = esi_127.w
                                                    j_1 += 5
                                                while (j_1 s< 2)
                                            
                                            do
                                                eax_143[j_1] = eax_143[j_1 - 1]
                                                j_1 += 1
                                            while (j_1 s< 8)
                                        
                                        eax_143 = &eax_143[8]
                                        i_5 += 1
                                    while (i_5 s< 8)
                                    
                                    edx_43 = arg1[0x15]
                                    edi_71 = arg1[0xdf3]
                                    eax_144 = *(ebx_27 + edi_71 + 4)
                                
                                ecx_24 = &ecx_24[eax_144 * 0x40]
                                ebx_27 += 0x10
                                ebp_30 += 1
                            while (ebp_30 s< edx_43)
                            
                            ebp = arg10
                            var_48_5 = arg1[0x120d]
            
            int16_t* eax_137 = ecx * 2 * i_24 + *(arg1[0x137b] + 4) + (i_24 << 1)
            
            if (i_24 != 0)
                int16_t* ebp_31 = var_48_5
                int32_t i_6 = i_24 - 1
                
                do
                    int16_t ebx_28 = *ebp_31
                    i_6 -= 1
                    ebp_31 = &ebp_31[1]
                    *eax_137 = ebx_28
                    eax_137 = &eax_137[1]
                while (i_6 != 0xffffffff)
                
                ebp = arg10
            
            if (ecx == 0)
                int16_t* esi_120 = *(arg1[0x137b] + 4) + (ebx_1 << 1) - 2
                int32_t i_7 = arg6 - 1
                
                if (arg6 != 0)
                    int16_t* ebx_29 = arg1[0x120d]
                    
                    do
                        for (int32_t j_2 = 7; j_2 != 0xffffffff; )
                            int16_t ecx_25 = *ebx_29
                            ebx_29 = &ebx_29[8]
                            j_2 -= 1
                            *esi_120 = ecx_25
                            esi_120 = &esi_120[8]
                        
                        i_7 -= 1
                    while (i_7 != 0xffffffff)
                    
                    ebp = arg10
        
        if (ecx s<= temp0_2)
            return 0
        
        int32_t i_8 = i_24 - 1
        
        if (i_24 != 0)
            int16_t* ebx_30 = ecx * 2 * i_24 + *(arg1[0x137b] + 4)
            int16_t* eax_142 = arg1[0x120d]
            
            do
                int16_t ebp_32 = *ebx_30
                i_8 -= 1
                ebx_30 = &ebx_30[1]
                *eax_142 = ebp_32
                eax_142 = &eax_142[1]
            while (i_8 != 0xffffffff)
            
            ebp = arg10
        
        ecx -= 1
        edi_19 = arg1[0xdee]
    
    if (edi_19 != 2 || arg1[0xdef] != 2)
        goto label_6f4ab3
    
    if (ebp == 1)
        int32_t eax_48 = arg1[1] s>> 4
        int32_t esi_29 = arg1[2] s>> 4
        int32_t* edi_21 = arg1[0x137b]
        
        if (edx != edi_21[4])
            int32_t eax_49 = *edi_21
            *edi_21 = edi_21[1]
            void* esi_31 = arg1[0x137b]
            *(esi_31 + 4) = *(esi_31 + 8)
            
            if (edx != arg9)
                *(arg1[0x137b] + 8) = eax_49
                edi_21 = arg1[0x137b]
            else
                void* edi_23 = arg1[0x137b]
                *(edi_23 + 8) = *(edi_23 + 0xc)
                *(arg1[0x137b] + 0xc) = eax_49
                edi_21 = arg1[0x137b]
        
        edi_21[4] = edx
        
        if (ecx != arg8 && edx != arg9)
            int16_t* var_50_2
            
            if (ecx != arg8 - 1)
                var_50_2 = arg1[0x120d]
            else
                int32_t eax_59 = arg1[0x13] & 0xf
                
                if (eax_59 == 0)
                    var_50_2 = arg1[0x120d]
                else
                    int32_t j_11 = divs.dp.d(sx.q(eax_59 + (ebp << 1) - 1), ebp * 2)
                    var_50_2 = arg1[0x120d]
                    
                    if (arg1[0x1d] != 0)
                        if (*(arg3[0xd] + 4) == 1)
                            int32_t i_9 = 0
                            int16_t* ecx_22 = var_50_2
                            
                            do
                                int32_t j_3 = j_11
                                
                                if (j_11 s< 8)
                                    if (neg.d(j_11) + 8 s>= 6)
                                        do
                                            int16_t ebp_28 = ecx_22[j_3 - 1]
                                            ecx_22[j_3] = ebp_28
                                            ecx_22[j_3 + 1] = ebp_28
                                            ecx_22[j_3 + 2] = ebp_28
                                            ecx_22[j_3 + 3] = ebp_28
                                            ecx_22[j_3 + 4] = ebp_28
                                            j_3 += 5
                                        while (j_3 s< 2)
                                    
                                    do
                                        ecx_22[j_3] = ecx_22[j_3 - 1]
                                        j_3 += 1
                                    while (j_3 s< 8)
                                
                                ecx_22 = &ecx_22[8]
                                i_9 += 1
                            while (i_9 s< 8)
                            
                            ebp = arg10
                            var_50_2 = arg1[0x120d]
                    else
                        int32_t edi_27 = arg1[0x15]
                        int32_t var_2c_2 = edi_27
                        
                        if (edi_27 s> 0)
                            void* esi_38 = arg1[0xdf3]
                            void* var_30_11 = esi_38
                            void* eax_66 = esi_38
                            int16_t* edx_33 = var_50_2
                            int32_t ecx_16 = 0
                            int32_t ebx_14 = 0
                            
                            do
                                void* esi_39 = eax_66 + ecx_16
                                int32_t edi_31 = *(esi_39 + 4)
                                
                                if (edi_31 == 1)
                                    int32_t i_10 = 0
                                    int16_t* eax_108 = edx_33
                                    
                                    do
                                        int32_t j_4 = j_11
                                        
                                        if (j_11 s< 8)
                                            if (neg.d(j_11) + 8 s>= 6)
                                                do
                                                    int16_t edx_38 = eax_108[j_4 - 1]
                                                    eax_108[j_4] = edx_38
                                                    eax_108[j_4 + 1] = edx_38
                                                    eax_108[j_4 + 2] = edx_38
                                                    eax_108[j_4 + 3] = edx_38
                                                    eax_108[j_4 + 4] = edx_38
                                                    j_4 += 5
                                                while (j_4 s< 2)
                                            
                                            do
                                                eax_108[j_4] = eax_108[j_4 - 1]
                                                j_4 += 1
                                            while (j_4 s< 8)
                                        
                                        eax_108 = &eax_108[8]
                                        i_10 += 1
                                    while (i_10 s< 8)
                                    
                                    var_2c_2 = arg1[0x15]
                                    eax_66 = arg1[0xdf3]
                                    esi_39 = eax_66 + ecx_16
                                    edi_31 = *(esi_39 + 4)
                                
                                ecx_16 += 0x10
                                ebx_14 += 1
                                edx_33 += (edi_31 << 7) * *(esi_39 + 8)
                            while (ebx_14 s< var_2c_2)
                            
                            ebp = arg10
                            var_50_2 = arg1[0x120d]
            
            if (edx == arg9 - 1)
                int32_t eax_74 = arg1[0x14] & 0xf
                
                if (eax_74 != 0)
                    int32_t edx_36 = arg1[0x15]
                    
                    if (edx_36 s> 0)
                        void* edi_35 = arg1[0xdf3]
                        void* var_30_12 = edi_35
                        int32_t j_10 = divs.dp.d(sx.q(eax_74 + (ebp << 1) - 1), ebp * 2) * 8
                        int32_t ebp_18 = edx_36
                        int32_t var_34_4 = 0
                        int16_t* eax_80 = var_50_2
                        int32_t edx_37 = 0
                        int32_t ecx_17 = 0
                        void* ebx_15 = edi_35
                        
                        do
                            void* edi_64 = ebx_15 + ecx_17
                            int32_t esi_51 = *(edi_64 + 8)
                            
                            if (esi_51 == 1)
                                int32_t i_11 = 0
                                int16_t* ebx_25 = eax_80
                                
                                do
                                    int32_t j_5 = j_10
                                    
                                    if (j_10 s< 0x40)
                                        if (neg.d(j_10) + 0x40 s>= 0x30)
                                            do
                                                int32_t esi_103 = sx.d(ebx_25[j_5 - 8])
                                                ebx_25[j_5] = esi_103.w
                                                ebx_25[j_5 + 8] = esi_103.w
                                                ebx_25[j_5 + 0x10] = esi_103.w
                                                ebx_25[j_5 + 0x18] = esi_103.w
                                                ebx_25[j_5 + 0x20] = esi_103.w
                                                j_5 += 0x28
                                            while (j_5 s< 0x10)
                                        
                                        do
                                            ebx_25[j_5] = ebx_25[j_5 - 8]
                                            j_5 += 8
                                        while (j_5 s< 0x40)
                                    
                                    ebx_25 = &ebx_25[1]
                                    i_11 += 1
                                while (i_11 s< 8)
                                
                                ebp_18 = arg1[0x15]
                                ebx_15 = arg1[0xdf3]
                                edi_64 = ebx_15 + ecx_17
                                esi_51 = *(edi_64 + 8)
                            
                            eax_80 += esi_51 * (*(edi_64 + 4) << 7)
                            ecx_17 += 0x10
                            edx_37 += 1
                        while (edx_37 s< ebp_18)
                        
                        ebp = arg10
                        var_50_2 = arg1[0x120d]
            
            int32_t eax_83 = i_24 * 2 * ecx
            int32_t edi_38 = i_24 * 2
            int32_t i_12 = i_24 - 1
            
            if (i_24 != 0)
                int16_t* ebp_19 = var_50_2
                int16_t* esi_60 = *(arg1[0x137b] + 8) + (i_24 << 1) + eax_83
                
                do
                    int16_t ebx_16 = *ebp_19
                    i_12 -= 1
                    ebp_19 = &ebp_19[1]
                    *esi_60 = ebx_16
                    esi_60 = &esi_60[1]
                while (i_12 != 0xffffffff)
                
                ebp = arg10
            
            if (ecx == 0)
                int16_t* esi_63 = *(arg1[0x137b] + 8) + 0xe
                int32_t i_13 = arg6 - 1
                
                if (arg6 != 0)
                    int16_t* ebx_17 = arg1[0x120d]
                    
                    do
                        for (int32_t j_6 = 7; j_6 != 0xffffffff; )
                            int16_t ebp_20 = *ebx_17
                            ebx_17 = &ebx_17[8]
                            j_6 -= 1
                            *esi_63 = ebp_20
                            esi_63 = &esi_63[8]
                        
                        i_13 -= 1
                    while (i_13 != 0xffffffff)
                    
                    ebp = arg10
            
            if (ecx == arg8 - 1)
                int16_t* esi_66 = arg1[0x120d] + 0xe
                int32_t i_14 = arg6 - 1
                
                if (arg6 != 0)
                    int16_t* ebx_18 = arg8 * 2 * i_24 + *(arg1[0x137b] + 8) + edi_38
                    
                    do
                        for (int32_t j_7 = 7; j_7 != 0xffffffff; )
                            int16_t ecx_18 = *esi_66
                            esi_66 = &esi_66[8]
                            j_7 -= 1
                            *ebx_18 = ecx_18
                            ebx_18 = &ebx_18[8]
                        
                        i_14 -= 1
                    while (i_14 != 0xffffffff)
                    
                    ebp = arg10
            
            if (edx == 0)
                int16_t* esi_70 = *(arg1[0x137b] + 4) + edi_38 + eax_83
                int32_t i_15 = arg6 - 1
                int32_t i_22 = i_15
                
                if (arg6 != 0)
                    int16_t* ecx_19 = arg1[0x120d]
                    
                    do
                        int32_t j_8 = 7
                        esi_70 = &esi_70[0x38]
                        
                        do
                            int16_t ebp_21 = *ecx_19
                            ecx_19 = &ecx_19[1]
                            j_8 -= 1
                            *esi_70 = ebp_21
                            esi_70 = &esi_70[1]
                        while (j_8 != 0xffffffff)
                        
                        ecx_19 = &ecx_19[0x38]
                        i_15 -= 1
                    while (i_15 != 0xffffffff)
                    
                    ebp = arg10
                
                if (ecx == 0)
                    int16_t* esi_74 = *(arg1[0x137b] + 4) + 0x7e
                    int32_t i_16 = i_22
                    
                    if (arg6 != 0)
                        int16_t* ebp_22 = arg1[0x120d]
                        
                        do
                            int16_t ebx_19 = *ebp_22
                            ebp_22 = &ebp_22[0x40]
                            i_16 -= 1
                            *esi_74 = ebx_19
                            esi_74 = &esi_74[0x40]
                        while (i_16 != 0xffffffff)
                        
                        ebp = arg10
                
                if (ecx == arg8 - 1)
                    int16_t* eax_93 = arg1[0x120d] + 0xe
                    
                    if (arg6 != 0)
                        int32_t i_17 = i_22
                        int16_t* esi_80 = arg8 * 2 * i_24 + *(arg1[0x137b] + 4) + edi_38 + 0x70
                        
                        do
                            int16_t ebp_23 = *eax_93
                            eax_93 = &eax_93[0x40]
                            i_17 -= 1
                            *esi_80 = ebp_23
                            esi_80 = &esi_80[0x40]
                        while (i_17 != 0xffffffff)
                        
                        ebp = arg10
            
            if (edx == arg9 - 1)
                void* esi_84 = *(arg1[0x137b] + 0xc) + edi_38 + eax_83
                int32_t i_18 = arg6 - 1
                int32_t i_23 = i_18
                
                if (arg6 != 0)
                    int16_t* ebx_20 = arg1[0x120d]
                    
                    do
                        ebx_20 = &ebx_20[0x38]
                        int32_t j_9 = 7
                        int16_t* esi_85 = esi_84
                        
                        do
                            int16_t ecx_20 = *ebx_20
                            ebx_20 = &ebx_20[1]
                            j_9 -= 1
                            *esi_85 = ecx_20
                            esi_85 = &esi_85[1]
                        while (j_9 != 0xffffffff)
                        
                        esi_84 = &esi_85[0x38]
                        i_18 -= 1
                    while (i_18 != 0xffffffff)
                    
                    ebp = arg10
                
                if (ecx == 0)
                    int16_t* eax_99 = *(arg1[0x137b] + 0xc) + 0xe
                    int16_t* edi_58 = arg1[0x120d] + 0x70
                    int16_t* var_2c_4 = edi_58
                    
                    if (arg6 != 0)
                        int16_t* ebp_24 = edi_58
                        int32_t i_19 = i_23
                        
                        do
                            int16_t ebx_21 = *ebp_24
                            ebp_24 = &ebp_24[0x40]
                            i_19 -= 1
                            *eax_99 = ebx_21
                            eax_99 = &eax_99[0x40]
                        while (i_19 != 0xffffffff)
                        
                        ebp = arg10
                
                if (ecx == arg8 - 1)
                    int16_t* eax_105 = arg8 * 2 * i_24 + *(arg1[0x137b] + 0xc) + edi_38
                    
                    if (arg6 != 0)
                        int32_t i_20 = i_23
                        int16_t* esi_93 = arg1[0x120d] + 0x7e
                        
                        do
                            int16_t ebp_25 = *esi_93
                            esi_93 = &esi_93[0x40]
                            i_20 -= 1
                            *eax_105 = ebp_25
                            eax_105 = &eax_105[0x40]
                        while (i_20 != 0xffffffff)
                        
                        ebp = arg10
        
        if (ecx s<= eax_48 || edx s<= esi_29)
            return 0
        
        i_29 = i_24
        void* i_28 = i_29 - 1
        
        if (i_29 != 0)
            int16_t* ebx_22 = i_29 * 2 * ecx + *(arg1[0x137b] + 4)
            i_29 = arg1[0x120d]
            void* i_21 = i_28
            
            do
                int16_t ebp_26 = *ebx_22
                i_21 -= 1
                ebx_22 = &ebx_22[1]
                *i_29 = ebp_26
                i_29 += 2
            while (i_21 != 0xffffffff)
            
            ebp = arg10
        
        ecx -= 1
        edx -= 1
        goto label_6f4ab3
else
label_6f4ab3:
    
    if (ebp == 1)
        (*(eax_1 + 0xa0))(arg1, ecx, edx)
        return 0

i_29.b = arg11
sub_6e3e40(arg1, arg2, arg3, ecx, edx, ebx_1, i_29.b)
return 0
