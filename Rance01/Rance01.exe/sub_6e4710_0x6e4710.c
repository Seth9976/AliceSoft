// 函数: sub_6e4710
// 地址: 0x6e4710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
void* ebx = nullptr
int16_t* esi = nullptr
void* var_64 = nullptr
void* var_28_1
__builtin_memset(&var_28_1, 0, 0x18)
char var_2c = 0
void* var_24_1
int16_t* var_20_1
void* var_1c_1
void* var_18_1
void* var_14_1
int32_t ecx
int32_t edx

if (*(ebp + 0x4de8) == 1)
    edx = *(ebp + 0x37b8)
    
    if (edx == 2)
        ecx = *(ebp + 0x37bc)
        
        if (ecx == 1)
            int32_t esi_50 = 0
            var_2c = 1
            int32_t eax_104 = *(ebp + 0x37c0)
            int32_t i = eax_104 - 1
            
            if (eax_104 != 0)
                int32_t eax_105 = *(ebp + 0x37cc)
                int32_t eax_107 = i << 4
                
                do
                    i -= 1
                    esi_50 += *(eax_107 + eax_105 + 4) * *(eax_107 + eax_105 + 8)
                    eax_107 -= 0x10
                while (i != 0xffffffff)
                
                ebx = nullptr
                ebp = arg1
            
            void* eax = arg2 * 2 * (esi_50 << 6) + *(*(ebp + 0x4dec) + 4)
            esi = (esi_50 << 8) + eax
            var_24_1 = eax
    else
        ecx = *(ebp + 0x37bc)
    
    if (edx == 2 && ecx == 2)
        int32_t esi_43 = *(ebp + 0x37c0)
        var_2c = 2
        int32_t eax_97 = 0
        
        if (esi_43 != 0)
            int32_t esi_44 = *(ebp + 0x37cc)
            int32_t esi_47 = (esi_43 - 1) << 4
            int32_t i_1 = esi_43 - 1
            
            do
                i_1 -= 1
                eax_97 += *(esi_47 + esi_44 + 4) * *(esi_47 + esi_44 + 8)
                esi_47 -= 0x10
            while (i_1 != 0xffffffff)
            
            ebp = arg1
        
        int32_t eax_98 = eax_97 << 6
        void** ebp_42 = *(ebp + 0x4dec)
        void* esi_48 = *ebp_42
        int32_t ecx_99 = arg2 * eax_98
        int32_t edx_37 = ecx_99 + eax_98
        int32_t ecx_100 = ecx_99 + (eax_98 << 1)
        var_64 = esi_48 + (edx_37 << 1)
        void* ebx_40 = arg2 * 2 * eax_98
        var_14_1 = esi_48 + ebx_40
        int32_t esi_49 = ebp_42[1]
        int32_t ebp_43 = ebp_42[2]
        var_18_1 = esi_48 + (ecx_100 << 1)
        esi = esi_49 + (ecx_100 << 1)
        var_24_1 = ebx_40 + esi_49
        var_28_1 = ebp_43 + (edx_37 << 1)
        var_1c_1 = ebx_40 + ebp_43
        ebx = nullptr
        var_20_1 = ebp_43 + (ecx_100 << 1)
        ebp = arg1
else
    edx = *(ebp + 0x37b8)
    ecx = *(ebp + 0x37bc)

int16_t* var_60 = *(ebp + 0x4834)
void var_9c
int32_t result = sub_6e0940(ebp + 4, edx * 8, ecx * 8, arg2, arg3, *(ebp + 0x30), *(ebp + 0x3c), 
    *(ebp + 0x20), *(ebp + 0x24), *(ebp + 0x28), ebp + 0x3814, &var_9c)

