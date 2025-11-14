// 函数: sub_6de7b0
// 地址: 0x6de7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
void var_a80
void* result_1 = &var_a80
int32_t ebp = *(ebx + 0x3814)
int32_t ecx = *(ebx + 0x37b8)
int16_t* var_18 = *(ebx + 0x4834)
int32_t eax_2 = ecx * 8
int32_t var_20 = ecx
int32_t ecx_1 = *(ebx + 0x37bc)
int32_t ebp_1 = ecx_1 * 2
int32_t var_54 = eax_2
int32_t var_24 = eax_2
int32_t esi_1 = ebp_1 * 4

if (*(ebx + 0x78) - 1 != arg2)
    *(ebx + 0x3814) = *(ebx + 0x30) * var_54 + ebp
else
    int32_t temp1_1 = mods.dp.d(sx.q(*(ebx + 0x24)), var_54)
    
    if (temp1_1 != 0)
        var_24 = temp1_1
    
    *(ebx + 0x3814) = (arg3 * 8 * ecx_1 + (ebp_1 << 2)) * *(ebx + 0x3c) + *(ebx + 0x20)

if (arg3 == *(ebx + 0x7c) - 1)
    int32_t eax_7
    int32_t edx_13
    edx_13:eax_7 = sx.q(*(ebx + 0x28))
    int32_t temp1_2 = mods.dp.d(sx.q((eax_7 ^ edx_13) - edx_13), esi_1)
    
    if (temp1_2 != 0)
        esi_1 = temp1_2

void* result_4 = result_1
int32_t i = 0
int32_t var_2c

if (*(ebx + 0x54) s<= 0)
    var_2c = ecx_1 << 7
else
    int32_t edi_5 = esi_1 << 4
    int32_t esi_8
    
    do
        int32_t esi_4 = ebp + i
        int32_t edi_8 = 0
        
        if (edi_5 s> 0)
            int32_t eax_15 = 0
            int32_t ebx_1 = var_54
            int32_t ecx_3 = var_24
            int32_t ebp_6 = var_20
            
            do
                int32_t j = 0
                
                if (ecx_3 s> 0)
                    void* ebx_3
                    
                    if (ecx_3 s< 6)
                        ebx_3 = result_4 + eax_15
                    else
                        ebx_3 = result_4 + eax_15
                        int32_t ecx_4 = 2
                        int32_t var_3c_1 = 3
                        int32_t var_54_1 = 4
                        int32_t eax_16 = 1
                        
                        do
                            *(ebx_3 + (j << 1)) = zx.w(*(*(arg1 + 0x30) * j + esi_4))
                            uint16_t edi_14 = zx.w(*(*(arg1 + 0x30) * eax_16 + esi_4))
                            eax_16 += 5
                            *(ebx_3 + (j << 1) + 2) = edi_14
                            uint16_t edi_17 = zx.w(*(*(arg1 + 0x30) * ecx_4 + esi_4))
                            ecx_4 += 5
                            *(ebx_3 + (j << 1) + 4) = edi_17
                            *(ebx_3 + (j << 1) + 6) = zx.w(*(*(arg1 + 0x30) * var_3c_1 + esi_4))
                            *(ebx_3 + (j << 1) + 8) = zx.w(*(*(arg1 + 0x30) * var_54_1 + esi_4))
                            j += 5
                            var_3c_1 += 5
                            var_54_1 += 5
                        while (j s<= var_24 - 6)
                        
                        ecx_3 = var_24
                    
                    do
                        *(ebx_3 + (j << 1)) = zx.w(*(*(arg1 + 0x30) * j + esi_4))
                        j += 1
                    while (j s< ecx_3)
                    
                    ebp_6 = *(arg1 + 0x37b8)
                    ebx_1 = ebp_6 * 8
                
                int32_t edx_17 = ecx_3
                
                if (ecx_3 s< ebx_1)
                    do
                        *(result_4 + (edi_8 << 1) + (edx_17 << 1)) =
                            *(result_4 + var_24 * 2 + edi_8 * 2 - 2)
                        edx_17 += 1
                        ebp_6 = *(arg1 + 0x37b8)
                        ebx_1 = ebp_6 * 8
                    while (edx_17 s< ebx_1)
                    
                    ecx_3 = var_24
                
                eax_15 += 0x20
                edi_8 += 0x10
                esi_4 += *(arg1 + 0x3c)
            while (edi_8 s< edi_5)
            
            var_54 = ebx_1
            ebx = arg1
            var_20 = ebp_6
            ecx_1 = *(ebx + 0x37bc)
        
        int32_t eax_18 = edi_5
        esi_8 = ecx_1 << 7
        
        if (eax_18 s< esi_8)
            int32_t edi_31 = eax_18 * 2
            int32_t ebp_11 = var_54
            
            do
                int32_t edx_20 = 0
                
                if (ebp_11 s> 0)
                    int32_t esi_10
                    
                    do
                        *(result_4 + edi_31 + (edx_20 << 1)) =
                            *(result_4 + (esi_1 << 5) + (edx_20 << 1) - 0x20)
                        esi_10 = *(ebx + 0x37b8)
                        ebp_11 = esi_10 * 8
                        edx_20 += 1
                    while (edx_20 s< ebp_11)
                    
                    var_20 = esi_10
                    ecx_1 = *(ebx + 0x37bc)
                    esi_8 = ecx_1 << 7
                
                edi_31 += 0x20
                eax_18 += 0x10
            while (eax_18 s< esi_8)
            
            var_54 = ebp_11
        
        result_4 += 0x400
        i += 1
    while (i s< *(ebx + 0x54))
    
    var_2c = esi_8

