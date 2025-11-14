// 函数: sub_6f0ee0
// 地址: 0x6f0ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
void* ebx = nullptr
int32_t* result = *(ebp + 0x37e0)
int32_t var_94
int32_t var_90_1
int32_t var_8c_1
int32_t eax_3
int32_t ecx_3

if (*result == 1)
    int32_t edx_49 = *(ebp + 0x30)
    var_94 = edx_49
    
    if (edx_49 s> *(ebp + 0x3820))
        void* edi_46 = result[0xd]
        int32_t eax_102 = *(ebp + 0x37b8)
        void* var_88_5 = edi_46
        var_90_1 = eax_102
        int32_t eax_105 = *(ebp + 0x37bc)
        var_8c_1 = eax_105
        ecx_3 = divs.dp.d(sx.q(eax_102), *(edi_46 + 4)) * 8
        eax_3 = divs.dp.d(sx.q(eax_105), *(edi_46 + 8)) * 8
        goto label_6f0f42
else
    int32_t eax = *(ebp + 0x37b8)
    int32_t esi_1 = *(ebp + 0x37bc)
    var_90_1 = eax
    ecx_3 = eax * 8
    var_8c_1 = esi_1
    eax_3 = esi_1 * 8
    var_94 = *(ebp + 0x30)
label_6f0f42:
    int16_t* var_80_1 = *(ebp + 0x4834)
    bool cond:1_1 = *(ebp + 0x4de8) == 1
    void* var_88_1 = nullptr
    void* var_7c_1
    __builtin_memset(&var_7c_1, 0, 0x1c)
    char var_84_1 = 0
    void* var_78_1
    void* var_74_1
    void* var_70_1
    void* var_6c_1
    int16_t* var_68_1
    int16_t* var_64_1
    
    if (cond:1_1)
        if (var_90_1 == 2 && var_8c_1 == 1)
            var_84_1 = 1
            int32_t var_68_3
            
            if (*(ebp + 0x74) == 0)
                int32_t edx_42 = *(ebp + 0x37c0)
                var_68_3 = 0
                int32_t i = edx_42 - 1
                
                if (edx_42 != 0)
                    int32_t edx_43 = *(ebp + 0x37cc)
                    int32_t edx_45 = i << 4
                    int32_t ecx_91 = 0
                    
                    do
                        i -= 1
                        ecx_91 += *(edx_45 + edx_43 + 4) * *(edx_45 + edx_43 + 8)
                        edx_45 -= 0x10
                    while (i != 0xffffffff)
                    
                    var_68_3 = ecx_91
                    ebx = nullptr
                    ebp = arg1
            else
                var_68_3 = 1
            
            void* esi_48 = arg2 * 2 * (var_68_3 << 6) + *(*(ebp + 0x4dec) + 4)
            var_88_1 = esi_48
            var_68_1 = (var_68_3 << 8) + esi_48
        
        if (var_90_1 == 2 && var_8c_1 == 2)
            var_84_1 = 2
            int32_t edx_34
            
            if (*(ebp + 0x74) == 0)
                int32_t esi_35 = *(ebp + 0x37c0)
                edx_34 = 0
                
                if (esi_35 != 0)
                    int32_t edi_42 = *(ebp + 0x37cc)
                    int32_t var_8c_3 = edi_42
                    int32_t i_1 = esi_35 - 1
                    int32_t esi_38 = (esi_35 - 1) << 4
                    
                    do
                        i_1 -= 1
                        edx_34 += *(esi_38 + edi_42 + 4) * *(esi_38 + edi_42 + 8)
                        esi_38 -= 0x10
                    while (i_1 != 0xffffffff)
                    
                    ebp = arg1
            else
                edx_34 = 1
            
            int32_t edx_35 = edx_34 << 6
            void** ebp_45 = *(ebp + 0x4dec)
            void* esi_39 = *ebp_45
            int32_t edi_43 = edx_35 * 2
            void* ebx_41 = (arg2 + 1) * edi_43
            void* eax_100 = arg2 * 2 * edx_35
            var_70_1 = esi_39 + ebx_41
            int32_t edi_44 = edi_43 * (arg2 + 2)
            var_6c_1 = esi_39 + eax_100
            void* edx_37 = ebp_45[1]
            var_78_1 = esi_39 + edi_44
            ebx = nullptr
            var_88_1 = edx_37 + eax_100
            var_68_1 = edx_37 + edi_44
            void* edx_39 = ebp_45[2]
            var_7c_1 = ebx_41 + edx_39
            ebp = arg1
            var_74_1 = eax_100 + edx_39
            var_64_1 = edx_39 + edi_44
    
    void var_ac
    result = sub_6e0940(ebp + 4, ecx_3, eax_3, arg2, arg3, var_94, *(ebp + 0x3c), *(ebp + 0x20), 
        *(ebp + 0x24), *(ebp + 0x28), ebp + 0x3814, &var_ac)
    
    if (result == 0)
        int32_t edx_4 = *(ebp + 0x34)
        int32_t var_8c_2
        
        if (edx_4 == 2 && *(ebp + 0x58) == 1)
            var_8c_2 = *(ebp + 0x3814)
            int32_t eax_96 = *(ebp + 0x3820)
            
            if (eax_96 == 0)
                var_8c_2 += 2
            else if (eax_96 == 1)
                var_8c_2 += 1
        else
            var_8c_2 = *(ebp + 0x3814) + *(ebp + 0x3820)
        
        int32_t* result_2 = **(ebp + 0x37e0)
        int32_t* esi_4 = nullptr
        int32_t var_18_1 = 0
        
        while (true)
            result = *(ebp + 0x30)
            int32_t* result_1 = result_2
            
            if (result_1 s>= result)
                result_1 = result
            
            if (esi_4 s>= result_1)
                break
            
            int32_t var_3c_1
            int32_t var_30_1
            int32_t ebx_1
            int32_t edi_3
            
            if (result_2 == 1 && *(ebp + 0x4de0) == 0)
                var_3c_1 = 1
                int32_t edi_39 = *(*(ebp + 0x37e0) + 0x34)
                var_30_1 = 1
                ebx_1 = *(var_18_1 + edi_39 + 4)
                edi_3 = *(var_18_1 + edi_39 + 8)
            else
                int32_t edx_5 = *(*(ebp + 0x37e0) + 0x34)
                edi_3 = *(var_18_1 + edx_5 + 8)
                ebx_1 = *(var_18_1 + edx_5 + 4)
                var_3c_1 = edi_3
                var_30_1 = ebx_1
            
            int32_t ecx_5 = divs.dp.d(sx.q(*(ebp + 0x37b8)), ebx_1)
            ebx_1.b = var_84_1
            int32_t temp0_2 = divs.dp.d(sx.q(*(ebp + 0x37bc)), edi_3)
            void var_5ac
            
            if (ebx_1.b == 1)
                void* i_7 = &var_5ac
                int32_t edx_26 = 0
                
                if (var_30_1 s> 0)
                    do
                        void* i_2 = i_7
                        int16_t* edx_27 = var_80_1
                        int16_t* ecx_85 = var_68_1
                        
                        do
                            if (ecx_5 == 2)
                                int32_t ebp_35 = sx.d(*edx_27) * 3
                                *i_2 = ((sx.d(*(var_88_1 + 0xe)) + ebp_35 + 1) s>> 2).b
                                *(i_2 + 1) = ((sx.d(edx_27[1]) + ebp_35 + 2) s>> 2).b
                                int32_t ebp_36 = sx.d(edx_27[1]) * 3
                                *(i_2 + 2) = ((ebp_36 + sx.d(*edx_27) + 1) s>> 2).b
                                *(i_2 + 3) = ((ebp_36 + sx.d(edx_27[2]) + 2) s>> 2).b
                                int32_t ebp_37 = sx.d(edx_27[2]) * 3
                                *(i_2 + 4) = ((ebp_37 + sx.d(edx_27[1]) + 1) s>> 2).b
                                *(i_2 + 5) = ((ebp_37 + sx.d(edx_27[3]) + 2) s>> 2).b
                                int32_t ebp_38 = sx.d(edx_27[3]) * 3
                                *(i_2 + 6) = ((ebp_38 + sx.d(edx_27[2]) + 1) s>> 2).b
                                *(i_2 + 7) = ((ebp_38 + sx.d(edx_27[4]) + 2) s>> 2).b
                                int32_t ebp_39 = sx.d(edx_27[4]) * 3
                                *(i_2 + 8) = ((ebp_39 + sx.d(edx_27[3]) + 1) s>> 2).b
                                *(i_2 + 9) = ((ebp_39 + sx.d(edx_27[5]) + 2) s>> 2).b
                                int32_t ebp_40 = sx.d(edx_27[5]) * 3
                                *(i_2 + 0xa) = ((ebp_40 + sx.d(edx_27[4]) + 1) s>> 2).b
                                *(i_2 + 0xb) = ((ebp_40 + sx.d(edx_27[6]) + 2) s>> 2).b
                                int32_t ebp_41 = sx.d(edx_27[6]) * 3
                                *(i_2 + 0xc) = ((ebp_41 + sx.d(edx_27[5]) + 1) s>> 2).b
                                *(i_2 + 0xd) = ((ebp_41 + sx.d(edx_27[7]) + 2) s>> 2).b
                                int32_t ebp_42 = sx.d(edx_27[7]) * 3
                                *(i_2 + 0xe) = ((sx.d(edx_27[6]) + ebp_42 + 1) s>> 2).b
                                *(i_2 + 0xf) = ((sx.d(*ecx_85) + ebp_42 + 2) s>> 2).b
                            else
                                int32_t eax_36
                                eax_36.b = *edx_27
                                *i_2 = eax_36.b
                                eax_36.b = edx_27[1].b
                                *(i_2 + 1) = eax_36.b
                                eax_36.b = edx_27[2].b
                                *(i_2 + 2) = eax_36.b
                                eax_36.b = edx_27[3].b
                                *(i_2 + 3) = eax_36.b
                                eax_36.b = edx_27[4].b
                                *(i_2 + 4) = eax_36.b
                                eax_36.b = edx_27[5].b
                                *(i_2 + 5) = eax_36.b
                                eax_36.b = edx_27[6].b
                                *(i_2 + 6) = eax_36.b
                                eax_36.b = edx_27[7].b
                                *(i_2 + 7) = eax_36.b
                            
                            edx_27 = &edx_27[8]
                            ecx_85 = &ecx_85[8]
                            i_2 += 0x20
                            var_88_1 += 0x10
                        while (i_7 + 0x100 s> i_2)
                        
                        var_80_1 = edx_27
                        var_68_1 = ecx_85
                        i_7 += ecx_5 << 3
                        edx_26 += 1
                    while (edx_26 s< var_30_1)
                    
                    ebp = arg1
            else if (ebx_1.b == 2)
                int32_t edx_15 = 0
                
                if (var_3c_1 s> 0)
                    int32_t ebx_9 = temp0_2 << 8
                    int32_t edi_14 = ecx_5 * 8
                    int32_t ebx_11 = temp0_2 << 5
                    int32_t eax_24 = var_30_1
                    int32_t esi_10 = var_3c_1
                    int32_t ecx_10 = ebx_9
                    
                    do
                        void* ebx_13 = &var_5ac + ecx_10 * edx_15
                        int32_t ebp_6 = 0
                        
                        if (eax_24 s> 0)
                            do
                                if (ecx_5 == 2 && temp0_2 == 2)
                                    int16_t* eax_32 = var_80_1
                                    int32_t var_28_2 = 7
                                    char* edx_18 = nullptr
                                    bool cond:7_1
                                    
                                    do
                                        int32_t esi_16 = sx.d(*eax_32) * 9
                                        int32_t ebx_18 = sx.d(eax_32[1])
                                        int32_t var_9c_2
                                        int32_t var_5c_2
                                        int32_t ebx_20
                                        
                                        if (edx_18 == 0)
                                            ebx_20 = sx.d(*(var_70_1 + 0x70)) * 3
                                            var_5c_2 = sx.d(*(var_6c_1 + 0x7e))
                                            var_9c_2 = sx.d(*(var_70_1 + 0x72))
                                        else
                                            ebx_20 = sx.d(eax_32[-8]) * 3
                                            var_5c_2 = sx.d(*(var_88_1 - 2))
                                            var_9c_2 = sx.d(eax_32[-7])
                                        
                                        int32_t var_60_2
                                        int32_t var_58_2
                                        int32_t var_48_3
                                        
                                        if (var_28_2 == 0)
                                            var_48_3 = sx.d(*var_7c_1) * 3
                                            var_58_2 = sx.d(*(var_74_1 + 0xe))
                                            var_60_2 = sx.d(*(var_7c_1 + 2))
                                        else
                                            var_48_3 = sx.d(eax_32[8]) * 3
                                            var_58_2 = sx.d(*(var_88_1 + 0x1e))
                                            var_60_2 = sx.d(eax_32[9])
                                        
                                        int32_t edi_22 = sx.d(*(var_88_1 + 0xe)) * 3 + esi_16
                                        *(edx_18 + ebx_13) =
                                            ((edi_22 + ebx_20 + var_5c_2 + 8) s>> 4).b
                                        void* eax_33 = &eax_32[1]
                                        int32_t esi_17 = esi_16 + ebx_18 * 3
                                        *(edx_18 + ebx_13 + 1) =
                                            ((ebx_20 + esi_17 + var_9c_2 + 7) s>> 4).b
                                        *(edx_18 + ebx_13 + 0x20) =
                                            ((edi_22 + var_48_3 + var_58_2 + 8) s>> 4).b
                                        void* i_3 = ebx_13 + edx_18 + 2
                                        *(edx_18 + ebx_13 + 0x21) =
                                            ((var_48_3 + esi_17 + var_60_2 + 7) s>> 4).b
                                        void* var_70_3 = var_70_1 + 2
                                        void* var_7c_2 = var_7c_1 + 2
                                        
                                        do
                                            int32_t edx_20 = sx.d(*eax_33) * 9
                                            int32_t ecx_40 = sx.d(*(eax_33 + 2))
                                            int32_t var_60_3
                                            int32_t var_5c_3
                                            int32_t ebp_20
                                            
                                            if (edx_18 == 0)
                                                ebp_20 = sx.d(*(var_70_3 + 0x70)) * 3
                                                var_60_3 = sx.d(*(var_70_3 + 0x6e))
                                                var_5c_3 = sx.d(*(var_70_3 + 0x72))
                                            else
                                                ebp_20 = sx.d(*(eax_33 - 0x10)) * 3
                                                var_60_3 = sx.d(*(eax_33 - 0x12))
                                                var_5c_3 = sx.d(*(eax_33 - 0xe))
                                            
                                            int32_t var_9c_3
                                            int32_t var_58_3
                                            int32_t var_24_2
                                            
                                            if (var_28_2 == 0)
                                                var_24_2 = sx.d(*var_7c_2) * 3
                                                var_9c_3 = sx.d(*(var_7c_2 - 2))
                                                var_58_3 = sx.d(*(var_7c_2 + 2))
                                            else
                                                var_24_2 = sx.d(*(eax_33 + 0x10)) * 3
                                                var_9c_3 = sx.d(*(eax_33 + 0xe))
                                                var_58_3 = sx.d(*(eax_33 + 0x12))
                                            
                                            int32_t esi_22 = sx.d(*(eax_33 - 2)) * 3 + edx_20
                                            eax_33 += 2
                                            *i_3 = ((esi_22 + ebp_20 + var_60_3 + 8) s>> 4).b
                                            int32_t edx_21 = edx_20 + ecx_40 * 3
                                            *(i_3 + 1) = ((ebp_20 + edx_21 + var_5c_3 + 7) s>> 4).b
                                            *(i_3 + 0x20) =
                                                ((esi_22 + var_24_2 + var_9c_3 + 8) s>> 4).b
                                            *(i_3 + 0x21) =
                                                ((var_24_2 + edx_21 + var_58_3 + 7) s>> 4).b
                                            i_3 += 2
                                            var_70_3 += 2
                                            var_7c_2 += 2
                                        while (ebx_13 + edx_18 + 0xe s> i_3)
                                        
                                        int32_t ebp_26 = sx.d(*eax_33) * 9
                                        int32_t ebx_27 = sx.d(*var_68_1)
                                        int32_t var_9c_4
                                        int32_t var_58_4
                                        int32_t ebx_29
                                        
                                        if (edx_18 == 0)
                                            ebx_29 = sx.d(*(var_70_3 + 0x70)) * 3
                                            var_58_4 = sx.d(*(var_70_3 + 0x6e))
                                            var_9c_4 = sx.d(*(var_78_1 + 0x70))
                                        else
                                            ebx_29 = sx.d(*(eax_33 - 0x10)) * 3
                                            var_58_4 = sx.d(*(eax_33 - 0x12))
                                            var_9c_4 = sx.d(var_68_1[-8])
                                        
                                        var_68_1 = &var_68_1[8]
                                        int32_t var_60_4
                                        int32_t var_5c_4
                                        int32_t var_48_5
                                        
                                        if (var_28_2 == 0)
                                            var_48_5 = sx.d(*var_7c_2) * 3
                                            var_5c_4 = sx.d(*(var_7c_2 - 2))
                                            var_60_4 = sx.d(*var_64_1)
                                        else
                                            var_48_5 = sx.d(*(eax_33 + 0x10)) * 3
                                            var_5c_4 = sx.d(*(eax_33 + 0xe))
                                            var_60_4 = sx.d(*var_68_1)
                                        
                                        int32_t edi_34 = sx.d(*(eax_33 - 2)) * 3 + ebp_26
                                        *(edx_18 + ebx_13 + 0xe) =
                                            ((edi_34 + ebx_29 + var_58_4 + 8) s>> 4).b
                                        eax_32 = eax_33 + 2
                                        int32_t ebp_27 = ebp_26 + ebx_27 * 3
                                        *(edx_18 + ebx_13 + 0xf) =
                                            ((ebx_29 + ebp_27 + var_9c_4 + 7) s>> 4).b
                                        *(edx_18 + ebx_13 + 0x2e) =
                                            ((edi_34 + var_48_5 + var_5c_4 + 8) s>> 4).b
                                        *(edx_18 + ebx_13 + 0x2f) =
                                            ((var_48_5 + ebp_27 + var_60_4 + 7) s>> 4).b
                                        edx_18 = &edx_18[0x40]
                                        var_88_1 += 0x10
                                        var_70_1 = var_70_3 - 0xe
                                        var_7c_1 = var_7c_2 - 0xe
                                        cond:7_1 = var_28_2 != 0
                                        var_28_2 -= 1
                                    while (cond:7_1)
                                    var_80_1 = eax_32
                                    ecx_10 = ebx_9
                                    eax_24 = var_30_1
                                    esi_10 = var_3c_1
                                    ebx_13 += 0x10
                                    var_70_1 += 0x80
                                    var_7c_1 += 0x80
                                    var_6c_1 += 0x80
                                    var_78_1 += 0x80
                                    var_74_1 += 0x80
                                    var_64_1 = &var_64_1[0x40]
                                else
                                    edx_15 = 0
                                    
                                    if (esi_10 s> 0)
                                        int32_t edi_16 = 0
                                        
                                        do
                                            ebx_13 = &var_5ac + edi_16
                                            ebp_6 = 0
                                            
                                            if (eax_24 s> 0)
                                                void* esi_11 = var_70_1
                                                int16_t* edi_17 = var_68_1
                                                void* edx_16 = var_88_1
                                                
                                                do
                                                    int32_t eax_25 = 0
                                                    
                                                    if (ecx_10 s> 0)
                                                        int32_t esi_12 = edi_14
                                                        int32_t ebp_7 = ebx_11
                                                        int16_t* edx_17 = var_80_1
                                                        
                                                        do
                                                            int32_t ebx_14 = 0
                                                            
                                                            if (esi_12 s> 0)
                                                                int32_t edi_18 = ecx_5
                                                                
                                                                do
                                                                    char eax_26 = (*edx_17).b
                                                                    int32_t ecx_11 = 0
                                                                    edx_17 = &edx_17[1]
                                                                    
                                                                    if (ebp_7 s> 0)
                                                                        do
                                                                            int32_t i_4 = 0
                                                                            
                                                                            if (edi_18 s> 0)
                                                                                char* var_9c_1
                                                                                char var_60_1
                                                                                
                                                                                if (edi_18 s< 6)
                                                                                    var_9c_1 =
                                                                                        ebx_13 + eax_25 + ebx_14 + ecx_11
                                                                                    var_60_1 = eax_26
                                                                                else
                                                                                    char* ebp_10 =
                                                                                        ebx_13 + eax_25 + ebx_14 + ecx_11
                                                                                    var_9c_1 = ebp_10
                                                                                    var_60_1 = eax_26
                                                                                    
                                                                                    do
                                                                                        ebp_10[i_4] = eax_26
                                                                                        ebp_10[i_4 + 1] = eax_26
                                                                                        ebp_10[i_4 + 2] = eax_26
                                                                                        ebp_10[i_4 + 3] = eax_26
                                                                                        ebp_10[i_4 + 4] = eax_26
                                                                                        i_4 += 5
                                                                                    while (i_4 s<= ecx_5 - 6)
                                                                                    
                                                                                    edi_18 = ecx_5
                                                                                
                                                                                do
                                                                                    var_9c_1[i_4] = var_60_1
                                                                                    i_4 += 1
                                                                                while (i_4 s< edi_18)
                                                                            
                                                                            ecx_11 += 0x20
                                                                        while (ecx_11 s< ebx_11)
                                                                        
                                                                        ebp_7 = ebx_11
                                                                        esi_12 = edi_14
                                                                    
                                                                    ebx_14 += edi_18
                                                                while (ebx_14 s< esi_12)
                                                                
                                                                ecx_10 = ebx_9
                                                            
                                                            eax_25 += ebp_7
                                                        while (eax_25 s< ecx_10)
                                                        
                                                        var_80_1 = edx_17
                                                    
                                                    ebx_13 += ecx_5 << 3
                                                    esi_11 += 0x80
                                                    edx_16 += 0x80
                                                    edi_17 = &edi_17[0x40]
                                                    ebp_6 += 1
                                                    var_7c_1 += 0x80
                                                    eax_24 = var_30_1
                                                    var_6c_1 += 0x80
                                                    var_78_1 += 0x80
                                                    var_74_1 += 0x80
                                                    var_64_1 = &var_64_1[0x40]
                                                while (ebp_6 s< eax_24)
                                                
                                                var_70_1 = esi_11
                                                esi_10 = var_3c_1
                                                var_68_1 = edi_17
                                                var_88_1 = edx_16
                                            
                                            edi_16 += ecx_10
                                            edx_15 += 1
                                        while (edx_15 s< esi_10)
                                
                                ebp_6 += 1
                            while (ebp_6 s< eax_24)
                        
                        edx_15 += 1
                    while (edx_15 s< esi_10)
                    
                    ebp = arg1
            else
                int32_t edx_9 = 0
                
                if (var_3c_1 s> 0)
                    int32_t ebx_4 = temp0_2 << 8
                    int32_t edi_6 = ecx_5 * 8
                    int32_t eax_19 = temp0_2 << 5
                    int32_t ebx_5 = ebx_4
                    int32_t ebp_1 = var_30_1
                    int32_t esi_5 = 0
                    int32_t edi_8 = var_3c_1
                    
                    do
                        void* ecx_6 = &var_5ac + esi_5
                        int32_t eax_20 = 0
                        
                        if (ebp_1 s> 0)
                            int32_t edx_10 = ecx_5
                            
                            do
                                int32_t esi_6 = 0
                                
                                if (ebx_5 s> 0)
                                    int32_t edx_11 = eax_19
                                    int32_t ebp_2 = edi_6
                                    
                                    do
                                        void* eax_21 = nullptr
                                        
                                        if (ebp_2 s> 0)
                                            int32_t ebp_3 = ecx_5
                                            int16_t* esi_7 = var_80_1
                                            
                                            do
                                                char ecx_7 = (*esi_7).b
                                                void* ebx_6 = nullptr
                                                esi_7 = &esi_7[1]
                                                
                                                if (edx_11 s> 0)
                                                    void* edi_11 = eax_21 + ecx_6 + esi_6
                                                    uint32_t ecx_8 = zx.d(ecx_7)
                                                    void* var_54_1 = edi_11
                                                    uint32_t var_50_1 = ecx_8
                                                    char eax_22 = ecx_8.b
                                                    
                                                    do
                                                        int32_t i_5 = 0
                                                        
                                                        if (ebp_3 s> 0)
                                                            char* esi_9
                                                            
                                                            if (ebp_3 s< 6)
                                                                esi_9 = ebx_6 + edi_11
                                                            else
                                                                void* esi_8 = ebx_6 + edi_11
                                                                
                                                                do
                                                                    *(esi_8 + i_5) = eax_22
                                                                    *(esi_8 + i_5 + 1) = eax_22
                                                                    *(esi_8 + i_5 + 2) = eax_22
                                                                    *(esi_8 + i_5 + 3) = eax_22
                                                                    *(esi_8 + i_5 + 4) = eax_22
                                                                    i_5 += 5
                                                                while (i_5 s<= ecx_5 - 6)
                                                                
                                                                ebp_3 = ecx_5
                                                                esi_9 = esi_8
                                                            
                                                            do
                                                                esi_9[i_5] = eax_22
                                                                i_5 += 1
                                                            while (i_5 s< ebp_3)
                                                            
                                                            edx_11 = eax_19
                                                        
                                                        ebx_6 += 0x20
                                                    while (ebx_6 s< edx_11)
                                                
                                                eax_21 += ebp_3
                                            while (eax_21 s< edi_6)
                                            
                                            var_80_1 = esi_7
                                            ebp_2 = edi_6
                                            ebx_5 = ebx_4
                                        
                                        esi_6 += edx_11
                                    while (esi_6 s< ebx_5)
                                    
                                    edx_10 = ecx_5
                                    ebp_1 = var_30_1
                                
                                ecx_6 += edx_10 << 3
                                eax_20 += 1
                            while (eax_20 s< ebp_1)
                            
                            edi_8 = var_3c_1
                        
                        esi_5 += ebx_5
                        edx_9 += 1
                    while (edx_9 s< edi_8)
                    
                    ebp = arg1
            
            ebx = &var_5ac
            sub_6e43e0(ebp, &var_ac, esi_4, var_8c_2, &var_5ac)
            edx_4 = *(ebp + 0x34)
            
            if (edx_4 == 2 && *(ebp + 0x58) == 1)
                var_8c_2 -= 1
            else
                var_8c_2 += 1
            
            var_18_1 += 0x18
            esi_4 += 1
        
        if (*(ebp + 0x74) != 0)
            esi_4 = *(ebp + 0x54)
            
            if (esi_4 - 1 != *(ebp + 0x3820))
                esi_4 = result
        
        if ((edx_4 != 0xff || *(ebp + 0x58) != 0xff) && esi_4 s< result)
            int32_t edi_40 = var_8c_2
            int32_t* i_6 = esi_4
            
            do
                sub_6e43e0(ebp, &var_ac, i_6, edi_40, ebx)
                result = *(ebp + 0x34)
                
                if (result == 2)
                    result = *(ebp + 0x58)
                    
                    if (result != 1)
                        edi_40 += 1
                    else
                        edi_40 -= 1
                else
                    edi_40 += 1
                
                i_6 += 1
            while (i_6 s< *(ebp + 0x30))
return result
