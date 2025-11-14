// 函数: sub_6e6030
// 地址: 0x6e6030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg4
int32_t var_48 = 0
int16_t* var_34 = arg3
void* var_30 = arg2
bool cond:4_1

do
    int32_t ebx_1 = sx.d(*var_34)
    int32_t ecx_4 = (ebx_1 * 0x167 - 0xb2f5) s>> 8
    int16_t* esi_2 = var_30
    int32_t edi_1 = sx.d(*esi_2)
    int32_t ecx_7 = (edi_1 * 0x58 + ebx_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_10 = (edi_1 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_2 = sx.d(esi_2[1])
    int32_t ebx_3 = sx.d(var_34[1])
    int32_t ecx_14 = (ebx_3 * 0x167 - 0xb2f5) s>> 8
    int32_t ecx_17 = (edi_2 * 0x58 + ebx_3 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_20 = (edi_2 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_3 = sx.d(esi_2[2])
    int32_t ebx_5 = sx.d(var_34[2])
    int32_t ecx_24 = (ebx_5 * 0x167 - 0xb2f5) s>> 8
    int32_t ecx_27 = (edi_3 * 0x58 + ebx_5 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_30 = (edi_3 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_32 = sx.d(var_34[3])
    int32_t ebx_9 = (ecx_32 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_10 = sx.d(esi_2[3])
    int32_t ecx_35 = (ebx_10 * 0x58 + ecx_32 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_38 = (ebx_10 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_39 = sx.d(*edx)
    int32_t ebx_12 = ecx_4 + ecx_39
    var_30 = &esi_2[8]
    var_34 = &var_34[8]
    
    if (ebx_12 s> 0xff)
        ebx_12 = 0xff
    else if (ebx_12 s< 0)
        ebx_12 = 0
    
    *result = ebx_12.b
    int32_t ebx_14 = ecx_39 - ecx_7
    
    if (ebx_14 s> 0xff)
        ebx_14 = 0xff
    else if (ebx_14 s< 0)
        ebx_14 = 0
    
    result[1] = ebx_14.b
    int32_t ecx_40 = ecx_39 + ecx_10
    
    if (ecx_40 s> 0xff)
        ecx_40 = 0xff
    else if (ecx_40 s< 0)
        ecx_40 = 0
    
    result[2] = ecx_40.b
    int32_t ecx_41 = sx.d(edx[1])
    int32_t ebx_16 = ecx_4 + ecx_41
    
    if (ebx_16 s> 0xff)
        ebx_16 = 0xff
    else if (ebx_16 s< 0)
        ebx_16 = 0
    
    result[3] = ebx_16.b
    int32_t ebx_18 = ecx_41 - ecx_7
    
    if (ebx_18 s> 0xff)
        ebx_18 = 0xff
    else if (ebx_18 s< 0)
        ebx_18 = 0
    
    result[4] = ebx_18.b
    int32_t ecx_42 = ecx_41 + ecx_10
    
    if (ecx_42 s> 0xff)
        ecx_42 = 0xff
    else if (ecx_42 s< 0)
        ecx_42 = 0
    
    result[5] = ecx_42.b
    int32_t ecx_43 = sx.d(edx[2])
    int32_t ebx_20 = ecx_43 + ecx_14
    
    if (ebx_20 s> 0xff)
        ebx_20 = 0xff
    else if (ebx_20 s< 0)
        ebx_20 = 0
    
    result[6] = ebx_20.b
    int32_t ebx_22 = ecx_43 - ecx_17
    
    if (ebx_22 s> 0xff)
        ebx_22 = 0xff
    else if (ebx_22 s< 0)
        ebx_22 = 0
    
    result[7] = ebx_22.b
    int32_t ecx_44 = ecx_43 + ecx_20
    
    if (ecx_44 s> 0xff)
        ecx_44 = 0xff
    else if (ecx_44 s< 0)
        ecx_44 = 0
    
    result[8] = ecx_44.b
    int32_t ecx_45 = sx.d(edx[3])
    int32_t ebx_24 = ecx_45 + ecx_14
    
    if (ebx_24 s> 0xff)
        ebx_24 = 0xff
    else if (ebx_24 s< 0)
        ebx_24 = 0
    
    result[9] = ebx_24.b
    int32_t ebx_26 = ecx_45 - ecx_17
    
    if (ebx_26 s> 0xff)
        ebx_26 = 0xff
    else if (ebx_26 s< 0)
        ebx_26 = 0
    
    result[0xa] = ebx_26.b
    int32_t ecx_46 = ecx_45 + ecx_20
    
    if (ecx_46 s> 0xff)
        ecx_46 = 0xff
    else if (ecx_46 s< 0)
        ecx_46 = 0
    
    result[0xb] = ecx_46.b
    int32_t ecx_47 = sx.d(edx[4])
    int32_t ebx_28 = ecx_47 + ecx_24
    
    if (ebx_28 s> 0xff)
        ebx_28 = 0xff
    else if (ebx_28 s< 0)
        ebx_28 = 0
    
    result[0xc] = ebx_28.b
    int32_t ebx_30 = ecx_47 - ecx_27
    
    if (ebx_30 s> 0xff)
        ebx_30 = 0xff
    else if (ebx_30 s< 0)
        ebx_30 = 0
    
    result[0xd] = ebx_30.b
    int32_t ecx_48 = ecx_47 + ecx_30
    
    if (ecx_48 s> 0xff)
        ecx_48 = 0xff
    else if (ecx_48 s< 0)
        ecx_48 = 0
    
    result[0xe] = ecx_48.b
    int32_t ecx_49 = sx.d(edx[5])
    int32_t ebx_32 = ecx_49 + ecx_24
    
    if (ebx_32 s> 0xff)
        ebx_32 = 0xff
    else if (ebx_32 s< 0)
        ebx_32 = 0
    
    result[0xf] = ebx_32.b
    int32_t ebx_34 = ecx_49 - ecx_27
    
    if (ebx_34 s> 0xff)
        ebx_34 = 0xff
    else if (ebx_34 s< 0)
        ebx_34 = 0
    
    result[0x10] = ebx_34.b
    int32_t ecx_50 = ecx_49 + ecx_30
    
    if (ecx_50 s> 0xff)
        ecx_50 = 0xff
    else if (ecx_50 s< 0)
        ecx_50 = 0
    
    result[0x11] = ecx_50.b
    int32_t ecx_51 = sx.d(edx[6])
    int32_t ebx_36 = ecx_51 + ebx_9
    
    if (ebx_36 s> 0xff)
        ebx_36 = 0xff
    else if (ebx_36 s< 0)
        ebx_36 = 0
    
    result[0x12] = ebx_36.b
    int32_t ebx_38 = ecx_51 - ecx_35
    
    if (ebx_38 s> 0xff)
        ebx_38 = 0xff
    else if (ebx_38 s< 0)
        ebx_38 = 0
    
    result[0x13] = ebx_38.b
    int32_t ecx_52 = ecx_51 + ecx_38
    
    if (ecx_52 s> 0xff)
        ecx_52 = 0xff
    else if (ecx_52 s< 0)
        ecx_52 = 0
    
    result[0x14] = ecx_52.b
    int32_t ecx_53 = sx.d(edx[7])
    int32_t ebx_40 = ecx_53 + ebx_9
    
    if (ebx_40 s> 0xff)
        ebx_40 = 0xff
    else if (ebx_40 s< 0)
        ebx_40 = 0
    
    result[0x15] = ebx_40.b
    int32_t ebx_42 = ecx_53 - ecx_35
    
    if (ebx_42 s> 0xff)
        ebx_42 = 0xff
    else if (ebx_42 s< 0)
        ebx_42 = 0
    
    result[0x16] = ebx_42.b
    int32_t ecx_54 = ecx_53 + ecx_38
    
    if (ecx_54 s> 0xff)
        ecx_54 = 0xff
    else if (ecx_54 s< 0)
        ecx_54 = 0
    
    result[0x17] = ecx_54.b
    int32_t ecx_55 = sx.d(edx[8])
    int32_t ebx_44 = ecx_4 + ecx_55
    void* eax = &result[arg5]
    
    if (ebx_44 s> 0xff)
        ebx_44 = 0xff
    else if (ebx_44 s< 0)
        ebx_44 = 0
    
    *eax = ebx_44.b
    int32_t ebx_46 = ecx_55 - ecx_7
    
    if (ebx_46 s> 0xff)
        ebx_46 = 0xff
    else if (ebx_46 s< 0)
        ebx_46 = 0
    
    *(eax + 1) = ebx_46.b
    int32_t ecx_56 = ecx_55 + ecx_10
    
    if (ecx_56 s> 0xff)
        ecx_56 = 0xff
    else if (ecx_56 s< 0)
        ecx_56 = 0
    
    *(eax + 2) = ecx_56.b
    int32_t ecx_57 = sx.d(edx[9])
    int32_t ebx_48 = ecx_4 + ecx_57
    int32_t var_10_2 = ebx_48
    
    if (ebx_48 s> 0xff)
        ebx_48 = 0xff
        int32_t var_10_3 = 0xff
    else if (ebx_48 s< 0)
        ebx_48 = 0
        int32_t var_10_4 = 0
    
    *(eax + 3) = ebx_48.b
    int32_t ebx_51 = neg.d(ecx_7) + ecx_57
    int32_t var_1c_2 = ebx_51
    
    if (ebx_51 s> 0xff)
        ebx_51 = 0xff
        int32_t var_1c_3 = 0xff
    else if (ebx_51 s< 0)
        ebx_51 = 0
        int32_t var_1c_4 = 0
    
    *(eax + 4) = ebx_51.b
    int32_t ecx_58 = ecx_57 + ecx_10
    
    if (ecx_58 s> 0xff)
        ecx_58 = 0xff
    else if (ecx_58 s< 0)
        ecx_58 = 0
    
    *(eax + 5) = ecx_58.b
    int32_t ecx_59 = sx.d(edx[0xa])
    int32_t ebx_53 = ecx_59 + ecx_14
    
    if (ebx_53 s> 0xff)
        ebx_53 = 0xff
    else if (ebx_53 s< 0)
        ebx_53 = 0
    
    *(eax + 6) = ebx_53.b
    int32_t ebx_55 = ecx_59 - ecx_17
    
    if (ebx_55 s> 0xff)
        ebx_55 = 0xff
    else if (ebx_55 s< 0)
        ebx_55 = 0
    
    *(eax + 7) = ebx_55.b
    int32_t ecx_60 = ecx_59 + ecx_20
    
    if (ecx_60 s> 0xff)
        ecx_60 = 0xff
    else if (ecx_60 s< 0)
        ecx_60 = 0
    
    *(eax + 8) = ecx_60.b
    int32_t ecx_61 = sx.d(edx[0xb])
    int32_t ebx_57 = ecx_14 + ecx_61
    int32_t var_14_2 = ebx_57
    
    if (ebx_57 s> 0xff)
        ebx_57 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_57 s< 0)
        ebx_57 = 0
        int32_t var_14_4 = 0
    
    *(eax + 9) = ebx_57.b
    int32_t ebx_60 = neg.d(ecx_17) + ecx_61
    int32_t var_24_2 = ebx_60
    
    if (ebx_60 s> 0xff)
        ebx_60 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_60 s< 0)
        ebx_60 = 0
        int32_t var_24_4 = 0
    
    *(eax + 0xa) = ebx_60.b
    int32_t ecx_62 = ecx_61 + ecx_20
    
    if (ecx_62 s> 0xff)
        ecx_62 = 0xff
    else if (ecx_62 s< 0)
        ecx_62 = 0
    
    *(eax + 0xb) = ecx_62.b
    int32_t ecx_63 = sx.d(edx[0xc])
    int32_t ebx_62 = ecx_63 + ecx_24
    
    if (ebx_62 s> 0xff)
        ebx_62 = 0xff
    else if (ebx_62 s< 0)
        ebx_62 = 0
    
    *(eax + 0xc) = ebx_62.b
    int32_t ebx_64 = ecx_63 - ecx_27
    
    if (ebx_64 s> 0xff)
        ebx_64 = 0xff
    else if (ebx_64 s< 0)
        ebx_64 = 0
    
    *(eax + 0xd) = ebx_64.b
    int32_t ecx_64 = ecx_63 + ecx_30
    
    if (ecx_64 s> 0xff)
        ecx_64 = 0xff
    else if (ecx_64 s< 0)
        ecx_64 = 0
    
    *(eax + 0xe) = ecx_64.b
    int32_t ecx_65 = sx.d(edx[0xd])
    int32_t ebx_66 = ecx_24 + ecx_65
    int32_t var_18_2 = ebx_66
    
    if (ebx_66 s> 0xff)
        ebx_66 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_66 s< 0)
        ebx_66 = 0
        int32_t var_18_4 = 0
    
    *(eax + 0xf) = ebx_66.b
    int32_t ebx_69 = neg.d(ecx_27) + ecx_65
    int32_t var_28_2 = ebx_69
    
    if (ebx_69 s> 0xff)
        ebx_69 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_69 s< 0)
        ebx_69 = 0
        int32_t var_28_4 = 0
    
    *(eax + 0x10) = ebx_69.b
    int32_t ecx_66 = ecx_65 + ecx_30
    
    if (ecx_66 s> 0xff)
        ecx_66 = 0xff
    else if (ecx_66 s< 0)
        ecx_66 = 0
    
    *(eax + 0x11) = ecx_66.b
    int32_t ecx_67 = sx.d(edx[0xe])
    int32_t ebx_71 = ecx_67 + ebx_9
    
    if (ebx_71 s> 0xff)
        ebx_71 = 0xff
    else if (ebx_71 s< 0)
        ebx_71 = 0
    
    *(eax + 0x12) = ebx_71.b
    int32_t ebx_73 = ecx_67 - ecx_35
    
    if (ebx_73 s> 0xff)
        ebx_73 = 0xff
    else if (ebx_73 s< 0)
        ebx_73 = 0
    
    *(eax + 0x13) = ebx_73.b
    int32_t ecx_68 = ecx_67 + ecx_38
    
    if (ecx_68 s> 0xff)
        ecx_68 = 0xff
    else if (ecx_68 s< 0)
        ecx_68 = 0
    
    *(eax + 0x14) = ecx_68.b
    int32_t ecx_69 = sx.d(edx[0xf])
    int32_t ebx_75 = ebx_9 + ecx_69
    int32_t var_20_2 = ebx_75
    
    if (ebx_75 s> 0xff)
        ebx_75 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_75 s< 0)
        ebx_75 = 0
        int32_t var_20_4 = 0
    
    *(eax + 0x15) = ebx_75.b
    int32_t ebx_78 = neg.d(ecx_35) + ecx_69
    int32_t var_2c_2 = ebx_78
    
    if (ebx_78 s> 0xff)
        ebx_78 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_78 s< 0)
        ebx_78 = 0
        int32_t var_2c_4 = 0
    
    *(eax + 0x16) = ebx_78.b
    int32_t ecx_70 = ecx_69 + ecx_38
    
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