int32_t ebp_15 = 0

if (var_2c s> 0)
    void* eax_20 = nullptr
    void* result_5 = result_1
    
    do
        int32_t ecx_8 = 0
        
        if (var_54 s> 0)
            void* i_5 = eax_20 + result_5
            int16_t* ebp_16 = var_18
            
            do
                void* i_1 = i_5
                
                do
                    for (int32_t j_1 = 0; j_1 s< 8; )
                        int32_t eax_26
                        int32_t ecx_12
                        int32_t edx_26
                        
                        if (*(arg1 + 0x34) == 1)
                            eax_26 = sx.d(*(i_1 + (j_1 << 1)))
                            edx_26 = sx.d(*(i_1 + (j_1 << 1) + 0x400))
                            ecx_12 = sx.d(*(i_1 + (j_1 << 1) + 0x800))
                        else
                            eax_26 = sx.d((neg.d(sx.d(*(i_1 + (j_1 << 1))))).w + 0xff)
                            edx_26 = sx.d((neg.d(sx.d(*(i_1 + (j_1 << 1) + 0x400)))).w + 0xff)
                            ecx_12 = sx.d((neg.d(sx.d(*(i_1 + (j_1 << 1) + 0x800)))).w + 0xff)
                        
                        *ebp_16 = ((eax_26 * 0x4d + edx_26 * 0x96 + ecx_12 * 0x1d - 0x7f80) s>> 8).w
                        j_1 += 1
                        ebp_16 = &ebp_16[1]
                    
                    i_1 += 0x20
                while (i_5 + 0x100 s> i_1)
                
                i_5 += 0x10
                ecx_8 += 8
            while (ecx_8 s< var_54)
            
            var_18 = ebp_16
            result_5 = result_1
        
        eax_20 += 0x100
        ebp_15 += 0x80
    while (ebp_15 s< var_2c)
    
    var_2c = var_2c
    var_54 = var_54
    ebx = arg1
    ecx_1 = *(ebx + 0x37bc)
    var_20 = *(ebx + 0x37b8)

void* esi_19 = *(ebx + 0x37cc)
int32_t temp0_3 = divs.dp.d(sx.q(var_20), *(esi_19 + 0x14))
int32_t temp0_4 = divs.dp.d(sx.q(ecx_1), *(esi_19 + 0x18))
int32_t edi_35 = temp0_4 * temp0_3
int32_t edi_36 = edi_35 s>> 1

