// 函数: sub_6ec390
// 地址: 0x6ec390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg3
char* result = arg5
int32_t i_1 = 0
void* var_24 = arg4
int16_t* var_40 = arg2
void* var_44 = arg1
int32_t i

do
    int32_t esi_1 = sx.d(*edx)
    int32_t ebx_1 = sx.d(*var_40)
    int32_t edi_1 = sx.d(var_40[5])
    int32_t ebx_2 = sx.d(edx[1])
    int32_t ecx_13 = sx.d(var_40[1])
    int32_t esi_4 = sx.d(edx[2])
    int32_t ebx_6 = sx.d(var_40[2])
    int32_t esi_6 = sx.d(edx[3])
    int32_t ebx_7 = sx.d(var_40[3])
    int32_t esi_8 = sx.d(edx[4])
    int32_t ebx_8 = sx.d(var_40[4])
    int32_t esi_10 = sx.d(var_40[6])
    int32_t ebp_2 = sx.d(var_40[7])
    int32_t ebx_9 = sx.d(edx[5])
    int32_t ebx_11 = sx.d(edx[6])
    int32_t ebx_13 = sx.d(edx[7])
    int32_t ecx_72 = sx.d(*var_44)
    int32_t ebx_16 = ((esi_1 * 0x167 - 0xb2f5) s>> 8) + ecx_72
    int32_t var_14_2 = ebx_16
    
    if (ebx_16 s> 0xff)
        ebx_16 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_16 s< 0)
        ebx_16 = 0
        int32_t var_14_4 = 0
    
    *result = neg.b(ebx_16.b) - 1
    int32_t ebx_20 = neg.d((ebx_1 * 0x58 + esi_1 * 0xb7 - 0x87f6) s>> 8) + ecx_72
    int32_t var_18_2 = ebx_20
    
    if (ebx_20 s> 0xff)
        ebx_20 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_20 s< 0)
        ebx_20 = 0
        int32_t var_18_4 = 0
    
    result[1] = neg.b(ebx_20.b) - 1
    int32_t ecx_73 = ecx_72 + ((ebx_1 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_73 s> 0xff)
        ecx_73 = 0xff
    else if (ecx_73 s< 0)
        ecx_73 = 0
    
    char* ebp_3 = var_24
    result[2] = neg.b(ecx_73.b) - 1
    result[3] = *ebp_3
    int32_t ecx_75 = sx.d(*(var_44 + 2))
    int32_t ebx_23 = ((ebx_2 * 0x167 - 0xb2f5) s>> 8) + ecx_75
    int32_t var_20_2 = ebx_23
    
    if (ebx_23 s> 0xff)
        ebx_23 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_23 s< 0)
        ebx_23 = 0
        int32_t var_20_4 = 0
    
    result[4] = neg.b(ebx_23.b) - 1
    int32_t ebx_27 = neg.d((ecx_13 * 0x58 + ebx_2 * 0xb7 - 0x87f6) s>> 8) + ecx_75
    int32_t var_1c_2 = ebx_27
    
    if (ebx_27 s> 0xff)
        ebx_27 = 0xff
        int32_t var_1c_3 = 0xff
    else if (ebx_27 s< 0)
        ebx_27 = 0
        int32_t var_1c_4 = 0
    
    result[5] = neg.b(ebx_27.b) - 1
    int32_t ecx_76 = ecx_75 + ((ecx_13 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_76 s> 0xff)
        ecx_76 = 0xff
    else if (ecx_76 s< 0)
        ecx_76 = 0
    
    result[6] = neg.b(ecx_76.b) - 1
    result[7] = ebp_3[2]
    int32_t ecx_78 = sx.d(*(var_44 + 4))
    int32_t ebx_30 = ((esi_4 * 0x167 - 0xb2f5) s>> 8) + ecx_78
    int32_t var_2c_2 = ebx_30
    
    if (ebx_30 s> 0xff)
        ebx_30 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_30 s< 0)
        ebx_30 = 0
        int32_t var_2c_4 = 0
    
    result[8] = neg.b(ebx_30.b) - 1
    int32_t ebx_34 = neg.d((ebx_6 * 0x58 + esi_4 * 0xb7 - 0x87f6) s>> 8) + ecx_78
    int32_t var_28_2 = ebx_34
    
    if (ebx_34 s> 0xff)
        ebx_34 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_34 s< 0)
        ebx_34 = 0
        int32_t var_28_4 = 0
    
    result[9] = neg.b(ebx_34.b) - 1
    int32_t ecx_79 = ecx_78 + ((ebx_6 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_79 s> 0xff)
        ecx_79 = 0xff
    else if (ecx_79 s< 0)
        ecx_79 = 0
    
    result[0xa] = neg.b(ecx_79.b) - 1
    result[0xb] = ebp_3[4]
    int32_t ecx_81 = sx.d(*(var_44 + 6))
    int32_t ebx_37 = ((esi_6 * 0x167 - 0xb2f5) s>> 8) + ecx_81
    int32_t var_34_2 = ebx_37
    
    if (ebx_37 s> 0xff)
        ebx_37 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_37 s< 0)
        ebx_37 = 0
        int32_t var_34_4 = 0
    
    result[0xc] = neg.b(ebx_37.b) - 1
    int32_t ebx_41 = neg.d((ebx_7 * 0x58 + esi_6 * 0xb7 - 0x87f6) s>> 8) + ecx_81
    int32_t var_30_2 = ebx_41
    
    if (ebx_41 s> 0xff)
        ebx_41 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_41 s< 0)
        ebx_41 = 0
        int32_t var_30_4 = 0
    
    result[0xd] = neg.b(ebx_41.b) - 1
    int32_t ecx_82 = ecx_81 + ((ebx_7 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_82 s> 0xff)
        ecx_82 = 0xff
    else if (ecx_82 s< 0)
        ecx_82 = 0
    
    result[0xe] = neg.b(ecx_82.b) - 1
    result[0xf] = ebp_3[6]
    int32_t ecx_84 = sx.d(*(var_44 + 8))
    int32_t ebx_44 = ((esi_8 * 0x167 - 0xb2f5) s>> 8) + ecx_84
    int32_t var_3c_2 = ebx_44
    
    if (ebx_44 s> 0xff)
        ebx_44 = 0xff
        int32_t var_3c_3 = 0xff
    else if (ebx_44 s< 0)
        ebx_44 = 0
        int32_t var_3c_4 = 0
    
    result[0x10] = neg.b(ebx_44.b) - 1
    int32_t ebx_48 = neg.d((ebx_8 * 0x58 + esi_8 * 0xb7 - 0x87f6) s>> 8) + ecx_84
    int32_t var_38_2 = ebx_48
    
    if (ebx_48 s> 0xff)
        ebx_48 = 0xff
        int32_t var_38_3 = 0xff
    else if (ebx_48 s< 0)
        ebx_48 = 0
        int32_t var_38_4 = 0
    
    result[0x11] = neg.b(ebx_48.b) - 1
    int32_t ecx_85 = ecx_84 + ((ebx_8 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_85 s> 0xff)
        ecx_85 = 0xff
    else if (ecx_85 s< 0)
        ecx_85 = 0
    
    result[0x12] = neg.b(ecx_85.b) - 1
    result[0x13] = ebp_3[8]
    int32_t ecx_87 = sx.d(*(var_44 + 0xa))
    int32_t ebx_51 = ((ebx_9 * 0x167 - 0xb2f5) s>> 8) + ecx_87
    int32_t var_4c_2 = ebx_51
    
    if (ebx_51 s> 0xff)
        ebx_51 = 0xff
        int32_t var_4c_3 = 0xff
    else if (ebx_51 s< 0)
        ebx_51 = 0
        int32_t var_4c_4 = 0
    
    result[0x14] = neg.b(ebx_51.b) - 1
    int32_t ebx_55 = neg.d((edi_1 * 0x58 + ebx_9 * 0xb7 - 0x87f6) s>> 8) + ecx_87
    int32_t var_48_2 = ebx_55
    
    if (ebx_55 s> 0xff)
        ebx_55 = 0xff
        int32_t var_48_3 = 0xff
    else if (ebx_55 s< 0)
        ebx_55 = 0
        int32_t var_48_4 = 0
    
    result[0x15] = neg.b(ebx_55.b) - 1
    int32_t ecx_88 = ecx_87 + ((edi_1 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_88 s> 0xff)
        ecx_88 = 0xff
    else if (ecx_88 s< 0)
        ecx_88 = 0
    
    result[0x16] = neg.b(ecx_88.b) - 1
    result[0x17] = ebp_3[0xa]
    int32_t ecx_90 = sx.d(*(var_44 + 0xc))
    int32_t ebx_58 = ((ebx_11 * 0x167 - 0xb2f5) s>> 8) + ecx_90
    int32_t var_54_2 = ebx_58
    
    if (ebx_58 s> 0xff)
        ebx_58 = 0xff
        int32_t var_54_3 = 0xff
    else if (ebx_58 s< 0)
        ebx_58 = 0
        int32_t var_54_4 = 0
    
    result[0x18] = neg.b(ebx_58.b) - 1
    int32_t ebx_62 = neg.d((esi_10 * 0x58 + ebx_11 * 0xb7 - 0x87f6) s>> 8) + ecx_90
    int32_t var_50_2 = ebx_62
    
    if (ebx_62 s> 0xff)
        ebx_62 = 0xff
        int32_t var_50_3 = 0xff
    else if (ebx_62 s< 0)
        ebx_62 = 0
        int32_t var_50_4 = 0
    
    result[0x19] = neg.b(ebx_62.b) - 1
    int32_t ecx_91 = ecx_90 + ((esi_10 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_91 s> 0xff)
        ecx_91 = 0xff
    else if (ecx_91 s< 0)
        ecx_91 = 0
    
    result[0x1a] = neg.b(ecx_91.b) - 1
    result[0x1b] = ebp_3[0xc]
    int32_t ecx_93 = sx.d(*(var_44 + 0xe))
    int32_t ebx_65 = ((ebx_13 * 0x167 - 0xb2f5) s>> 8) + ecx_93
    int32_t var_5c_2 = ebx_65
    
    if (ebx_65 s> 0xff)
        ebx_65 = 0xff
        int32_t var_5c_3 = 0xff
    else if (ebx_65 s< 0)
        ebx_65 = 0
        int32_t var_5c_4 = 0
    
    result[0x1c] = neg.b(ebx_65.b) - 1
    int32_t ebx_69 = neg.d((ebp_2 * 0x58 + ebx_13 * 0xb7 - 0x87f6) s>> 8) + ecx_93
    int32_t var_58_2 = ebx_69
    
    if (ebx_69 s> 0xff)
        ebx_69 = 0xff
        int32_t var_58_3 = 0xff
    else if (ebx_69 s< 0)
        ebx_69 = 0
        int32_t var_58_4 = 0
    
    result[0x1d] = neg.b(ebx_69.b) - 1
    int32_t ecx_94 = ecx_93 + ((ebp_2 * 0x1c6 - 0xe251) s>> 8)
    
    if (ecx_94 s> 0xff)
        ecx_94 = 0xff
    else if (ecx_94 s< 0)
        ecx_94 = 0
    
    edx = &edx[8]
    result[0x1e] = neg.b(ecx_94.b) - 1
    result[0x1f] = ebp_3[0xe]
    i = i_1 + 1
    var_44 += 0x10
    var_40 = &var_40[8]
    var_24 = &ebp_3[0x10]
    result = &result[arg6]
    i_1 = i
while (i s< 8)
return result
