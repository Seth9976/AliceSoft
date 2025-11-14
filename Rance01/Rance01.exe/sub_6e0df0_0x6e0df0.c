// 函数: sub_6e0df0
// 地址: 0x6e0df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
void* var_34 = nullptr
void* result
int32_t var_18_1
int32_t eax_1
int32_t ecx_2
int32_t esi_1

if (*arg3 == 1)
    int32_t edx_94
    
    if (*(ebp + 0x34) == 3)
        edx_94 = 3
    else
        edx_94 = *(ebp + 0x30)
    
    result = arg2
    
    if (edx_94 s> *(result + 0x38))
        esi_1 = *(ebp + 0x37b8)
        void* ebx_53 = arg3[0xd]
        int32_t eax_115 = *(ebp + 0x37bc)
        var_18_1 = eax_115
        ecx_2 = divs.dp.d(sx.q(esi_1), *(ebx_53 + 4)) * arg6
        eax_1 = divs.dp.d(sx.q(eax_115), *(ebx_53 + 8)) * arg6
        goto label_6e27b8
else
    esi_1 = *(ebp + 0x37b8)
    ecx_2 = esi_1 * arg6
    int32_t eax = *(ebp + 0x37bc)
    var_18_1 = eax
    eax_1 = eax * arg6
label_6e27b8:
    void* var_48_1
    int32_t var_44_1
    
    if (*(ebp + 0x4de8) == 1 && esi_1 == 2 && var_18_1 == 1)
        int32_t var_48_4
        
        if (*(ebp + 0x74) == 0)
            int32_t edx_89 = *(ebp + 0x37c0)
            var_48_4 = 0
            int32_t i = edx_89 - 1
            
            if (edx_89 != 0)
                int32_t ebx_50 = *(ebp + 0x37cc)
                int32_t edx_91 = i << 4
                int32_t ecx_63 = 0
                
                do
                    i -= 1
                    ecx_63 += *(edx_91 + ebx_50 + 4) * *(edx_91 + ebx_50 + 8)
                    edx_91 -= 0x10
                while (i != 0xffffffff)
                
                var_48_4 = ecx_63
                ebp = arg1
        else
            var_48_4 = 1
        
        int32_t edi_69 = arg4 * 2 * (var_48_4 << 6) + *(*(ebp + 0x4dec) + 4)
        var_44_1 = edi_69
        var_48_1 = (var_48_4 << 8) + edi_69
    else
        var_44_1 = 0
        var_48_1 = nullptr
    
    int32_t var_4c_1 = *(ebp + 0x4834)
    int32_t var_94
    result = sub_6e0940(ebp + 4, ecx_2, eax_1, arg4, arg5, *(ebp + 0x30), *(ebp + 0x3c), 
        *(ebp + 0x20), *(ebp + 0x24), *(ebp + 0x28), arg2 + 0x2c, &var_94)
    
    if (result == 0)
        void var_594
        int32_t var_90
        int32_t var_8c
        int32_t var_88
        
        if (arg7 == 0)
            int32_t ebx_17 = *(ebp + 0x34)
            int32_t var_50_3
            
            if (ebx_17 == 2 && *(ebp + 0x58) == 1)
                var_50_3 = *(arg2 + 0x2c)
                int32_t eax_110 = *(arg2 + 0x38)
                
                if (eax_110 == 0)
                    var_50_3 += 2
                else if (eax_110 == 1)
                    var_50_3 += 1
            else
                var_50_3 = *(arg2 + 0x2c) + *(arg2 + 0x38)
            
            void* i_21 = *arg3
            void* i_19 = *(ebp + 0x30)
            int32_t ecx_16 = arg6 << 5
            void* ebp_9 = var_34
            void* i_18 = nullptr
            int32_t var_58_3 = 0
            
            while (true)
                void* i_20
                
                i_20 = i_21 s>= i_19 ? i_19 : i_21
                
                if (i_18 s>= i_20)
                    break
                
                if (*(arg1 + 0x58) != 4 || i_18 s<= 0)
                    void* edx_27 = arg3[0xd]
                    int32_t ebp_10
                    int32_t esi_18
                    
                    if (i_21 == 1)
                        ebp_10 = *(edx_27 + 8)
                        esi_18 = *(edx_27 + 4)
                    else
                        ebp_10 = *(var_58_3 + edx_27 + 8)
                        esi_18 = *(var_58_3 + edx_27 + 4)
                    
                    int32_t eax_37 = *(arg1 + 0x37b8)
                    int32_t temp0_3 = divs.dp.d(sx.q(eax_37), esi_18)
                    int32_t eax_40 = *(arg1 + 0x37bc)
                    void* ecx_19
                    ecx_19.b = arg8
                    int32_t temp0_4 = divs.dp.d(sx.q(eax_40), ebp_10)
                    
                    if (ecx_19.b != 0)
                        int32_t edx_37 = 0
                        
                        if (ebp_10 s> 0)
                            int32_t eax_50 = temp0_4 * arg6
                            int32_t edi_23 = temp0_3 * arg6
                            int32_t ecx_31 = 0
                            
                            do
                                void* edi_24 = &var_594 + ecx_31
                                int32_t eax_51 = 0
                                
                                if (esi_18 s> 0)
                                    int32_t ecx_32 = eax_50
                                    int32_t ebp_15 = edi_23
                                    int32_t esi_28 = var_4c_1
                                    
                                    do
                                        int32_t edx_38 = 0
                                        
                                        if (ecx_32 s> 0)
                                            int32_t ebx_23 = 0
                                            int32_t eax_52 = 0
                                            
                                            do
                                                int32_t i_1 = 0
                                                
                                                if (ebp_15 s> 0)
                                                    void* var_30_5
                                                    int32_t edi_28
                                                    
                                                    if (ebp_15 s< 6)
                                                        var_30_5 = edi_24 + eax_52
                                                        edi_28 = esi_28 + ebx_23
                                                    else
                                                        var_30_5 = edi_24 + eax_52
                                                        edi_28 = esi_28 + ebx_23
                                                        int32_t var_34_5 = ebx_23
                                                        int32_t var_38_4 = eax_52
                                                        int32_t var_3c_3 = edx_38
                                                        
                                                        do
                                                            eax_52.b = *(edi_28 + (i_1 << 1))
                                                            *(var_30_5 + i_1) = eax_52.b
                                                            eax_52.b = *(edi_28 + (i_1 << 1) + 2)
                                                            *(var_30_5 + i_1 + 1) = eax_52.b
                                                            ebx_23.b = *(edi_28 + (i_1 << 1) + 4)
                                                            *(var_30_5 + i_1 + 2) = ebx_23.b
                                                            ecx_32.b = *(edi_28 + (i_1 << 1) + 6)
                                                            *(var_30_5 + i_1 + 3) = ecx_32.b
                                                            edx_38.b = *(edi_28 + (i_1 << 1) + 8)
                                                            *(var_30_5 + i_1 + 4) = edx_38.b
                                                            i_1 += 5
                                                        while (i_1 s<= edi_23 - 6)
                                                        
                                                        ebx_23 = var_34_5
                                                        eax_52 = var_38_4
                                                        edx_38 = var_3c_3
                                                        ebp_15 = edi_23
                                                    
                                                    int32_t var_38_5 = eax_52
                                                    int32_t i_16 = i_1
                                                    
                                                    do
                                                        eax_52.b = *(edi_28 + (i_16 << 1))
                                                        *(var_30_5 + i_16) = eax_52.b
                                                        i_16 += 1
                                                    while (i_16 s< ebp_15)
                                                    
                                                    eax_52 = var_38_5
                                                    ecx_32 = eax_50
                                                
                                                eax_52 += 0x20
                                                ebx_23 += 0x10
                                                edx_38 += 1
                                            while (edx_38 s< ecx_32)
                                        
                                        edi_24 += ebp_15
                                        esi_28 += 0x80
                                        eax_51 += 1
                                    while (eax_51 s< esi_18)
                                    
                                    var_4c_1 = esi_28
                                
                                ecx_31 += ecx_16 * temp0_4
                                edx_37 += 1
                            while (edx_37 s< ebp_10)
                            
                            ebx_17 = *(arg1 + 0x34)
                    else if (*(arg1 + 0x4de8) == 1 && eax_37 == 2 && eax_40 == 1 && arg6 != 1)
                        int32_t edx_72 = arg6 * 8
                        
                        if (esi_18 s> 0)
                            int32_t eax_81 = 0
                            int32_t ebp_26 = var_4c_1
                            void* edx_73 = &var_594
                            int32_t edi_50 = var_44_1
                            void* esi_44 = var_48_1
                            
                            do
                                int32_t ebx_44 = 0
                                
                                if (edx_72 s> 0)
                                    int32_t ecx_53 = ebp_26 + (arg6 << 1)
                                    int32_t ecx_54 = 0
                                    int32_t ebp_27 = arg6
                                    
                                    do
                                        int32_t esi_45 = ebx_44 * 2
                                        
                                        if (temp0_3 == 2)
                                            int32_t eax_85 = ebx_44 * 2
                                            int16_t* edi_54 = ebp_26 + (ebx_44 << 1)
                                            int16_t* var_40_7 = edi_54
                                            int32_t edx_76 = sx.d(*edi_54) * 3
                                            void* esi_48 = edx_73 + (esi_45 << 1)
                                            void* var_3c_6 = esi_48
                                            *esi_48 = ((
                                                sx.d(*(edi_50 + (arg6 << 1) + (ebx_44 << 1) - 2))
                                                + edx_76 + 1) s>> 2).b
                                            *(esi_48 + 1) = ((sx.d(edi_54[1]) + edx_76 + 2) s>> 2).b
                                            int32_t eax_95 = esi_45 * 2
                                            
                                            if (arg6 - 1 s> 1)
                                                void* i_2 = &edi_54[1]
                                                void* edi_56
                                                
                                                do
                                                    eax_95 += 2
                                                    int32_t ebx_45 = sx.d(*i_2) * 3
                                                    edi_56 = edx_73 + eax_95
                                                    *edi_56 =
                                                        ((sx.d(*(i_2 - 2)) + ebx_45 + 1) s>> 2).b
                                                    *(edi_56 + 1) =
                                                        ((sx.d(*(i_2 + 2)) + ebx_45 + 2) s>> 2).b
                                                    i_2 += 2
                                                while (i_2 s< &edi_54[ebp_27 - 1])
                                                
                                                var_3c_6 = edi_56
                                                ebp_27 = arg6
                                            
                                            int32_t edi_57 = sx.d(*(ecx_53 + eax_85 - 2)) * 3
                                            *(var_3c_6 + 2) = ((sx.d(*(ecx_53 + eax_85 - 4))
                                                + edi_57 + 1) s>> 2).b
                                            *(var_3c_6 + 3) =
                                                ((sx.d(*(esi_44 + eax_85)) + edi_57 + 2) s>> 2).b
                                        else
                                            int32_t i_3 = 0
                                            
                                            if (ebp_27 s> 0)
                                                int32_t edx_75
                                                int32_t esi_47
                                                void* edi_53
                                                
                                                if (ebp_27 s< 6)
                                                    edi_53 = edx_73 + (esi_45 << 1)
                                                    esi_47 = ebp_26 + ecx_54
                                                else
                                                    int32_t var_7c_2 = ecx_54
                                                    int32_t var_78_4 = ebx_44
                                                    esi_47 = ebp_26 + ecx_54
                                                    edi_53 = edx_73 + (esi_45 << 1)
                                                    
                                                    do
                                                        edx_75.b = *(esi_47 + (i_3 << 1))
                                                        *(edi_53 + i_3) = edx_75.b
                                                        edx_75.b = *(esi_47 + (i_3 << 1) + 2)
                                                        *(edi_53 + i_3 + 1) = edx_75.b
                                                        ebx_44.b = *(esi_47 + (i_3 << 1) + 4)
                                                        *(edi_53 + i_3 + 2) = ebx_44.b
                                                        ecx_54.b = *(esi_47 + (i_3 << 1) + 6)
                                                        *(edi_53 + i_3 + 3) = ecx_54.b
                                                        edx_75.b = *(esi_47 + (i_3 << 1) + 8)
                                                        *(edi_53 + i_3 + 4) = edx_75.b
                                                        i_3 += 5
                                                    while (i_3 s<= arg6 - 6)
                                                    
                                                    ecx_54 = var_7c_2
                                                    ebx_44 = var_78_4
                                                    ebp_27 = arg6
                                                
                                                do
                                                    edx_75.b = *(esi_47 + (i_3 << 1))
                                                    *(edi_53 + i_3) = edx_75.b
                                                    i_3 += 1
                                                while (i_3 s< ebp_27)
                                        
                                        ecx_54 += 0x10
                                        ebx_44 += 8
                                    while (ebx_44 s< edx_72)
                                
                                edx_73 += temp0_3 * arg6
                                ebp_26 += 0x80
                                esi_44 += 0x80
                                edi_50 += 0x80
                                eax_81 += 1
                            while (eax_81 s< esi_18)
                            
                            var_4c_1 = ebp_26
                            ebx_17 = *(arg1 + 0x34)
                            var_48_1 = esi_44
                            var_44_1 = edi_50
                    else
                        int32_t edx_33 = 0
                        
                        if (ebp_10 s> 0)
                            int32_t eax_43 = temp0_4 << 5
                            int32_t ecx_24 = 0
                            
                            do
                                void* edi_18 = &var_594 + ecx_24
                                int32_t eax_44 = 0
                                
                                if (esi_18 s> 0)
                                    int32_t ebx_20 = eax_43
                                    int32_t ebp_11 = arg6
                                    int32_t esi_19 = var_4c_1
                                    
                                    do
                                        int32_t ecx_25 = 0
                                        
                                        if (ebp_11 s> 0)
                                            int32_t edx_34 = 0
                                            int32_t eax_45 = temp0_3
                                            
                                            do
                                                int32_t edi_19 = 0
                                                
                                                if (ebp_11 s> 0)
                                                    int32_t esi_22 = 0
                                                    
                                                    do
                                                        void* edx_35 = nullptr
                                                        
                                                        if (ebx_20 s> 0)
                                                            void* ecx_27 = edi_18 + edx_34 + esi_22
                                                            
                                                            do
                                                                int32_t i_15 = 0
                                                                
                                                                if (eax_45 s> 0)
                                                                    char* ebp_14
                                                                    char* esi_27
                                                                    
                                                                    if (eax_45 s< 5)
                                                                        esi_27 =
                                                                            (ecx_25 << 4) + esi_19 + (edi_19 << 1)
                                                                        ebp_14 = edx_35 + ecx_27
                                                                    else
                                                                        int32_t edi_22 = (ecx_25 << 4) + esi_19
                                                                        int32_t i_12 = 0
                                                                        char* var_74_2 = edx_35 + ecx_27
                                                                        void* var_40_3 = edx_35
                                                                        int32_t i_4
                                                                        
                                                                        do
                                                                            edx_35.b = *(edi_22 + (edi_19 << 1))
                                                                            ebp_14 = var_74_2
                                                                            ebp_14[i_12] = edx_35.b
                                                                            ebx_20.b = *(edi_22 + (edi_19 << 1))
                                                                            ebp_14[i_12 + 1] = ebx_20.b
                                                                            int32_t eax_46
                                                                            eax_46.b = *(edi_22 + (edi_19 << 1))
                                                                            ebp_14[i_12 + 2] = eax_46.b
                                                                            int32_t eax_47
                                                                            eax_47.b = *(edi_22 + (edi_19 << 1))
                                                                            ebp_14[i_12 + 3] = eax_47.b
                                                                            i_4 = i_12 + 4
                                                                            i_12 = i_4
                                                                        while (i_4 s<= temp0_3 - 5)
                                                                        
                                                                        eax_45 = temp0_3
                                                                        ebx_20 = eax_43
                                                                        i_15 = i_4
                                                                        esi_27 = edi_22 + (edi_19 << 1)
                                                                        edx_35 = var_40_3
                                                                    
                                                                    void* var_40_4 = edx_35
                                                                    
                                                                    do
                                                                        edx_35.b = *esi_27
                                                                        ebp_14[i_15] = edx_35.b
                                                                        i_15 += 1
                                                                    while (i_15 s< eax_45)
                                                                    
                                                                    edx_35 = var_40_4
                                                                
                                                                edx_35 += 0x20
                                                            while (edx_35 s< ebx_20)
                                                            
                                                            ebp_11 = arg6
                                                        
                                                        esi_22 += eax_45
                                                        edi_19 += 1
                                                    while (edi_19 s< ebp_11)
                                                
                                                edx_34 += ebx_20
                                                ecx_25 += 1
                                            while (ecx_25 s< ebp_11)
                                        
                                        edi_18 += temp0_3 * arg6
                                        esi_19 += 0x80
                                        eax_44 += 1
                                    while (eax_44 s< esi_18)
                                    
                                    var_4c_1 = esi_19
                                
                                ecx_24 += ecx_16 * temp0_4
                                edx_33 += 1
                            while (edx_33 s< ebp_10)
                            
                            ebx_17 = *(arg1 + 0x34)
                    
                    ebp_9 = &var_594
                    int32_t eax_105
                    
                    if (ebx_17 == 3)
                        eax_105 = *(arg2 + 0x38)
                    
                    if (ebx_17 != 3 || eax_105 == 0)
                        sub_6e43e0(arg1, &var_94, i_18, var_50_3, &var_594)
                        ebx_17 = *(arg1 + 0x34)
                    else
                        if (eax_105 == 2)
                            var_50_3 += 1
                        
                        int32_t ecx_60 = var_90
                        int32_t edx_84 = var_88
                        
                        if (ecx_60 s< edx_84)
                            int32_t ebx_48 = var_8c
                            int32_t esi_55 = ecx_60 << 5
                            
                            do
                                int32_t eax_106 = var_94
                                
                                if (eax_106 s< ebx_48)
                                    do
                                        ebx_48.b = *(ebp_9 + esi_55 + eax_106)
                                        *(ecx_60 * *(arg1 + 0x3c) + var_50_3 + (eax_106 << 1)) =
                                            ebx_48.b
                                        eax_106 += 2
                                        ebx_48 = var_8c
                                    while (eax_106 s< ebx_48)
                                    
                                    edx_84 = var_88
                                
                                esi_55 += 0x20
                                ecx_60 += 1
                            while (ecx_60 s< edx_84)
                            
                            ebx_17 = *(arg1 + 0x34)
                    
                    if (ebx_17 == 2 && *(arg1 + 0x58) == 1)
                        var_50_3 -= 1
                        i_21 = *arg3
                        i_19 = *(arg1 + 0x30)
                    else
                        var_50_3 += 1
                        i_21 = *arg3
                        i_19 = *(arg1 + 0x30)
                
                var_58_3 += 0x18
                i_18 += 1
            
            void* i_17 = i_18
            result = *(arg1 + 0x74)
            
            if (result != 0)
                i_17 = *(arg1 + 0x54)
                result = i_17 - 1
                
                if (result != *(arg2 + 0x38))
                    i_17 = i_19
            
            if (ebx_17 == 0xff)
                result = *(arg1 + 0x58)
            
            if ((ebx_17 != 0xff || result != 0xff) && i_17 s< i_19)
                int32_t ebx_49 = var_50_3
                void* i_5 = i_17
                
                do
                    sub_6e43e0(arg1, &var_94, i_5, ebx_49, ebp_9)
                    result = *(arg1 + 0x34)
                    
                    if (result == 2)
                        result = *(arg1 + 0x58)
                        
                        if (result != 1)
                            ebx_49 += 1
                        else
                            ebx_49 -= 1
                    else
                        ebx_49 += 1
                    
                    i_5 += 1
                while (i_5 s< *(arg1 + 0x30))
        else
            int32_t edi_2 = *(arg2 + 0x2c)
            int32_t ebx_2 = *(ebp + 0x34)
            
            if (ebx_2 == 2 && *(ebp + 0x58) == 1)
                int32_t eax_80 = *(arg2 + 0x38)
                
                if (eax_80 == 0)
                    edi_2 += 2
                else if (eax_80 == 1)
                    edi_2 += 1
            
            int32_t eax_11 = arg6 << 5
            void* ebp_1 = var_34
            int32_t var_84_1 = 0
            int32_t i_11 = 0
            int32_t var_78_1 = edi_2
            
            while (true)
                if (ebx_2 == 3)
                    result = 3
                else
                    result = *arg3
                    void* result_1 = *(arg1 + 0x30)
                    
                    if (result s>= result_1)
                        result = result_1
                
                if (i_11 s>= result)
                    break
                
                if (*(arg1 + 0x58) != 4 || i_11 s<= 0)
                    void* eax_14 = arg3[0xd]
                    int32_t ebp_2
                    int32_t esi_3
                    
                    if (*arg3 == 1)
                        ebp_2 = *(eax_14 + 8)
                        esi_3 = *(eax_14 + 4)
                    else
                        ebp_2 = *(var_84_1 + eax_14 + 8)
                        esi_3 = *(var_84_1 + eax_14 + 4)
                    
                    int32_t eax_15 = *(arg1 + 0x37b8)
                    int32_t temp0_1 = divs.dp.d(sx.q(eax_15), esi_3)
                    int32_t eax_18 = *(arg1 + 0x37bc)
                    void* ecx_4
                    ecx_4.b = arg8
                    int32_t temp0_2 = divs.dp.d(sx.q(eax_18), ebp_2)
                    
                    if (ecx_4.b != 0)
                        int32_t edx_19 = 0
                        
                        if (ebp_2 s> 0)
                            int32_t eax_29 = temp0_2 * arg6
                            int32_t edi_11 = temp0_1 * arg6
                            int32_t ecx_13 = 0
                            
                            do
                                void* edi_12 = &var_594 + ecx_13
                                int32_t eax_30 = 0
                                
                                if (esi_3 s> 0)
                                    int32_t ebx_15 = edi_11
                                    int32_t ebp_5 = eax_29
                                    int32_t esi_11 = var_4c_1
                                    
                                    do
                                        int32_t ecx_14 = 0
                                        
                                        if (ebp_5 s> 0)
                                            int32_t edx_20 = 0
                                            int32_t esi_12 = 0
                                            
                                            do
                                                int32_t i_6 = 0
                                                
                                                if (ebx_15 s> 0)
                                                    void* var_5c_3
                                                    int32_t var_20_2
                                                    
                                                    if (ebx_15 s< 6)
                                                        var_5c_3 = edi_12 + esi_12
                                                        var_20_2 = esi_11 + edx_20
                                                    else
                                                        var_5c_3 = edi_12 + esi_12
                                                        int32_t edi_16 = esi_11 + edx_20
                                                        var_20_2 = edi_16
                                                        int32_t var_24_3 = ecx_14
                                                        
                                                        do
                                                            ecx_14.b = *(edi_16 + (i_6 << 1))
                                                            *(var_5c_3 + i_6) = ecx_14.b
                                                            ebx_15.b = *(edi_16 + (i_6 << 1) + 2)
                                                            *(var_5c_3 + i_6 + 1) = ebx_15.b
                                                            ecx_14.b = *(edi_16 + (i_6 << 1) + 4)
                                                            *(var_5c_3 + i_6 + 2) = ecx_14.b
                                                            ecx_14.b = *(edi_16 + (i_6 << 1) + 6)
                                                            *(var_5c_3 + i_6 + 3) = ecx_14.b
                                                            ecx_14.b = *(edi_16 + (i_6 << 1) + 8)
                                                            *(var_5c_3 + i_6 + 4) = ecx_14.b
                                                            i_6 += 5
                                                        while (i_6 s<= edi_11 - 6)
                                                        
                                                        ecx_14 = var_24_3
                                                        ebx_15 = edi_11
                                                    
                                                    int32_t var_24_4 = ecx_14
                                                    
                                                    do
                                                        ecx_14.b = *(var_20_2 + (i_6 << 1))
                                                        *(var_5c_3 + i_6) = ecx_14.b
                                                        i_6 += 1
                                                    while (i_6 s< ebx_15)
                                                    
                                                    ecx_14 = var_24_4
                                                    ebp_5 = eax_29
                                                
                                                esi_12 += 0x20
                                                edx_20 += 0x10
                                                ecx_14 += 1
                                            while (ecx_14 s< ebp_5)
                                        
                                        edi_12 += ebx_15
                                        esi_11 += 0x80
                                        eax_30 += 1
                                    while (eax_30 s< esi_3)
                                    
                                    var_4c_1 = esi_11
                                
                                ecx_13 += eax_11 * temp0_2
                                edx_19 += 1
                            while (edx_19 s< ebp_2)
                            
                            ebx_2 = *(arg1 + 0x34)
                    else if (*(arg1 + 0x4de8) == 1 && eax_15 == 2 && eax_18 == 1 && arg6 != 1)
                        int32_t edx_48 = arg6 * 8
                        
                        if (esi_3 s> 0)
                            int32_t eax_57 = 0
                            int32_t ecx_37 = var_4c_1
                            void* edx_49 = &var_594
                            int32_t edi_31 = var_44_1
                            void* esi_32 = var_48_1
                            
                            do
                                int32_t ebp_18 = 0
                                
                                if (edx_48 s> 0)
                                    int32_t ebx_32 = ecx_37 + (arg6 << 1)
                                    int32_t ebx_33 = 0
                                    int32_t esi_33 = arg6
                                    
                                    do
                                        int32_t eax_58 = ebp_18 * 2
                                        
                                        if (temp0_1 == 2)
                                            int32_t edx_51 = ebp_18 * 2
                                            int16_t* edi_35 = ecx_37 + (ebp_18 << 1)
                                            int16_t* var_3c_5 = edi_35
                                            int32_t edx_54 = sx.d(*edi_35) * 3
                                            void* ecx_42 = edx_49 + (eax_58 << 1)
                                            void* var_38_6 = ecx_42
                                            *ecx_42 = ((
                                                sx.d(*(edi_31 + (arg6 << 1) + (ebp_18 << 1) - 2))
                                                + edx_54 + 1) s>> 2).b
                                            *(ecx_42 + 1) = ((sx.d(edi_35[1]) + edx_54 + 1) s>> 2).b
                                            int32_t ecx_43 = eax_58 * 2
                                            
                                            if (arg6 - 1 s> 1)
                                                void* i_7 = &edi_35[1]
                                                void* esi_37
                                                
                                                do
                                                    ecx_43 += 2
                                                    int32_t edi_36 = sx.d(*i_7) * 3
                                                    esi_37 = edx_49 + ecx_43
                                                    *esi_37 =
                                                        ((sx.d(*(i_7 - 2)) + edi_36 + 1) s>> 2).b
                                                    *(esi_37 + 1) =
                                                        ((sx.d(*(i_7 + 2)) + edi_36 + 2) s>> 2).b
                                                    i_7 += 2
                                                while (i_7 s< &edi_35[esi_33 - 1])
                                                
                                                var_38_6 = esi_37
                                                esi_33 = arg6
                                            
                                            int32_t edx_60 = sx.d(*(ebx_32 + edx_51 - 2)) * 3
                                            *(var_38_6 + 2) = ((sx.d(*(ebx_32 + edx_51 - 4))
                                                + edx_60 + 2) s>> 2).b
                                            *(var_38_6 + 3) =
                                                ((sx.d(*(esi_32 + edx_51)) + edx_60 + 2) s>> 2).b
                                        else
                                            int32_t i_8 = 0
                                            
                                            if (esi_33 s> 0)
                                                int32_t ecx_40
                                                void* edi_34
                                                
                                                if (esi_33 s< 6)
                                                    ecx_40 = ecx_37 + ebx_33
                                                    edi_34 = edx_49 + (eax_58 << 1)
                                                else
                                                    ecx_40 = ecx_37 + ebx_33
                                                    int32_t var_2c_4 = ebx_33
                                                    edi_34 = edx_49 + (eax_58 << 1)
                                                    
                                                    do
                                                        eax_58.b = *(ecx_40 + (i_8 << 1))
                                                        *(edi_34 + i_8) = eax_58.b
                                                        ebx_33.b = *(ecx_40 + (i_8 << 1) + 2)
                                                        *(edi_34 + i_8 + 1) = ebx_33.b
                                                        eax_58.b = *(ecx_40 + (i_8 << 1) + 4)
                                                        *(edi_34 + i_8 + 2) = eax_58.b
                                                        eax_58.b = *(ecx_40 + (i_8 << 1) + 6)
                                                        *(edi_34 + i_8 + 3) = eax_58.b
                                                        eax_58.b = *(ecx_40 + (i_8 << 1) + 8)
                                                        *(edi_34 + i_8 + 4) = eax_58.b
                                                        i_8 += 5
                                                    while (i_8 s<= arg6 - 6)
                                                    
                                                    ebx_33 = var_2c_4
                                                    esi_33 = arg6
                                                
                                                do
                                                    eax_58.b = *(ecx_40 + (i_8 << 1))
                                                    *(edi_34 + i_8) = eax_58.b
                                                    i_8 += 1
                                                while (i_8 s< esi_33)
                                        
                                        ebx_33 += 0x10
                                        ebp_18 += 8
                                    while (ebp_18 s< edx_48)
                                
                                edx_49 += temp0_1 * arg6
                                ecx_37 += 0x80
                                esi_32 += 0x80
                                edi_31 += 0x80
                                eax_57 += 1
                            while (eax_57 s< esi_3)
                            
                            var_4c_1 = ecx_37
                            ebx_2 = *(arg1 + 0x34)
                            var_48_1 = esi_32
                            var_44_1 = edi_31
                    else
                        int32_t ecx_6 = 0
                        
                        if (ebp_2 s> 0)
                            int32_t eax_21 = temp0_2 << 5
                            int32_t var_24_1 = 0
                            int32_t edi_4 = 0
                            
                            do
                                void* ebx_6 = &var_594 + edi_4
                                int32_t eax_22 = 0
                                
                                if (esi_3 s> 0)
                                    int32_t edi_5 = var_4c_1
                                    int32_t ebp_3 = eax_21
                                    int32_t esi_4 = arg6
                                    
                                    do
                                        int32_t ecx_7 = 0
                                        
                                        if (esi_4 s> 0)
                                            int32_t edx_16 = 0
                                            int32_t eax_23 = temp0_1
                                            
                                            do
                                                int32_t edi_6 = 0
                                                
                                                if (esi_4 s> 0)
                                                    int32_t ebx_9 = 0
                                                    
                                                    do
                                                        void* edx_17 = nullptr
                                                        
                                                        if (ebp_3 s> 0)
                                                            void* ecx_9 = ebx_6 + edx_16 + ebx_9
                                                            
                                                            do
                                                                int32_t i_14 = 0
                                                                
                                                                if (eax_23 s> 0)
                                                                    char* ebx_12
                                                                    char* esi_9
                                                                    
                                                                    if (eax_23 s< 5)
                                                                        esi_9 =
                                                                            (ecx_7 << 4) + edi_5 + (edi_6 << 1)
                                                                        ebx_12 = edx_17 + ecx_9
                                                                    else
                                                                        int32_t edi_9 = (ecx_7 << 4) + edi_5
                                                                        int32_t i_13 = 0
                                                                        char* var_40_1 = edx_17 + ecx_9
                                                                        void* var_5c_1 = edx_17
                                                                        int32_t i_9
                                                                        
                                                                        do
                                                                            int32_t eax_24
                                                                            eax_24.b = *(edi_9 + (edi_6 << 1))
                                                                            var_40_1[i_13] = eax_24.b
                                                                            int32_t eax_25
                                                                            eax_25.b = *(edi_9 + (edi_6 << 1))
                                                                            var_40_1[i_13 + 1] = eax_25.b
                                                                            void* ebx_11
                                                                            ebx_11.b = *(edi_9 + (edi_6 << 1))
                                                                            var_40_1[i_13 + 2] = ebx_11.b
                                                                            edx_17.b = *(edi_9 + (edi_6 << 1))
                                                                            var_40_1[i_13 + 3] = edx_17.b
                                                                            i_9 = i_13 + 4
                                                                            i_13 = i_9
                                                                        while (i_9 s<= temp0_1 - 5)
                                                                        
                                                                        eax_23 = temp0_1
                                                                        ebp_3 = eax_21
                                                                        i_14 = i_9
                                                                        ebx_12 = var_40_1
                                                                        esi_9 = edi_9 + (edi_6 << 1)
                                                                        edx_17 = var_5c_1
                                                                    
                                                                    void* var_5c_2 = edx_17
                                                                    
                                                                    do
                                                                        edx_17.b = *esi_9
                                                                        ebx_12[i_14] = edx_17.b
                                                                        i_14 += 1
                                                                    while (i_14 s< eax_23)
                                                                    
                                                                    edx_17 = var_5c_2
                                                                
                                                                edx_17 += 0x20
                                                            while (edx_17 s< ebp_3)
                                                            
                                                            esi_4 = arg6
                                                        
                                                        ebx_9 += eax_23
                                                        edi_6 += 1
                                                    while (edi_6 s< esi_4)
                                                
                                                edx_16 += ebp_3
                                                ecx_7 += 1
                                            while (ecx_7 s< esi_4)
                                        
                                        ebx_6 += temp0_1 * arg6
                                        edi_5 += 0x80
                                        eax_22 += 1
                                    while (eax_22 s< esi_3)
                                    
                                    var_4c_1 = edi_5
                                
                                edi_4 += eax_11 * temp0_2
                                ecx_6 += 1
                            while (ecx_6 s< ebp_2)
                            
                            ebx_2 = *(arg1 + 0x34)
                    
                    ebp_1 = &var_594
                    
                    if (ebx_2 == 3 && i_11 != 0)
                        if (i_11 == 2)
                            var_78_1 += 1
                        
                        int32_t ecx_46 = var_90
                        int32_t edx_64 = var_88
                        
                        if (ecx_46 s< edx_64)
                            int32_t ebx_41 = var_8c
                            int32_t esi_39 = ecx_46 << 5
                            
                            do
                                int32_t eax_75 = var_94
                                
                                if (eax_75 s< ebx_41)
                                    do
                                        ebx_41.b = *(ebp_1 + esi_39 + eax_75)
                                        *(ecx_46 * *(arg1 + 0x3c) + var_78_1 + (eax_75 << 1)) =
                                            ebx_41.b
                                        eax_75 += 2
                                        ebx_41 = var_8c
                                    while (eax_75 s< ebx_41)
                                    
                                    edx_64 = var_88
                                
                                esi_39 += 0x20
                                ecx_46 += 1
                            while (ecx_46 s< edx_64)
                            
                            ebx_2 = *(arg1 + 0x34)
                    else
                        sub_6e43e0(arg1, &var_94, i_11, var_78_1, &var_594)
                        ebx_2 = *(arg1 + 0x34)
                    
                    if (ebx_2 == 2 && *(arg1 + 0x58) == 1)
                        var_78_1 -= 1
                    else
                        var_78_1 += 1
                
                var_84_1 += 0x18
                i_11 += 1
            
            int32_t edi_46 = var_78_1
            
            if (ebx_2 == 0xff)
                result = *(arg1 + 0x58)
            
            if ((ebx_2 != 0xff || result != 0xff) && i_11 s< *(arg1 + 0x30))
                int32_t i_10 = i_11
                
                do
                    sub_6e43e0(arg1, &var_94, i_10, edi_46, ebp_1)
                    result = *(arg1 + 0x34)
                    
                    if (result == 2)
                        result = *(arg1 + 0x58)
                        
                        if (result != 1)
                            edi_46 += 1
                        else
                            edi_46 -= 1
                    else
                        edi_46 += 1
                    
                    i_10 += 1
                while (i_10 s< *(arg1 + 0x30))
return result