if (var_2c s> 0)
    int32_t edx_34 = temp0_4 << 7
    int32_t ecx_19 = temp0_3 * 8
    int32_t eax_36 = temp0_4 << 4
    void* result_2 = result_1
    int32_t edi_37 = 0
    
    do
        int32_t ebx_11 = 0
        
        if (var_54 s> 0)
            int32_t edi_38 = temp0_3
            
            do
                int32_t eax_37 = 0
                
                if (edx_34 s> 0)
                    int32_t edi_39 = ecx_19
                    int32_t esi_15 = eax_36
                    
                    do
                        int32_t ebp_19 = 0
                        
                        if (edi_39 s> 0)
                            do
                                int32_t eax_38 = 0
                                int32_t var_40_4 = 0
                                int32_t ecx_22 = 0
                                int32_t var_44_3 = 0
                                
                                if (eax_36 s> 0)
                                    void* edx_36 = result_2 + (edi_37 << 1) + (ebx_11 << 1)
                                        + (eax_37 << 1) + (ebp_19 << 1)
                                    int32_t esi_16 = 0
                                    int32_t var_3c_4 = 0
                                    int32_t edi_40 = temp0_3
                                    int32_t ebp_20 = eax_36
                                    
                                    do
                                        if (edi_40 s> 0)
                                            void* i_2 = edx_36 + esi_16
                                            int32_t edx_37 = var_40_4
                                            int32_t ebp_21 = var_44_3
                                            int32_t ecx_23 = var_3c_4
                                            
                                            do
                                                ecx_23 += sx.d(*i_2)
                                                edx_37 += sx.d(*(i_2 + 0x400))
                                                ebp_21 += sx.d(*(i_2 + 0x800))
                                                i_2 += 2
                                            while (i_2 s< edx_36 + esi_16 + (edi_40 << 1))
                                            
                                            var_3c_4 = ecx_23
                                            edi_40 = temp0_3
                                            var_40_4 = edx_37
                                            var_44_3 = ebp_21
                                            ebp_20 = eax_36
                                        
                                        esi_16 += 0x20
                                        ecx_22 += 0x10
                                    while (ecx_22 s< ebp_20)
                                    
                                    eax_38 = var_3c_4
                                
                                int32_t ecx_24 = sx.d((divs.dp.d(sx.q(eax_38 + edi_36), edi_35)).w)
                                int32_t ebx_16 =
                                    sx.d((divs.dp.d(sx.q(var_40_4 + edi_36), edi_35)).w)
                                int32_t eax_50 =
                                    sx.d((divs.dp.d(sx.q(var_44_3 + edi_36), edi_35)).w)
                                
                                if (*(arg1 + 0x34) != 1)
                                    ecx_24 = sx.d((neg.d(ecx_24)).w + 0xff)
                                    ebx_16 = sx.d((neg.d(ebx_16)).w + 0xff)
                                    eax_50 = sx.d((neg.d(eax_50)).w + 0xff)
                                
                                *var_18 = ((ecx_24 * 0xffffffd5 + ebx_16 * 0xffffffab
                                    + (eax_50 << 7) + 0x80) s>> 8).w
                                ebp_19 += temp0_3
                                var_18 = &var_18[1]
                            while (ebp_19 s< ecx_19)
                            
                            esi_15 = eax_36
                            edi_39 = ecx_19
                        
                        eax_37 += esi_15
                    while (eax_37 s< edx_34)
                    
                    edi_38 = temp0_3
                
                ebx_11 += edi_38 << 3
            while (ebx_11 s< var_54)
            
            result_2 = result_1
        
        edi_37 += edx_34
    while (edi_37 s< var_2c)
    
    var_2c = var_2c
    ebx = arg1
    var_54 = var_54
    ecx_1 = *(ebx + 0x37bc)
    esi_19 = *(ebx + 0x37cc)
    var_20 = *(ebx + 0x37b8)

int32_t temp0_8 = divs.dp.d(sx.q(var_20), *(esi_19 + 0x24))
int32_t temp0_9 = divs.dp.d(sx.q(ecx_1), *(esi_19 + 0x28))
int32_t edi_47 = temp0_9 * temp0_8
int32_t esi_22 = edi_47 s>> 1
int32_t edx_47 = 0

