// 函数: sub_6e9e90
// 地址: 0x6e9e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg3
char* result = arg4
int32_t i_1 = 0
int16_t* var_10 = arg2
int16_t* var_14 = arg1
int32_t i

do
    int32_t ebx_1 = sx.d(*edx)
    int32_t edi_2 = sx.d(*var_10)
    int32_t ebx_3 = sx.d(edx[1])
    int32_t edi_3 = sx.d(var_10[1])
    int32_t ebx_5 = sx.d(edx[2])
    int32_t edi_4 = sx.d(var_10[2])
    int32_t ebx_7 = sx.d(edx[3])
    int32_t edi_5 = sx.d(var_10[3])
    int32_t ebx_9 = sx.d(edx[4])
    int32_t edi_6 = sx.d(var_10[4])
    int32_t ebx_11 = sx.d(edx[5])
    int32_t edi_7 = sx.d(var_10[5])
    int32_t ecx_55 = sx.d(edx[6])
    int32_t ebx_16 = sx.d(var_10[6])
    int32_t ebx_17 = sx.d(edx[7])
    int32_t ecx_65 = sx.d(var_10[7])
    int32_t ecx_70 = sx.d(*var_14)
    int32_t ebx_22 = ((ebx_1 * 0x167 - 0xb2f5) s>> 8) + ecx_70
    int32_t var_54_2 = ebx_22
    
    if (ebx_22 s> 0xff)
        ebx_22 = 0xff
        int32_t var_54_3 = 0xff
    else if (ebx_22 s< 0)
        ebx_22 = 0
        int32_t var_54_4 = 0
    
    *result = ebx_22.b
    int32_t ebx_25 = neg.d((edi_2 * 0x58 + ebx_1 * 0xb7 - 0x87f6) s>> 8) + ecx_70
    int32_t var_18_2 = ebx_25
    
    if (ebx_25 s> 0xff)
        ebx_25 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_25 s< 0)
        ebx_25 = 0
        int32_t var_18_4 = 0
    
    result[1] = ebx_25.b
    int32_t ecx_71 = ecx_70 + ((edi_2 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_71 s> 0xff)
        ecx_71 = 0xff
    else if (ecx_71 s< 0)
        ecx_71 = 0
    
    result[2] = ecx_71.b
    result[3] = 0xff
    int32_t ecx_72 = sx.d(var_14[1])
    int32_t ebx_27 = ((ebx_3 * 0x167 - 0xb2f5) s>> 8) + ecx_72
    int32_t var_4c_2 = ebx_27
    
    if (ebx_27 s> 0xff)
        ebx_27 = 0xff
        int32_t var_4c_3 = 0xff
    else if (ebx_27 s< 0)
        ebx_27 = 0
        int32_t var_4c_4 = 0
    
    result[4] = ebx_27.b
    int32_t ebx_30 = neg.d((edi_3 * 0x58 + ebx_3 * 0xb7 - 0x87f6) s>> 8) + ecx_72
    int32_t var_30_2 = ebx_30
    
    if (ebx_30 s> 0xff)
        ebx_30 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_30 s< 0)
        ebx_30 = 0
        int32_t var_30_4 = 0
    
    result[5] = ebx_30.b
    int32_t ecx_73 = ecx_72 + ((edi_3 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_73 s> 0xff)
        ecx_73 = 0xff
    else if (ecx_73 s< 0)
        ecx_73 = 0
    
    result[6] = ecx_73.b
    result[7] = 0xff
    int32_t ecx_74 = sx.d(var_14[2])
    int32_t ebx_32 = ((ebx_5 * 0x167 - 0xb2f5) s>> 8) + ecx_74
    int32_t var_48_2 = ebx_32
    
    if (ebx_32 s> 0xff)
        ebx_32 = 0xff
        int32_t var_48_3 = 0xff
    else if (ebx_32 s< 0)
        ebx_32 = 0
        int32_t var_48_4 = 0
    
    result[8] = ebx_32.b
    int32_t ebx_35 = neg.d((edi_4 * 0x58 + ebx_5 * 0xb7 - 0x87f6) s>> 8) + ecx_74
    int32_t var_24_2 = ebx_35
    
    if (ebx_35 s> 0xff)
        ebx_35 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_35 s< 0)
        ebx_35 = 0
        int32_t var_24_4 = 0
    
    result[9] = ebx_35.b
    int32_t ecx_75 = ecx_74 + ((edi_4 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_75 s> 0xff)
        ecx_75 = 0xff
    else if (ecx_75 s< 0)
        ecx_75 = 0
    
    result[0xa] = ecx_75.b
    result[0xb] = 0xff
    int32_t ecx_76 = sx.d(var_14[3])
    int32_t ebx_37 = ((ebx_7 * 0x167 - 0xb2f5) s>> 8) + ecx_76
    int32_t var_44_2 = ebx_37
    
    if (ebx_37 s> 0xff)
        ebx_37 = 0xff
        int32_t var_44_3 = 0xff
    else if (ebx_37 s< 0)
        ebx_37 = 0
        int32_t var_44_4 = 0
    
    result[0xc] = ebx_37.b
    int32_t ebx_40 = neg.d((edi_5 * 0x58 + ebx_7 * 0xb7 - 0x87f6) s>> 8) + ecx_76
    int32_t var_20_2 = ebx_40
    
    if (ebx_40 s> 0xff)
        ebx_40 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_40 s< 0)
        ebx_40 = 0
        int32_t var_20_4 = 0
    
    result[0xd] = ebx_40.b
    int32_t ecx_77 = ecx_76 + ((edi_5 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_77 s> 0xff)
        ecx_77 = 0xff
    else if (ecx_77 s< 0)
        ecx_77 = 0
    
    result[0xe] = ecx_77.b
    result[0xf] = 0xff
    int32_t ecx_78 = sx.d(var_14[4])
    int32_t ebx_42 = ((ebx_9 * 0x167 - 0xb2f5) s>> 8) + ecx_78
    int32_t var_40_2 = ebx_42
    
    if (ebx_42 s> 0xff)
        ebx_42 = 0xff
        int32_t var_40_3 = 0xff
    else if (ebx_42 s< 0)
        ebx_42 = 0
        int32_t var_40_4 = 0
    
    result[0x10] = ebx_42.b
    int32_t ebx_45 = neg.d((edi_6 * 0x58 + ebx_9 * 0xb7 - 0x87f6) s>> 8) + ecx_78
    int32_t var_1c_2 = ebx_45
    
    if (ebx_45 s> 0xff)
        ebx_45 = 0xff
        int32_t var_1c_3 = 0xff
    else if (ebx_45 s< 0)
        ebx_45 = 0
        int32_t var_1c_4 = 0
    
    result[0x11] = ebx_45.b
    int32_t ecx_79 = ecx_78 + ((edi_6 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_79 s> 0xff)
        ecx_79 = 0xff
    else if (ecx_79 s< 0)
        ecx_79 = 0
    
    result[0x12] = ecx_79.b
    result[0x13] = 0xff
    int32_t ecx_80 = sx.d(var_14[5])
    int32_t ebx_47 = ((ebx_11 * 0x167 - 0xb2f5) s>> 8) + ecx_80
    int32_t var_38_2 = ebx_47
    
    if (ebx_47 s> 0xff)
        ebx_47 = 0xff
        int32_t var_38_3 = 0xff
    else if (ebx_47 s< 0)
        ebx_47 = 0
        int32_t var_38_4 = 0
    
    result[0x14] = ebx_47.b
    int32_t ebx_50 = neg.d((edi_7 * 0x58 + ebx_11 * 0xb7 - 0x87f6) s>> 8) + ecx_80
    int32_t var_28_2 = ebx_50
    
    if (ebx_50 s> 0xff)
        ebx_50 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_50 s< 0)
        ebx_50 = 0
        int32_t var_28_4 = 0
    
    result[0x15] = ebx_50.b
    int32_t ecx_81 = ecx_80 + ((edi_7 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_81 s> 0xff)
        ecx_81 = 0xff
    else if (ecx_81 s< 0)
        ecx_81 = 0
    
    result[0x16] = ecx_81.b
    result[0x17] = 0xff
    int32_t ecx_82 = sx.d(var_14[6])
    int32_t ebx_52 = ((ecx_55 * 0x167 - 0xb2f5) s>> 8) + ecx_82
    int32_t var_3c_2 = ebx_52
    
    if (ebx_52 s> 0xff)
        ebx_52 = 0xff
        int32_t var_3c_3 = 0xff
    else if (ebx_52 s< 0)
        ebx_52 = 0
        int32_t var_3c_4 = 0
    
    result[0x18] = ebx_52.b
    int32_t ebx_55 = neg.d((ebx_16 * 0x58 + ecx_55 * 0xb7 - 0x87f6) s>> 8) + ecx_82
    int32_t var_2c_2 = ebx_55
    
    if (ebx_55 s> 0xff)
        ebx_55 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_55 s< 0)
        ebx_55 = 0
        int32_t var_2c_4 = 0
    
    result[0x19] = ebx_55.b
    int32_t ecx_83 = ecx_82 + ((ebx_16 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_83 s> 0xff)
        ecx_83 = 0xff
    else if (ecx_83 s< 0)
        ecx_83 = 0
    
    result[0x1a] = ecx_83.b
    result[0x1b] = 0xff
    int32_t ecx_84 = sx.d(var_14[7])
    int32_t ebx_57 = ((ebx_17 * 0x167 - 0xb2f5) s>> 8) + ecx_84
    int32_t var_50_2 = ebx_57
    
    if (ebx_57 s> 0xff)
        ebx_57 = 0xff
        int32_t var_50_3 = 0xff
    else if (ebx_57 s< 0)
        ebx_57 = 0
        int32_t var_50_4 = 0
    
    result[0x1c] = ebx_57.b
    int32_t ebx_60 = neg.d((ecx_65 * 0x58 + ebx_17 * 0xb7 - 0x87f6) s>> 8) + ecx_84
    int32_t var_34_2 = ebx_60
    
    if (ebx_60 s> 0xff)
        ebx_60 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_60 s< 0)
        ebx_60 = 0
        int32_t var_34_4 = 0
    
    result[0x1d] = ebx_60.b
    int32_t ecx_85 = ecx_84 + ((ecx_65 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_85 s> 0xff)
        ecx_85 = 0xff
    else if (ecx_85 s< 0)
        ecx_85 = 0
    
    edx = &edx[8]
    result[0x1e] = ecx_85.b
    i = i_1 + 1
    result[0x1f] = 0xff
    var_14 = &var_14[8]
    var_10 = &var_10[8]
    result = &result[arg5]
    i_1 = i
while (i s< 8)
return result
