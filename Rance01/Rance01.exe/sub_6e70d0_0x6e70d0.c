// 函数: sub_6e70d0
// 地址: 0x6e70d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg4
int32_t var_48 = 0
void* var_30 = arg3
int16_t* var_34 = arg2
bool cond:4_1

do
    int16_t* esi_2 = var_30
    int32_t ebx_1 = sx.d(*esi_2)
    int32_t ecx_3 = (ebx_1 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_1 = sx.d(*var_34)
    int32_t ecx_7 = (edi_1 * 0x58 + ebx_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_10 = (edi_1 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_2 = sx.d(esi_2[1])
    int32_t ecx_13 = (edi_2 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_3 = sx.d(var_34[1])
    int32_t ecx_17 = (ebx_3 * 0x58 + edi_2 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_20 = (ebx_3 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_4 = sx.d(esi_2[2])
    int32_t ecx_23 = (edi_4 * 0x167 - 0xb2f5) s>> 8
    int32_t ecx_25 = sx.d(var_34[2])
    int32_t ebx_6 = (ecx_25 * 0x58 + edi_4 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_28 = (ecx_25 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_6 = sx.d(esi_2[3])
    int32_t ecx_31 = (edi_6 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_7 = sx.d(var_34[3])
    int32_t ecx_35 = (ebx_7 * 0x58 + edi_6 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_38 = (ebx_7 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_39 = sx.d(*edx)
    int32_t ebx_9 = ecx_10 + ecx_39
    var_34 = &var_34[8]
    var_30 = &esi_2[8]
    
    if (ebx_9 s> 0xff)
        ebx_9 = 0xff
    else if (ebx_9 s< 0)
        ebx_9 = 0
    
    *result = ebx_9.b
    int32_t ebx_11 = ecx_39 - ecx_7
    
    if (ebx_11 s> 0xff)
        ebx_11 = 0xff
    else if (ebx_11 s< 0)
        ebx_11 = 0
    
    result[1] = ebx_11.b
    int32_t ecx_40 = ecx_39 + ecx_3
    
    if (ecx_40 s> 0xff)
        ecx_40 = 0xff
    else if (ecx_40 s< 0)
        ecx_40 = 0
    
    result[2] = ecx_40.b
    int32_t ecx_41 = sx.d(edx[1])
    int32_t ebx_13 = ecx_10 + ecx_41
    
    if (ebx_13 s> 0xff)
        ebx_13 = 0xff
    else if (ebx_13 s< 0)
        ebx_13 = 0
    
    result[3] = ebx_13.b
    int32_t ebx_15 = ecx_41 - ecx_7
    
    if (ebx_15 s> 0xff)
        ebx_15 = 0xff
    else if (ebx_15 s< 0)
        ebx_15 = 0
    
    result[4] = ebx_15.b
    int32_t ecx_42 = ecx_41 + ecx_3
    
    if (ecx_42 s> 0xff)
        ecx_42 = 0xff
    else if (ecx_42 s< 0)
        ecx_42 = 0
    
    result[5] = ecx_42.b
    int32_t ecx_43 = sx.d(edx[2])
    int32_t ebx_17 = ecx_43 + ecx_20
    
    if (ebx_17 s> 0xff)
        ebx_17 = 0xff
    else if (ebx_17 s< 0)
        ebx_17 = 0
    
    result[6] = ebx_17.b
    int32_t ebx_19 = ecx_43 - ecx_17
    
    if (ebx_19 s> 0xff)
        ebx_19 = 0xff
    else if (ebx_19 s< 0)
        ebx_19 = 0
    
    result[7] = ebx_19.b
    int32_t ecx_44 = ecx_43 + ecx_13
    
    if (ecx_44 s> 0xff)
        ecx_44 = 0xff
    else if (ecx_44 s< 0)
        ecx_44 = 0
    
    result[8] = ecx_44.b
    int32_t ecx_45 = sx.d(edx[3])
    int32_t ebx_21 = ecx_45 + ecx_20
    
    if (ebx_21 s> 0xff)
        ebx_21 = 0xff
    else if (ebx_21 s< 0)
        ebx_21 = 0
    
    result[9] = ebx_21.b
    int32_t ebx_23 = ecx_45 - ecx_17
    
    if (ebx_23 s> 0xff)
        ebx_23 = 0xff
    else if (ebx_23 s< 0)
        ebx_23 = 0
    
    result[0xa] = ebx_23.b
    int32_t ecx_46 = ecx_45 + ecx_13
    
    if (ecx_46 s> 0xff)
        ecx_46 = 0xff
    else if (ecx_46 s< 0)
        ecx_46 = 0
    
    result[0xb] = ecx_46.b
    int32_t ecx_47 = sx.d(edx[4])
    int32_t ebx_25 = ecx_47 + ecx_28
    
    if (ebx_25 s> 0xff)
        ebx_25 = 0xff
    else if (ebx_25 s< 0)
        ebx_25 = 0
    
    result[0xc] = ebx_25.b
    int32_t ebx_27 = ecx_47 - ebx_6
    
    if (ebx_27 s> 0xff)
        ebx_27 = 0xff
    else if (ebx_27 s< 0)
        ebx_27 = 0
    
    result[0xd] = ebx_27.b
    int32_t ecx_48 = ecx_47 + ecx_23
    
    if (ecx_48 s> 0xff)
        ecx_48 = 0xff
    else if (ecx_48 s< 0)
        ecx_48 = 0
    
    result[0xe] = ecx_48.b
    int32_t ecx_49 = sx.d(edx[5])
    int32_t ebx_29 = ecx_49 + ecx_28
    
    if (ebx_29 s> 0xff)
        ebx_29 = 0xff
    else if (ebx_29 s< 0)
        ebx_29 = 0
    
    result[0xf] = ebx_29.b
    int32_t ebx_31 = ecx_49 - ebx_6
    
    if (ebx_31 s> 0xff)
        ebx_31 = 0xff
    else if (ebx_31 s< 0)
        ebx_31 = 0
    
    result[0x10] = ebx_31.b
    int32_t ecx_50 = ecx_49 + ecx_23
    
    if (ecx_50 s> 0xff)
        ecx_50 = 0xff
    else if (ecx_50 s< 0)
        ecx_50 = 0
    
    result[0x11] = ecx_50.b
    int32_t ecx_51 = sx.d(edx[6])
    int32_t ebx_33 = ecx_51 + ecx_38
    
    if (ebx_33 s> 0xff)
        ebx_33 = 0xff
    else if (ebx_33 s< 0)
        ebx_33 = 0
    
    result[0x12] = ebx_33.b
    int32_t ebx_35 = ecx_51 - ecx_35
    
    if (ebx_35 s> 0xff)
        ebx_35 = 0xff
    else if (ebx_35 s< 0)
        ebx_35 = 0
    
    result[0x13] = ebx_35.b
    int32_t ecx_52 = ecx_51 + ecx_31
    
    if (ecx_52 s> 0xff)
        ecx_52 = 0xff
    else if (ecx_52 s< 0)
        ecx_52 = 0
    
    result[0x14] = ecx_52.b
    int32_t ecx_53 = sx.d(edx[7])
    int32_t ebx_37 = ecx_53 + ecx_38
    
    if (ebx_37 s> 0xff)
        ebx_37 = 0xff
    else if (ebx_37 s< 0)
        ebx_37 = 0
    
    result[0x15] = ebx_37.b
    int32_t ebx_39 = ecx_53 - ecx_35
    
    if (ebx_39 s> 0xff)
        ebx_39 = 0xff
    else if (ebx_39 s< 0)
        ebx_39 = 0
    
    result[0x16] = ebx_39.b
    int32_t ecx_54 = ecx_53 + ecx_31
    
    if (ecx_54 s> 0xff)
        ecx_54 = 0xff
    else if (ecx_54 s< 0)
        ecx_54 = 0
    
    result[0x17] = ecx_54.b
    int32_t ecx_55 = sx.d(edx[8])
    int32_t ebx_41 = ecx_10 + ecx_55
    void* eax = &result[arg5]
    
    if (ebx_41 s> 0xff)
        ebx_41 = 0xff
    else if (ebx_41 s< 0)
        ebx_41 = 0
    
    *eax = ebx_41.b
    int32_t ebx_43 = ecx_55 - ecx_7
    
    if (ebx_43 s> 0xff)
        ebx_43 = 0xff
    else if (ebx_43 s< 0)
        ebx_43 = 0
    
    *(eax + 1) = ebx_43.b
    int32_t ecx_56 = ecx_55 + ecx_3
    
    if (ecx_56 s> 0xff)
        ecx_56 = 0xff
    else if (ecx_56 s< 0)
        ecx_56 = 0
    
    *(eax + 2) = ecx_56.b
    int32_t ecx_57 = sx.d(edx[9])
    int32_t ebx_45 = ecx_10 + ecx_57
    int32_t var_10_2 = ebx_45
    
    if (ebx_45 s> 0xff)
        ebx_45 = 0xff
        int32_t var_10_3 = 0xff
    else if (ebx_45 s< 0)
        ebx_45 = 0
        int32_t var_10_4 = 0
    
    *(eax + 3) = ebx_45.b
    int32_t ebx_48 = neg.d(ecx_7) + ecx_57
    int32_t var_1c_2 = ebx_48
    
    if (ebx_48 s> 0xff)
        ebx_48 = 0xff
        int32_t var_1c_3 = 0xff
    else if (ebx_48 s< 0)
        ebx_48 = 0
        int32_t var_1c_4 = 0
    
    *(eax + 4) = ebx_48.b
    int32_t ecx_58 = ecx_57 + ecx_3
    
    if (ecx_58 s> 0xff)
        ecx_58 = 0xff
    else if (ecx_58 s< 0)
        ecx_58 = 0
    
    *(eax + 5) = ecx_58.b
    int32_t ecx_59 = sx.d(edx[0xa])
    int32_t ebx_50 = ecx_59 + ecx_20
    
    if (ebx_50 s> 0xff)
        ebx_50 = 0xff
    else if (ebx_50 s< 0)
        ebx_50 = 0
    
    *(eax + 6) = ebx_50.b
    int32_t ebx_52 = ecx_59 - ecx_17
    
    if (ebx_52 s> 0xff)
        ebx_52 = 0xff
    else if (ebx_52 s< 0)
        ebx_52 = 0
    
    *(eax + 7) = ebx_52.b
    int32_t ecx_60 = ecx_59 + ecx_13
    
    if (ecx_60 s> 0xff)
        ecx_60 = 0xff
    else if (ecx_60 s< 0)
        ecx_60 = 0
    
    *(eax + 8) = ecx_60.b
    int32_t ecx_61 = sx.d(edx[0xb])
    int32_t ebx_54 = ecx_20 + ecx_61
    int32_t var_14_2 = ebx_54
    
    if (ebx_54 s> 0xff)
        ebx_54 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_54 s< 0)
        ebx_54 = 0
        int32_t var_14_4 = 0
    
    *(eax + 9) = ebx_54.b
    int32_t ebx_57 = neg.d(ecx_17) + ecx_61
    int32_t var_24_2 = ebx_57
    
    if (ebx_57 s> 0xff)
        ebx_57 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_57 s< 0)
        ebx_57 = 0
        int32_t var_24_4 = 0
    
    *(eax + 0xa) = ebx_57.b
    int32_t ecx_62 = ecx_61 + ecx_13
    
    if (ecx_62 s> 0xff)
        ecx_62 = 0xff
    else if (ecx_62 s< 0)
        ecx_62 = 0
    
    *(eax + 0xb) = ecx_62.b
    int32_t ecx_63 = sx.d(edx[0xc])
    int32_t ebx_59 = ecx_63 + ecx_28
    
    if (ebx_59 s> 0xff)
        ebx_59 = 0xff
    else if (ebx_59 s< 0)
        ebx_59 = 0
    
    *(eax + 0xc) = ebx_59.b
    int32_t ebx_61 = ecx_63 - ebx_6
    
    if (ebx_61 s> 0xff)
        ebx_61 = 0xff
    else if (ebx_61 s< 0)
        ebx_61 = 0
    
    *(eax + 0xd) = ebx_61.b
    int32_t ecx_64 = ecx_63 + ecx_23
    
    if (ecx_64 s> 0xff)
        ecx_64 = 0xff
    else if (ecx_64 s< 0)
        ecx_64 = 0
    
    *(eax + 0xe) = ecx_64.b
    int32_t ecx_65 = sx.d(edx[0xd])
    int32_t ebx_63 = ecx_28 + ecx_65
    int32_t var_18_2 = ebx_63
    
    if (ebx_63 s> 0xff)
        ebx_63 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_63 s< 0)
        ebx_63 = 0
        int32_t var_18_4 = 0
    
    *(eax + 0xf) = ebx_63.b
    int32_t ebx_66 = neg.d(ebx_6) + ecx_65
    int32_t var_28_2 = ebx_66
    
    if (ebx_66 s> 0xff)
        ebx_66 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_66 s< 0)
        ebx_66 = 0
        int32_t var_28_4 = 0
    
    *(eax + 0x10) = ebx_66.b
    int32_t ecx_66 = ecx_65 + ecx_23
    
    if (ecx_66 s> 0xff)
        ecx_66 = 0xff
    else if (ecx_66 s< 0)
        ecx_66 = 0
    
    *(eax + 0x11) = ecx_66.b
    int32_t ecx_67 = sx.d(edx[0xe])
    int32_t ebx_68 = ecx_67 + ecx_38
    
    if (ebx_68 s> 0xff)
        ebx_68 = 0xff
    else if (ebx_68 s< 0)
        ebx_68 = 0
    
    *(eax + 0x12) = ebx_68.b
    int32_t ebx_70 = ecx_67 - ecx_35
    
    if (ebx_70 s> 0xff)
        ebx_70 = 0xff
    else if (ebx_70 s< 0)
        ebx_70 = 0
    
    *(eax + 0x13) = ebx_70.b
    int32_t ecx_68 = ecx_67 + ecx_31
    
    if (ecx_68 s> 0xff)
        ecx_68 = 0xff
    else if (ecx_68 s< 0)
        ecx_68 = 0
    
    *(eax + 0x14) = ecx_68.b
    int32_t ecx_69 = sx.d(edx[0xf])
    int32_t ebx_72 = ecx_38 + ecx_69
    int32_t var_20_2 = ebx_72
    
    if (ebx_72 s> 0xff)
        ebx_72 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_72 s< 0)
        ebx_72 = 0
        int32_t var_20_4 = 0
    
    *(eax + 0x15) = ebx_72.b
    int32_t ebx_75 = neg.d(ecx_35) + ecx_69
    int32_t var_2c_2 = ebx_75
    
    if (ebx_75 s> 0xff)
        ebx_75 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_75 s< 0)
        ebx_75 = 0
        int32_t var_2c_4 = 0
    
    *(eax + 0x16) = ebx_75.b
    int32_t ecx_70 = ecx_69 + ecx_31
    
    if (ecx_70 s> 0xff)
        ecx_70 = 0xff
    else if (ecx_70 s< 0)
        ecx_70 = 0
    
    edx = &edx[0x10]
    *(eax + 0x17) = ecx_70.b
    result = eax + arg5
    cond:4_1 = var_48 + 2 s< 8
    var_48 += 2
while (cond:4_1)
return result