if (var_2c s> 0)
    int32_t ecx_31 = temp0_9 << 7
    int32_t eax_63 = temp0_9 << 4
    int32_t ecx_34 = temp0_8 * 8
    int32_t eax_64 = ecx_31
    void* result_3 = result_1
    
    do
        int32_t ebx_20 = 0
        
        if (var_54 s> 0)
            int32_t edi_49 = temp0_8
            
            do
                int32_t edx_48 = 0
                
                if (eax_64 s> 0)
                    int32_t edi_50 = ecx_34
                    int32_t esi_24 = eax_63
                    
                    do
                        int32_t ebp_24 = 0
                        
                        if (edi_50 s> 0)
                            do
                                int32_t eax_65 = 0
                                int32_t var_38_4 = 0
                                int32_t ecx_36 = 0
                                int32_t var_3c_5 = 0
                                
                                if (eax_63 s> 0)
                                    void* edx_50 = result_3 + (edx_47 << 1) + (ebx_20 << 1)
                                        + (edx_48 << 1) + (ebp_24 << 1)
                                    int32_t esi_25 = 0
                                    int32_t var_34_4 = 0
                                    int32_t edi_51 = temp0_8
                                    int32_t ebp_25 = eax_63
                                    
                                    do
                                        if (edi_51 s> 0)
                                            void* i_3 = edx_50 + esi_25
                                            int32_t edx_51 = var_38_4
                                            int32_t ebp_26 = var_3c_5
                                            int32_t ecx_37 = var_34_4
                                            
                                            do
                                                ecx_37 += sx.d(*i_3)
                                                edx_51 += sx.d(*(i_3 + 0x400))
                                                ebp_26 += sx.d(*(i_3 + 0x800))
                                                i_3 += 2
                                            while (i_3 s< edx_50 + esi_25 + (edi_51 << 1))
                                            
                                            var_34_4 = ecx_37
                                            edi_51 = temp0_8
                                            var_38_4 = edx_51
                                            var_3c_5 = ebp_26
                                            ebp_25 = eax_63
                                        
                                        esi_25 += 0x20
                                        ecx_36 += 0x10
                                    while (ecx_36 s< ebp_25)
                                    
                                    eax_65 = var_34_4
                                
                                int32_t ebx_25 = sx.d((divs.dp.d(sx.q(eax_65 + esi_22), edi_47)).w)
                                int32_t ecx_38 =
                                    sx.d((divs.dp.d(sx.q(var_38_4 + esi_22), edi_47)).w)
                                int32_t eax_77 =
                                    sx.d((divs.dp.d(sx.q(var_3c_5 + esi_22), edi_47)).w)
                                
                                if (*(arg1 + 0x34) != 1)
                                    ebx_25 = sx.d((neg.d(ebx_25)).w + 0xff)
                                    ecx_38 = sx.d((neg.d(ecx_38)).w + 0xff)
                                    eax_77 = sx.d((neg.d(eax_77)).w + 0xff)
                                
                                *var_18 = (((ebx_25 << 7) + ecx_38 * 0xffffff95
                                    + eax_77 * 0xffffffeb + 0x80) s>> 8).w
                                ebp_24 += temp0_8
                                var_18 = &var_18[1]
                            while (ebp_24 s< ecx_34)
                            
                            esi_24 = eax_63
                            edi_50 = ecx_34
                            eax_64 = ecx_31
                        
                        edx_48 += esi_24
                    while (edx_48 s< eax_64)
                    
                    edi_49 = temp0_8
                
                ebx_20 += edi_49 << 3
            while (ebx_20 s< var_54)
            
            result_3 = result_1
        
        edx_47 += eax_64
    while (edx_47 s< var_2c)
    
    var_2c = var_2c
    ebx = arg1
    var_54 = var_54

int32_t result = *(ebx + 0x34)

