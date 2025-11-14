// 函数: sub_6edd10
// 地址: 0x6edd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edi = arg4
char* esi = arg5
int32_t var_50 = 0
int16_t* var_3c = arg3
void* var_38 = arg2
void* var_14 = arg1
int32_t eax_82
bool cond:0_1

do
    int32_t ecx_1 = sx.d(*var_3c)
    int32_t eax_4 = (ecx_1 * 0x167 - 0xb2f5) s>> 8
    int16_t* ebp_1 = var_38
    int32_t edx_1 = sx.d(*ebp_1)
    int32_t eax_7 = (edx_1 * 0x58 + ecx_1 * 0xb7 - 0x87f6) s>> 8
    int32_t eax_10 = (edx_1 * 0x1c6 - 0xe251) s>> 8
    int32_t edx_2 = sx.d(var_3c[1])
    int32_t eax_14 = (edx_2 * 0x167 - 0xb2f5) s>> 8
    int32_t eax_15 = sx.d(ebp_1[1])
    int32_t edx_5 = (eax_15 * 0x58 + edx_2 * 0xb7 - 0x87f6) s>> 8
    int32_t eax_18 = (eax_15 * 0x1c6 - 0xe251) s>> 8
    int32_t edx_6 = sx.d(var_3c[2])
    int32_t eax_22 = (edx_6 * 0x167 - 0xb2f5) s>> 8
    int32_t eax_23 = sx.d(ebp_1[2])
    int32_t ecx_6 = (eax_23 * 0x58 + edx_6 * 0xb7 - 0x87f6) s>> 8
    int32_t eax_26 = (eax_23 * 0x1c6 - 0xe251) s>> 8
    int32_t edx_8 = sx.d(var_3c[3])
    int32_t eax_30 = (edx_8 * 0x167 - 0xb2f5) s>> 8
    int32_t eax_31 = sx.d(ebp_1[3])
    int32_t ebx_2 = (eax_31 * 0x58 + edx_8 * 0xb7 - 0x87f6) s>> 8
    int32_t eax_34 = (eax_31 * 0x1c6 - 0xe251) s>> 8
    var_38 = &ebp_1[8]
    int32_t eax_36 = sx.d(*var_14)
    var_3c = &var_3c[8]
    int32_t edx_11 = eax_4 + eax_36
    
    if (edx_11 s> 0xff)
        edx_11 = 0xff
    else if (edx_11 s< 0)
        edx_11 = 0
    
    *esi = neg.b(edx_11.b) - 1
    int32_t edx_14 = eax_36 - eax_7
    
    if (edx_14 s> 0xff)
        edx_14 = 0xff
    else if (edx_14 s< 0)
        edx_14 = 0
    
    esi[1] = neg.b(edx_14.b) - 1
    int32_t eax_37 = eax_36 + eax_10
    
    if (eax_37 s> 0xff)
        eax_37 = 0xff
    else if (eax_37 s< 0)
        eax_37 = 0
    
    esi[2] = neg.b(eax_37.b) - 1
    esi[3] = *edi
    int32_t eax_39 = sx.d(*(var_14 + 2))
    int32_t edx_16 = eax_4 + eax_39
    
    if (edx_16 s> 0xff)
        edx_16 = 0xff
    else if (edx_16 s< 0)
        edx_16 = 0
    
    esi[4] = neg.b(edx_16.b) - 1
    int32_t edx_19 = eax_39 - eax_7
    
    if (edx_19 s> 0xff)
        edx_19 = 0xff
    else if (edx_19 s< 0)
        edx_19 = 0
    
    esi[5] = neg.b(edx_19.b) - 1
    int32_t eax_40 = eax_39 + eax_10
    
    if (eax_40 s> 0xff)
        eax_40 = 0xff
    else if (eax_40 s< 0)
        eax_40 = 0
    
    esi[6] = neg.b(eax_40.b) - 1
    esi[7] = edi[2]
    int32_t eax_42 = sx.d(*(var_14 + 4))
    int32_t edx_21 = eax_42 + eax_14
    
    if (edx_21 s> 0xff)
        edx_21 = 0xff
    else if (edx_21 s< 0)
        edx_21 = 0
    
    esi[8] = neg.b(edx_21.b) - 1
    int32_t edx_24 = eax_42 - edx_5
    
    if (edx_24 s> 0xff)
        edx_24 = 0xff
    else if (edx_24 s< 0)
        edx_24 = 0
    
    esi[9] = neg.b(edx_24.b) - 1
    int32_t eax_43 = eax_42 + eax_18
    
    if (eax_43 s> 0xff)
        eax_43 = 0xff
    else if (eax_43 s< 0)
        eax_43 = 0
    
    esi[0xa] = neg.b(eax_43.b) - 1
    esi[0xb] = edi[4]
    int32_t eax_45 = sx.d(*(var_14 + 6))
    int32_t edx_26 = eax_45 + eax_14
    
    if (edx_26 s> 0xff)
        edx_26 = 0xff
    else if (edx_26 s< 0)
        edx_26 = 0
    
    esi[0xc] = neg.b(edx_26.b) - 1
    int32_t edx_29 = eax_45 - edx_5
    
    if (edx_29 s> 0xff)
        edx_29 = 0xff
    else if (edx_29 s< 0)
        edx_29 = 0
    
    esi[0xd] = neg.b(edx_29.b) - 1
    int32_t eax_46 = eax_45 + eax_18
    
    if (eax_46 s> 0xff)
        eax_46 = 0xff
    else if (eax_46 s< 0)
        eax_46 = 0
    
    esi[0xe] = neg.b(eax_46.b) - 1
    esi[0xf] = edi[6]
    int32_t eax_48 = sx.d(*(var_14 + 8))
    int32_t edx_31 = eax_48 + eax_22
    
    if (edx_31 s> 0xff)
        edx_31 = 0xff
    else if (edx_31 s< 0)
        edx_31 = 0
    
    esi[0x10] = neg.b(edx_31.b) - 1
    int32_t edx_34 = eax_48 - ecx_6
    
    if (edx_34 s> 0xff)
        edx_34 = 0xff
    else if (edx_34 s< 0)
        edx_34 = 0
    
    esi[0x11] = neg.b(edx_34.b) - 1
    int32_t eax_49 = eax_48 + eax_26
    
    if (eax_49 s> 0xff)
        eax_49 = 0xff
    else if (eax_49 s< 0)
        eax_49 = 0
    
    esi[0x12] = neg.b(eax_49.b) - 1
    esi[0x13] = edi[8]
    int32_t eax_51 = sx.d(*(var_14 + 0xa))
    int32_t edx_36 = eax_51 + eax_22
    
    if (edx_36 s> 0xff)
        edx_36 = 0xff
    else if (edx_36 s< 0)
        edx_36 = 0
    
    esi[0x14] = neg.b(edx_36.b) - 1
    int32_t edx_39 = eax_51 - ecx_6
    
    if (edx_39 s> 0xff)
        edx_39 = 0xff
    else if (edx_39 s< 0)
        edx_39 = 0
    
    esi[0x15] = neg.b(edx_39.b) - 1
    int32_t eax_52 = eax_51 + eax_26
    
    if (eax_52 s> 0xff)
        eax_52 = 0xff
    else if (eax_52 s< 0)
        eax_52 = 0
    
    esi[0x16] = neg.b(eax_52.b) - 1
    esi[0x17] = edi[0xa]
    int32_t eax_54 = sx.d(*(var_14 + 0xc))
    int32_t edx_41 = eax_54 + eax_30
    
    if (edx_41 s> 0xff)
        edx_41 = 0xff
    else if (edx_41 s< 0)
        edx_41 = 0
    
    esi[0x18] = neg.b(edx_41.b) - 1
    int32_t edx_44 = eax_54 - ebx_2
    
    if (edx_44 s> 0xff)
        edx_44 = 0xff
    else if (edx_44 s< 0)
        edx_44 = 0
    
    esi[0x19] = neg.b(edx_44.b) - 1
    int32_t eax_55 = eax_54 + eax_34
    
    if (eax_55 s> 0xff)
        eax_55 = 0xff
    else if (eax_55 s< 0)
        eax_55 = 0
    
    esi[0x1a] = neg.b(eax_55.b) - 1
    esi[0x1b] = edi[0xc]
    int32_t eax_57 = sx.d(*(var_14 + 0xe))
    int32_t edx_46 = eax_57 + eax_30
    
    if (edx_46 s> 0xff)
        edx_46 = 0xff
    else if (edx_46 s< 0)
        edx_46 = 0
    
    esi[0x1c] = neg.b(edx_46.b) - 1
    int32_t edx_49 = eax_57 - ebx_2
    
    if (edx_49 s> 0xff)
        edx_49 = 0xff
    else if (edx_49 s< 0)
        edx_49 = 0
    
    esi[0x1d] = neg.b(edx_49.b) - 1
    int32_t eax_58 = eax_57 + eax_34
    
    if (eax_58 s> 0xff)
        eax_58 = 0xff
    else if (eax_58 s< 0)
        eax_58 = 0
    
    esi[0x1e] = neg.b(eax_58.b) - 1
    esi[0x1f] = edi[0xe]
    int32_t eax_60 = sx.d(*(var_14 + 0x10))
    int32_t edx_51 = eax_4 + eax_60
    void* esi_1 = &esi[arg6]
    
    if (edx_51 s> 0xff)
        edx_51 = 0xff
    else if (edx_51 s< 0)
        edx_51 = 0
    
    *esi_1 = neg.b(edx_51.b) - 1
    int32_t edx_54 = eax_60 - eax_7
    
    if (edx_54 s> 0xff)
        edx_54 = 0xff
    else if (edx_54 s< 0)
        edx_54 = 0
    
    *(esi_1 + 1) = neg.b(edx_54.b) - 1
    int32_t eax_61 = eax_60 + eax_10
    
    if (eax_61 s> 0xff)
        eax_61 = 0xff
    else if (eax_61 s< 0)
        eax_61 = 0
    
    *(esi_1 + 2) = neg.b(eax_61.b) - 1
    *(esi_1 + 3) = edi[0x10]
    int32_t eax_63 = sx.d(*(var_14 + 0x12))
    int32_t ecx_13 = eax_4 + eax_63
    int32_t var_18_2 = ecx_13
    int32_t edx_56
    
    if (ecx_13 s<= 0xff)
        edx_56 = ecx_13
        
        if (edx_56 s< 0)
            edx_56 = 0
            int32_t var_18_4 = 0
    else
        edx_56 = 0xff
        int32_t var_18_3 = 0xff
    
    *(esi_1 + 4) = neg.b(edx_56.b) - 1
    int32_t ebx_5 = neg.d(eax_7) + eax_63
    int32_t var_20_2 = ebx_5
    int32_t edx_57
    
    if (ebx_5 s<= 0xff)
        edx_57 = ebx_5
        
        if (edx_57 s< 0)
            edx_57 = 0
            int32_t var_20_4 = 0
    else
        edx_57 = 0xff
        int32_t var_20_3 = 0xff
    
    *(esi_1 + 5) = neg.b(edx_57.b) - 1
    int32_t eax_64 = eax_63 + eax_10
    
    if (eax_64 s> 0xff)
        eax_64 = 0xff
    else if (eax_64 s< 0)
        eax_64 = 0
    
    *(esi_1 + 6) = neg.b(eax_64.b) - 1
    edx_57.b = edi[0x12]
    *(esi_1 + 7) = edx_57.b
    int32_t eax_66 = sx.d(*(var_14 + 0x14))
    int32_t edx_58 = eax_66 + eax_14
    
    if (edx_58 s> 0xff)
        edx_58 = 0xff
    else if (edx_58 s< 0)
        edx_58 = 0
    
    *(esi_1 + 8) = neg.b(edx_58.b) - 1
    int32_t edx_61 = eax_66 - edx_5
    
    if (edx_61 s> 0xff)
        edx_61 = 0xff
    else if (edx_61 s< 0)
        edx_61 = 0
    
    *(esi_1 + 9) = neg.b(edx_61.b) - 1
    int32_t eax_67 = eax_66 + eax_18
    
    if (eax_67 s> 0xff)
        eax_67 = 0xff
    else if (eax_67 s< 0)
        eax_67 = 0
    
    *(esi_1 + 0xa) = neg.b(eax_67.b) - 1
    *(esi_1 + 0xb) = edi[0x14]
    int32_t eax_69 = sx.d(*(var_14 + 0x16))
    int32_t ecx_17 = eax_14 + eax_69
    int32_t var_1c_2 = ecx_17
    int32_t edx_63
    
    if (ecx_17 s<= 0xff)
        edx_63 = ecx_17
        
        if (edx_63 s< 0)
            edx_63 = 0
            int32_t var_1c_4 = 0
    else
        edx_63 = 0xff
        int32_t var_1c_3 = 0xff
    
    *(esi_1 + 0xc) = neg.b(edx_63.b) - 1
    int32_t ebx_8 = neg.d(edx_5) + eax_69
    int32_t var_28_2 = ebx_8
    int32_t edx_64
    
    if (ebx_8 s<= 0xff)
        edx_64 = ebx_8
        
        if (edx_64 s< 0)
            edx_64 = 0
            int32_t var_28_4 = 0
    else
        edx_64 = 0xff
        int32_t var_28_3 = 0xff
    
    *(esi_1 + 0xd) = neg.b(edx_64.b) - 1
    int32_t eax_70 = eax_69 + eax_18
    
    if (eax_70 s> 0xff)
        eax_70 = 0xff
    else if (eax_70 s< 0)
        eax_70 = 0
    
    *(esi_1 + 0xe) = neg.b(eax_70.b) - 1
    edx_64.b = edi[0x16]
    *(esi_1 + 0xf) = edx_64.b
    int32_t eax_72 = sx.d(*(var_14 + 0x18))
    int32_t edx_65 = eax_72 + eax_22
    
    if (edx_65 s> 0xff)
        edx_65 = 0xff
    else if (edx_65 s< 0)
        edx_65 = 0
    
    *(esi_1 + 0x10) = neg.b(edx_65.b) - 1
    int32_t edx_68 = eax_72 - ecx_6
    
    if (edx_68 s> 0xff)
        edx_68 = 0xff
    else if (edx_68 s< 0)
        edx_68 = 0
    
    *(esi_1 + 0x11) = neg.b(edx_68.b) - 1
    int32_t eax_73 = eax_72 + eax_26
    
    if (eax_73 s> 0xff)
        eax_73 = 0xff
    else if (eax_73 s< 0)
        eax_73 = 0
    
    *(esi_1 + 0x12) = neg.b(eax_73.b) - 1
    *(esi_1 + 0x13) = edi[0x18]
    int32_t eax_75 = sx.d(*(var_14 + 0x1a))
    int32_t ecx_21 = eax_22 + eax_75
    int32_t var_24_2 = ecx_21
    int32_t edx_70
    
    if (ecx_21 s<= 0xff)
        edx_70 = ecx_21
        
        if (edx_70 s< 0)
            edx_70 = 0
            int32_t var_24_4 = 0
    else
        edx_70 = 0xff
        int32_t var_24_3 = 0xff
    
    *(esi_1 + 0x14) = neg.b(edx_70.b) - 1
    int32_t ebx_11 = neg.d(ecx_6) + eax_75
    int32_t var_30_2 = ebx_11
    int32_t edx_71
    
    if (ebx_11 s<= 0xff)
        edx_71 = ebx_11
        
        if (edx_71 s< 0)
            edx_71 = 0
            int32_t var_30_4 = 0
    else
        edx_71 = 0xff
        int32_t var_30_3 = 0xff
    
    *(esi_1 + 0x15) = neg.b(edx_71.b) - 1
    int32_t eax_76 = eax_75 + eax_26
    
    if (eax_76 s> 0xff)
        eax_76 = 0xff
    else if (eax_76 s< 0)
        eax_76 = 0
    
    *(esi_1 + 0x16) = neg.b(eax_76.b) - 1
    edx_71.b = edi[0x1a]
    *(esi_1 + 0x17) = edx_71.b
    int32_t eax_78 = sx.d(*(var_14 + 0x1c))
    int32_t edx_72 = eax_78 + eax_30
    
    if (edx_72 s> 0xff)
        edx_72 = 0xff
    else if (edx_72 s< 0)
        edx_72 = 0
    
    *(esi_1 + 0x18) = neg.b(edx_72.b) - 1
    int32_t edx_75 = eax_78 - ebx_2
    
    if (edx_75 s> 0xff)
        edx_75 = 0xff
    else if (edx_75 s< 0)
        edx_75 = 0
    
    *(esi_1 + 0x19) = neg.b(edx_75.b) - 1
    int32_t eax_79 = eax_78 + eax_34
    
    if (eax_79 s> 0xff)
        eax_79 = 0xff
    else if (eax_79 s< 0)
        eax_79 = 0
    
    *(esi_1 + 0x1a) = neg.b(eax_79.b) - 1
    *(esi_1 + 0x1b) = edi[0x1c]
    int32_t eax_81 = sx.d(*(var_14 + 0x1e))
    int32_t ecx_25 = eax_30 + eax_81
    int32_t var_2c_2 = ecx_25
    int32_t edx_77
    
    if (ecx_25 s<= 0xff)
        edx_77 = ecx_25
        
        if (edx_77 s< 0)
            edx_77 = 0
            int32_t var_2c_4 = 0
    else
        edx_77 = 0xff
        int32_t var_2c_3 = 0xff
    
    *(esi_1 + 0x1c) = neg.b(edx_77.b) - 1
    int32_t ebx_14 = neg.d(ebx_2) + eax_81
    int32_t var_34_2 = ebx_14
    int32_t edx_78
    
    if (ebx_14 s<= 0xff)
        edx_78 = ebx_14
        
        if (edx_78 s< 0)
            edx_78 = 0
            int32_t var_34_4 = 0
    else
        edx_78 = 0xff
        int32_t var_34_3 = 0xff
    
    *(esi_1 + 0x1d) = neg.b(edx_78.b) - 1
    eax_82 = eax_81 + eax_34
    
    if (eax_82 s> 0xff)
        eax_82 = 0xff
    else if (eax_82 s< 0)
        eax_82 = 0
    
    *(esi_1 + 0x1e) = neg.b(eax_82.b) - 1
    edx_78.b = edi[0x1e]
    edi = &edi[0x20]
    *(esi_1 + 0x1f) = edx_78.b
    esi = esi_1 + arg6
    var_14 += 0x20
    cond:0_1 = var_50 + 2 s< 8
    var_50 += 2
while (cond:0_1)
return neg.b(eax_82.b) - 1