if (result == 0)
    int32_t ecx_5 = *(ebp + 0x34)
    int32_t var_48_1
    
    if (ecx_5 == 2 && *(ebp + 0x58) == 1)
        var_48_1 = *(ebp + 0x3814)
        int32_t eax_96 = *(ebp + 0x3820)
        
        if (eax_96 == 0)
            var_48_1 += 2
        else if (eax_96 == 1)
            var_48_1 += 1
    else
        var_48_1 = *(ebp + 0x3814) + *(ebp + 0x3820)
    
    int32_t i_8 = *(ebp + 0x30)
    int32_t i_10 = *(ebp + 0x37c0)
    int32_t i_7 = 0
    int16_t* var_44_1 = esi
    
    while (true)
        int32_t i_9
        
        i_9 = i_10 s>= i_8 ? i_8 : i_10
        
        if (i_7 s>= i_9)
            break
        
        if (*(arg1 + 0x58) != 4 || i_7 s<= 0)
            int32_t ecx_7 = i_7 << 4
            void* ecx_8 = ecx_7 + *(arg1 + 0x37cc)
            int32_t ecx_9 = *(ecx_8 + 4)
            int32_t ebp_2 = divs.dp.d(sx.q(*(arg1 + 0x37b8)), ecx_9)
            int32_t ebx_3 = *(ecx_8 + 8)
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x37bc)), ebx_3)
            void var_59c
            
            if (var_2c == 1)
                void* j_1 = &var_59c
                int32_t i_2 = 0
                
                if (ecx_9 s> 0)
                    do
                        void* j = j_1
                        int16_t* edx_33 = var_60
                        int16_t* ecx_96 = var_44_1
                        
                        do
                            if (ebp_2 == 2)
                                int32_t ebp_32 = sx.d(*edx_33) * 3
                                *j = ((sx.d(*(var_24_1 + 0xe)) + ebp_32 + 1) s>> 2).b
                                *(j + 1) = ((sx.d(edx_33[1]) + ebp_32 + 2) s>> 2).b
                                int32_t ebp_33 = sx.d(edx_33[1]) * 3
                                *(j + 2) = ((ebp_33 + sx.d(*edx_33) + 1) s>> 2).b
                                *(j + 3) = ((ebp_33 + sx.d(edx_33[2]) + 2) s>> 2).b
                                int32_t ebp_34 = sx.d(edx_33[2]) * 3
                                *(j + 4) = ((ebp_34 + sx.d(edx_33[1]) + 1) s>> 2).b
                                *(j + 5) = ((ebp_34 + sx.d(edx_33[3]) + 2) s>> 2).b
                                int32_t ebp_35 = sx.d(edx_33[3]) * 3
                                *(j + 6) = ((ebp_35 + sx.d(edx_33[2]) + 1) s>> 2).b
                                *(j + 7) = ((ebp_35 + sx.d(edx_33[4]) + 2) s>> 2).b
                                int32_t ebp_36 = sx.d(edx_33[4]) * 3
                                *(j + 8) = ((ebp_36 + sx.d(edx_33[3]) + 1) s>> 2).b
                                *(j + 9) = ((ebp_36 + sx.d(edx_33[5]) + 2) s>> 2).b
                                int32_t ebp_37 = sx.d(edx_33[5]) * 3
                                *(j + 0xa) = ((ebp_37 + sx.d(edx_33[4]) + 1) s>> 2).b
                                *(j + 0xb) = ((ebp_37 + sx.d(edx_33[6]) + 2) s>> 2).b
                                int32_t ebp_38 = sx.d(edx_33[6]) * 3
                                *(j + 0xc) = ((ebp_38 + sx.d(edx_33[5]) + 1) s>> 2).b
                                *(j + 0xd) = ((ebp_38 + sx.d(edx_33[7]) + 2) s>> 2).b
                                int32_t ebp_39 = sx.d(edx_33[7]) * 3
                                *(j + 0xe) = ((sx.d(edx_33[6]) + ebp_39 + 1) s>> 2).b
                                *(j + 0xf) = ((sx.d(*ecx_96) + ebp_39 + 2) s>> 2).b
                            else
                                int32_t eax_37
                                eax_37.b = *edx_33
                                *j = eax_37.b
                                eax_37.b = edx_33[1].b
                                *(j + 1) = eax_37.b
                                eax_37.b = edx_33[2].b
                                *(j + 2) = eax_37.b
                                eax_37.b = edx_33[3].b
                                *(j + 3) = eax_37.b
                                eax_37.b = edx_33[4].b
                                *(j + 4) = eax_37.b
                                eax_37.b = edx_33[5].b
                                *(j + 5) = eax_37.b
                                eax_37.b = edx_33[6].b
                                *(j + 6) = eax_37.b
                                eax_37.b = edx_33[7].b
                                *(j + 7) = eax_37.b
                            
                            edx_33 = &edx_33[8]
                            ecx_96 = &ecx_96[8]
                            j += 0x20
                            var_24_1 += 0x10
                        while (j_1 + 0x100 s> j)
                        
                        var_60 = edx_33
                        var_44_1 = ecx_96
                        j_1 += ebp_2 << 3
                        i_2 += 1
                    while (i_2 s< *(ecx_7 + *(arg1 + 0x37cc) + 4))
            else if (var_2c != 2)
                int32_t edx_8 = 0
                
                if (ebx_3 s> 0)
                    int32_t esi_5 = temp0_2 << 8
                    int32_t eax_16 = temp0_2 << 5
                    int32_t esi_8 = ebp_2 * 8
                    int32_t esi_9 = 0
                    int32_t var_40_1 = 0
                    int32_t eax_17 = esi_5
                    void* ebp_3 = ecx_8
                    
                    do
                        if (ecx_9 s> 0)
                            void* esi_10 = &var_59c + esi_9
                            int32_t edi_4 = ebp_2
                            int32_t edx_9 = 0
                            
                            do
                                int32_t ebx_4 = 0
                                
                                if (eax_17 s> 0)
                                    int32_t ecx_10 = eax_16
                                    int32_t edi_5 = esi_8
                                    
                                    do
                                        void* edx_10 = nullptr
                                        
                                        if (edi_5 s> 0)
                                            int16_t* esi_11 = var_60
                                            int32_t ebp_5 = ebp_2
                                            
                                            do
                                                char eax_18 = (*esi_11).b
                                                void* ebx_5 = nullptr
                                                esi_11 = &esi_11[1]
                                                
                                                if (ecx_10 s> 0)
                                                    void* edi_7 = edx_10 + esi_10 + ebx_4
                                                    uint32_t eax_19 = zx.d(eax_18)
                                                    void* var_58_1 = edi_7
                                                    uint32_t var_5c_1 = eax_19
                                                    
                                                    do
                                                        int32_t i_3 = 0
                                                        
                                                        if (ebp_5 s> 0)
                                                            void* esi_14
                                                            
                                                            if (ebp_5 s< 6)
                                                                esi_14 = ebx_5 + edi_7
                                                            else
                                                                void* esi_12 = ebx_5 + edi_7
                                                                
                                                                do
                                                                    *(esi_12 + i_3) = eax_19.b
                                                                    *(esi_12 + i_3 + 1) = eax_19.b
                                                                    *(esi_12 + i_3 + 2) = eax_19.b
                                                                    *(esi_12 + i_3 + 3) = eax_19.b
                                                                    *(esi_12 + i_3 + 4) = eax_19.b
                                                                    i_3 += 5
                                                                while (i_3 s<= ebp_2 - 6)
                                                                
                                                                ebp_5 = ebp_2
                                                                esi_14 = esi_12
                                                            
                                                            do
                                                                *(esi_14 + i_3) = eax_19.b
                                                                i_3 += 1
                                                            while (i_3 s< ebp_5)
                                                            
                                                            ecx_10 = eax_16
                                                        
                                                        ebx_5 += 0x20
                                                    while (ebx_5 s< ecx_10)
                                                
                                                edx_10 += ebp_5
                                            while (edx_10 s< esi_8)
                                            
                                            var_60 = esi_11
                                            edi_5 = esi_8
                                            eax_17 = esi_5
                                        
                                        ebx_4 += ecx_10
                                    while (ebx_4 s< eax_17)
                                    
                                    edi_4 = ebp_2
                                    ebp_3 = *(arg1 + 0x37cc) + ecx_7
                                    ecx_9 = *(ebp_3 + 4)
                                
                                esi_10 += edi_4 << 3
                                edx_9 += 1
                            while (edx_9 s< ecx_9)
                            
                            ebx_3 = *(ebp_3 + 8)
                        
                        esi_9 += eax_17
                        edx_8 += 1
                    while (edx_8 s< ebx_3)
            else if (ebx_3 s> 0)
                int32_t edx_14 = temp0_2 << 8
                int32_t edi_10 = ebp_2 * 8
                int32_t esi_16 = temp0_2 << 5
                int32_t edi_11 = 0
                void* edx_16 = ecx_8
                int32_t eax_26 = edx_14
                
                do
                    void* ebp_8 = &var_59c + eax_26 * edi_11
                    int32_t esi_19 = 0
                    
                    if (ecx_9 s> 0)
                        void* var_6c_3 = edx_16
                        int32_t ebx_6 = ebp_2
                        
                        do
                            if (ebx_6 == 2 && temp0_2 == 2)
                                char* edx_23 = nullptr
                                int16_t* eax_32 = var_60
                                int32_t var_40_3 = 7
                                bool cond:5_1
                                
                                do
                                    int32_t esi_24 = sx.d(*eax_32) * 9
                                    int32_t ebx_15 = sx.d(eax_32[1])
                                    int32_t var_78_3
                                    int32_t var_70_3
                                    int32_t ebx_17
                                    
                                    if (edx_23 == 0)
                                        ebx_17 = sx.d(*(var_64 + 0x70)) * 3
                                        var_70_3 = sx.d(*(var_14_1 + 0x7e))
                                        var_78_3 = sx.d(*(var_64 + 0x72))
                                    else
                                        ebx_17 = sx.d(eax_32[-8]) * 3
                                        var_70_3 = sx.d(*(var_24_1 - 2))
                                        var_78_3 = sx.d(eax_32[-7])
                                    
                                    int32_t var_74_4
                                    int32_t var_6c_5
                                    int32_t var_54_3
                                    
                                    if (var_40_3 == 0)
                                        var_54_3 = sx.d(*var_28_1) * 3
                                        var_6c_5 = sx.d(*(var_1c_1 + 0xe))
                                        var_74_4 = sx.d(*(var_28_1 + 2))
                                    else
                                        var_54_3 = sx.d(eax_32[8]) * 3
                                        var_6c_5 = sx.d(*(var_24_1 + 0x1e))
                                        var_74_4 = sx.d(eax_32[9])
                                    
                                    int32_t edi_18 = sx.d(*(var_24_1 + 0xe)) * 3 + esi_24
                                    *(edx_23 + ebp_8) = ((edi_18 + ebx_17 + var_70_3 + 8) s>> 4).b
                                    void* eax_33 = &eax_32[1]
                                    int32_t esi_25 = esi_24 + ebx_15 * 3
                                    *(edx_23 + ebp_8 + 1) =
                                        ((ebx_17 + esi_25 + var_78_3 + 7) s>> 4).b
                                    *(edx_23 + ebp_8 + 0x20) =
                                        ((edi_18 + var_54_3 + var_6c_5 + 8) s>> 4).b
                                    void* i_4 = ebp_8 + edx_23 + 2
                                    *(edx_23 + ebp_8 + 0x21) =
                                        ((var_54_3 + esi_25 + var_74_4 + 7) s>> 4).b
                                    void* var_64_2 = var_64 + 2
                                    void* var_28_2 = var_28_1 + 2
                                    
                                    do
                                        int32_t edx_25 = sx.d(*eax_33) * 9
                                        int32_t ecx_47 = sx.d(*(eax_33 + 2))
                                        int32_t var_78_4
                                        int32_t var_74_5
                                        int32_t ebp_20
                                        
                                        if (edx_23 == 0)
                                            ebp_20 = sx.d(*(var_64_2 + 0x70)) * 3
                                            var_78_4 = sx.d(*(var_64_2 + 0x6e))
                                            var_74_5 = sx.d(*(var_64_2 + 0x72))
                                        else
                                            ebp_20 = sx.d(*(eax_33 - 0x10)) * 3
                                            var_78_4 = sx.d(*(eax_33 - 0x12))
                                            var_74_5 = sx.d(*(eax_33 - 0xe))
                                        
                                        int32_t var_7c_3
                                        int32_t var_70_4
                                        int32_t var_38_2
                                        
                                        if (var_40_3 == 0)
                                            int16_t* ecx_55 = var_28_2
                                            var_38_2 = sx.d(*ecx_55) * 3
                                            var_7c_3 = sx.d(ecx_55[-1])
                                            var_70_4 = sx.d(ecx_55[1])
                                        else
                                            var_38_2 = sx.d(*(eax_33 + 0x10)) * 3
                                            var_7c_3 = sx.d(*(eax_33 + 0xe))
                                            var_70_4 = sx.d(*(eax_33 + 0x12))
                                        
                                        int32_t esi_30 = sx.d(*(eax_33 - 2)) * 3 + edx_25
                                        eax_33 += 2
                                        *i_4 = ((esi_30 + ebp_20 + var_78_4 + 8) s>> 4).b
                                        int32_t edx_26 = edx_25 + ecx_47 * 3
                                        *(i_4 + 1) = ((ebp_20 + edx_26 + var_74_5 + 7) s>> 4).b
                                        *(i_4 + 0x20) = ((esi_30 + var_38_2 + var_7c_3 + 8) s>> 4).b
                                        *(i_4 + 0x21) = ((var_38_2 + edx_26 + var_70_4 + 7) s>> 4).b
                                        i_4 += 2
                                        var_64_2 += 2
                                        var_28_2 += 2
                                    while (ebp_8 + edx_23 + 0xe s> i_4)
                                    
                                    int32_t ebp_26 = sx.d(*eax_33) * 9
                                    int32_t ebx_24 = sx.d(*var_44_1)
                                    int32_t var_78_5
                                    int32_t var_6c_7
                                    int32_t ebx_26
                                    
                                    if (edx_23 == 0)
                                        ebx_26 = sx.d(*(var_64_2 + 0x70)) * 3
                                        var_6c_7 = sx.d(*(var_64_2 + 0x6e))
                                        var_78_5 = sx.d(*(var_18_1 + 0x70))
                                    else
                                        ebx_26 = sx.d(*(eax_33 - 0x10)) * 3
                                        var_6c_7 = sx.d(*(eax_33 - 0x12))
                                        var_78_5 = sx.d(var_44_1[-8])
                                    
                                    var_44_1 = &var_44_1[8]
                                    int32_t var_74_6
                                    int32_t var_70_5
                                    int32_t var_54_5
                                    
                                    if (var_40_3 == 0)
                                        var_54_5 = sx.d(*var_28_2) * 3
                                        var_70_5 = sx.d(*(var_28_2 - 2))
                                        var_74_6 = sx.d(*var_20_1)
                                    else
                                        var_54_5 = sx.d(*(eax_33 + 0x10)) * 3
                                        var_70_5 = sx.d(*(eax_33 + 0xe))
                                        var_74_6 = sx.d(*var_44_1)
                                    
                                    int32_t edi_30 = sx.d(*(eax_33 - 2)) * 3 + ebp_26
                                    *(edx_23 + ebp_8 + 0xe) =
                                        ((edi_30 + ebx_26 + var_6c_7 + 8) s>> 4).b
                                    eax_32 = eax_33 + 2
                                    int32_t ebp_27 = ebp_26 + ebx_24 * 3
                                    *(edx_23 + ebp_8 + 0xf) =
                                        ((ebx_26 + ebp_27 + var_78_5 + 7) s>> 4).b
                                    *(edx_23 + ebp_8 + 0x2e) =
                                        ((edi_30 + var_54_5 + var_70_5 + 8) s>> 4).b
                                    *(edx_23 + ebp_8 + 0x2f) =
                                        ((var_54_5 + ebp_27 + var_74_6 + 7) s>> 4).b
                                    edx_23 = &edx_23[0x40]
                                    var_24_1 += 0x10
                                    var_64 = var_64_2 - 0xe
                                    var_28_1 = var_28_2 - 0xe
                                    cond:5_1 = var_40_3 != 0
                                    var_40_3 -= 1
                                while (cond:5_1)
                                var_60 = eax_32
                                eax_26 = edx_14
                                ebx_6 = ebp_2
                                ebp_8 += 0x10
                                void* ecx_92 = *(arg1 + 0x37cc)
                                var_64 += 0x80
                                var_28_1 += 0x80
                                var_14_1 += 0x80
                                var_18_1 += 0x80
                                var_1c_1 += 0x80
                                var_20_1 = &var_20_1[0x40]
                                void* ecx_93 = ecx_92 + ecx_7
                                var_6c_3 = ecx_93
                                ecx_9 = *(ecx_93 + 4)
                            else
                                edi_11 = 0
                                int32_t edx_18 = *(var_6c_3 + 8)
                                
                                if (edx_18 s> 0)
                                    int32_t ebx_7 = edx_18
                                    int32_t edx_19 = 0
                                    
                                    do
                                        ebp_8 = &var_59c + edx_19
                                        esi_19 = 0
                                        
                                        if (ecx_9 s> 0)
                                            void* ebx_8 = var_64
                                            int16_t* edx_20 = var_44_1
                                            
                                            do
                                                int32_t var_74_2 = 0
                                                
                                                if (eax_26 s> 0)
                                                    int32_t ebx_9 = esi_16
                                                    int32_t ebp_9 = edi_10
                                                    int32_t esi_20 = 0
                                                    int16_t* edx_21 = var_60
                                                    
                                                    do
                                                        int32_t ecx_14 = 0
                                                        
                                                        if (ebp_9 s> 0)
                                                            int32_t esi_21 = ebp_2
                                                            
                                                            do
                                                                char eax_27 = (*edx_21).b
                                                                int32_t edi_12 = 0
                                                                edx_21 = &edx_21[1]
                                                                
                                                                if (ebx_9 s> 0)
                                                                    do
                                                                        int32_t i_5 = 0
                                                                        
                                                                        if (esi_21 s> 0)
                                                                            char* var_7c_1
                                                                            char var_78_2
                                                                            
                                                                            if (esi_21 s< 6)
                                                                                var_7c_1 =
                                                                                    ebp_8 + esi_20 + ecx_14 + edi_12
                                                                                var_78_2 = eax_27
                                                                            else
                                                                                char* ebx_12 =
                                                                                    ebp_8 + esi_20 + ecx_14 + edi_12
                                                                                var_7c_1 = ebx_12
                                                                                var_78_2 = eax_27
                                                                                
                                                                                do
                                                                                    ebx_12[i_5] = eax_27
                                                                                    ebx_12[i_5 + 1] = eax_27
                                                                                    ebx_12[i_5 + 2] = eax_27
                                                                                    ebx_12[i_5 + 3] = eax_27
                                                                                    ebx_12[i_5 + 4] = eax_27
                                                                                    i_5 += 5
                                                                                while (i_5 s<= ebp_2 - 6)
                                                                                
                                                                                esi_21 = ebp_2
                                                                            
                                                                            do
                                                                                var_7c_1[i_5] = var_78_2
                                                                                i_5 += 1
                                                                            while (i_5 s< esi_21)
                                                                        
                                                                        edi_12 += 0x20
                                                                    while (edi_12 s< esi_16)
                                                                    
                                                                    ebx_9 = esi_16
                                                                    ebp_9 = edi_10
                                                                
                                                                ecx_14 += esi_21
                                                            while (ecx_14 s< ebp_9)
                                                            
                                                            eax_26 = edx_14
                                                        
                                                        esi_20 += ebx_9
                                                    while (esi_20 s< eax_26)
                                                    
                                                    var_60 = edx_21
                                                    void* edi_14 = *(arg1 + 0x37cc) + ecx_7
                                                    var_6c_3 = edi_14
                                                    ecx_9 = *(edi_14 + 4)
                                                
                                                ebp_8 += ebp_2 << 3
                                                ebx_8 += 0x80
                                                var_24_1 += 0x80
                                                edx_20 = &edx_20[0x40]
                                                esi_19 += 1
                                                var_28_1 += 0x80
                                                var_14_1 += 0x80
                                                var_18_1 += 0x80
                                                var_1c_1 += 0x80
                                                var_20_1 = &var_20_1[0x40]
                                            while (esi_19 s< ecx_9)
                                            
                                            var_64 = ebx_8
                                            var_44_1 = edx_20
                                            ebx_7 = *(var_6c_3 + 8)
                                        
                                        edx_19 += eax_26
                                        edi_11 += 1
                                    while (edi_11 s< ebx_7)
                                    
                                    ebx_6 = ebp_2
                            
                            esi_19 += 1
                        while (esi_19 s< ecx_9)
                        
                        edx_16 = var_6c_3
                        ebx_3 = *(edx_16 + 8)
                    
                    edi_11 += 1
                while (edi_11 s< ebx_3)
            
            ebx = &var_59c
            sub_6e43e0(arg1, &var_9c, i_7, var_48_1, &var_59c)
            ecx_5 = *(arg1 + 0x34)
            
            if (ecx_5 == 2 && *(arg1 + 0x58) == 1)
                var_48_1 -= 1
                i_8 = *(arg1 + 0x30)
                i_10 = *(arg1 + 0x37c0)
            else
                var_48_1 += 1
                i_8 = *(arg1 + 0x30)
                i_10 = *(arg1 + 0x37c0)
        
        i_7 += 1
    
    int32_t i_6 = i_7
    result = *(arg1 + 0x74)
    
    if (result != 0)
        i_6 = *(arg1 + 0x54)
        result = i_6 - 1
        
        if (result != *(arg1 + 0x3820))
            i_6 = i_8
    
    if (ecx_5 == 0xff)
        result = *(arg1 + 0x58)
    
    if ((ecx_5 != 0xff || result != 0xff) && i_6 s< i_8)
        int32_t esi_42 = var_48_1
        
        do
            sub_6e43e0(arg1, &var_9c, i_6, esi_42, ebx)
            result = *(arg1 + 0x34)
            
            if (result == 2)
                result = *(arg1 + 0x58)
                
                if (result != 1)
                    esi_42 += 1
                else
                    esi_42 -= 1
            else
                esi_42 += 1
            
            i_6 += 1
        while (i_6 s< *(arg1 + 0x30))

return result
