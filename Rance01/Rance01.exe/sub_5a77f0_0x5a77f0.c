// 函数: sub_5a77f0
// 地址: 0x5a77f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t entry_ebx
int32_t var_10 = entry_ebx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t eax = *(arg1 + 0x178)
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t ebp = 0x186a0
long double st0
long double x87_r0

if (eax == 0)
    int32_t eax_10 = *(arg1 + 0x17c)
    
    if (eax_10 == 0)
        *(arg1 + 0x178) = 0x186a0
        *(arg1 + 0x17c) = 0x186a0
    else
        int32_t var_20_2 = eax_10
        *(arg1 + 0x178) = sub_5a5250()
    
    *(arg1 + 0x74) &= 0xffffdfff
else
    int32_t ecx_1 = *(arg1 + 0x17c)
    
    if (ecx_1 == 0)
        int32_t var_20_1 = eax
        *(arg1 + 0x17c) = sub_5a5250()
        *(arg1 + 0x74) &= 0xffffdfff
    else
        int32_t mxcsr
        int16_t x87control
        st0 = sub_70cb70(mxcsr, x87control, 
            fconvert.d(float.t(eax) * float.t(ecx_1) / fconvert.t(100000.0) + fconvert.t(0.5)))
        long double x87_r6_1 = fconvert.t(2147483647.0)
        x87_r6_1 - st0
        bool p_1
        
        if ((((x87_r6_1 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0) ? 1 : 0) << 0xa
                | (x87_r6_1 == st0 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
            fconvert.t(-2147483648.0) - st0
            p_1 = unimplemented  {test ah, 0x41}
        
        if ((((x87_r6_1 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0) ? 1 : 0) << 0xa
                | (x87_r6_1 == st0 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0 || p_1)
            x87_r0 = st0
            *(arg1 + 0x74) |= 0x2000
        else if (sub_70c710(st0) - 0x17318 u> 0x2710)
            *(arg1 + 0x74) |= 0x2000
        else
            *(arg1 + 0x74) &= 0xffffdfff

int32_t eax_4 = *(arg1 + 0x74)

if ((eax_4 & 0x40000) != 0 && eax_4.b s>= 0)
    *(arg1 + 0x70) &= 0xffffdfff
    *(arg1 + 0x74) = eax_4 & 0xfd7ffeff
    *(arg1 + 0x134) = 0

if (*(arg1 + 0x17c) - 0x17318 u<= 0x2710)
    *(arg1 + 0x74) &= 0xff7fffff
    *(arg1 + 0x70) &= 0xffffdfff

int32_t eax_8 = *(arg1 + 0x74)

if ((eax_8 & 0x100) == 0)
    if (eax_8.b s< 0 && (eax_8 & 0x4000) != 0)
        int16_t eax_12 = *(arg1 + 0x156)
        
        if (eax_12 == *(arg1 + 0x158) && eax_12 == *(arg1 + 0x15a))
            *(arg1 + 0x15c) = eax_12
            *(arg1 + 0x6c) |= 0x800
else if ((*(arg1 + 0x13b) & 2) == 0)
    *(arg1 + 0x6c) |= 0x800

if (*(arg1 + 0x13b) != 3)
    sub_5a7720(arg1)
else
    sub_5a7630(arg1)

int32_t eax_14 = *(arg1 + 0x74)

if ((eax_14 & 0x200) != 0 && eax_14.b s< 0 && (eax_14 & 0x100) == 0 && *(arg1 + 0x13c) != 0x10)
    *(arg1 + 0x156) = (((zx.d(*(arg1 + 0x156)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x158) = (((zx.d(*(arg1 + 0x158)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x15a) = (((zx.d(*(arg1 + 0x15a)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x15c) = (((zx.d(*(arg1 + 0x15c)) + 0x81) * 0xff) u>> 0x10).w

if ((eax_14 & 0x4000400) != 0 && eax_14.b s< 0 && (eax_14 & 0x100) == 0 && *(arg1 + 0x13c) == 0x10)
    int16_t edx_17 = 0x101 * *(arg1 + 0x158)
    *(arg1 + 0x156) *= 0x101
    *(arg1 + 0x158) = edx_17
    int16_t edx_18 = 0x101 * *(arg1 + 0x15c)
    *(arg1 + 0x15a) *= 0x101
    *(arg1 + 0x15c) = edx_18

int32_t edx_19 = *(arg1 + 0x158)
*(arg1 + 0x15e) = *(arg1 + 0x154)
int32_t ecx_4
ecx_4.w = *(arg1 + 0x15c)
*(arg1 + 0x162) = edx_19
*(arg1 + 0x166) = ecx_4.w
int32_t edx_21

if ((eax_14 & 0x2000) == 0 && ((eax_14 & 0x600000) == 0
        || (*(arg1 + 0x178) - 0x17318 u<= 0x2710 && *(arg1 + 0x17c) - 0x17318 u<= 0x2710)))
    edx_21 = eax_14 & 0x80

int32_t var_8

if ((eax_14 & 0x2000) != 0 || ((eax_14 & 0x600000) != 0
        && (*(arg1 + 0x178) - 0x17318 u> 0x2710 || *(arg1 + 0x17c) - 0x17318 u> 0x2710)) || (edx_21 != 0
        && (*(arg1 + 0x178) - 0x17318 u> 0x2710 || *(arg1 + 0x17c) - 0x17318 u> 0x2710
        || (*(arg1 + 0x14c) == 3 && *(arg1 + 0x150) - 0x17318 u> 0x2710)))
        || ((eax_14 & 0x800000) != 0 && *(arg1 + 0x17c) - 0x17318 u> 0x2710))
    uint32_t edx_23 = zx.d(*(arg1 + 0x13c))
    uint32_t var_20_3 = edx_23
    uint32_t ecx_21
    int32_t edx_24
    ecx_21, edx_24 = sub_5a5a70(arg1, edx_23)
    int32_t eax_20 = *(arg1 + 0x74)
    
    if (eax_20.b s< 0)
        if ((eax_20 & 0x600000) != 0)
            ecx_21, edx_24 =
                sub_5a5de0("libpng does not support gamma+background+rgb_to_gray", arg1)
        
        double var_24
        
        if (*(arg1 + 0x13b) != 3)
            uint32_t eax_71 = zx.d(*(arg1 + 0x14c))
            int32_t var_8_1 = 0x186a0
            int32_t edi_4
            
            if (eax_71 == 1)
                edi_4 = *(arg1 + 0x17c)
            else
                if (eax_71 == 2)
                    entry_ebx = *(arg1 + 0x178)
                else
                    if (eax_71 != 3)
                        sub_5a5c60(arg1, "invalid background gamma type")
                        noreturn
                    
                    entry_ebx = *(arg1 + 0x150)
                
                int32_t var_20_12 = entry_ebx
                edi_4 = sub_5a5250()
                var_24.d = entry_ebx
                int32_t eax_78
                eax_78, edx_24 = sub_5a52f0(var_24.d, *(arg1 + 0x17c))
                ebp = eax_78
                var_8_1 = ebp
            
            int32_t eax_81 = neg.d(sbb.d(ebp - 0x17318, ebp - 0x17318, 0x2710 u< ebp - 0x17318))
            int32_t ebx_16 = neg.d(sbb.d(entry_ebx, entry_ebx, 0x2710 u< edi_4 - 0x17318))
            int32_t var_4_4 = eax_81
            
            if (ebx_16 != 0)
                int32_t eax_82 = zx.d(*(arg1 + 0x15c))
                int32_t var_20_14 = edi_4
                uint16_t eax_84
                
                if (*(arg1 + 0x13c) != 8)
                    uint16_t eax_85
                    eax_85, edx_24 = sub_5a5430(eax_82, x87_r0, edx_24)
                    eax_84 = eax_85
                else
                    char eax_83
                    eax_83, edx_24 = sub_5a53b0(eax_82, x87_r0, edx_24)
                    eax_84 = zx.w(eax_83)
                
                *(arg1 + 0x166) = eax_84
                eax_81 = var_4_4
            
            if (eax_81 != 0)
                int32_t eax_86 = zx.d(*(arg1 + 0x15c))
                int32_t var_20_15 = ebp
                uint16_t eax_88
                
                if (*(arg1 + 0x13c) != 8)
                    uint16_t eax_89
                    eax_89, edx_24 = sub_5a5430(eax_86, st0, edx_24)
                    eax_88 = eax_89
                else
                    char eax_87
                    eax_87, edx_24 = sub_5a53b0(eax_86, st0, edx_24)
                    eax_88 = zx.w(eax_87)
                
                *(arg1 + 0x15c) = eax_88
            
            int32_t ebp_15 = zx.d(*(arg1 + 0x156))
            int16_t eax_91
            
            if (ebp_15.w == *(arg1 + 0x158) && ebp_15.w == *(arg1 + 0x15a))
                eax_91 = *(arg1 + 0x15c)
            
            if (ebp_15.w != *(arg1 + 0x158) || ebp_15.w != *(arg1 + 0x15a) || ebp_15.w != eax_91)
                if (ebx_16 != 0)
                    ebx_16.b = *(arg1 + 0x13c)
                    int32_t var_20_16 = edi_4
                    uint16_t eax_94
                    int32_t edx_50
                    
                    if (ebx_16.b != 8)
                        uint16_t eax_95
                        eax_95, edx_50 = sub_5a5430(ebp_15, st0, edx_24)
                        eax_94 = eax_95
                    else
                        char eax_93
                        eax_93, edx_50 = sub_5a53b0(ebp_15, st0, edx_24)
                        eax_94 = zx.w(eax_93)
                    
                    *(arg1 + 0x160) = eax_94
                    int32_t eax_96 = zx.d(*(arg1 + 0x158))
                    int32_t var_20_17 = edi_4
                    uint16_t eax_98
                    int32_t edx_51
                    
                    if (ebx_16.b != 8)
                        uint16_t eax_99
                        eax_99, edx_51 = sub_5a5430(eax_96, st0, edx_50)
                        eax_98 = eax_99
                    else
                        char eax_97
                        eax_97, edx_51 = sub_5a53b0(eax_96, st0, edx_50)
                        eax_98 = zx.w(eax_97)
                    
                    *(arg1 + 0x162) = eax_98
                    int32_t eax_100 = zx.d(*(arg1 + 0x15a))
                    int32_t var_20_18 = edi_4
                    uint16_t eax_102
                    
                    if (ebx_16.b != 8)
                        uint16_t eax_103
                        eax_103, edx_24 = sub_5a5430(eax_100, st0, edx_51)
                        eax_102 = eax_103
                    else
                        char eax_101
                        eax_101, edx_24 = sub_5a53b0(eax_100, st0, edx_51)
                        eax_102 = zx.w(eax_101)
                    
                    *(arg1 + 0x164) = eax_102
                
                if (var_4_4 != 0)
                    ebx_16.b = *(arg1 + 0x13c)
                    uint16_t eax_106
                    int32_t edx_52
                    int32_t edi_5
                    
                    if (ebx_16.b != 8)
                        int32_t var_20_20 = var_8_1
                        uint16_t eax_107
                        eax_107, edx_52 = sub_5a5430(ebp_15, st0, var_8_1)
                        edi_5 = var_8_1
                        eax_106 = eax_107
                    else
                        edi_5 = var_8_1
                        int32_t var_20_19 = edi_5
                        char eax_105
                        eax_105, edx_52 = sub_5a53b0(ebp_15, st0, edx_24)
                        eax_106 = zx.w(eax_105)
                    
                    *(arg1 + 0x156) = eax_106
                    int32_t eax_108 = zx.d(*(arg1 + 0x158))
                    int32_t var_20_21 = edi_5
                    uint16_t eax_110
                    int32_t edx_54
                    
                    if (ebx_16.b != 8)
                        uint16_t eax_111
                        eax_111, edx_54 = sub_5a5430(eax_108, st0, edx_52)
                        eax_110 = eax_111
                    else
                        char eax_109
                        eax_109, edx_54 = sub_5a53b0(eax_108, st0, edx_52)
                        eax_110 = zx.w(eax_109)
                    
                    *(arg1 + 0x158) = eax_110
                    uint32_t eax_112 = zx.d(*(arg1 + 0x15a))
                    int32_t var_20_22 = edi_5
                    uint16_t eax_114
                    
                    if (ebx_16.b != 8)
                        eax_114 = sub_5a5430(eax_112, st0, edx_54)
                    else
                        eax_114 = zx.w(sub_5a53b0(eax_112, st0, edx_54))
                    
                    *(arg1 + 0x15a) = eax_114
                
                *(arg1 + 0x14c) = 1
            else
                int16_t ecx_25 = *(arg1 + 0x166)
                *(arg1 + 0x164) = ecx_25
                *(arg1 + 0x162) = ecx_25
                *(arg1 + 0x160) = ecx_25
                *(arg1 + 0x158) = eax_91
                *(arg1 + 0x156) = eax_91
                *(arg1 + 0x15a) = eax_91
                *(arg1 + 0x14c) = 1
        else
            uint32_t var_4_3 = zx.d(*(arg1 + 0x12c))
            uint32_t eax_21
            eax_21.b = *(arg1 + 0x14c)
            char var_c_1
            char var_a_1
            
            if (eax_21.b != 2)
                uint32_t eax_24 = zx.d(eax_21.b)
                int32_t edi_2
                int32_t eax_25
                
                if (eax_24 == 1)
                    edi_2 = *(arg1 + 0x17c)
                label_5a7d48:
                    eax_25.b = *(arg1 + 0x156)
                    ecx_21.b = *(arg1 + 0x158)
                    edx_24.b = *(arg1 + 0x15a)
                    var_c_1 = eax_25.b
                    char var_b_2 = ecx_21.b
                    var_a_1 = edx_24.b
                else
                    int32_t ebx_14
                    
                    if (eax_24 == 2)
                        ebx_14 = *(arg1 + 0x178)
                    else
                        if (eax_24 != 3)
                            edi_2 = 0x186a0
                            goto label_5a7d48
                        
                        ebx_14 = *(arg1 + 0x150)
                    
                    int32_t var_20_7 = ebx_14
                    edi_2 = sub_5a5250()
                    var_24.d = ebx_14
                    eax_25, ecx_21, edx_24 = sub_5a52f0(var_24.d, *(arg1 + 0x17c))
                    
                    if (eax_25 s>= 0x17318 && eax_25 s<= 0x19a28)
                        goto label_5a7d48
                    
                    int32_t var_20_9 = eax_25
                    char eax_37
                    int32_t edx_29
                    eax_37, edx_29 = sub_5a53b0(zx.d(*(arg1 + 0x156)), x87_r0, edx_24)
                    var_c_1 = eax_37
                    int32_t var_20_10 = eax_25
                    char eax_39
                    int32_t edx_30
                    long double x87_r1
                    eax_39, edx_30 = sub_5a53b0(zx.d(*(arg1 + 0x158)), x87_r1, edx_29)
                    char var_b_3 = eax_39
                    int32_t var_20_11 = eax_25
                    char eax_41
                    long double x87_r2
                    eax_41, ecx_21, edx_24 = sub_5a53b0(zx.d(*(arg1 + 0x15a)), x87_r2, edx_30)
                    var_a_1 = eax_41
                
                if (edi_2 - 0x17318 u<= 0x2710)
                    entry_ebx.b = *(arg1 + 0x156)
                    ecx_21.b = *(arg1 + 0x158)
                    edx_24.b = *(arg1 + 0x15a)
                    var_8:2.b = edx_24.b
                    var_8:1.b = ecx_21.b
                else
                    int32_t var_20_4 = edi_2
                    char eax_29
                    int32_t edx_27
                    eax_29, edx_27 = sub_5a53b0(zx.d(*(arg1 + 0x156)), st0, edx_24)
                    entry_ebx.b = eax_29
                    int32_t var_20_5 = edi_2
                    char eax_31
                    int32_t edx_28
                    eax_31, edx_28 = sub_5a53b0(zx.d(*(arg1 + 0x158)), st0, edx_27)
                    var_8:1.b = eax_31
                    int32_t var_20_6 = edi_2
                    var_8:2.b = sub_5a53b0(zx.d(*(arg1 + 0x15a)), st0, edx_28)
            else
                ecx_21 = zx.d(*(arg1 + 0x156))
                int32_t eax_22 = *(arg1 + 0x180)
                uint32_t edi_1 = zx.d(*(arg1 + 0x158))
                uint32_t ebp_8 = zx.d(*(arg1 + 0x15a))
                var_c_1 = *(eax_22 + ecx_21)
                char edx_26 = *(eax_22 + edi_1)
                eax_22.b = *(eax_22 + ebp_8)
                var_a_1 = eax_22.b
                int32_t eax_23 = *(arg1 + 0x18c)
                entry_ebx.b = *(eax_23 + ecx_21)
                ecx_21.b = *(eax_23 + edi_1)
                char var_b_1 = edx_26
                var_8:2.b = *(eax_23 + ebp_8)
                var_8:1.b = ecx_21.b
            
            int32_t edi_3 = 0
            
            if (var_4_3 s> 0)
                char* ecx_23 = *(arg1 + 0x128) + 2
                
                do
                    uint32_t eax_42
                    char* edx_31
                    
                    if (edi_3 s< zx.d(*(arg1 + 0x134)))
                        edx_31 = *(arg1 + 0x1a4)
                        eax_42.b = edx_31[edi_3]
                    
                    if (edi_3 s>= zx.d(*(arg1 + 0x134)) || eax_42.b == 0xff)
                        uint32_t edx_48 = zx.d(ecx_23[0xffffffff])
                        ecx_23[0xfffffffe] = *(zx.d(ecx_23[0xfffffffe]) + *(arg1 + 0x180))
                        edx_48.b = *(edx_48 + *(arg1 + 0x180))
                        uint32_t eax_69 = zx.d(*ecx_23)
                        ecx_23[0xffffffff] = edx_48.b
                        *ecx_23 = *(eax_69 + *(arg1 + 0x180))
                    else if (eax_42.b != 0)
                        uint16_t edx_32 = zx.w(edx_31[edi_3])
                        uint32_t edx_34 = zx.d(
                            zx.w(*(zx.d(ecx_23[0xfffffffe]) + *(arg1 + 0x18c))) * edx_32
                            + (0xff - edx_32) * zx.w(entry_ebx.b) + 0x80)
                        ecx_23[0xfffffffe] =
                            *(zx.d((((edx_34 u>> 8) + edx_34) s>> 8).b) + *(arg1 + 0x188))
                        uint16_t edx_37 = zx.w(*(*(arg1 + 0x1a4) + edi_3))
                        uint32_t edx_39 = zx.d(
                            zx.w(*(zx.d(ecx_23[0xffffffff]) + *(arg1 + 0x18c))) * edx_37
                            + (0xff - edx_37) * zx.w(var_8:1.b) + 0x80)
                        ecx_23[0xffffffff] =
                            *(zx.d((((edx_39 u>> 8) + edx_39) s>> 8).b) + *(arg1 + 0x188))
                        uint16_t edx_42 = zx.w(*(*(arg1 + 0x1a4) + edi_3))
                        uint32_t edx_44 = zx.d(zx.w(*(zx.d(*ecx_23) + *(arg1 + 0x18c))) * edx_42
                            + (0xff - edx_42) * zx.w(var_8:2.b) + 0x80)
                        *ecx_23 = zx.d((((edx_44 u>> 8) + edx_44) s>> 8).b)[*(arg1 + 0x188)]
                    else
                        eax_42.w = var_c_1.w
                        edx_31.b = var_a_1
                        *(ecx_23 - 2) = eax_42.w
                        *ecx_23 = edx_31.b
                    
                    edi_3 += 1
                    ecx_23 = &ecx_23[3]
                while (edi_3 s< var_4_3)
            
            *(arg1 + 0x74) &= 0xffffdf7f
    else if (*(arg1 + 0x13b) == 3 && ((eax_20 & 0x1000) == 0 || (eax_20 & 0x600000) == 0))
        uint32_t i_4 = zx.d(*(arg1 + 0x12c))
        
        if (i_4 s> 0)
            void* eax_117 = *(arg1 + 0x128) + 2
            uint32_t i
            
            do
                *(eax_117 - 2) = *(zx.d(*(eax_117 - 2)) + *(arg1 + 0x180))
                *(eax_117 - 1) = *(zx.d(*(eax_117 - 1)) + *(arg1 + 0x180))
                *eax_117 = *(zx.d(*eax_117) + *(arg1 + 0x180))
                eax_117 += 3
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        *(arg1 + 0x74) &= 0xffffdfff
else if (edx_21 != 0 && *(arg1 + 0x13b) == 3)
    uint32_t ebp_1 = zx.d(*(arg1 + 0x134))
    ecx_4.b = *(arg1 + 0x158)
    int32_t edi = 0
    var_8.b = *(arg1 + 0x156)
    char edx_22 = *(arg1 + 0x15a)
    uint32_t var_4_2 = ebp_1
    var_8:1.b = ecx_4.b
    
    if (ebp_1 s> 0)
        char* eax_18 = *(arg1 + 0x128) + 2
        
        do
            char* ecx_12 = *(arg1 + 0x1a4)
            entry_ebx.b = ecx_12[edi]
            
            if (entry_ebx.b == 0)
                ecx_12.w = var_8.w
                *(eax_18 - 2) = ecx_12.w
                *eax_18 = edx_22
            else if (entry_ebx.b != 0xff)
                uint16_t ecx_13 = zx.w(ecx_12[edi])
                uint32_t ecx_14 =
                    zx.d((0xff - ecx_13) * zx.w(var_8.b) + zx.w(eax_18[0xfffffffe]) * ecx_13 + 0x80)
                eax_18[0xfffffffe] = (((ecx_14 u>> 8) + ecx_14) s>> 8).b
                uint16_t ecx_16 = zx.w(*(*(arg1 + 0x1a4) + edi))
                uint32_t ecx_17 = zx.d((0xff - ecx_16) * zx.w(var_8:1.b)
                    + zx.w(eax_18[0xffffffff]) * ecx_16 + 0x80)
                eax_18[0xffffffff] = (((ecx_17 u>> 8) + ecx_17) s>> 8).b
                uint16_t ecx_19 = zx.w(*(*(arg1 + 0x1a4) + edi))
                ebp_1 = var_4_2
                uint32_t ecx_20 =
                    zx.d((0xff - ecx_19) * zx.w(edx_22) + zx.w(*eax_18) * ecx_19 + 0x80)
                *eax_18 = (((ecx_20 u>> 8) + ecx_20) s>> 8).b
            
            edi += 1
            eax_18 = &eax_18[3]
        while (edi s< ebp_1)
    
    *(arg1 + 0x74) &= 0xffffff7f
uint8_t* result = *(arg1 + 0x74)

if ((result.b & 8) != 0 && (result & 0x1000) == 0 && *(arg1 + 0x13b) == 3)
    uint32_t i_8 = zx.d(*(arg1 + 0x12c))
    int32_t edx_61 = 8 - zx.d(*(arg1 + 0x198))
    *(arg1 + 0x74) = result & 0xfffffff7
    
    if (edx_61 - 1 u<= 6 && i_8 s> 0)
        void* edi_6 = nullptr
        uint32_t i_5 = i_8
        uint32_t i_1
        
        do
            uint8_t* eax_120 = edi_6 + *(arg1 + 0x128)
            int32_t ecx_27
            ecx_27.b = edx_61.b
            *eax_120 u>>= ecx_27.b
            edi_6 += 3
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    int32_t ebx_20 = 8 - zx.d(*(arg1 + 0x199))
    
    if (ebx_20 - 1 u<= 6 && i_8 s> 0)
        int32_t edx_63 = 0
        uint32_t i_6 = i_8
        uint32_t i_2
        
        do
            uint8_t* eax_122 = edx_63 + *(arg1 + 0x128) + 1
            int32_t ecx_28
            ecx_28.b = ebx_20.b
            *eax_122 u>>= ecx_28.b
            edx_63 += 3
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    void* ebx_21 = 8 - zx.d(*(arg1 + 0x19a))
    result = ebx_21 - 1
    
    if (result u<= 6 && i_8 s> 0)
        int32_t edx_65 = 0
        uint32_t i_7 = i_8
        uint32_t i_3
        
        do
            result = edx_65 + *(arg1 + 0x128) + 2
            int32_t ecx_29
            ecx_29.b = ebx_21.b
            *result u>>= ecx_29.b
            edx_65 += 3
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)

return result
