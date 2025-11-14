// 函数: sub_6dfe50
// 地址: 0x6dfe50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
int32_t ebp = *(ebx + 0x3814)
int32_t ecx = *(ebx + 0x37b8)
int16_t* var_54 = *(ebx + 0x4834)
int32_t esi_2 = ecx * 8
int32_t edi_1 = esi_2
int32_t var_58 = ecx
int32_t result = *(ebx + 0x37bc)
int32_t ebp_1 = result * 2
int32_t result_1 = result
int32_t ecx_2 = ebp_1 * 4

if (*(ebx + 0x78) - 1 != arg2)
    *(ebx + 0x3814) = *(ebx + 0x30) * esi_2 + ebp
else
    int32_t eax_1
    int32_t edx_2
    edx_2:eax_1 = sx.q(*(ebx + 0x24))
    int32_t temp1_1 = mods.dp.d(edx_2:eax_1, esi_2)
    result = divs.dp.d(edx_2:eax_1, esi_2)
    
    if (temp1_1 != 0)
        edi_1 = temp1_1
    
    *(ebx + 0x3814) = (arg3 * 8 * result_1 + (ebp_1 << 2)) * *(ebx + 0x3c) + *(ebx + 0x20)

if (arg3 == *(ebx + 0x7c) - 1)
    int32_t eax_3
    int32_t edx_14
    edx_14:eax_3 = sx.q(*(ebx + 0x28))
    int32_t eax_6
    int32_t edx_15
    edx_15:eax_6 = sx.q((eax_3 ^ edx_14) - edx_14)
    int32_t temp1_2 = mods.dp.d(edx_15:eax_6, ecx_2)
    result = divs.dp.d(edx_15:eax_6, ecx_2)
    
    if (temp1_2 != 0)
        ecx_2 = temp1_2

int32_t result_3 = 0
int32_t edx_17 = *(ebx + 0x54)

if (edx_17 s<= 0)
    return result

int32_t eax_11 = ecx_2 << 4
int32_t ecx_4 = result_1 << 7
int32_t var_40_1 = esi_2
int32_t var_3c_1 = edx_17
int32_t edx_18 = *(ebx + 0x34)