if (result != 1)
    void* ebp_27 = *(ebx + 0x37cc)
    int32_t temp0_13 = divs.dp.d(sx.q(*(ebx + 0x37b8)), *(ebp_27 + 0x34))
    result = divs.dp.d(sx.q(*(ebx + 0x37bc)), *(ebp_27 + 0x38))
    int32_t esi_31 = result * temp0_13
    int32_t edx_60 = 0
    
    if (var_2c s> 0)
        int32_t edi_59 = result << 7
        int32_t eax_86 = result << 4
        int32_t edi_62 = temp0_13 * 8
        result = result_1
        int32_t ebp_30 = edi_59
        
        do
            int32_t ecx_44 = 0
            
            if (var_54 s> 0)
                int32_t edi_65 = temp0_13
                
                do
                    int32_t eax_87 = 0
                    
                    if (ebp_30 s> 0)
                        int32_t edi_66 = edi_62
                        int32_t ebx_33 = eax_86
                        
                        do
                            int32_t ecx_45 = 0
                            
                            if (edi_66 s> 0)
                                int32_t ebp_31 = temp0_13
                                
                                do
                                    int32_t eax_88 = 0
                                    int32_t edi_67 = 0
                                    
                                    if (ebx_33 s> 0)
                                        int32_t esi_34 = result + (edx_60 << 1) + (ecx_44 << 1)
                                            + (eax_87 << 1) + (ecx_45 << 1)
                                        int32_t edx_63 = 0
                                        int32_t var_4c_5 = 0
                                        
                                        do
                                            int32_t i_4 = 0
                                            
                                            if (ebp_31 s> 0)
                                                int32_t ecx_46
                                                
                                                if (ebp_31 s< 6)
                                                    ecx_46 = esi_34 + edx_63
                                                else
                                                    ecx_46 = esi_34 + edx_63
                                                    int32_t ebx_34 = var_4c_5
                                                    
                                                    do
                                                        int32_t ebx_38 = ebx_34
                                                            + sx.d(*(ecx_46 + (i_4 << 1) + 0xc00))
                                                            + sx.d(*(ecx_46 + (i_4 << 1) + 0xc02))
                                                            + sx.d(*(ecx_46 + (i_4 << 1) + 0xc04))
                                                            + sx.d(*(ecx_46 + (i_4 << 1) + 0xc06))
                                                        ebx_34 = ebx_38
                                                            + sx.d(*(ecx_46 + (i_4 << 1) + 0xc08))
                                                        i_4 += 5
                                                    while (i_4 s<= temp0_13 - 6)
                                                    
                                                    var_4c_5 = ebx_34
                                                    ebp_31 = temp0_13
                                                
                                                int32_t edi_74 = var_4c_5
                                                
                                                do
                                                    edi_74 += sx.d(*(ecx_46 + (i_4 << 1) + 0xc00))
                                                    i_4 += 1
                                                while (i_4 s< ebp_31)
                                                
                                                var_4c_5 = edi_74
                                                ebx_33 = eax_86
                                            
                                            edx_63 += 0x20
                                            edi_67 += 0x10
                                        while (edi_67 s< ebx_33)
                                        
                                        eax_88 = var_4c_5
                                    
                                    int32_t eax_89 = eax_88 + (esi_31 s>> 1)
                                    
                                    if (*(arg1 + 0x34) == 1)
                                        int16_t* edx_68 = var_18
                                        var_18 = &var_18[1]
                                        *edx_68 = (divs.dp.d(sx.q(eax_89), esi_31)).w
                                    else
                                        int16_t* edx_66 = var_18
                                        var_18 = &var_18[1]
                                        *edx_66 = (divs.dp.d(sx.q(eax_89), esi_31)).w - 0x80
                                    
                                    ecx_45 += ebp_31
                                while (ecx_45 s< edi_62)
                                
                                edi_66 = edi_62
                                ebp_30 = edi_59
                            
                            eax_87 += ebx_33
                        while (eax_87 s< ebp_30)
                        
                        edi_65 = temp0_13
                    
                    ecx_44 += edi_65 << 3
                while (ecx_44 s< var_54)
                
                result = result_1
            
            edx_60 += ebp_30
        while (edx_60 s< var_2c)

return result