while (true)
    int32_t edx_20
    
    if (edx_18 == 2 && *(ebx + 0x58) == 1)
        edx_20 = ebp - result_3 + 2
    else
        edx_20 = ebp + result_3
    
    void var_564
    void var_563
    void var_562
    void var_561
    
    if (eax_11 s> 0)
        int32_t edi_2 = *(ebx + 0x3c)
        int32_t edi_3 = edi_1
        int32_t eax_12 = 0
        
        do
            int32_t i_3 = 0
            
            if (edi_3 s> 0)
                int32_t ebp_11
                
                if (edi_3 s< 6)
                    ebp_11 = *(arg1 + 0x30)
                else
                    int32_t ebp_7 = *(arg1 + 0x30)
                    char* ecx_6 = nullptr
                    int32_t var_28_1 = 1
                    int32_t var_2c_1 = 2
                    int32_t var_30_1 = 3
                    int32_t var_50_2 = 4
                    int32_t i_2 = 0
                    int32_t eax_13 = eax_12
                    int32_t i
                    
                    do
                        i.b = ecx_6[edx_20]
                        *(&var_564 + eax_13) = i.b
                        i.b = (ebp_7 * var_28_1)[edx_20]
                        *(&var_563 + eax_13) = i.b
                        i.b = (ebp_7 * var_2c_1)[edx_20]
                        *(&var_562 + eax_13) = i.b
                        i.b = (ebp_7 * var_30_1)[edx_20]
                        *(&var_561 + eax_13) = i.b
                        char* ebx_3
                        ebx_3.b = (ebp_7 * var_50_2)[edx_20]
                        char var_560[0x4fc]
                        var_560[eax_13] = ebx_3.b
                        eax_13 += 5
                        ecx_6 = &ecx_6[ebp_7 * 5]
                        i = i_2 + 5
                        var_28_1 += 5
                        var_2c_1 += 5
                        var_30_1 += 5
                        var_50_2 += 5
                        i_2 = i
                    while (i s<= edi_1 - 6)
                    
                    ebp_11 = ebp_7
                    i_3 = i
                    edi_3 = edi_1
                
                char* ebx_6 = ebp_11 * i_3
                int32_t ecx_7 = i_3 + eax_12
                int32_t var_34_2 = eax_12
                
                do
                    eax_12.b = ebx_6[edx_20]
                    ebx_6 = &ebx_6[ebp_11]
                    i_3 += 1
                    *(&var_564 + ecx_7) = eax_12.b
                    ecx_7 += 1
                while (i_3 s< edi_3)
                
                eax_12 = var_34_2
            
            if (edi_3 s< var_40_1)
                int32_t ebx_7 = edi_3 + eax_12
                int32_t esi_7 = edi_3
                
                do
                    void var_565
                    int32_t ecx_8
                    ecx_8.b = *(&var_565 + eax_12 + edi_3)
                    esi_7 += 1
                    *(&var_564 + ebx_7) = ecx_8.b
                    ebx_7 += 1
                while (esi_7 s< var_40_1)
                
                edi_3 = edi_1
            
            edx_20 += edi_2
            eax_12 += 0x10
        while (eax_12 s< eax_11)
    
    int32_t edx_21 = eax_11
    
    if (eax_11 s< ecx_4)
        do
            int32_t esi_8 = 0
            
            if (var_40_1 s> 0)
                int32_t ebp_13 = eax_11
                int32_t ebx_9 = edx_21
                int32_t var_20_2 = eax_11
                
                do
                    char var_574[0xf]
                    eax_11.b = var_574[ebp_13]
                    ebp_13 += 1
                    esi_8 += 1
                    *(&var_564 + ebx_9) = eax_11.b
                    ebx_9 += 1
                while (esi_8 s< var_40_1)
                
                eax_11 = var_20_2
            
            edx_21 += 0x10
        while (edx_21 s< ecx_4)
    
    int32_t result_2 = result_3
    int32_t result_4 = result_1
    
    while (true)
        int32_t esi_10 = result_2 << 4
        int32_t edi_9 = *(arg1 + 0x37cc)
        int32_t temp0_3 = divs.dp.d(sx.q(var_58), *(edi_9 + esi_10 + 4))
        int32_t temp0_4 = divs.dp.d(sx.q(result_4), *(edi_9 + esi_10 + 8))
        int32_t edx_25 = temp0_4 * temp0_3
        
        if (ecx_4 s> 0)
            int32_t edx_28 = temp0_4 << 7
            int32_t esi_14 = temp0_3 * 8
            int32_t var_50_3 = temp0_4 << 4
            int32_t edi_11 = var_40_1
            int32_t esi_15 = 0
            void* ebp_16 = arg1
            
            do
                int32_t eax_22 = 0
                
                if (edi_11 s> 0)
                    int32_t ecx_10 = temp0_3
                    int32_t ebx_11 = var_58
                    
                    do
                        int32_t esi_16 = 0
                        
                        if (edx_28 s> 0)
                            int32_t ebx_13 = var_50_3
                            int32_t eax_23 = esi_14
                            
                            do
                                int32_t ecx_11 = 0
                                
                                if (eax_23 s> 0)
                                    int32_t ebp_18 = temp0_3
                                    int16_t* esi_17 = var_54
                                    
                                    do
                                        int32_t eax_31 = 0
                                        
                                        if (result_2 == 0)
                                        label_6e0334:
                                            int32_t edx_31 = 0
                                            
                                            if (ebx_13 s> 0)
                                                int32_t var_58_1 = 0
                                                int32_t ebx_14 = ecx_11 + esi_16 + esi_15 + eax_22
                                                
                                                do
                                                    int32_t i_1 = 0
                                                    
                                                    if (ebp_18 s> 0)
                                                        int32_t esi_19
                                                        
                                                        if (ebp_18 s< 5)
                                                            esi_19 = edx_31 + ebx_14
                                                        else
                                                            int32_t esi_18 = edx_31 + ebx_14
                                                            int32_t ecx_12 = esi_18
                                                            int32_t eax_25 = var_58_1
                                                            esi_19 = esi_18
                                                            i_1 = 0
                                                            
                                                            do
                                                                eax_25 = sx.d(zx.w(*(&var_561 + ecx_12))
                                                                    + zx.w(*(&var_562 + ecx_12))
                                                                    + zx.w(*(&var_563 + ecx_12))
                                                                    + zx.w(*(&var_564 + ecx_12))
                                                                    + eax_25.w)
                                                                ecx_12 += 4
                                                                i_1 += 4
                                                            while (i_1 s<= temp0_3 - 5)
                                                            
                                                            var_58_1 = eax_25
                                                            ebp_18 = temp0_3
                                                        
                                                        int32_t eax_30 = var_58_1
                                                        int32_t esi_21 = esi_19 + i_1
                                                        int32_t i_4 = i_1
                                                        
                                                        do
                                                            eax_30 = sx.d(zx.w(*(&var_564 + esi_21))
                                                                + eax_30.w)
                                                            esi_21 += 1
                                                            i_4 += 1
                                                        while (i_4 s< ebp_18)
                                                        
                                                        var_58_1 = eax_30
                                                    
                                                    edx_31 += 0x10
                                                while (edx_31 s< ebx_13)
                                                
                                                ebx_13 = ebx_13
                                                eax_31 = var_58_1
                                            
                                            *esi_17 =
                                                (divs.dp.d(sx.q(eax_31 + (edx_25 s>> 1)), edx_25)).w
                                                - 0x80
                                        else
                                            *esi_17 = 0
                                            
                                            if (*(arg1 + 0x34) != 4 || *(arg1 + 0x58) != 3)
                                                goto label_6e0334
                                        
                                        esi_17 = &esi_17[1]
                                        ecx_11 += ebp_18
                                        eax_23 = esi_14
                                    while (ecx_11 s< eax_23)
                                    
                                    var_54 = esi_17
                                
                                esi_16 += ebx_13
                            while (esi_16 s< edx_28)
                            
                            var_50_3 = ebx_13
                            ecx_10 = temp0_3
                            ebp_16 = arg1
                            ebx_11 = *(ebp_16 + 0x37b8)
                            edi_11 = ebx_11 * 8
                        
                        eax_22 += ecx_10 << 3
                    while (eax_22 s< edi_11)
                    
                    var_58 = ebx_11
                    result_4 = *(ebp_16 + 0x37bc)
                    ecx_4 = result_4 << 7
                
                esi_15 += edx_28
            while (esi_15 s< ecx_4)
            
            var_40_1 = edi_11
            var_3c_1 = *(arg1 + 0x54)
        
        result = result_2 + 1
        result_2 = result
        
        if (result s>= var_3c_1)
            return result
        
        if (result == 0)
            result_1 = result_4
            result_3 = result
            ebx = arg1
            edx_18 = *(ebx + 0x34)
            break
        
        edx_18 = *(arg1 + 0x34)
        
        if (edx_18 != 4)
            result_1 = result_4
            result_3 = result_2
            ebx = arg1
            break
        
        if (*(arg1 + 0x58) != 3)
            result_1 = result_4
            result_3 = result_2
            ebx = arg1
            break
